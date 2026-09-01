# PE Structure Report — `wallpaper64.exe`

**Binary path (Windows):** `Z:\SteamLibrary\steamapps\common\wallpaper_engine\wallpaper64.exe`
**File size:** 5,360,112 bytes (0x51C9F0)
**Format:** PE32+ (x86-64) GUI executable, 8 sections, 13 statically imported DLLs, 334 imported functions.
**Build timestamp:** TimeDateStamp = 1782743820 → **2026-06-29 14:37:00 UTC** (matches the task's stated build date).
**PDB (debug):** `wallpaper64.pdb` (CodeView record present, GUID `c27cc336-f6cf-f944-9c53-376b9c8d7736`, age 1).

All offsets below are **file offsets** unless suffixed `RVA` (relative virtual address) or `VA` (absolute virtual address = ImageBase + RVA). Raw machine output: `analysis/pe-structure.json`. Parser: `analysis/parse_pe.py` (built-in `struct` only, no third-party deps).

> Note: this report supersedes an earlier `pe-structure.md` from a prior session whose parser had two offset bugs (it reported `e_lfanew=0x100` instead of `0x40`, and `Characteristics=0x0000` instead of `0x0022`). The values below were re-derived from a fresh parser and cross-checked by hand against raw byte dumps.

> **[CORRECTED 2026-08-30] The Linker version cell in §4 read `14.0`. The bytes say `14.51`.**
> `MajorLinkerVersion`/`MinorLinkerVersion` sit at optional-header `+2`/`+3`; in all three
> copies of the binary present here (`wallpaper_engine/wallpaper64.exe`,
> `binaries/wallpaper64.exe`, `wallpaper_engine/distribution/wallpaper64.exe`, each
> 5,360,112 B, `e_lfanew` `0x40`, magic `0x20B`) those two bytes are `0e 33` = **14.51**.
> `analysis/pe-structure.json` also records `linker_version = 14.51`, so the `.md` was
> contradicting both the bytes and its own sibling JSON.
>
> **This was a hand-transcription slip, not a stale generator artifact — do not "fix" it by
> re-running the parser.** `analysis/parse_pe.py` writes only the JSON (`:353-354`); it
> contains no markdown writer, so re-running it will silently regenerate nothing. Nor is
> the value fallout from the option-header off-by-one that `0bb963ed` repaired: that diff
> changed `"<HBHIIIII"` → `"<HBBIIIII"`, `maj_link` was `B` in **both** versions, and both
> structs yield `(14, 51)` against this binary — `git show c72aa42e:analysis/pe-structure.json`
> already read `14.51` before the fix. Every optional-header field the bug *did* corrupt
> (`SizeOfCode`, `BaseOfCode`, `SizeOfUninitializedData`, `SubsystemVersion`, …) is exact in
> this file, consistent with the hand cross-check this note describes. Only the minor
> version was dropped.
>
> Reproduce:
> ```
> python3 -c "import struct; d=open('wallpaper_engine/wallpaper64.exe','rb').read(); \
>   lf=struct.unpack_from('<I',d,0x3c)[0]; o=lf+24; print('%d.%d'%(d[o+2],d[o+3]))"
> # -> 14.51
> ```

---

## 1. DOS Header
| Field | Value | File offset |
|---|---|---|
| e_magic | `MZ` (0x5A4D) | 0x00 |
| e_lfanew | **0x40** | 0x3C |

## 2. PE Signature
`PE\0\0` at file offset 0x40.

## 3. COFF Header (file offset 0x44)
| Field | Value |
|---|---|
| Machine | 0x8664 — AMD64 (x86-64) |
| NumberOfSections | 8 |
| TimeDateStamp | 1782743820 → 2026-06-29 14:37:00 UTC |
| PointerToSymbolTable | 0 (stripped) |
| NumberOfSymbols | 0 |
| SizeOfOptionalHeader | 240 (0xF0) |
| Characteristics | **0x0022** — `EXECUTABLE_IMAGE` (0x0002) + `LARGE_ADDRESS_AWARE` (0x0020) |

## 4. Optional Header — PE32+ (file offset 0x58)
| Field | Value |
|---|---|
| Magic | 0x20B (PE32+) |
| Linker version | ~~14.0~~ **14.51** (MSVC 2015+ toolchain — major 14 spans VS 2015-2022; minor 51 pins VS 2022 17.14+) — see the [CORRECTED 2026-08-30] note below |
| SizeOfCode | 0x00424A00 |
| SizeOfInitializedData | 0x000FB400 |
| SizeOfUninitializedData | 0 |
| **AddressOfEntryPoint (RVA)** | **0x0028B710** (VA 0x14028B710) |
| BaseOfCode | 0x1000 |
| ImageBase | 0x140000000 |
| SectionAlignment | 0x1000 |
| FileAlignment | 0x200 |
| OsVersion | 6.0 |
| ImageVersion | 0.0 |
| SubsystemVersion | 6.0 |
| SizeOfImage | 0x00525000 |
| SizeOfHeaders | 0x400 |
| CheckSum | 0x00529C11 |
| **Subsystem** | **2 = WINDOWS_GUI** |
| DllCharacteristics | **0x8160** |
| Stack reserve / commit | 0x100000 / 0x1000 |
| Heap reserve / commit | 0x100000 / 0x1000 |
| NumberOfRvaAndSizes | 16 |

### DllCharacteristics decoded (0x8160)
| Bit | Flag | Set? |
|---|---|---|
| 0x0020 | HIGH_ENTROPY_VA | **YES** |
| 0x0040 | DYNAMIC_BASE (ASLR) | **YES** |
| 0x0100 | NX_COMPAT (DEP) | **YES** |
| 0x0400 | NO_SEH | no |
| 0x4000 | GUARD_CF | **no** |
| 0x8000 | TERMINAL_SERVER_AWARE | **YES** |

### Security summary
- **ASLR**: ENABLED (DYNAMIC_BASE + HIGH_ENTROPY_VA → 64-bit ASLR with randomized high-entropy base)
- **DEP/NX**: ENABLED
- **CFG (Control Flow Guard)**: **DISABLED** — indirect calls are not validated by the kernel; useful property for instrumentation/hooking.
- **SEH**: x64 uses table-based unwind via `.pdata`/`EXCEPTION` directory, not x86 FS:0 handler chains.

## 5. Section Table
| Name | VirtualAddr | VirtualSize | RawPtr | RawSize | Characteristics | Meaning |
|---|---|---|---|---|---|---|
| `.text` | 0x00001000 | 0x0042490C | 0x00000400 | 0x00424A00 | 0x60000020 | CODE, EXEC, READ — main code (~4.2 MB) |
| `.rdata` | 0x00426000 | 0x000B51AC | 0x00424E00 | 0x000B5200 | 0x40000040 | READ-only data (string pool, import tables, RTTI/vtables) |
| `.data` | 0x004DC000 | 0x0000DDBC | 0x004DA000 | 0x00007C00 | 0xC0000040 | READ+WRITE data (globals) |
| `.pdata` | 0x004EA000 | 0x0002B560 | 0x004E1C00 | 0x0002B600 | 0x40000040 | Exception unwind tables (0x2B560 / 12 = ~~**~14,752 functions**~~ **exactly 14,792 `RUNTIME_FUNCTION` entries**, of which **6,824 are primary function starts**) |
| `.fptable` | 0x00516000 | 0x00000100 | 0x0050D200 | 0x00000200 | 0xC0000040 | READ+WRITE — function-pointer table (256 bytes); **non-standard MSVC section name** |
| `_RDATA` | 0x00517000 | 0x00000030 | 0x0050D400 | 0x00000200 | 0x40000040 | READ-only small data (LoadConfig extension) |
| `.rsrc` | 0x00518000 | 0x000099B8 | 0x0050D600 | 0x00009A00 | 0x40000040 | Resource directory (icon, manifest, version info) |
| `.reloc` | 0x00522000 | 0x00002E2C | 0x00517000 | 0x00003000 | 0x42000040 | Base relocations (required since ASLR on) |

Notes:
- `.text` virtual size (0x42490C) ≈ raw size (0x424A00): tight binary, minimal padding.
- The custom `.fptable` section is unusual — MSVC normally does not emit this. Worth targeted review in Ghidra: it is RW and small (256 bytes). A custom function-pointer table for a small dispatch layer is plausible (e.g. the per-wallpaper-type dispatch table, or a hook-detection trampoline).
- ~~`.pdata` size / 12 bytes per RUNTIME_FUNCTION → ~14,752 function entries. This is the authoritative count of *callable* functions identified by the unwind table (see Final Summary).~~
  **[CORRECTED 2026-08-30 — both halves of this sentence were wrong, and the master doc's §6
  records the exact failure it caused.]** `.pdata` size / 12 = **exactly 14,792** entries,
  and **6,824** of them are function starts.
  - *The arithmetic.* `0x2B560` = 177,504; `177504 / 12 = 14792` with remainder **0**.
    `14752 × 12` = `0x2B380`, not `0x2B560` — a digit transposition. The `~` hedge does not
    rescue it, because this line prints the division itself.
  - *The substance.* An entry count is **not** a function count regardless of the digits:
    **7,968** of the 14,792 entries carry `UNW_FLAG_CHAININFO` and are additional fragments
    of a function already listed. Only **6,824** are primary starts.
  - *Why "authoritative" is the dangerous word.* `WE-ENGINE-ANALYSIS-2026-07-27.md` §6
    records that measuring the corpus against the entry count "understates it by half" and
    that this mistake was made once during the 2026-08-27 regeneration. The regenerated
    corpus holds **7,748** functions (`analysis/decompiled/manifest.json` → `total`) and
    scores **6,824/6,824 = 100%** against the primary set; scored against 14,792 it looks
    like 52%. **The oracle for a regenerated corpus is the 6,824 primary starts.**

  Re-measured 2026-08-30 by walking each `RUNTIME_FUNCTION` in the pristine
  `wallpaper_engine/wallpaper64.exe` (5,360,112 B, MD5 `438cb215f20a8f6c38f57fbc3d9da588`)
  and resolving its `UNWIND_INFO` flags (`flags = info[0] >> 3`, test `& 0x4`):

  ```
  pdata VirtualSize 0x2b560  entries 14792  rem 0
  inside .text 14792
  primary 6824   chained 7968   sum 14792
  ```

  Three counts that are often conflated, and what each actually counts:

  | Number | Counts | Source |
  |---:|---|---|
  | **14,792** | `.pdata` `RUNTIME_FUNCTION` **entries** (unwind records) | `.pdata` VirtualSize / 12 |
  | **6,824** | **primary function starts** — the corpus oracle | entries without `UNW_FLAG_CHAININFO` |
  | **7,748** | **functions in the regenerated decompilation corpus** (`.c` files) | `analysis/decompiled/manifest.json` → `total`; = 6,824 primary + 924 leaf/thunk functions with no unwind data |

## 6. Data Directories
| Dir | RVA | Size | Notes |
|---|---|---|---|
| EXPORT | 0x4D8C20 | 0x50 | 1 named export (`NoHotPatch`) — see §7 |
| IMPORT | 0x4D8C70 | 0x118 | 13 DLL descriptors, see §8 |
| RESOURCE | 0x518000 | 0x99B8 | icon/manifest/version |
| EXCEPTION | 0x4EA000 | 0x2B560 | matches `.pdata` (table-based unwind) |
| SECURITY | 0x51A000 | 0x29F0 | **Authenticode signature present** (certificate blob) |
| BASERELOC | 0x522000 | 0x2E2C | matches `.reloc` |
| **DEBUG** | **0x497D68** | **0x54** | 3 entries, see §9 |
| TLS | 0x497F80 | 0x28 | thread-local storage directory, see §10 |
| LOAD_CONFIG | 0x4364B0 | 0x140 | MSVC load config |
| IAT | 0x426000 | 0xAD8 | import address table |
| DELAY_IMPORT | 0x4D87B0 | 0x80 | **delay-load imports present** — 0x80 / 0x20 = 4 slots, of which the last is the all-zero terminator → **3 DLLs**, see §11 |
| CLR | 0 | 0 | no .NET |

## 7. Export Table
- DLL name string: `wallpaper64.exe`
- 1 named export: **`NoHotPatch`** (ordinal base 1, single function).
- This is a defensive export: an exported symbol named `NoHotPatch` tells the Windows loader to disable hot-patching for this module. It is **not** a normal public API. The binary exports essentially nothing useful to a clean-room caller.

## 8. Import Table (full)
All 13 DLLs and their imported functions (334 total). Renderer-critical imports highlighted.

### KERNEL32.dll (180)
Notable: `CreateFileW/A`, `ReadFile`, `WriteFile`, `CreateFileMappingA`, `MapViewOfFile`, `UnmapViewOfFile`, `GetFileSize`, `GetFileSizeEx`, `SetFilePointerEx`, `FindFirstFileExW`, `FindNextFileW`, `CreateDirectoryW`, `CopyFile2`, `CreateHardLinkW`, `CreateSymbolicLinkW`, `GetFinalPathNameByHandleW`, `QueryPerformanceCounter`, `QueryPerformanceFrequency`, `CreateProcessW`, `CreateToolhelp32Snapshot`, `Process32FirstW/Next`, `OpenProcess`, `LoadLibraryW/ExW/A`, `GetProcAddress`, `GetModuleHandleW`, `VirtualProtect`, `VirtualQuery`, `HeapAlloc/Free/ReAlloc`, `FlsAlloc/Free/GetValue/SetValue` (fiber-local storage — used by C runtime and possibly plugin TLS), `RtlCaptureContext`, `RtlVirtualUnwind`, `RtlLookupFunctionEntry`, `RaiseException`, `UnhandledExceptionFilter`, `AddDllDirectory` (used for delay-load search paths), `CreateNamedPipeW`, `ConnectNamedPipe` (named-pipe IPC).

### USER32.dll (106)
Window/event pipeline: `CreateWindowExW`, `RegisterClassExW`, `GetMessageW`, `PeekMessageW`, `DispatchMessageW`, `TranslateMessage`, `DefWindowProcW`, `SetWindowLongPtrW`, `GetWindowLongPtrW`, `UpdateLayeredWindow`, `SetLayeredWindowAttributes` (transparent window support — typical for wallpaper renderer overlay), `MonitorFromWindow`, `EnumDisplayMonitors`, `EnumDisplayDevicesW`, **`QueryDisplayConfig`, `GetDisplayConfigBufferSizes`, `DisplayConfigGetDeviceInfo`** (display topology enumeration — multi-monitor wallpaper placement), `SystemParametersInfoW`, `RegisterPowerSettingNotification`, `UnregisterPowerSettingNotification`, `SetWinEventHook`, `UnhookWinEvent` (accessibility-style hooks), `RegisterHotKey`, `SetTimer`, `KillTimer`, `MessageBoxW`, `LoadImageW`, `CreateIconIndirect`, `GetIconInfo`.

### GDI32.dll (12)
`CreateCompatibleDC`, `CreateCompatibleBitmap`, `CreateDIBitmap`, `BitBlt`, `StretchDIBits`, `GetDIBits`, `SelectObject`, `DeleteObject`, `DeleteDC`, `CreateSolidBrush`, `GetStockObject`, `GetObjectW` — used for software fallback / icon / cursor generation (`CreateIconIndirect` pairs with these).

### SHELL32.dll (5)
`SHGetFolderPathW`, `ShellExecuteW`, `ShellExecuteExW`, `Shell_NotifyIconW` (tray icon), `SetCurrentProcessExplicitAppUserModelID` (Win7 taskbar grouping).

### ole32.dll (7)
`CoInitializeEx`, `CoUninitialize`, `CoCreateInstance`, `CoTaskMemFree`, `PropVariantClear`, `StringFromIID`, `IIDFromString` — COM required for `DWriteCreateFactory` (DWrite is a COM factory) and possibly shell/media components.

### ADVAPI32.dll (13)
Registry and process token: `RegOpenKeyExW`, `RegQueryValueExW`, `RegSetValueExW`, `RegDeleteValueW`, `RegEnumKeyExA`, `RegQueryInfoKeyW`, `RegCloseKey`, `RegGetValueW/A`, `GetUserNameW`, `InitializeSecurityDescriptor`, `SetSecurityDescriptorDacl` (creates a NULL-DACL security descriptor — note for security review).

### d3d11.dll (1)
**`D3D11CreateDevice`** — the only direct D3D11 import. All other D3D11 entry points are reached through the vtable returned by this function. This single import + the COM-style vtable layout is the **standard signature of a D3D11 renderer**. Confirms rendering is Direct3D 11, not D3D9/12 or OpenGL.

### dwmapi.dll (2)
`DwmIsCompositionEnabled`, `DwmGetWindowAttribute` — Desktop Window Manager queries for compositor state (used to decide how to attach wallpaper: DWM vs. child-of-`WorkerW` trick).

### WINMM.dll (2)
`timeBeginPeriod`, `timeEndPeriod` — high-resolution timer setup/teardown. Combined with `QueryPerformanceCounter` (KERNEL32), this drives the render loop.

### WTSAPI32.dll (2)
`WTSRegisterSessionNotification`, `WTSUnRegisterSessionNotification` — receives session change events (lock/unlock) to pause/resume wallpaper rendering.

### SHLWAPI.dll (1)
Ordinal #219 (path utility — exact function unresolvable without a version-specific ordinal map; treat as UNKNOWN).

### MFReadWrite.dll (2)
**`MFCreateSourceReaderFromURL`, `MFCreateSourceReaderFromByteStream`** — Media Foundation Source Reader. Used to decode video wallpapers (MP4/WebM) for the wallpaper engine's video background type. Confirms a **video wallpaper pipeline** independent of the static-image/shader pipeline.

### DWrite.dll (1)
**`DWriteCreateFactory`** — DirectWrite text rendering factory. Used for rendering text overlays/labels on wallpapers (e.g. clock, system info text-based wallpapers).

## 9. Debug Directory (3 entries)
| Type | Detail |
|---|---|
| **CODEVIEW (2)** | RSDS record at file offset 0x49C5CC. Signature `RSDS`. GUID `c27cc336-f6cf-f944-9c53-376b9c8d7736`. Age 1. **PDB path: `wallpaper64.pdb`** (no full directory path stored — symbol server lookup GUID:Age required). |
| VC_FEATURE (12) | MSVC feature flags (at 0x49C5F4). |
| POGO (13) | Profile-guided optimization layout data (at 0x49C608). Indicates the binary was built with PGO. |

## 10. TLS Directory (present)
> **[Corrected 2026-09-01] Every VA in this section was wrong, and so was one field.** The four
> addresses below came from the rich-header-injected build, whose section RVAs were displaced;
> the sibling generator output `analysis/pe-structure.json` (regenerated from
> `binaries/wallpaper64.exe`, the pristine binary) disagreed with all of them. The values now
> shown are the regenerated ones — cross-check with the reproduction command below rather than
> trusting either document. The old values are kept struck through so that citations made
> against the displaced coordinate space stay traceable.

- TLS directory RVA 0x497F80, size 0x28 — `IMAGE_TLS_DIRECTORY64` is **6 fields / 40 bytes**
  (`StartAddressOfRawData`, `EndAddressOfRawData`, `AddressOfIndex`, `AddressOfCallBacks`,
  `SizeOfZeroFill`, `Characteristics`), which is exactly that 0x28.
- Raw data start/end VA: `0x14049DD70`..`0x14049E0A8` (824 bytes of thread-local init data).
  ~~`0x14048A000`..`0x14048A030` (48 bytes)~~
- AddressOfIndex VA: **0x1404E3A88**. ~~0x140493848~~
- **AddressOfCallbacks VA: 0x140426DA0** — array of TLS callbacks invoked before main().
  ~~0x140492980~~
- SizeOfZeroFill: 0. **Characteristics: 0x500000** (the alignment field, `IMAGE_SCN_ALIGN_16BYTES`
  encoding). ~~1~~ — that `1` was a **parser bug**, not a displaced address: `analysis/parse_pe.py`
  unpacked `<III` at `tls_off+32` and took the *third* word as Characteristics, but only two
  4-byte fields live there, so it read past the end of the structure. Fixed 2026-09-01;
  `analysis/pe_parse.py` had it right (`<QQQQII`) all along.
- Callbacks (2): `0x14028AEB0`, `0x14028AF90`. These run before the CRT entry point and are a
  **high-priority Ghidra target** — they often contain anti-debug, license, or one-time global
  initialization logic. (These two were already correct — they are the only TLS values this
  section shared with the generator output.)

```bash
python3 analysis/parse_pe.py binaries/wallpaper64.exe analysis   # regenerates pe-structure.json
python3 -c "import json; print(json.load(open('analysis/pe-structure.json'))['tls'])"
```

## 11. Delay-Load Imports — **3 DLLs** (DELAY_IMPORT, 0x80 bytes = 4 slots incl. terminator)

> **[Corrected 2026-09-01] The count was 4 because the null terminator was counted, and the
> guessed DLL list was wrong.** They are enumerated now, so the guesses are gone. Note the
> inconsistency this closes: the IMPORT row of the §6 table already excluded its terminator
> (0x118 / 20 = 14 slots, reported as 13 DLLs) — only the DELAY_IMPORT row double-counted.

Each descriptor is 32 bytes, so 0x80 / 0x20 = **4 slots**; the last is all-zero, the standard
array terminator. The **3** real delay-load DLLs are:

| # | DLL |
|---|---|
| 0 | `MF.dll` (Media Foundation) |
| 1 | `MFPlat.DLL` (Media Foundation platform) |
| 2 | `pdh.dll` (Performance Data Helper) |

Two of the three are Media Foundation — consistent with video wallpaper playback being an
optional path that must not fail to load on an N/KN edition of Windows without the Media
Feature Pack. `pdh.dll` was one of the earlier guesses and is real; **`d3dcompiler_47.dll` and
`dxcompiler.dll` were not** — the `d3dcompiler_47.dll` string in `.rdata` is loaded by another
mechanism (runtime `LoadLibrary`), not by the delay-load table. That inference ("the string is
in `.rdata`, so it is one of the delay-loads") is exactly the kind of guess this correction
removes.

```bash
# DELAY_IMPORT [rva, size] → [5081008, 128] = [0x4D87B0, 0x80]
python3 -c "import json; print(json.load(open('analysis/pe-structure.json'))['data_directories']['DELAY_IMPORT'])"
# the 4 slots, last one all-zero:
python3 -c "d=open('binaries/wallpaper64.exe','rb').read(); off=0x4d75b0; \
  [print(i, d[off+i*0x20:off+i*0x20+0x20].hex()) for i in range(4)]"
```

## 12. Resource Directory (.rsrc, RVA 0x518000, size 0x99B8)
Contains the standard Win32 resources (RT_ICON, RT_GROUP_ICON, RT_MANIFEST, RT_VERSION). Not parsed field-by-field in v1; consult `analysis/strings/strings-*.txt` for embedded version strings.

---

## Phase-1 Conclusions
- **Binary is a standard MSVC-compiled, PGO-optimized, ASLR+DEP-enabled, x64 Windows GUI application.** Subsystem 2 (GUI), entry at RVA 0x28B710.
- **CFG is OFF**, simplifying analysis and runtime instrumentation.
- **Renderer is Direct3D 11** (`D3D11CreateDevice` is the sole d3d11 import; everything else is via vtable). **CONFIRMED.**
- **Video pipeline uses Media Foundation Source Reader** (`MFCreateSourceReaderFromURL`, `MFCreateSourceReaderFromByteStream`). **CONFIRMED.**
- **Text rendering uses DirectWrite** (`DWriteCreateFactory`). **CONFIRMED.**
- **DWM integration present** (wallpaper-attach mechanism). **CONFIRMED.**
- ~~**~14,752 functions** identifiable from `.pdata` (authoritative count).~~ **[CORRECTED
  2026-08-30]** `.pdata` holds **exactly 14,792** `RUNTIME_FUNCTION` entries, of which
  **6,824 are primary function starts** (7,968 carry `UNW_FLAG_CHAININFO` and are fragments
  of functions already counted). **6,824 is the oracle**, not 14,792 — see §5's note.
  TLS callbacks + entry point are the three earliest-execution targets.
- **Custom `.fptable` section** (256 bytes, RW) is non-standard and worth targeted review.
- The binary has an **Authenticode signature** (SECURITY directory populated).
