// Function: FUN_1400303a0
// Addr: 1400303a0
// Size: 269 bytes


longlong FUN_1400303a0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)param_1[2]) {
    *puVar1 = *param_2;
    lVar4 = param_1[1];
    param_1[1] = lVar4 + 8;
    return lVar4;
  }
  uVar6 = (longlong)puVar1 - *param_1;
  lVar4 = (longlong)uVar6 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = param_1[2] - *param_1 >> 3;
  if (uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) {
    uVar5 = lVar4 + 1;
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 < 0x2000000000000000) {
      uVar5 = uVar5 * 8;
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        if (0xfff < uVar5) {
          if (uVar5 < uVar5 + 0x27) {
            lVar4 = func_0x00014028aff0();
            return lVar4;
          }
          goto LAB_140030539;
        }
        lVar4 = func_0x00014028aff0(uVar5);
      }
      *(undefined8 *)((uVar6 & 0xfffffffffffffff8) + lVar4) = *param_2;
      lVar2 = *param_1;
      if (puVar1 == (undefined8 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar4,lVar2,param_1[1] - lVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar4,lVar2,(longlong)puVar1 - lVar2);
    }
  }
LAB_140030539:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

