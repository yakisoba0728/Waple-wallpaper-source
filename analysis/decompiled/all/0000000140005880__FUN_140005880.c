// Function: FUN_140005880
// Addr: 140005880
// Size: 225 bytes


undefined8 * FUN_140005880(undefined8 *param_1,LPCSTR param_2)

{
  int cchWideChar;
  LPWSTR ***lpWideCharStr;
  LPCSTR pCVar1;
  LPWSTR **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    pCVar1 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pCVar1 = *(LPCSTR *)param_2;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,pCVar1,(int)*(longlong *)(param_2 + 0x10),(LPWSTR)0x0
                                      ,0);
    if (0 < cchWideChar) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = (LPWSTR **)0x0;
      uStack_40 = 0;
      FUN_1400167e0(&local_48,0,(longlong)cchWideChar);
      lpWideCharStr = &local_48;
      if (7 < uStack_30) {
        lpWideCharStr = (LPWSTR ***)local_48;
      }
      pCVar1 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        pCVar1 = *(LPCSTR *)param_2;
      }
      MultiByteToWideChar(0xfde9,0,pCVar1,*(int *)(param_2 + 0x10),(LPWSTR)lpWideCharStr,cchWideChar
                         );
      *param_1 = local_48;
      param_1[1] = uStack_40;
      param_1[2] = local_38;
      param_1[3] = uStack_30;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  return param_1;
}

