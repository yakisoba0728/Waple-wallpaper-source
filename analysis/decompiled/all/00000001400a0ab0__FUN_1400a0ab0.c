// Function: FUN_1400a0ab0
// Addr: 1400a0ab0
// Size: 235 bytes


ulonglong FUN_1400a0ab0(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 2;
  uVar2 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar2 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    uVar3 = uVar1 >> 0x18;
    param_5 = param_5 + 1;
    *param_1 = ((((uVar1 & 0xff) * uVar3 * 0x10201) / 0xffff & 0xffffff00) << 8 |
                ((uVar1 >> 8 & 0xff) * uVar3 * 0x10201) / 0xffff | uVar1 & 0xff0000ff) & 0xffffff00
               | (uint)((ulonglong)((uVar1 >> 0x10 & 0xff) * uVar3 * 0x10201) / 0xffff >> 8);
    param_1 = param_1 + 1;
  }
  return uVar2;
}

