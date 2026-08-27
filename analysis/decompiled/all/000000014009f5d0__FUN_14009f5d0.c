// Function: FUN_14009f5d0
// Addr: 14009f5d0
// Size: 462 bytes


ulonglong FUN_14009f5d0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong *param_5,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = param_6 >> 3;
  if (param_2 >> 3 < param_6 >> 3) {
    uVar10 = param_2 >> 3;
  }
  uVar4 = uVar10;
  if (uVar10 == 0) {
    return 0;
  }
  do {
    uVar2 = *param_1;
    uVar7 = *param_5;
    if (0xffffffffffff < uVar2) {
      uVar9 = uVar7 >> 0x30;
      uVar6 = uVar2 >> 0x30;
      lVar8 = 0xffff - uVar9;
      uVar1 = (lVar8 * uVar6) / 0xffff + uVar9;
      uVar3 = ((uVar7 >> 0x20 & 0xffff) * uVar9 +
              lVar8 * (((uVar2 >> 0x20 & 0xffff) * uVar6) / 0xffff)) / 0xffff;
      uVar5 = ((uVar7 >> 0x10 & 0xffff) * uVar9 +
              lVar8 * (((uVar2 >> 0x10 & 0xffff) * uVar6) / 0xffff)) / 0xffff;
      uVar7 = ((uVar7 & 0xffff) * uVar9 + lVar8 * (((uVar2 & 0xffff) * uVar6) / 0xffff)) / 0xffff;
      if (uVar1 != 0) {
        uVar3 = (uVar3 * 0xffff) / uVar1;
        uVar5 = (uVar5 * 0xffff) / uVar1;
        uVar7 = (uVar7 * 0xffff) / uVar1;
      }
      uVar7 = ((uVar1 * 0x10000 | uVar3) << 0x10 | uVar5) << 0x10 | uVar7;
    }
    *param_1 = uVar7;
    param_5 = param_5 + 1;
    param_1 = param_1 + 1;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return uVar10;
}

