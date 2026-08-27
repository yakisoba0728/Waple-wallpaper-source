// Function: FUN_14009e3c0
// Addr: 14009e3c0
// Size: 251 bytes


ulonglong FUN_14009e3c0(byte *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       byte *param_5,ulonglong param_6)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 / 3;
  uVar3 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar3 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    bVar1 = param_5[1];
    bVar2 = *param_5;
    iVar4 = (uint)param_5[3] * -0x10201 + 0x100feff;
    *param_1 = (byte)(((uint)*param_1 * iVar4) / 0xffff + (uint)param_5[2] * 0x101 >> 8);
    param_1[1] = (byte)(((uint)param_1[1] * iVar4) / 0xffff + (uint)bVar1 * 0x101 >> 8);
    param_1[2] = (byte)(((uint)param_1[2] * iVar4) / 0xffff + (uint)bVar2 * 0x101 >> 8);
    param_1 = param_1 + 3;
    param_5 = param_5 + 4;
  }
  return uVar3;
}

