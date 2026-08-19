// Function: FUN_1401b6cf0
// Addr: 1401b6cf0
// Size: 200 bytes


void FUN_1401b6cf0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140133e40();
  }
  uVar2 = (param_1[2] - *param_1 >> 4) * -0x3333333333333333;
  uVar1 = 0x333333333333333 - (uVar2 >> 1);
  if ((uVar2 < uVar1 || uVar2 - uVar1 == 0) &&
     ((uVar2 = (uVar2 >> 1) + uVar2, uVar1 = param_2, uVar2 < param_2 ||
      (uVar1 = uVar2, uVar2 < 0x333333333333334)))) {
    uVar2 = uVar1 * 0x50;
    if (uVar2 == 0) {
      lVar3 = param_1[1] - *param_1 >> 4;
      puStack_40 = (undefined8 *)(lVar3 * 0x10);
      puStack_38 = puStack_40;
      for (lVar3 = param_2 + lVar3 * 0x3333333333333333; lVar3 != 0; lVar3 = lVar3 + -1) {
        puStack_38[4] = 0;
        puStack_38[5] = 0;
        puStack_38[6] = 0;
        *puStack_38 = 0;
        puStack_38[1] = 0;
        puStack_38[2] = 0;
        puStack_38[3] = 3;
        *(undefined4 *)puStack_38 = 0;
        puStack_38[7] = 0;
        puStack_38[8] = 0;
        puStack_38[9] = 0;
        puStack_38 = puStack_38 + 10;
      }
      plStack_58 = param_1;
      uStack_48 = uVar1;
      func_0x0001401b70b0(*param_1,param_1[1],0);
      uStack_50 = 0;
      FUN_1401b74e0(param_1,0,param_2,uVar1);
      func_0x0001401b7430(&plStack_58);
      return;
    }
    if (uVar2 < 0x1000) {
      func_0x00014028aff0();
      return;
    }
    if (uVar2 < uVar2 + 0x27) {
      func_0x00014028aff0(uVar2 + 0x27);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

