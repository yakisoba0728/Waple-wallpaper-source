# Entry-Point Vicinity Report — `wallpaper64.exe`

**Entry point**: AddressOfEntryPoint (RVA) = **0x28B710** → VA **0x14028B710** → file offset **0x28AB10** (in `.text` section).
**Tooling**: `xxd` for hex dump, `py`+`struct` for instruction decoding. No disassembler used; instruction mnemonics below were decoded by hand from the raw bytes against the Intel SDM (x86-64).

---

## 1. RVA → file-offset conversion

Section table (from `analysis/pe-structure.json` §sections):
- `.text`: VirtualAddr=0x1000, RawPtr=0x400, VirtualSize=0x42490C.

Entry RVA 0x28B710 falls in `.text` (0x1000 ≤ 0x28B710 < 0x42590C). File offset = RawPtr + (RVA − VirtualAddr) = **0x400 + (0x28B710 − 0x1000) = 0x28AB10**.

Same calculation for the two TLS callbacks (callbacks list from `pe-structure.json` §tls):
- TLS callback #1: VA 0x14028AEB0 (RVA 0x28AEB0) → file **0x28A2B0**
- TLS callback #2: VA 0x14028AF90 (RVA 0x28AF90) → file **0x28A390**

---

## 2. Entry-point hex dump (256 bytes, file 0x28AB10)

```
0028ab10: 4883 ec28 e827 0600 0048 83c4 28e9 6efe  H..(.'...H..(.n.
0028ab20: ffff cccc cccc cccc cccc cccc cccc cccc  ................
0028ab30: 4053 4883 ec20 488b d948 8bc2 488d 0ded  @SH.. H..H..H...
0028ab40: b619 000f 57c0 488d 5308 4889 0b48 8d48  ....W.H.S.H..H.H
0028ab50: 080f 1102 e827 0203 0048 8d05 00b7 1900  .....'...H......
0028ab60: 4889 0348 8bc3 4883 c420 5bc3 cccc cccc  H..H..H.. [.....
... (subsequent functions, all 0xCC-padded between) ...
```

The actual `WinMainCRTStartup` thunk is **only the first 17 bytes** (until the `CC` padding at 0x28AB21):

```
48 83 EC 28           sub  rsp, 28h            ; allocate 40-byte shadow space
E8 27 06 00 00        call near ptr 0x14028BD40  ; call __security_init_cookie
48 83 C4 28           add  rsp, 28h            ; restore stack
E9 6E FE FF FF        jmp  near ptr 0x14028B590 ; tail-jump into __tmainCRTStartup
CC CC CC ...          int3 padding (function alignment to 16 bytes)
```

### Decoded call/jump targets
- **`call 0x14028BD40`** (rel32 = +0x627 from end of call instruction). First bytes at file 0x28B140:
  `40 53 48 83 EC 30 48 8B 05 F3 02 25 00 48 BB 32` → `push rbx; sub rsp, 30h; mov rax, [rip+0x2502F3]; mov rbx, 32...`
  This is the textbook MSVC **`__security_init_cookie`** prologue: it loads the global `__security_cookie` (referenced via `mov rax, [rip+...]`) and initializes it from RDTSC/PEB/stack-ptr entropy. Confirmed by the `40 53` (`push rbx`) entry and the RIP-relative cookie load.
- **`jmp 0x14028B590`** (rel32 = −0x192 from end of jmp instruction). First bytes at file 0x28A990:
  `48 89 5C 24 08 57 48 83 EC 30 B9 01 00 00 00 E8 8C FC FF FF 84 C0 0F 84 33 01 00 00 40 32 FF` → `mov [rsp+8], rbx; push rdi; sub rsp, 30h; mov ecx, 1; call rel32; test al, al; jz ...; xor dil, dil`
  This is **`__tmainCRTStartup`** (the SEH-protected CRT main). The `mov ecx, 1; call ...` is the call to `__scrt_common_main_seh` with the "is_thread_safe" flag = 1; the `test al, al; jz` is the `__scrt_initialize_onexit_tables` / return-code check. This is the **standard MSVC 2015–2022 CRT entry sequence** — no custom loader, no packer stub, no anti-debug.

---

## 3. Verdict: entry point is stock MSVC CRT init

The entry point is **`WinMainCRTStartup`** compiled by MSVC, doing exactly:
1. `__security_init_cookie()` — initialize the `/GS` stack-cookie global (referenced in LoadConfig.SecurityCookie at VA stored in `LOAD_CONFIG` directory, see `pe-structure.json` §load_config).
2. Tail-jump into `__tmainCRTStartup` → `__scrt_common_main_seh` → eventually `main()` / `wWinMain()`.

There is **no custom entry-point stub** (no packer, no VM, no decryptor loop). The first byte being `48 83 EC 28` (`sub rsp, 28h`) rather than a `push`/`mov ebp, esp` or an obfuscated stub is the canonical MSVC x64 signature. The trailing `CC CC CC...` int3 padding is MSVC `/Gy` function alignment.

**Implication for Ghidra**: Skip the entry thunk. The real work begins at `main()`/`wWinMain()`, which `__scrt_common_main_seh` calls after running the CRT initializers. To find `main()` in Ghidra: disassemble `__tmainCRTStartup` at VA 0x14028B590, follow the `__scrt_common_main_seh` call (target reachable via the rel32 inside that function), and locate the `call` to the user `main` — that is the highest-value first function to label.

---

