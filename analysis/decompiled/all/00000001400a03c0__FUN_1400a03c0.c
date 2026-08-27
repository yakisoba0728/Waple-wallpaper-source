// Function: FUN_1400a03c0
// Addr: 1400a03c0
// Size: 201 bytes


ulonglong FUN_1400a03c0(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,ulonglong param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  param_6 = param_6 >> 3;
  param_2 = param_2 >> 2;
  uVar2 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar2 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar3 = (uint)(ushort)((ulonglong)uVar1 >> 0x30);
    *param_1 = ((((uint)((ulonglong)uVar1 >> 0x20) & 0xffff) * uVar3) / 0xffff & 0xffffff00) << 8 |
               (((uint)((ulonglong)uVar1 >> 0x10) & 0xffff) * uVar3) / 0xffff & 0xffffff00 |
               (uint)((ulonglong)(((uint)uVar1 & 0xffff) * uVar3) / 0xffff >> 8) |
               (uVar3 & 0xffffff00) << 0x10;
    param_1 = param_1 + 1;
  }
  return uVar2;
}

