// Function: FUN_14008d2c0
// Addr: 14008d2c0
// Size: 482 bytes


byte * FUN_14008d2c0(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xf;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = 0;
  bVar2 = (byte)param_2;
  if (param_2 < 0x80) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[1] = 0;
    if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
      *param_1 = bVar2;
      return param_1;
    }
    **(byte **)param_1 = bVar2;
    return param_1;
  }
  if (param_2 < 0x800) {
    param_1[0x10] = 2;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pbVar1 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pbVar1 = *(byte **)param_1;
    }
    pbVar1[1] = bVar2 & 0x3f | 0x80;
    if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
      *param_1 = (byte)(param_2 >> 6) & 0x1f | 0xc0;
      return param_1;
    }
    **(byte **)param_1 = (byte)(param_2 >> 6) & 0x1f | 0xc0;
    return param_1;
  }
  if (0xffff < param_2) {
    if (param_2 < 0x110000) {
      FUN_140016ee0(0,4,0);
      pbVar1 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pbVar1 = *(byte **)param_1;
      }
      pbVar1[3] = bVar2 & 0x3f | 0x80;
      pbVar1 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pbVar1 = *(byte **)param_1;
      }
      pbVar1[2] = (byte)(param_2 >> 6) & 0x3f | 0x80;
      pbVar1 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pbVar1 = *(byte **)param_1;
      }
      pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
      pbVar1 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pbVar1 = *(byte **)param_1;
      }
      *pbVar1 = (byte)(param_2 >> 0x12) & 7 | 0xf0;
    }
    return param_1;
  }
  param_1[0x10] = 3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  pbVar1 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pbVar1 = *(byte **)param_1;
  }
  pbVar1[2] = bVar2 & 0x3f | 0x80;
  pbVar1 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pbVar1 = *(byte **)param_1;
  }
  pbVar1[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
  if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
    *param_1 = (byte)(param_2 >> 0xc) & 0xf | 0xe0;
    return param_1;
  }
  **(byte **)param_1 = (byte)(param_2 >> 0xc) & 0xf | 0xe0;
  return param_1;
}