## 4. TLS callbacks — benign CRT thread-local init (NOT anti-debug)

### TLS Callback #1 (file 0x28A2B0 / VA 0x14028AEB0), first 96 bytes
```
0028a2b0: 83fa 0275 6048 895c 2408 5748 83ec 208b  ...u`H.\$.WH.. .
0028a2c0: 0dc3 8b25 0065 488b 0425 5800 0000 ba10  ...%.eH..%X.....
0028a2d0: 0000 0048 8b04 c880 3c10 0174 2ec6 0410  ...H....<..t....
0028a2e0: 0148 8d1d 60be 1900 488d 3d59 be19 0048  .H..`...H.=Y...H
0028a2f0: 3bdf 7417 488b 0348 85c0 7406 ff15 e6bb  ;.t.H..H..t.....
0028a300: 1900 4883 c308 483b df75 e948 8b5c 2430  ..H...H;.u.H.\$0
```

Decoded:
```
83 FA 02              cmp   edx, 2                  ; Reason == DLL_THREAD_ATTACH ?
75 60                 jne   skip                     ; if not, skip body
48 89 5C 24 08        mov   [rsp+8], rbx
57                    push  rdi
48 83 EC 20           sub   rsp, 20h
8B 0D C3 8B 25 00     mov   ecx, [rip+0x258BC3]     ; load TLS slot index
65 48 8B 04 25 58 00 00 00  mov rax, gs:[58h]        ; TEB.TlsSlots (or TlsExpansionSlots)
BA 10 00 00 00        mov   edx, 10h
48 8B 04 C8           mov   rax, [rax + rcx*8]       ; rax = TLS pointer for this slot
80 3C 10 01           cmp   byte ptr [rax+rdx], 1    ; already initialized?
74 2E                 je    skip_init
C6 04 10 01           mov   byte ptr [rax+rdx], 1    ; mark initialized
... (rest runs the thread_local constructor chain via a vtable-style loop)
```

This is the **standard MSVC-generated TLS callback for a `thread_local` variable with a dynamic initializer**. It checks a per-thread "already-initialized" byte in the TLS slot, sets it, then walks a linked list of initializers (the `48 8D 1D ...; 48 8D 3D ...; 48 3B DF; 74 17; ...` loop is iterating a `~init_thread_header`/`~init_thread_footer` pair — MSVC's `<mutex>`-backed `once_init` for thread-safe static init). **This is NOT anti-debug, NOT license-checking, NOT packer logic.** The `gs:[0x58]` access is the canonical Windows x64 way to read `TEB.TlsSlots`.

### TLS Callback #2 (file 0x28A390 / VA 0x14028AF90), first 96 bytes
```
0028a390: 4883 ec28 83fa 0374 0885 d20f 857f 0000  H..(...t........
0028a3a0: 008b 0de1 8a25 0065 488b 0425 5800 0000  .....%.eH..%X...
0028a3b0: 4889 7424 38ba 2000 0000 4889 7c24 2048  H.t$8. ...H.|$ H
0028a3c0: 8b34 c848 03f2 488b 3e48 85ff 7448 4889  .4.H..H.>H..tHH.
0028a3d0: 5c24 308b 1f83 eb01 781b 660f 1f44 0000  \$0.....x.f..D..
0028a3e0: 488b 44df 1048 85c0 7406 ff15 f8ba 1900  H.D..H..t.......
```

Decoded:
```
48 83 EC 28           sub   rsp, 28h
83 FA 03              cmp   edx, 3                   ; Reason == DLL_THREAD_DETACH ?
74 08                 je    cleanup                    ; yes → run destructors
85 D2                 test  edx, edx                   ; Reason == DLL_PROCESS_DETACH (0) ?
0F 85 7F 00 00 00     jne   skip                       ; otherwise skip
... (rest is the symmetric destructor-chain walk: reads a count, decrements ebx, calls each finalizer via call [rax+10h])
```

This is the matching **TLS cleanup callback** for DLL_THREAD_DETACH / DLL_PROCESS_DETACH — it walks the same per-thread initializer chain in reverse and calls each `thread_local`'s destructor. Again, this is **stock MSVC `thread_local` machinery**, not adversarial code.

---

## 5. Summary

| Artifact | File offset | VA | Identity | Verdict |
|---|---|---|---|---|
| Entry point | 0x28AB10 | 0x14028B710 | `WinMainCRTStartup` (MSVC CRT thunk) | **Stock MSVC, no packer/anti-debug** |
| Called function | 0x28B140 | 0x14028BD40 | `__security_init_cookie` | Stock `/GS` cookie init |
| Tail-jump target | 0x28A990 | 0x14028B590 | `__tmainCRTStartup` → `__scrt_common_main_seh` | Stock CRT main SEH wrapper |
| TLS callback #1 | 0x28A2B0 | 0x14028AEB0 | `thread_local` init-flag + initializer walk | Stock MSVC TLS, **not anti-debug** |
| TLS callback #2 | 0x28A390 | 0x14028AF90 | `thread_local` destructor walk on detach | Stock MSVC TLS cleanup |

**Bottom line**: the earliest-execution code (entry + both TLS callbacks) is entirely stock MSVC CRT. There is no packer, no virtualization, no anti-debug stub at the binary's entry surface. The interesting renderer code lives deeper, reachable from `main()` after the CRT initializers run. Recommended first Ghidra targets after `main()`: the RTTI-recovered classes in `analysis/reports/subsystems-identified.md` ("Highest-value next-step targets").
