// Function: FUN_1400a1d50
// Addr: 1400a1d50
// Size: 73 bytes


ulonglong FUN_1400a1d50(undefined1 *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_4 != 0x400) {
    return 0;
  }
  param_2 = param_2 / 3;
  uVar2 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar2 = param_2;
  }
  for (; 3 < param_6; param_6 = param_6 - 4) {
    iVar1 = *(int *)(param_3 + (ulonglong)*param_5 * 4);
    if (iVar1 != 0) {
      *param_1 = (char)iVar1;
      param_1[2] = (char)((uint)iVar1 >> 0x10);
      param_1[1] = (char)((uint)iVar1 >> 8);
    }
    iVar1 = *(int *)(param_3 + (ulonglong)param_5[1] * 4);
    if (iVar1 != 0) {
      param_1[3] = (char)iVar1;
      param_1[5] = (char)((uint)iVar1 >> 0x10);
      param_1[4] = (char)((uint)iVar1 >> 8);
    }
    iVar1 = *(int *)(param_3 + (ulonglong)param_5[2] * 4);
    if (iVar1 != 0) {
      param_1[6] = (char)iVar1;
      param_1[8] = (char)((uint)iVar1 >> 0x10);
      param_1[7] = (char)((uint)iVar1 >> 8);
    }
    iVar1 = *(int *)(param_3 + (ulonglong)param_5[3] * 4);
    if (iVar1 != 0) {
      param_1[9] = (char)iVar1;
      param_1[0xb] = (char)((uint)iVar1 >> 0x10);
      param_1[10] = (char)((uint)iVar1 >> 8);
    }
    param_5 = param_5 + 4;
    param_1 = param_1 + 0xc;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    iVar1 = *(int *)(param_3 + (ulonglong)*param_5 * 4);
    if (iVar1 != 0) {
      *param_1 = (char)iVar1;
      param_1[2] = (char)((uint)iVar1 >> 0x10);
      param_1[1] = (char)((uint)iVar1 >> 8);
    }
    param_5 = param_5 + 1;
    param_1 = param_1 + 3;
  }
  return uVar2;
}

