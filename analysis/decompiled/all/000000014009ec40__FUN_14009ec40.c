// Function: FUN_14009ec40
// Addr: 14009ec40
// Size: 538 bytes


ulonglong FUN_14009ec40(uint *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

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
  
  if (param_4 == 0x400) {
    param_2 = param_2 >> 2;
    uVar9 = param_6;
    if (param_2 < param_6) {
      param_6 = param_2;
      uVar9 = param_2;
    }
    for (; param_6 != 0; param_6 = param_6 - 1) {
      uVar4 = *param_1;
      uVar2 = *(uint *)(param_3 + (ulonglong)*param_5 * 4);
      if (0xffffff < uVar4) {
        uVar3 = uVar2 >> 0x18;
        uVar6 = uVar4 >> 0x18;
        iVar7 = uVar3 * -0x101 + 0xffff;
        uVar1 = ((uVar3 * -0x10201 + 0x100feff) * uVar6) / 0xffff + uVar3 * 0x101;
        uVar8 = ((((uVar4 >> 0x10 & 0xff) * uVar6 * 0x10201) / 0xffff) * iVar7 +
                (uVar2 >> 0x10 & 0xff) * uVar3 * 0x10201) / 0xffff;
        uVar5 = ((((uVar4 >> 8 & 0xff) * uVar6 * 0x10201) / 0xffff) * iVar7 +
                (uVar2 >> 8 & 0xff) * uVar3 * 0x10201) / 0xffff;
        uVar4 = ((((uVar4 & 0xff) * uVar6 * 0x10201) / 0xffff) * iVar7 +
                (uVar2 & 0xff) * uVar3 * 0x10201) / 0xffff;
        if (uVar1 != 0) {
          uVar8 = (uVar8 * 0xffff) / uVar1;
          uVar5 = (uVar5 * 0xffff) / uVar1;
          uVar4 = (uVar4 * 0xffff) / uVar1;
        }
        uVar2 = (uVar8 & 0xffffff00) << 8 | uVar5 & 0xffffff00 | (uVar1 & 0xffffff00) << 0x10 |
                uVar4 >> 8;
      }
      *param_1 = uVar2;
      param_5 = param_5 + 1;
      param_1 = param_1 + 1;
    }
    return uVar9;
  }
  return 0;
}

