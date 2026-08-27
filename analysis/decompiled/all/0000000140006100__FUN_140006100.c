// Function: FUN_140006100
// Addr: 140006100
// Size: 525 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_140006100(ulonglong param_1)

{
  int iVar1;
  BOOL BVar2;
  HANDLE pvVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  INT_PTR IVar5;
  longlong lVar6;
  undefined4 extraout_var;
  WCHAR *pWVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong local_res8;
  WCHAR local_1c18 [512];
  WCHAR local_1818 [512];
  undefined2 local_1418 [512];
  undefined8 local_1018 [511];
  undefined8 uStack_20;
  
  uStack_20 = 0x140006113;
  local_res8 = param_1;
  pvVar3 = GetCurrentProcess();
  if ((pvVar3 != (HANDLE)0x0) && (hModule = LoadLibraryW(L"Psapi.dll"), hModule != (HMODULE)0x0)) {
    pFVar4 = GetProcAddress(hModule,"EnumProcessModules");
    if (pFVar4 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      hModule = LoadLibraryW(L"kernel32.dll");
      if (hModule == (HMODULE)0x0) {
        return 0;
      }
      pFVar4 = GetProcAddress(hModule,"EnumProcessModules");
    }
    iVar1 = 0;
    iVar9 = iVar1;
    if (pFVar4 != (FARPROC)0x0) {
      FUN_1404217a0(local_1018,0,0x1000);
      local_res8 = local_res8 & 0xffffffff00000000;
      IVar5 = (*pFVar4)(pvVar3,local_1018,0x200,&local_res8);
      iVar9 = 0;
      if ((int)IVar5 == 1) {
        iVar8 = 0;
        iVar9 = iVar1;
        if ((uint)local_res8 >> 3 != 0) {
          do {
            FUN_1404217a0(local_1818,0,0x400);
            FUN_1404217a0(local_1c18,0,0x400);
            FUN_1404217a0(local_1418,0,0x400);
            GetModuleFileNameW((HMODULE)local_1018[iVar8],local_1818,0x400);
            GetLongPathNameW(local_1818,local_1c18,0x200);
            pWVar7 = local_1c18;
            puVar10 = local_1418;
            do {
              iVar1 = tolower((uint)(ushort)*pWVar7);
              *puVar10 = (short)iVar1;
              puVar10 = puVar10 + 1;
              pWVar7 = pWVar7 + 1;
            } while (pWVar7 != local_1818);
            lVar6 = FUN_1402ba390(local_1418);
            iVar9 = (iVar9 + 1) - (uint)(lVar6 == 0);
            iVar8 = iVar8 + 1;
          } while ((ulonglong)(longlong)iVar8 < (local_res8 >> 3 & 0x1fffffff));
        }
      }
    }
    BVar2 = FreeLibrary(hModule);
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),0 < iVar9);
  }
  return 0;
}

