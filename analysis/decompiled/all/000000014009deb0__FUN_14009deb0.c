// Function: FUN_14009deb0
// Addr: 14009deb0
// Size: 245 bytes


ulonglong FUN_14009deb0(byte *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ushort *param_5,ulonglong param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  int iVar6;
  
  param_6 = param_6 >> 3;
  param_2 = param_2 / 3;
  uVar5 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar5 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = param_5[3];
    uVar2 = *param_5;
    uVar3 = param_5[1];
    uVar4 = param_5[2];
    param_5 = param_5 + 4;
    iVar6 = (uint)uVar1 * -0x101 + 0x100feff;
    *param_1 = (byte)((ulonglong)((uint)uVar2 * (uint)uVar1 + (uint)*param_1 * iVar6) / 0xffff >> 8)
    ;
    param_1[1] = (byte)((ulonglong)((uint)param_1[1] * iVar6 + (uint)uVar3 * (uint)uVar1) / 0xffff
                       >> 8);
    param_1[2] = (byte)((ulonglong)((uint)param_1[2] * iVar6 + (uint)uVar4 * (uint)uVar1) / 0xffff
                       >> 8);
    param_1 = param_1 + 3;
  }
  return uVar5;
}

