// Function: FUN_1400a19f0
// Addr: 1400a19f0
// Size: 218 bytes


ulonglong FUN_1400a19f0(undefined4 *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if (param_4 == 0x400) {
    param_2 = param_2 / 3;
    uVar4 = param_6;
    if (param_2 < param_6) {
      param_6 = param_2;
      uVar4 = param_2;
    }
    for (; 4 < param_6; param_6 = param_6 - 4) {
      *param_1 = *(undefined4 *)(param_3 + (ulonglong)*param_5 * 4);
      *(undefined4 *)((longlong)param_1 + 3) = *(undefined4 *)(param_3 + (ulonglong)param_5[1] * 4);
      *(undefined4 *)((longlong)param_1 + 6) = *(undefined4 *)(param_3 + (ulonglong)param_5[2] * 4);
      pbVar1 = param_5 + 3;
      param_5 = param_5 + 4;
      *(undefined4 *)((longlong)param_1 + 9) = *(undefined4 *)(param_3 + (ulonglong)*pbVar1 * 4);
      param_1 = param_1 + 3;
    }
    for (; param_6 != 0; param_6 = param_6 - 1) {
      bVar2 = *param_5;
      param_5 = param_5 + 1;
      uVar3 = *(undefined4 *)(param_3 + (ulonglong)bVar2 * 4);
      *(char *)param_1 = (char)uVar3;
      *(char *)((longlong)param_1 + 1) = (char)((uint)uVar3 >> 8);
      *(char *)((longlong)param_1 + 2) = (char)((uint)uVar3 >> 0x10);
      param_1 = (undefined4 *)((longlong)param_1 + 3);
    }
    return uVar4;
  }
  return 0;
}

