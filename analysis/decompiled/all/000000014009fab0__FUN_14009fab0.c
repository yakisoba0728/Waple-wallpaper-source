// Function: FUN_14009fab0
// Addr: 14009fab0
// Size: 585 bytes


ulonglong FUN_14009fab0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

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
  
  if (param_4 == 0x400) {
    param_2 = param_2 >> 3;
    uVar11 = param_6;
    if (param_2 < param_6) {
      param_6 = param_2;
      uVar11 = param_2;
    }
    for (; param_6 != 0; param_6 = param_6 - 1) {
      uVar2 = *param_1;
      uVar1 = *(uint *)(param_3 + (ulonglong)*param_5 * 4);
      uVar4 = (ulonglong)((uVar1 >> 0x10 & 0xff) * 0x101);
      uVar7 = (ulonglong)((uVar1 >> 0x18) * 0x101) << 0x10;
      uVar3 = (ulonglong)((uVar1 & 0xff) * 0x101);
      uVar5 = ((uVar4 | uVar7) << 0x10 | (ulonglong)((uVar1 >> 8 & 0xff) * 0x101)) << 0x10;
      uVar6 = uVar5 | uVar3;
      if (0xffffffffffff < uVar2) {
        uVar10 = (uVar4 | uVar7 & 0xffffffff) >> 0x10;
        uVar8 = uVar2 >> 0x30;
        lVar9 = 0xffff - uVar10;
        uVar4 = (lVar9 * uVar8) / 0xffff + uVar10;
        uVar5 = (((uVar5 & 0xffff00000000) >> 0x20) * uVar10 +
                lVar9 * (((uVar2 >> 0x20 & 0xffff) * uVar8) / 0xffff)) / 0xffff;
        uVar7 = ((uVar6 >> 0x10 & 0xffff) * uVar10 +
                lVar9 * (((uVar2 >> 0x10 & 0xffff) * uVar8) / 0xffff)) / 0xffff;
        uVar6 = ((uVar3 & 0xffff) * uVar10 + lVar9 * (((uVar2 & 0xffff) * uVar8) / 0xffff)) / 0xffff
        ;
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
    }
    return uVar11;
  }
  return 0;
}

