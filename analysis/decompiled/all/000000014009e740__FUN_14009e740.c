// Function: FUN_14009e740
// Addr: 14009e740
// Size: 586 bytes


ulonglong FUN_14009e740(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong *param_5,ulonglong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = param_6 >> 3;
  if (param_2 >> 2 < param_6 >> 3) {
    uVar11 = param_2 >> 2;
  }
  uVar12 = uVar11;
  if (uVar11 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    uVar6 = (ulonglong)((uVar1 >> 0x10 & 0xff) * 0x101);
    uVar3 = (ulonglong)((uVar1 >> 0x18) * 0x101) << 0x10;
    uVar8 = *param_5;
    uVar2 = (ulonglong)((uVar1 & 0xff) * 0x101);
    uVar4 = ((uVar6 | uVar3) << 0x10 | (ulonglong)((uVar1 >> 8 & 0xff) * 0x101)) << 0x10;
    uVar5 = uVar4 | uVar2;
    if (0xffffffffffff < uVar5) {
      uVar10 = uVar8 >> 0x30;
      uVar7 = (uVar6 | uVar3 & 0xffffffff) >> 0x10;
      lVar9 = 0xffff - uVar10;
      uVar3 = (lVar9 * uVar7) / 0xffff + uVar10;
      uVar6 = ((uVar8 >> 0x20 & 0xffff) * uVar10 +
              lVar9 * ((((uVar4 & 0xffff00000000) >> 0x20) * uVar7) / 0xffff)) / 0xffff;
      uVar4 = ((uVar8 >> 0x10 & 0xffff) * uVar10 +
              lVar9 * (((uVar5 >> 0x10 & 0xffff) * uVar7) / 0xffff)) / 0xffff;
      uVar8 = ((uVar8 & 0xffff) * uVar10 + lVar9 * (((uVar2 & 0xffff) * uVar7) / 0xffff)) / 0xffff;
      if (uVar3 != 0) {
        uVar6 = (uVar6 * 0xffff) / uVar3;
        uVar4 = (uVar4 * 0xffff) / uVar3;
        uVar8 = (uVar8 * 0xffff) / uVar3;
      }
      uVar8 = ((uVar3 * 0x10000 | uVar6) << 0x10 | uVar4) << 0x10 | uVar8;
    }
    param_5 = param_5 + 1;
    uVar12 = uVar12 - 1;
    *param_1 = (((uint)(uVar8 >> 0x28) & 0xff | (uint)(byte)(uVar8 >> 0x38) << 8) << 8 |
               (uint)(uVar8 >> 0x18) & 0xff) << 8 | (uint)(byte)(uVar8 >> 8);
    param_1 = param_1 + 1;
  } while (uVar12 != 0);
  return uVar11;
}

