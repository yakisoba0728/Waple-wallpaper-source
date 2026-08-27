// Function: FUN_14009f3b0
// Addr: 14009f3b0
// Size: 535 bytes


ulonglong FUN_14009f3b0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

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
  
  uVar12 = param_6 >> 2;
  if (param_2 >> 3 < param_6 >> 2) {
    uVar12 = param_2 >> 3;
  }
  uVar8 = uVar12;
  if (uVar12 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_5;
    uVar2 = *param_1;
    uVar4 = (ulonglong)((uVar1 >> 0x10 & 0xff) * 0x101);
    uVar7 = (ulonglong)((uVar1 >> 0x18) * 0x101) << 0x10;
    uVar3 = (ulonglong)((uVar1 & 0xff) * 0x101);
    uVar5 = ((uVar4 | uVar7) << 0x10 | (ulonglong)((uVar1 >> 8 & 0xff) * 0x101)) << 0x10;
    uVar6 = uVar5 | uVar3;
    if (0xffffffffffff < uVar2) {
      uVar11 = (uVar4 | uVar7 & 0xffffffff) >> 0x10;
      uVar9 = uVar2 >> 0x30;
      lVar10 = 0xffff - uVar11;
      uVar4 = (lVar10 * uVar9) / 0xffff + uVar11;
      uVar5 = (((uVar5 & 0xffff00000000) >> 0x20) * uVar11 +
              lVar10 * (((uVar2 >> 0x20 & 0xffff) * uVar9) / 0xffff)) / 0xffff;
      uVar7 = ((uVar6 >> 0x10 & 0xffff) * uVar11 +
              lVar10 * (((uVar2 >> 0x10 & 0xffff) * uVar9) / 0xffff)) / 0xffff;
      uVar6 = ((uVar3 & 0xffff) * uVar11 + lVar10 * (((uVar2 & 0xffff) * uVar9) / 0xffff)) / 0xffff;
      if (uVar4 != 0) {
        uVar5 = (uVar5 * 0xffff) / uVar4;
        uVar7 = (uVar7 * 0xffff) / uVar4;
        uVar6 = (uVar6 * 0xffff) / uVar4;
      }
      uVar6 = ((uVar4 * 0x10000 | uVar5) << 0x10 | uVar7) << 0x10 | uVar6;
    }
    *param_1 = uVar6;
    param_5 = param_5 + 1;
    param_1 = param_1 + 1;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
  return uVar12;
}

