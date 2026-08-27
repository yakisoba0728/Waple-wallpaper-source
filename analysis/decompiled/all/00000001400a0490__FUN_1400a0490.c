// Function: FUN_1400a0490
// Addr: 1400a0490
// Size: 363 bytes


ulonglong FUN_1400a0490(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 2;
  uVar5 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar5 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    uVar2 = *param_1;
    uVar4 = uVar1 >> 0x18;
    param_5 = param_5 + 1;
    iVar3 = uVar4 * -0x10201 + 0x100feff;
    *param_1 = (((uVar1 >> 0x10 & 0xff) * uVar4 * 0x10201 + (uVar2 >> 0x10 & 0xff) * iVar3) / 0xffff
               & 0x1ff00) << 8 |
               ((uVar1 >> 8 & 0xff) * uVar4 * 0x10201 + (uVar2 >> 8 & 0xff) * iVar3) / 0xffff &
               0xffffff00 | (((uVar2 >> 0x18) * iVar3) / 0xffff + uVar4 * 0x101 & 0xff00) << 0x10 |
               ((uVar1 & 0xff) * uVar4 * 0x10201 + (uVar2 & 0xff) * iVar3) / 0xffff >> 8;
    param_1 = param_1 + 1;
  }
  return uVar5;
}

