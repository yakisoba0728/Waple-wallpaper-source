// Function: FUN_14009ea80
// Addr: 14009ea80
// Size: 437 bytes


ulonglong FUN_14009ea80(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 2;
  uVar8 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar8 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar5 = *param_5;
    uVar1 = *param_1;
    uVar2 = uVar5 >> 0x18;
    uVar4 = uVar1 >> 0x18;
    iVar6 = uVar2 * -0x101 + 0xffff;
    uVar2 = ((uVar2 * -0x10201 + 0x100feff) * uVar4) / 0xffff + uVar2 * 0x101;
    uVar3 = (uVar5 >> 0x10 & 0xff) * 0x101 +
            ((((uVar1 >> 0x10 & 0xff) * uVar4 * 0x10201) / 0xffff) * iVar6) / 0xffff;
    uVar7 = (uVar5 >> 8 & 0xff) * 0x101 +
            ((((uVar1 >> 8 & 0xff) * uVar4 * 0x10201) / 0xffff) * iVar6) / 0xffff;
    uVar5 = (uVar5 & 0xff) * 0x101 +
            ((((uVar1 & 0xff) * uVar4 * 0x10201) / 0xffff) * iVar6) / 0xffff;
    if (uVar2 != 0) {
      uVar3 = (uVar3 * 0xffff) / uVar2;
      uVar7 = (uVar7 * 0xffff) / uVar2;
      uVar5 = (uVar5 * 0xffff) / uVar2;
    }
    param_5 = param_5 + 1;
    *param_1 = (uVar3 & 0xffffff00) << 8 | uVar7 & 0xffffff00 | (uVar2 & 0xffffff00) << 0x10 |
               uVar5 >> 8;
    param_1 = param_1 + 1;
  }
  return uVar8;
}

