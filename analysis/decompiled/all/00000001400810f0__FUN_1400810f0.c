// Function: FUN_1400810f0
// Addr: 1400810f0
// Size: 211 bytes


void FUN_1400810f0(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    while ((param_3 != 0 && (uVar2 < 0x40))) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *(undefined1 *)((longlong)param_1 + uVar2 + 0x10) = uVar1;
      param_1[1] = param_1[1] + 1;
      param_3 = param_3 - 1;
      uVar2 = param_1[1];
    }
    if (uVar2 == 0x40) {
      FUN_1400802f0(param_1,param_1 + 2);
      *param_1 = *param_1 + 0x40;
      param_1[1] = 0;
    }
  }
  if (param_3 != 0) {
    for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
      FUN_1400802f0(param_1,param_2);
      *param_1 = *param_1 + 0x40;
      param_2 = param_2 + 0x40;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *(undefined1 *)((longlong)param_1 + param_1[1] + 0x10) = uVar1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return;
}

