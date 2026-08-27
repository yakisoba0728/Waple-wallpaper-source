// Function: FUN_14009c8a0
// Addr: 14009c8a0
// Size: 110 bytes


ulonglong FUN_14009c8a0(undefined1 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined1 *param_5,ulonglong param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  if (param_2 < param_6) {
    param_6 = param_2;
  }
  uVar5 = param_6 >> 2;
  if (3 < param_6) {
    do {
      uVar2 = *param_5;
      uVar3 = param_5[1];
      uVar4 = param_5[3];
      puVar1 = param_5 + 2;
      param_5 = param_5 + 4;
      *param_1 = *puVar1;
      param_1[1] = uVar3;
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      uVar5 = uVar5 - 1;
      param_1 = param_1 + 4;
    } while (uVar5 != 0);
  }
  return param_6 >> 2;
}

