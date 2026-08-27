// Function: FUN_140005790
// Addr: 140005790
// Size: 228 bytes


undefined8 * FUN_140005790(undefined8 *param_1,LPCWSTR param_2)

{
  int cbMultiByte;
  LPSTR ***lpMultiByteStr;
  LPCWSTR pWVar1;
  LPSTR **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    pWVar1 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      pWVar1 = *(LPCWSTR *)param_2;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,pWVar1,(int)*(longlong *)(param_2 + 8),(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < cbMultiByte) {
      FUN_140016940(&local_48,(longlong)cbMultiByte,0);
      lpMultiByteStr = &local_48;
      if (0xf < uStack_30) {
        lpMultiByteStr = (LPSTR ***)local_48;
      }
      pWVar1 = param_2;
      if (7 < *(ulonglong *)(param_2 + 0xc)) {
        pWVar1 = *(LPCWSTR *)param_2;
      }
      WideCharToMultiByte(0xfde9,0,pWVar1,*(int *)(param_2 + 8),(LPSTR)lpMultiByteStr,cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
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
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}

