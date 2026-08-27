// Function: FUN_1400a00f0
// Addr: 1400a00f0
// Size: 472 bytes


ulonglong FUN_1400a00f0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 3;
  uVar9 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar9 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    uVar3 = *param_1;
    uVar5 = (ulonglong)((uVar1 & 0xff) * 0x101);
    uVar6 = uVar3 >> 0x30;
    uVar2 = (ulonglong)((uVar1 >> 0x10 & 0xff) * 0x101);
    uVar4 = (uVar5 << 0x10 | (ulonglong)((uVar1 >> 8 & 0xff) * 0x101)) << 0x10;
    uVar5 = (((ulonglong)((uVar1 >> 0x18) * 0x101) & 0xffff) << 0x10 | uVar5) >> 0x10;
    lVar7 = 0xffff - uVar5;
    uVar5 = (lVar7 * uVar6) / 0xffff + uVar5;
    uVar8 = ((uVar4 & 0xffff00000000) >> 0x20) +
            (lVar7 * (((uVar3 >> 0x20 & 0xffff) * uVar6) / 0xffff)) / 0xffff;
    uVar4 = ((uVar4 | uVar2) >> 0x10 & 0xffff) +
            (lVar7 * (((uVar3 >> 0x10 & 0xffff) * uVar6) / 0xffff)) / 0xffff;
    uVar3 = (lVar7 * (((uVar3 & 0xffff) * uVar6) / 0xffff)) / 0xffff + (uVar2 & 0xffff);
    if (uVar5 != 0) {
      uVar8 = (uVar8 * 0xffff) / uVar5;
      uVar4 = (uVar4 * 0xffff) / uVar5;
      uVar3 = (uVar3 * 0xffff) / uVar5;
    }
    param_5 = param_5 + 1;
    *param_1 = ((uVar5 * 0x10000 | uVar8) << 0x10 | uVar4) << 0x10 | uVar3;
    param_1 = param_1 + 1;
  }
  return uVar9;
}

