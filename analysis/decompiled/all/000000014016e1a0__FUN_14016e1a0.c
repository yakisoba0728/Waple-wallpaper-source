// Function: FUN_14016e1a0
// Addr: 14016e1a0
// Size: 261 bytes


longlong FUN_14016e1a0(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar1 = (undefined2 *)param_1[1];
  if (puVar1 != (undefined2 *)param_1[2]) {
    *puVar1 = *param_2;
    lVar4 = param_1[1];
    param_1[1] = lVar4 + 2;
    return lVar4;
  }
  uVar6 = (longlong)puVar1 - *param_1;
  lVar4 = (longlong)uVar6 >> 1;
  if (lVar4 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140133e40();
  }
  uVar3 = param_1[2] - *param_1 >> 1;
  if (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) {
    uVar5 = lVar4 + 1;
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 < 0x8000000000000000) {
      uVar5 = uVar5 * 2;
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        if (0xfff < uVar5) {
          if (uVar5 < uVar5 + 0x27) {
            lVar4 = func_0x00014028aff0();
            return lVar4;
          }
          goto LAB_14016e32c;
        }
        lVar4 = func_0x00014028aff0(uVar5);
      }
      *(undefined2 *)((uVar6 & 0xfffffffffffffffe) + lVar4) = *param_2;
      lVar2 = *param_1;
      if (puVar1 == (undefined2 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar4,lVar2,param_1[1] - lVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar4,lVar2,(longlong)puVar1 - lVar2);
    }
  }
LAB_14016e32c:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

