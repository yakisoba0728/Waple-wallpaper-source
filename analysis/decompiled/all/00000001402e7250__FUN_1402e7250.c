// Function: FUN_1402e7250
// Addr: 1402e7250
// Size: 238 bytes


LPCVOID FUN_1402e7250(LPCVOID param_1,ulonglong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SIZE_T SVar5;
  LPVOID pvVar6;
  int local_res8 [2];
  
  if (param_1 == (LPCVOID)0x0) {
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = 0x16;
    FUN_1402cad8c();
  }
  else if (param_2 < 0xffffffffffffffe1) {
    SVar5 = HeapSize(DAT_1404e4ed0,0,param_1);
    if (param_2 == 0) {
      param_2 = 1;
    }
    pvVar6 = HeapReAlloc(DAT_1404e4ed0,0x10,param_1,param_2);
    if (pvVar6 != (LPVOID)0x0) {
      return pvVar6;
    }
    if ((param_2 <= SVar5) && (SVar5 < 0x4001)) {
      local_res8[0] = -1;
      BVar1 = HeapQueryInformation
                        (DAT_1404e4ed0,HeapCompatibilityInformation,local_res8,4,(PSIZE_T)0x0);
      if (BVar1 == 0) {
        return param_1;
      }
      if (local_res8[0] == 2) {
        return param_1;
      }
    }
    DVar2 = GetLastError();
    uVar3 = FUN_1402cadf4(DVar2);
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = 0xc;
  }
  return (LPCVOID)0x0;
}

