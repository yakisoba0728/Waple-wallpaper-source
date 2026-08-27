// Function: FUN_1400a0d10
// Addr: 1400a0d10
// Size: 228 bytes


ulonglong FUN_1400a0d10(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,ulonglong param_6)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  param_6 = param_6 >> 3;
  param_2 = param_2 >> 2;
  uVar3 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar3 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar4 = (uint)(ushort)((ulonglong)uVar1 >> 0x30);
    uVar5 = ((((uint)((ulonglong)uVar1 >> 0x20) & 0xffff) * uVar4) / 0xffff & 0xffffff00) << 8 |
            (((uint)((ulonglong)uVar1 >> 0x10) & 0xffff) * uVar4) / 0xffff & 0xffffff00;
    uVar2 = (uint)((ulonglong)(((uint)uVar1 & 0xffff) * uVar4) / 0xffff >> 8);
    *param_1 = (uVar5 & 0xff0000) >> 0x10 | (uVar2 & 0xff) << 0x10 |
               (uVar5 | uVar2) & 0xff00ff00 | (uVar4 & 0xffffff00) << 0x10;
    param_1 = param_1 + 1;
  }
  return uVar3;
}

