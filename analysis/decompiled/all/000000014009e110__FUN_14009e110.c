// Function: FUN_14009e110
// Addr: 14009e110
// Size: 290 bytes


ulonglong FUN_14009e110(byte *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 / 3;
  uVar4 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar4 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar5 = uVar1 >> 0x18;
    uVar3 = ((uVar1 >> 8 & 0xff) * uVar5 * 0x10201) / 0xffff & 0xffffff00;
    uVar2 = (ulonglong)((uVar1 & 0xff) * uVar5 * 0x10201) / 0xffff;
    *param_1 = (byte)(((uVar1 >> 0x10 & 0xff) * uVar5 * 0x10201) / 0xffff >> 8) |
               (byte)(uVar3 >> 0x10);
    param_1[1] = (byte)(uVar3 >> 8) | (byte)(uVar2 >> 0x10);
    param_1[2] = (byte)(uVar2 >> 8);
    param_1 = param_1 + 3;
  }
  return uVar4;
}

