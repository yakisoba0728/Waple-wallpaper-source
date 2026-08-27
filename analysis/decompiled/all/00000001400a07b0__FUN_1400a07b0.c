// Function: FUN_1400a07b0
// Addr: 1400a07b0
// Size: 331 bytes


ulonglong FUN_1400a07b0(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 2;
  uVar4 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar4 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    uVar2 = *param_1;
    param_5 = param_5 + 1;
    iVar3 = (uVar1 >> 0x18) * -0x10201 + 0x100feff;
    *param_1 = (((uVar2 >> 0x10 & 0xff) * iVar3) / 0xffff + (uVar1 >> 0x10 & 0xff) * 0x101) * 0x100
               & 0xffff00ff |
               (((uVar2 >> 0x18) * iVar3) / 0xffff + (uVar1 >> 0x18) * 0x101 & 0xff00) << 0x10 |
               ((uVar2 >> 8 & 0xff) * iVar3) / 0xffff + (uVar1 >> 8 & 0xff) * 0x101 & 0xffffff00 |
               ((uVar2 & 0xff) * iVar3) / 0xffff + (uVar1 & 0xff) * 0x101 >> 8;
    param_1 = param_1 + 1;
  }
  return uVar4;
}

