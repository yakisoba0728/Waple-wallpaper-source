// Function: FUN_1400a0ed0
// Addr: 1400a0ed0
// Size: 201 bytes


ulonglong FUN_1400a0ed0(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong *param_5,ulonglong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  param_6 = param_6 >> 3;
  param_2 = param_2 >> 2;
  uVar6 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar6 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_1;
    uVar2 = *param_5;
    uVar4 = (ulonglong)((uVar1 >> 0x10 & 0xff) * 0x101);
    uVar8 = uVar2 >> 0x30;
    lVar7 = 0xffff - uVar8;
    uVar3 = (ulonglong)((uVar1 & 0xff) * 0x101);
    uVar5 = (uVar4 << 0x10 | (ulonglong)((uVar1 >> 8 & 0xff) * 0x101)) << 0x10;
    uVar2 = ((((uVar5 | uVar3) >> 0x10 & 0xffff) * lVar7 + (uVar2 >> 0x10 & 0xffff) * uVar8) /
             0xffff | (((uVar5 & 0xffff00000000) >> 0x20) * lVar7 + (uVar2 & 0xffff) * uVar8) /
                      0xffff << 0x10) << 0x10 |
            ((uVar2 >> 0x20 & 0xffff) * uVar8 + (uVar3 & 0xffff) * lVar7) / 0xffff;
    uVar3 = uVar2 | (((uVar4 | ((ulonglong)((uVar1 >> 0x18) * 0x101) & 0xffff) << 0x10) >> 0x10) *
                    lVar7) / 0xffff + uVar8 << 0x30;
    param_5 = param_5 + 1;
    *param_1 = (((uint)(uVar3 >> 0x28) & 0xff | (uint)(byte)(uVar3 >> 0x38) << 8) << 8 |
               (uint)(uVar3 >> 0x18) & 0xff) << 8 | (uint)(uVar2 >> 8) & 0xff;
    param_1 = param_1 + 1;
  }
  return uVar6;
}

