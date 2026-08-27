// Function: FUN_14009ee60
// Addr: 14009ee60
// Size: 520 bytes


ulonglong FUN_14009ee60(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 2;
  uVar9 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar9 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar5 = *param_5;
    uVar4 = *param_1;
    uVar1 = uVar5 >> 0x10 & 0xff;
    uVar2 = uVar1 | (uVar5 & 0xff) << 0x10 | uVar5 & 0xff00ff00;
    if (0xffffff < uVar4) {
      uVar3 = uVar5 >> 0x18;
      uVar6 = uVar4 >> 0x18;
      iVar7 = uVar3 * -0x101 + 0xffff;
      uVar2 = ((uVar3 * -0x10201 + 0x100feff) * uVar6) / 0xffff + uVar3 * 0x101;
      uVar8 = ((((uVar4 >> 0x10 & 0xff) * uVar6 * 0x10201) / 0xffff) * iVar7 +
              (uVar5 & 0xff) * uVar3 * 0x10201) / 0xffff;
      uVar5 = ((((uVar4 >> 8 & 0xff) * uVar6 * 0x10201) / 0xffff) * iVar7 +
              ((uVar5 & 0xff00) >> 8) * uVar3 * 0x10201) / 0xffff;
      uVar4 = ((((uVar4 & 0xff) * uVar6 * 0x10201) / 0xffff) * iVar7 + uVar1 * uVar3 * 0x10201) /
              0xffff;
      if (uVar2 != 0) {
        uVar8 = (uVar8 * 0xffff) / uVar2;
        uVar5 = (uVar5 * 0xffff) / uVar2;
        uVar4 = (uVar4 * 0xffff) / uVar2;
      }
      uVar2 = (uVar8 & 0xffffff00) << 8 | uVar5 & 0xffffff00 | (uVar2 & 0xffffff00) << 0x10 |
              uVar4 >> 8;
    }
    *param_1 = uVar2;
    param_5 = param_5 + 1;
    param_1 = param_1 + 1;
  }
  return uVar9;
}

