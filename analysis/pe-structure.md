# PE Structure Report — `wallpaper64.exe`

**Binary path (Windows):** `Z:\SteamLibrary\steamapps\common\wallpaper_engine\wallpaper64.exe`
**File size:** 5,360,112 bytes (0x51C9F0)
**Format:** PE32+ (x86-64) GUI executable, 8 sections, 13 statically imported DLLs, 334 imported functions.
**Build timestamp:** TimeDateStamp = 1782743820 → **2026-06-29 14:37:00 UTC** (matches the task's stated build date).
**PDB (debug):** `wallpaper64.pdb` (CodeView record present, GUID `c27cc336-f6cf-f944-9c53-376b9c8d7736`, age 1).

All offsets below are **file offsets** unless suffixed `RVA` (relative virtual address) or `VA` (absolute virtual address = ImageBase + RVA). Raw machine output: `analysis/pe-structure.json`. Parser: `analysis/parse_pe.py` (built-in `struct` only, no third-party deps).

> Note: this report supersedes an earlier `pe-structure.md` from a prior session whose parser had two offset bugs (it reported `e_lfanew=0x100` instead of `0x40`, and `Characteristics=0x0000` instead of `0x0022`). The values below were re-derived from a fresh parser and cross-checked by hand against raw byte dumps.

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
| Linker version | 14.0 (MSVC 2015+ toolchain; compatible with VS 2015/2017/2019/2022) |
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
| `.pdata` | 0x004EA000 | 0x0002B560 | 0x004E1C00 | 0x0002B600 | 0x40000040 | Exception unwind tables (0x2B560 / 12 = **~14,752 functions**) |
| `.fptable` | 0x00516000 | 0x00000100 | 0x0050D200 | 0x00000200 | 0xC0000040 | READ+WRITE — function-pointer table (256 bytes); **non-standard MSVC section name** |
| `_RDATA` | 0x00517000 | 0x00000030 | 0x0050D400 | 0x00000200 | 0x40000040 | READ-only small data (LoadConfig extension) |
| `.rsrc` | 0x00518000 | 0x000099B8 | 0x0050D600 | 0x00009A00 | 0x40000040 | Resource directory (icon, manifest, version info) |
| `.reloc` | 0x00522000 | 0x00002E2C | 0x00517000 | 0x00003000 | 0x42000040 | Base relocations (required since ASLR on) |

Notes:
- `.text` virtual size (0x42490C) ≈ raw size (0x424A00): tight binary, minimal padding.
- The custom `.fptable` section is unusual — MSVC normally does not emit this. Worth targeted review in Ghidra: it is RW and small (256 bytes). A custom function-pointer table for a small dispatch layer is plausible (e.g. the per-wallpaper-type dispatch table, or a hook-detection trampoline).
- `.pdata` size / 12 bytes per RUNTIME_FUNCTION → ~14,752 function entries. This is the authoritative count of *callable* functions identified by the unwind table (see Final Summary).

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
| DELAY_IMPORT | 0x4D87B0 | 0x80 | **delay-load imports present** — 0x80 / 0x20 = 4 descriptors |
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
- TLS directory RVA 0x497F80, size 0x28.
- Raw data start/end VA: `0x14048A000`..`0x14048A030` (48 bytes of thread-local init data).
- AddressOfIndex VA: 0x140493848.
- **AddressOfCallbacks VA: 0x140492980** — array of TLS callbacks invoked before main().
- Callbacks (2): `0x14028AEB0`, `0x14028AF90`. These run before the CRT entry point and are a **high-priority Ghidra target** — they often contain anti-debug, license, or one-time global initialization logic.

## 11. Delay-Load Imports (DELAY_IMPORT, 0x80 bytes = 4 descriptors)
Not fully enumerated in v1 (each descriptor is 32 bytes). 0x80 / 0x20 = 4 delay-load DLLs. Likely candidates given the renderer profile: `d3dcompiler_47.dll`, possibly `dxcompiler.dll`, `pdh.dll`, `mmdevapi.dll`. The string `d3dcompiler_47.dll` is present in `.rdata` (see `analysis/strings/d3d-dxgi.txt` and the subsystems report §7), strongly implying it is one of the 4 delay-loads. Cross-reference against `analysis/strings/misc-notable.txt` to enumerate the rest.

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
- **~14,752 functions** identifiable from `.pdata` (authoritative count). TLS callbacks + entry point are the three earliest-execution targets.
- **Custom `.fptable` section** (256 bytes, RW) is non-standard and worth targeted review.
- The binary has an **Authenticode signature** (SECURITY directory populated).
