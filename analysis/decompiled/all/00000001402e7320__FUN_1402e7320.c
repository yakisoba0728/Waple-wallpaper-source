// Function: FUN_1402e7320
// Addr: 1402e7320
// Size: 86 bytes


longlong FUN_1402e7320(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int aiStackX_8 [2];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if (0xffffffffffffffe0 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  uVar3 = (*DAT_1404263d0)(DAT_1404e4fa0,0,param_1);
  if (param_2 == 0) {
    param_2 = 1;
  }
  lVar4 = (*DAT_140426460)(DAT_1404e4fa0,0x10,param_1,param_2);
  if (lVar4 != 0) {
    return lVar4;
  }
  if ((param_2 <= uVar3) && (uVar3 < 0x4001)) {
    aiStackX_8[0] = -1;
    iVar1 = (*DAT_1404263c8)(DAT_1404e4fa0,0,aiStackX_8,4,0);
    if (iVar1 == 0) {
      return param_1;
    }
    if (aiStackX_8[0] == 2) {
      return param_1;
    }
  }
  uVar2 = (*DAT_1404266a8)();
  func_0x0001402caec4(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

