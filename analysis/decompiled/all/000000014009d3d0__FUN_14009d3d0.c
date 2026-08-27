// Function: FUN_14009d3d0
// Addr: 14009d3d0
// Size: 313 bytes


ulonglong FUN_14009d3d0(ushort *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       byte *param_5,ulonglong param_6)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 1;
  uVar4 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar4 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    bVar1 = param_5[3];
    uVar2 = *param_1;
    iVar3 = (uint)bVar1 * -0x101 + 0xffff;
    *param_1 = ((ushort)((((uVar2 >> 5 & 0x3f) * 0x1041 >> 2) * iVar3 +
                         (uint)param_5[1] * (uint)bVar1 * 0x10201) / 0xffff >> 10) & 0x3f |
               (short)((ulonglong)
                       (((uint)(uVar2 >> 0xb) * 0x8421 >> 4) * iVar3 +
                       (uint)*param_5 * (uint)bVar1 * 0x10201) / 0xffff >> 0xb) << 6) << 5 |
               (ushort)((ulonglong)
                        (((uVar2 & 0x1f) * 0x8421 >> 4) * iVar3 +
                        (uint)param_5[2] * (uint)bVar1 * 0x10201) / 0xffff >> 0xb) & 0x1f;
    param_1 = param_1 + 1;
    param_5 = param_5 + 4;
  }
  return uVar4;
}

