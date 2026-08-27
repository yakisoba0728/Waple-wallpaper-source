// Function: FUN_1400c8a30
// Addr: 1400c8a30
// Size: 294 bytes


bool FUN_1400c8a30(longlong param_1)

{
  longlong lVar1;
  DWORD DVar2;
  HMODULE pHVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  DWORD local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = GetCurrentThreadId();
  lVar1 = *(longlong *)(param_1 + 400);
  uVar5 = *(ulonglong *)(param_1 + 0x1b8) &
          (((((ulonglong)(local_res8[0] & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(local_res8[0] >> 8 & 0xff)) * 0x100000001b3 ^
           (ulonglong)(local_res8[0] >> 0x10 & 0xff)) * 0x100000001b3 ^
          (ulonglong)(local_res8[0] >> 0x18)) * 0x100000001b3;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 8 + uVar5 * 0x10);
  if (lVar4 == lVar1) {
LAB_1400c8adb:
    FUN_1400ca880(param_1 + 0x188,local_18,local_res8);
    bVar6 = *(longlong *)(param_1 + 0xaf8) == 0;
    if (!bVar6) goto LAB_1400c8b4d;
    pHVar3 = LoadLibraryExW(L"resourceutil64.dll",(HANDLE)0x0,0x1000);
    if (pHVar3 == (HMODULE)0x0) {
      DVar2 = GetLastError();
      FUN_140098760("Error loading library %S (%i).\n",L"resourceutil64.dll",DVar2);
    }
    *(HMODULE *)(param_1 + 0xaf8) = pHVar3;
  }
  else {
    DVar2 = *(DWORD *)(lVar4 + 0x10);
    while (local_res8[0] != DVar2) {
      if (lVar4 == *(longlong *)(*(longlong *)(param_1 + 0x1a0) + uVar5 * 0x10)) goto LAB_1400c8adb;
      lVar4 = *(longlong *)(lVar4 + 8);
      DVar2 = *(DWORD *)(lVar4 + 0x10);
    }
    if (lVar4 == 0) {
      lVar4 = lVar1;
    }
    if (lVar4 == lVar1) goto LAB_1400c8adb;
  }
  bVar6 = *(longlong *)(param_1 + 0xaf8) == 0;
LAB_1400c8b4d:
  return !bVar6;
}

