// Function: FUN_1401ab7c0
// Addr: 1401ab7c0
// Size: 463 bytes


undefined4 * FUN_1401ab7c0(undefined4 *param_1)

{
  code *pcVar1;
  int cbMultiByte;
  undefined8 uVar2;
  undefined4 *puVar3;
  LPCWSTR ***ppppWVar4;
  LPSTR lpMultiByteStr;
  ulonglong uVar5;
  LPCWSTR **local_278;
  undefined8 uStack_270;
  longlong local_268;
  ulonglong local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  ulonglong uStack_220;
  undefined1 local_218 [528];
  
  FUN_1404217a0(local_218,0,0x208);
  SHGetFolderPathW(0,0x14,0,0,local_218);
  local_278 = (LPCWSTR **)0x0;
  uStack_270 = 0;
  local_268 = 0;
  local_260 = 0;
  uVar2 = FUN_1402d6aa0(local_218);
  FUN_140016170(&local_278,local_218,uVar2);
  if (local_268 != 0) {
    ppppWVar4 = &local_278;
    if (7 < local_260) {
      ppppWVar4 = (LPCWSTR ***)local_278;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar4,(int)local_268,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < cbMultiByte) {
      FUN_140016940(&local_238,(longlong)cbMultiByte,0);
      lpMultiByteStr = (LPSTR)&local_238;
      if (0xf < uStack_220) {
        lpMultiByteStr = (LPSTR)CONCAT44(uStack_234,local_238);
      }
      ppppWVar4 = &local_278;
      if (7 < local_260) {
        ppppWVar4 = (LPCWSTR ***)local_278;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar4,(int)local_268,lpMultiByteStr,cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      local_258 = local_238;
      uStack_254 = uStack_234;
      uStack_250 = uStack_230;
      uStack_24c = uStack_22c;
      local_248 = local_228;
      uStack_240 = uStack_220;
      goto LAB_1401ab904;
    }
  }
  local_248 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  local_258 = 0;
  uStack_254 = 0;
  uStack_240 = 0xf;
LAB_1401ab904:
  FUN_1400534d0(&local_258,0x2f);
  *param_1 = local_258;
  param_1[1] = uStack_254;
  param_1[2] = uStack_250;
  param_1[3] = uStack_24c;
  param_1[4] = (undefined4)local_248;
  param_1[5] = local_248._4_4_;
  param_1[6] = (undefined4)uStack_240;
  param_1[7] = uStack_240._4_4_;
  if (7 < local_260) {
    uVar5 = local_260 * 2 + 2;
    ppppWVar4 = (LPCWSTR ***)local_278;
    if (0xfff < uVar5) {
      ppppWVar4 = (LPCWSTR ***)local_278[-1];
      if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)ppppWVar4))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar3 = (undefined4 *)(*pcVar1)();
        return puVar3;
      }
      uVar5 = local_260 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar4,uVar5);
  }
  return param_1;
}

