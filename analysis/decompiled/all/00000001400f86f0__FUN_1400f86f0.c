// Function: FUN_1400f86f0
// Addr: 1400f86f0
// Size: 266 bytes


void FUN_1400f86f0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)param_1[2]) {
    *puVar1 = *param_2;
                    /* WARNING: Subroutine does not return */
    FUN_140017090(puVar1 + 2,param_2 + 2);
  }
  lVar2 = ((longlong)puVar1 - *param_1) / 0x38;
  if (lVar2 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar4 = (param_1[2] - *param_1 >> 3) * 0x6db6db6db6db6db7;
  uVar3 = 0x492492492492492 - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar3 = lVar2 + 1U;
    if (lVar2 + 1U <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar3 < 0x492492492492493) {
      uVar3 = uVar3 * 0x38;
      if (uVar3 == 0) {
        *(undefined4 *)(lVar2 * 0x38) = *param_2;
                    /* WARNING: Subroutine does not return */
        FUN_140017090((undefined4 *)(lVar2 * 0x38) + 2,param_2 + 2);
      }
      if (uVar3 < 0x1000) {
        func_0x00014028aff0(uVar3);
        return;
      }
      if (uVar3 < uVar3 + 0x27) {
        func_0x00014028aff0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

