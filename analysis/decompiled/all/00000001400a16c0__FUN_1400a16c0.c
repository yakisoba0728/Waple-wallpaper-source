// Function: FUN_1400a16c0
// Addr: 1400a16c0
// Size: 638 bytes


ulonglong FUN_1400a16c0(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
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
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar12 = param_6 >> 3;
  if (param_2 >> 2 < param_6 >> 3) {
    uVar12 = param_2 >> 2;
  }
  uVar13 = uVar12;
  if (uVar12 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    uVar8 = (ulonglong)((uVar1 >> 0x10 & 0xff) * 0x101);
    uVar3 = (ulonglong)((uVar1 >> 0x18) * 0x101) << 0x10;
    uVar9 = *param_5;
    uVar2 = (ulonglong)((uVar1 & 0xff) * 0x101);
    uVar6 = ((uVar8 | uVar3) << 0x10 | (ulonglong)((uVar1 >> 8 & 0xff) * 0x101)) << 0x10;
    uVar7 = uVar6 | uVar2;
    uVar4 = uVar9 >> 0x20 & 0xffff;
    uVar5 = uVar4 | (uVar9 & 0xffff) << 0x20 | uVar9 & 0xffff0000ffff0000;
    if (0xffffffffffff < uVar7) {
      uVar11 = uVar9 >> 0x30;
      uVar5 = (uVar8 | uVar3 & 0xffffffff) >> 0x10;
      lVar10 = 0xffff - uVar11;
      uVar3 = (lVar10 * uVar5) / 0xffff + uVar11;
      uVar8 = ((uVar9 & 0xffff) * uVar11 +
              lVar10 * ((((uVar6 & 0xffff00000000) >> 0x20) * uVar5) / 0xffff)) / 0xffff;
      uVar9 = (((uVar9 & 0xffff0000) >> 0x10) * uVar11 +
              lVar10 * (((uVar7 >> 0x10 & 0xffff) * uVar5) / 0xffff)) / 0xffff;
      uVar5 = (uVar4 * uVar11 + lVar10 * (((uVar2 & 0xffff) * uVar5) / 0xffff)) / 0xffff;
      if (uVar3 != 0) {
        uVar8 = (uVar8 * 0xffff) / uVar3;
        uVar9 = (uVar9 * 0xffff) / uVar3;
        uVar5 = (uVar5 * 0xffff) / uVar3;
      }
      uVar5 = ((uVar3 * 0x10000 | uVar8) << 0x10 | uVar9) << 0x10 | uVar5;
    }
    param_5 = param_5 + 1;
    uVar13 = uVar13 - 1;
    *param_1 = (((uint)(uVar5 >> 0x28) & 0xff | (uint)(byte)(uVar5 >> 0x38) << 8) << 8 |
               (uint)(uVar5 >> 0x18) & 0xff) << 8 | (uint)(byte)(uVar5 >> 8);
    param_1 = param_1 + 1;
  } while (uVar13 != 0);
  return uVar12;
}

