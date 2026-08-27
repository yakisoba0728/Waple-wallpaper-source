// Function: FUN_1400c4e80
// Addr: 1400c4e80
// Size: 514 bytes


void FUN_1400c4e80(longlong param_1,undefined8 param_2)

{
  DWORD DVar1;
  longlong lVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  INT_PTR IVar7;
  FARPROC pFVar8;
  ulonglong uVar9;
  DWORD local_res8 [8];
  undefined1 local_38 [24];
  
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
  lVar2 = *(longlong *)(param_1 + 0x210);
  uVar9 = *(ulonglong *)(param_1 + 0x238) &
          (((((ulonglong)(DVar3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(DVar3 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(DVar3 >> 0x10 & 0xff)) *
           0x100000001b3 ^ (ulonglong)(DVar3 >> 0x18)) * 0x100000001b3;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 8 + uVar9 * 0x10);
  if (lVar5 != lVar2) {
    DVar1 = *(DWORD *)(lVar5 + 0x10);
    while (DVar3 != DVar1) {
      if (lVar5 == *(longlong *)(*(longlong *)(param_1 + 0x220) + uVar9 * 0x10)) goto LAB_1400c4f54;
      lVar5 = *(longlong *)(lVar5 + 8);
      DVar1 = *(DWORD *)(lVar5 + 0x10);
    }
    if (lVar5 == 0) {
      lVar5 = lVar2;
    }
    if (lVar5 != lVar2) goto LAB_1400c5028;
  }
LAB_1400c4f54:
  FUN_1400ca880(param_1 + 0x208,local_38,local_res8);
  hModule = *(HMODULE *)(param_1 + 0xb08);
  if (hModule == (HMODULE)0x0) {
    hModule = LoadLibraryExW(L"scenescript64.dll",(HANDLE)0x0,0x1000);
    if (hModule == (HMODULE)0x0) {
      DVar3 = GetLastError();
      FUN_140098760("Error loading library %S (%i).\n",L"scenescript64.dll",DVar3);
    }
    *(HMODULE *)(param_1 + 0xb08) = hModule;
  }
  if (((*(longlong *)(param_1 + 0xb38) == 0) && (hModule != (HMODULE)0x0)) &&
     (pFVar6 = GetProcAddress(hModule,"GetSceneScriptVersion"), pFVar6 != (FARPROC)0x0)) {
    IVar7 = (*pFVar6)();
    iVar4 = FUN_1402c10d0(IVar7,"2.8.42.SceneScript");
    if ((iVar4 == 0) &&
       (pFVar6 = GetProcAddress(*(HMODULE *)(param_1 + 0xb08),"Init"), pFVar6 != (FARPROC)0x0)) {
      pFVar8 = GetProcAddress(*(HMODULE *)(param_1 + 0xb08),"CreateSceneScriptEngine");
      *(FARPROC *)(param_1 + 0xb38) = pFVar8;
      (*pFVar6)();
    }
  }
LAB_1400c5028:
  FUN_140290ea0(param_1 + 0x138);
  if (*(code **)(param_1 + 0xb38) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400c5058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xb38))(param_2,DAT_1404e52b8,L"log.txt");
  return;
}

