// Function: FUN_1400c4a70
// Addr: 1400c4a70
// Size: 466 bytes


undefined8 FUN_1400c4a70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  DWORD DVar1;
  longlong lVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  DWORD local_res8 [8];
  undefined1 local_48 [24];
  
  DVar3 = GetCurrentThreadId();
  local_res8[0] = DVar3;
  iVar4 = FUN_140290d80(param_1 + 0x138);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x184) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  lVar2 = *(longlong *)(param_1 + 0x1d0);
  uVar9 = *(ulonglong *)(param_1 + 0x1f8) &
          (((((ulonglong)(DVar3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(DVar3 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(DVar3 >> 0x10 & 0xff)) *
           0x100000001b3 ^ (ulonglong)(DVar3 >> 0x18)) * 0x100000001b3;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8 + uVar9 * 0x10);
  if (lVar5 != lVar2) {
    DVar1 = *(DWORD *)(lVar5 + 0x10);
    while (DVar3 != DVar1) {
      if (lVar5 == *(longlong *)(*(longlong *)(param_1 + 0x1e0) + uVar9 * 0x10)) goto LAB_1400c4b4e;
      lVar5 = *(longlong *)(lVar5 + 8);
      DVar1 = *(DWORD *)(lVar5 + 0x10);
    }
    if (lVar5 == 0) {
      lVar5 = lVar2;
    }
    if (lVar5 != lVar2) goto LAB_1400c4be1;
  }
LAB_1400c4b4e:
  FUN_1400ca880(param_1 + 0x1c8,local_48,local_res8);
  hModule = *(HMODULE *)(param_1 + 0xb00);
  if (hModule == (HMODULE)0x0) {
    hModule = LoadLibraryExW(L"mediaextensions64.dll",(HANDLE)0x0,0x1000);
    if (hModule == (HMODULE)0x0) {
      DVar3 = GetLastError();
      FUN_140098760("Error loading library %S (%i).\n",L"mediaextensions64.dll",DVar3);
    }
    *(HMODULE *)(param_1 + 0xb00) = hModule;
    if (hModule == (HMODULE)0x0) goto LAB_1400c4be1;
  }
  pFVar6 = GetProcAddress(hModule,"CreateMediaExtensions");
  if (pFVar6 != (FARPROC)0x0) {
    plVar7 = (longlong *)(*pFVar6)();
    *(longlong **)(param_1 + 0xb30) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
LAB_1400c4be1:
  FUN_140290ea0(param_1 + 0x138);
  plVar7 = *(longlong **)(param_1 + 0xb30);
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400c4c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(*plVar7 + 0x18))(plVar7,param_2,param_3,param_4);
  return uVar8;
}

