// Function: FUN_14009dcb0
// Addr: 14009dcb0
// Size: 234 bytes


ulonglong FUN_14009dcb0(undefined1 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,ulonglong param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  param_6 = param_6 >> 3;
  param_2 = param_2 / 3;
  uVar4 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar4 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar5 = (uint)(ushort)((ulonglong)uVar1 >> 0x30);
    uVar3 = (((uint)((ulonglong)uVar1 >> 0x10) & 0xffff) * uVar5) / 0xffff & 0xffffff00;
    uVar2 = (ulonglong)(((uint)uVar1 & 0xffff) * uVar5) / 0xffff;
    *param_1 = (char)(uVar2 >> 8);
    param_1[1] = (byte)(uVar3 >> 8) | (byte)(uVar2 >> 0x10);
    param_1[2] = (byte)((((uint)((ulonglong)uVar1 >> 0x20) & 0xffff) * uVar5) / 0xffff >> 8) |
                 (byte)(uVar3 >> 0x10);
    param_1 = param_1 + 3;
  }
  return uVar4;
}

