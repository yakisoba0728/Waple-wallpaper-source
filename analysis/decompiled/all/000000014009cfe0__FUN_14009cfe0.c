// Function: FUN_14009cfe0
// Addr: 14009cfe0
// Size: 56 bytes


ulonglong FUN_14009cfe0(ushort *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ushort *param_5,ulonglong param_6)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  int iVar4;
  
  param_6 = param_6 >> 3;
  param_2 = param_2 >> 1;
  uVar3 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar3 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = param_5[3];
    uVar2 = *param_1;
    iVar4 = 0xffff - (uint)uVar1;
    *param_1 = ((ushort)((((uVar2 >> 5 & 0x3f) * 0x1041 >> 2) * iVar4 +
                         (uint)param_5[1] * (uint)uVar1) / 0xffff >> 10) & 0x3f |
               (short)((ulonglong)
                       (((uint)(uVar2 >> 0xb) * 0x8421 >> 4) * iVar4 +
                       (uint)param_5[2] * (uint)uVar1) / 0xffff >> 0xb) << 6) << 5 |
               (ushort)((ulonglong)
                        (((uVar2 & 0x1f) * 0x8421 >> 4) * iVar4 + (uint)*param_5 * (uint)uVar1) /
                        0xffff >> 0xb) & 0x1f;
    param_1 = param_1 + 1;
    param_5 = param_5 + 4;
  }
  return uVar3;
}

