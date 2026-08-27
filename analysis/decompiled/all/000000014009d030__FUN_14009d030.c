// Function: FUN_14009d030
// Addr: 14009d030
// Size: 135 bytes


ulonglong FUN_14009d030(ushort *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 1;
  uVar2 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar2 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    *param_1 = (ushort)(uVar1 >> 8) & 0xf800 | (ushort)(uVar1 >> 5) & 0x7e0 |
               (ushort)(uVar1 >> 3) & 0x1f;
    param_1 = param_1 + 1;
  }
  return uVar2;
}

