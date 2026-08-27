// Function: FUN_140018ce0
// Addr: 140018ce0
// Size: 373 bytes


undefined8 * FUN_140018ce0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int cbMultiByte;
  undefined8 uVar2;
  undefined8 *puVar3;
  LPCWSTR ***ppppWVar4;
  LPSTR lpMultiByteStr;
  ulonglong uVar5;
  LPCWSTR **local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong uStack_10;
  
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  local_38 = 0;
  local_48 = (LPCWSTR **)0x0;
  uStack_40 = 0;
  local_30 = 0;
  uVar2 = FUN_1402d6aa0(param_1);
  FUN_140016170(&local_48,param_1,uVar2);
  if (local_38 != 0) {
    ppppWVar4 = &local_48;
    if (7 < local_30) {
      ppppWVar4 = (LPCWSTR ***)local_48;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar4,(int)local_38,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < cbMultiByte) {
      FUN_140016940(&local_28,(longlong)cbMultiByte,0);
      lpMultiByteStr = (LPSTR)&local_28;
      if (0xf < uStack_10) {
        lpMultiByteStr = (LPSTR)CONCAT44(uStack_24,local_28);
      }
      ppppWVar4 = &local_48;
      if (7 < local_30) {
        ppppWVar4 = (LPCWSTR ***)local_48;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar4,(int)local_38,lpMultiByteStr,cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      *(undefined4 *)param_2 = local_28;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_24;
      *(undefined4 *)(param_2 + 1) = uStack_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1c;
      param_2[2] = local_18;
      param_2[3] = uStack_10;
      goto LAB_140018df3;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
LAB_140018df3:
  if (7 < local_30) {
    uVar5 = local_30 * 2 + 2;
    ppppWVar4 = (LPCWSTR ***)local_48;
    if (0xfff < uVar5) {
      ppppWVar4 = (LPCWSTR ***)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppWVar4))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar3 = (undefined8 *)(*pcVar1)();
        return puVar3;
      }
      uVar5 = local_30 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar4,uVar5);
  }
  return param_2;
}

