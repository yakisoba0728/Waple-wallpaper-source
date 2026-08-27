// Function: FUN_1402ca17c
// Addr: 1402ca17c
// Size: 222 bytes


HANDLE FUN_1402ca17c(LPSECURITY_ATTRIBUTES param_1,ulonglong param_2,longlong param_3,
                    undefined8 param_4,DWORD param_5,DWORD *param_6)

{
  DWORD DVar1;
  undefined4 *puVar2;
  LPVOID lpParameter;
  HANDLE pvVar3;
  DWORD local_res18 [2];
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)FUN_1402caf34();
    *puVar2 = 0x16;
    FUN_1402cad8c();
    pvVar3 = (HANDLE)0x0;
  }
  else {
    lpParameter = (LPVOID)FUN_1402ca118(param_3,param_4);
    pvVar3 = (HANDLE)0x0;
    if (lpParameter != (LPVOID)0x0) {
      local_res18[0] = 0;
      pvVar3 = CreateThread(param_1,param_2 & 0xffffffff,FUN_1402ca04c,lpParameter,param_5,
                            local_res18);
      if (pvVar3 == (HANDLE)0x0) {
        DVar1 = GetLastError();
        FUN_1402caec4(DVar1);
        if (*(HANDLE *)((longlong)lpParameter + 0x10) != (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)((longlong)lpParameter + 0x10));
        }
        if (*(HMODULE *)((longlong)lpParameter + 0x18) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)((longlong)lpParameter + 0x18));
        }
        FUN_1402d9040(lpParameter);
        pvVar3 = (HANDLE)0x0;
      }
      else if (param_6 != (DWORD *)0x0) {
        *param_6 = local_res18[0];
      }
    }
  }
  return pvVar3;
}

