// Function: FUN_14009cb10
// Addr: 14009cb10
// Size: 129 bytes


ulonglong FUN_14009cb10(ushort *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       byte *param_5,ulonglong param_6)

{
  ulonglong uVar1;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 1;
  uVar1 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar1 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    *param_1 = ((param_5[2] & 0xfff8) << 3 | (ushort)(param_5[1] >> 2)) << 5 |
               (ushort)(*param_5 >> 3);
    param_1 = param_1 + 1;
    param_5 = param_5 + 4;
  }
  return uVar1;
}

