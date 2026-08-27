// Function: FUN_14009dda0
// Addr: 14009dda0
// Size: 263 bytes


ulonglong FUN_14009dda0(byte *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       byte *param_5,ulonglong param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 / 3;
  uVar4 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar4 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    bVar1 = param_5[3];
    bVar2 = param_5[1];
    bVar3 = param_5[2];
    iVar5 = (uint)bVar1 * -0x10201 + 0x100feff;
    *param_1 = (byte)((ulonglong)((uint)*param_5 * (uint)bVar1 * 0x10201 + (uint)*param_1 * iVar5) /
                      0xffff >> 8);
    param_1[1] = (byte)((ulonglong)((uint)param_1[1] * iVar5 + (uint)bVar2 * (uint)bVar1 * 0x10201)
                        / 0xffff >> 8);
    param_1[2] = (byte)((ulonglong)((uint)param_1[2] * iVar5 + (uint)bVar3 * (uint)bVar1 * 0x10201)
                        / 0xffff >> 8);
    param_1 = param_1 + 3;
    param_5 = param_5 + 4;
  }
  return uVar4;
}

