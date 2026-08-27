// Function: FUN_1403f8d20
// Addr: 1403f8d20
// Size: 125 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403f8d20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (*(uint *)(param_1 + 2) < *(uint *)((longlong)param_1 + 0x14)) {
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)(param_1 + 2) + 1;
  }
  if (*(int *)((longlong)param_1 + 0x105c) == 0) {
    *(undefined1 *)(param_1 + 0x20b) = 1;
    puVar4 = &DAT_1404e4f20;
    DAT_1404e4f20 = DAT_14045dd10;
    _DAT_1404e4f28 = DAT_14045dd18;
    _DAT_1404e4f30 = DAT_14045dd20;
    _DAT_1404e4f38 = _DAT_14045dd28;
  }
  else {
    uVar3 = *(int *)((longlong)param_1 + 0x105c) - 1;
    *(uint *)((longlong)param_1 + 0x105c) = uVar3;
    puVar4 = param_1 + (ulonglong)uVar3 * 4 + 0x20c;
  }
  uVar1 = puVar4[1];
  param_1[0x205] = *puVar4;
  param_1[0x206] = uVar1;
  uVar1 = puVar4[2];
  uVar2 = puVar4[3];
  param_1[0x207] = uVar1;
  param_1[0x208] = uVar2;
  *param_1 = param_1[0x205];
  param_1[1] = param_1[0x206];
  param_1[2] = uVar1;
  return;
}

