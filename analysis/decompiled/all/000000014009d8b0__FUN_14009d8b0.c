// Function: FUN_14009d8b0
// Addr: 14009d8b0
// Size: 470 bytes


ulonglong FUN_14009d8b0(ushort *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_4 == 0x400) {
    param_2 = param_2 >> 1;
    uVar3 = param_6;
    if (param_2 < param_6) {
      param_6 = param_2;
      uVar3 = param_2;
    }
    for (; param_6 != 0; param_6 = param_6 - 1) {
      uVar1 = *param_1;
      uVar2 = (((uVar1 >> 0xb | 0xffffffe0) << 9 | uVar1 >> 5 & 0x3f) << 6 |
              (uVar1 >> 0xb & 0xfffffffc) << 10 | uVar1 >> 5 & 0x30) * 2;
      uVar4 = *(uint *)(param_3 + (ulonglong)*param_5 * 4);
      uVar6 = uVar4 >> 0x18;
      iVar5 = uVar6 * -0x10201 + 0x100feff;
      uVar4 = ((((uVar2 & 0x1fe000) >> 0xd) * iVar5 + (uVar4 >> 0x10 & 0xff) * uVar6 * 0x10201) /
               0xffff & 0x1ff00) << 8 |
              (((uVar2 & 0x1fe0) >> 5) * iVar5 + (uVar4 >> 8 & 0xff) * uVar6 * 0x10201) / 0xffff &
              0xffffff00 |
              (((uVar1 & 0x1f) << 3 | (uVar1 & 0x1f) >> 2) * iVar5 +
              (uVar4 & 0xff) * uVar6 * 0x10201) / 0xffff >> 8;
      *param_1 = (ushort)(uVar4 >> 8) & 0xf800 | (ushort)(uVar4 >> 5) & 0x7e0 |
                 (ushort)(uVar4 >> 3) & 0x1f;
      param_5 = param_5 + 1;
      param_1 = param_1 + 1;
    }
    return uVar3;
  }
  return 0;
}

