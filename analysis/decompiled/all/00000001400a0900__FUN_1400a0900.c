// Function: FUN_1400a0900
// Addr: 1400a0900
// Size: 421 bytes


ulonglong FUN_1400a0900(uint *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_4 == 0x400) {
    param_2 = param_2 >> 2;
    uVar4 = param_6;
    if (param_2 < param_6) {
      param_6 = param_2;
      uVar4 = param_2;
    }
    for (; param_6 != 0; param_6 = param_6 - 1) {
      uVar2 = *param_1;
      bVar1 = *param_5;
      param_5 = param_5 + 1;
      uVar3 = *(uint *)(param_3 + (ulonglong)bVar1 * 4);
      uVar6 = uVar3 >> 0x18;
      iVar5 = uVar6 * -0x10201 + 0x100feff;
      *param_1 = (((uVar3 >> 0x10 & 0xff) * uVar6 * 0x10201 + (uVar2 >> 0x10 & 0xff) * iVar5) /
                  0xffff & 0x1ff00) << 8 |
                 ((uVar3 >> 8 & 0xff) * uVar6 * 0x10201 + (uVar2 >> 8 & 0xff) * iVar5) / 0xffff &
                 0xffffff00 | (((uVar2 >> 0x18) * iVar5) / 0xffff + uVar6 * 0x101 & 0xff00) << 0x10
                 | ((uVar3 & 0xff) * uVar6 * 0x10201 + (uVar2 & 0xff) * iVar5) / 0xffff >> 8;
      param_1 = param_1 + 1;
    }
    return uVar4;
  }
  return 0;
}

