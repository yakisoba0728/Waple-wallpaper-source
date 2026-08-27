// Function: FUN_1400a1ea0
// Addr: 1400a1ea0
// Size: 185 bytes


ulonglong FUN_1400a1ea0(undefined4 *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_4 != 0x400) {
    return 0;
  }
  param_2 = param_2 >> 2;
  uVar3 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar3 = param_2;
  }
  for (; 3 < param_6; param_6 = param_6 - 4) {
    *param_1 = *(undefined4 *)(param_3 + (ulonglong)*param_5 * 4);
    param_1[1] = *(undefined4 *)(param_3 + (ulonglong)param_5[1] * 4);
    param_1[2] = *(undefined4 *)(param_3 + (ulonglong)param_5[2] * 4);
    pbVar1 = param_5 + 3;
    param_5 = param_5 + 4;
    param_1[3] = *(undefined4 *)(param_3 + (ulonglong)*pbVar1 * 4);
    param_1 = param_1 + 4;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    bVar2 = *param_5;
    param_5 = param_5 + 1;
    *param_1 = *(undefined4 *)(param_3 + (ulonglong)bVar2 * 4);
    param_1 = param_1 + 1;
  }
  return uVar3;
}

