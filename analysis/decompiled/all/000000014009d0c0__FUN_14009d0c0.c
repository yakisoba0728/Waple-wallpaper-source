// Function: FUN_14009d0c0
// Addr: 14009d0c0
// Size: 306 bytes


ulonglong FUN_14009d0c0(ushort *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       byte *param_5,ulonglong param_6)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 1;
  uVar2 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar2 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_1;
    iVar3 = (uint)param_5[3] * -0x101 + 0xffff;
    *param_1 = ((ushort)((((uVar1 >> 5 & 0x3f) * 0x1041 >> 2) * iVar3) / 0xffff +
                         (uint)param_5[1] * 0x101 >> 10) & 0x3f |
               (short)((((uint)(uVar1 >> 0xb) * 0x8421 >> 4) * iVar3) / 0xffff +
                       (uint)param_5[2] * 0x101 >> 0xb) << 6) << 5 |
               (ushort)((((uVar1 & 0x1f) * 0x8421 >> 4) * iVar3) / 0xffff + (uint)*param_5 * 0x101
                       >> 0xb) & 0x1f;
    param_1 = param_1 + 1;
    param_5 = param_5 + 4;
  }
  return uVar2;
}

