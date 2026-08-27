// Function: FUN_1403977a0
// Addr: 1403977a0
// Size: 211 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403977a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  if (*(int *)(param_1 + 0x48) == 0) {
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if (*(int *)(param_2 + 0x48) == 0) {
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
  }
  uVar2 = *(uint *)(param_2 + 0xc);
  if (uVar2 <= uVar1) {
    if (uVar1 <= uVar2) {
      return;
    }
    iVar5 = uVar1 - uVar2;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      piVar3 = (int *)(param_1 + 0x10);
      piVar4 = (int *)(param_1 + 0xc);
      if (param_1 == -9) {
        piVar3 = (int *)&DAT_00000008;
        piVar4 = (int *)&DAT_00000004;
      }
      *piVar4 = *piVar4 - *piVar3;
    }
    FUN_1403995b0(param_1 + 0x18,uVar1 - uVar2);
    return;
  }
  iVar5 = uVar2 - uVar1;
  while (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    piVar3 = (int *)(param_1 + 0x10);
    piVar4 = (int *)(param_1 + 0xc);
    if (param_1 == -9) {
      piVar3 = (int *)&DAT_00000008;
      piVar4 = (int *)&DAT_00000004;
    }
    *piVar4 = *piVar4 + *piVar3;
  }
  FUN_140399420(param_1 + 0x18,uVar2 - uVar1);
  return;
}

