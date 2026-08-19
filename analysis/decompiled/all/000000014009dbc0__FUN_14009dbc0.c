// Function: FUN_14009dbc0
// Addr: 14009dbc0
// Size: 31 bytes


ulonglong FUN_14009dbc0(byte *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ushort *param_5,ulonglong param_6)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  
  param_6 = param_6 >> 1;
  param_2 = param_2 / 3;
  uVar3 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar3 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    iVar2 = ((((uVar1 >> 0xb | 0xffffffe0) << 9 | uVar1 >> 5 & 0x3f) << 6 |
             (uVar1 >> 0xb & 0xfffffffc) << 10 | uVar1 >> 5 & 0x30) * 2 | uVar1 & 0x1f) << 3;
    *param_1 = (byte)iVar2 | (byte)((uVar1 & 0x1f) >> 2);
    param_1[1] = (byte)((uint)iVar2 >> 8);
    param_1[2] = (byte)((uint)iVar2 >> 0x10);
    param_1 = param_1 + 3;
  }
  return uVar3;
}

