// Function: FUN_14026b180
// Addr: 14026b180
// Size: 173 bytes


void FUN_14026b180(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  lVar3 = *param_1;
  uVar4 = param_1[2] - lVar3 >> 4;
  if ((uVar4 <= 0xfffffffffffffff - (uVar4 >> 1)) &&
     ((uVar4 = (uVar4 >> 1) + uVar4, uVar6 = param_2, uVar4 < param_2 ||
      (uVar6 = uVar4, uVar4 < 0x1000000000000000)))) {
    lVar1 = param_1[1];
    lVar2 = 0;
    uVar6 = uVar6 * 0x10;
    if (uVar6 != 0) {
      if (0xfff < uVar6) {
        if (uVar6 < uVar6 + 0x27) {
          func_0x00014028aff0();
          return;
        }
        goto LAB_14026b301;
      }
      lVar2 = func_0x00014028aff0(uVar6);
    }
    uVar4 = lVar1 - lVar3;
    puVar5 = (undefined8 *)((uVar4 & 0xfffffffffffffff0) + lVar2);
    for (lVar3 = param_2 - ((longlong)uVar4 >> 4); lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar2,*param_1,param_1[1] - *param_1);
  }
LAB_14026b301:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

