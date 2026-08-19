// Function: FUN_1403c32f0
// Addr: 1403c32f0
// Size: 5 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403c32f0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (1 < *(int *)(param_1 + 0x28) + 1U) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      func_0x0001402bf8e0(*(undefined8 *)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    (*DAT_140426580)();
    uVar1 = *(uint *)(param_1 + 0x2c);
    while (uVar1 != 0) {
      if (uVar1 - 1 < uVar1) {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 - 1) * 0x18);
      }
      else {
        puVar4 = &DAT_1404e4ff0;
        DAT_1404e4ff0._0_4_ = (undefined4)DAT_14045dde0;
        DAT_1404e4ff0._4_4_ = DAT_14045dde0._4_4_;
        DAT_1404e4ff8._0_4_ = _DAT_14045dde8;
        DAT_1404e4ff8._4_4_ = _DAT_14045ddec;
        _DAT_1404e5000 = DAT_14045ddf0;
      }
      uVar2 = puVar4[1];
      pcVar3 = (code *)puVar4[2];
      if (*(int *)(param_1 + 0x2c) != 0) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      }
      (*DAT_140426578)(param_1);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar2);
      }
      (*DAT_140426580)(param_1);
      uVar1 = *(uint *)(param_1 + 0x2c);
    }
    if (1 < *(int *)(param_1 + 0x28) + 1U) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      func_0x0001402bf8e0(*(undefined8 *)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    (*DAT_140426578)(param_1);
  }
  (*DAT_140426568)(param_1);
  return;
}

