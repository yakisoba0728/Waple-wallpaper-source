// Function: FUN_1400325c0
// Addr: 1400325c0
// Size: 164 bytes


void FUN_1400325c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (longlong)param_2 + (7 - (longlong)param_1);
  uVar2 = uVar3 >> 3;
  if (param_2 < param_1) {
    uVar2 = 0;
  }
  puVar4 = param_1;
  if (1 < uVar2) {
    uVar2 = uVar3 & 0xfffffffffffffff8;
    if (param_2 < param_1) {
      uVar2 = 0;
    }
    if ((param_3 < param_1) || ((undefined8 *)((longlong)param_1 + (uVar2 - 8)) < param_3)) {
      uVar1 = *param_3;
      uVar2 = uVar3 & 0xfffffffffffffff0;
      if (param_2 < param_1) {
        uVar2 = 0;
      }
      puVar4 = (undefined8 *)((longlong)param_1 + uVar2);
      for (uVar2 = uVar2 / 8; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      }
    }
  }
  for (; puVar4 != param_2; puVar4 = puVar4 + 1) {
    *puVar4 = *param_3;
  }
  return;
}

