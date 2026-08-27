// Function: FUN_1403ed6d0
// Addr: 1403ed6d0
// Size: 161 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ed6d0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)&DAT_1404e4f20;
  uVar1 = *(uint *)(param_1 + 0x14) - 1;
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x14);
  }
  else {
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    piVar3 = (int *)&DAT_1404e4f20;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
  }
  uVar1 = *(uint *)(param_1 + 0x24) - 1;
  if (uVar1 < *(uint *)(param_1 + 0x24)) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar1 * 0x14);
  }
  else {
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
  }
  if (*piVar3 == 0) {
    *piVar4 = 0;
    return;
  }
  if (*piVar3 == 1) {
    if (*piVar4 == 2) {
      uVar2 = *(undefined8 *)(piVar3 + 2);
      *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
      *(undefined8 *)(piVar4 + 2) = uVar2;
      piVar4[4] = piVar3[4];
      return;
    }
    if (*piVar4 == 1) {
      FUN_14040ee30(piVar4 + 1,piVar3 + 1);
      return;
    }
  }
  return;
}

