// Function: FUN_14009fd00
// Addr: 14009fd00
// Size: 120 bytes


void FUN_14009fd00(undefined1 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,ulonglong param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = param_6 >> 2;
  if (param_2 >> 3 < param_6 >> 2) {
    uVar5 = param_2 >> 3;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar1 = *param_5;
    uVar2 = param_5[1];
    uVar3 = param_5[2];
    uVar4 = param_5[3];
    param_5 = param_5 + 4;
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar2;
    param_1[4] = uVar1;
    param_1[5] = uVar1;
    param_1[6] = uVar4;
    param_1[7] = uVar4;
    param_1 = param_1 + 8;
  }
  return;
}

