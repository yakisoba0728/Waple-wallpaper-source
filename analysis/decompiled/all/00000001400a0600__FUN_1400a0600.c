// Function: FUN_1400a0600
// Addr: 1400a0600
// Size: 431 bytes


ulonglong FUN_1400a0600(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong *param_5,ulonglong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  param_6 = param_6 >> 3;
  param_2 = param_2 >> 2;
  uVar7 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar7 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_1;
    uVar5 = *param_5;
    uVar3 = (ulonglong)((uVar1 >> 0x10 & 0xff) * 0x101);
    uVar2 = uVar5 >> 0x30;
    lVar8 = 0xffff - uVar2;
    uVar6 = (ulonglong)((uVar1 & 0xff) * 0x101);
    uVar4 = (uVar3 << 0x10 | (ulonglong)((uVar1 >> 8 & 0xff) * 0x101)) << 0x10;
    uVar5 = ((((uVar4 & 0xffff00000000) >> 0x20) * lVar8 + (uVar5 >> 0x20 & 0xffff) * uVar2) /
             0xffff << 0x10 |
            (((uVar4 | uVar6) >> 0x10 & 0xffff) * lVar8 + (uVar5 >> 0x10 & 0xffff) * uVar2) / 0xffff
            ) << 0x10 | ((uVar6 & 0xffff) * lVar8 + (uVar5 & 0xffff) * uVar2) / 0xffff;
    uVar6 = uVar5 | (((uVar3 | ((ulonglong)((uVar1 >> 0x18) * 0x101) & 0xffff) << 0x10) >> 0x10) *
                    lVar8) / 0xffff + uVar2 << 0x30;
    param_5 = param_5 + 1;
    *param_1 = (((uint)(uVar6 >> 0x28) & 0xff | (uint)(byte)(uVar6 >> 0x38) << 8) << 8 |
               (uint)(uVar6 >> 0x18) & 0xff) << 8 | (uint)(uVar5 >> 8) & 0xff;
    param_1 = param_1 + 1;
  }
  return uVar7;
}

