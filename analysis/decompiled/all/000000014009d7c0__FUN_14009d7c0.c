// Function: FUN_14009d7c0
// Addr: 14009d7c0
// Size: 37 bytes


ulonglong FUN_14009d7c0(ushort *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       byte *param_5,ulonglong param_6)

{
  byte bVar1;
  ulonglong uVar2;
  ushort uVar3;
  
  param_2 = param_2 >> 1;
  uVar2 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar2 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    bVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar3 = (ushort)(bVar1 >> 3);
    *param_1 = ((ushort)(bVar1 >> 2) | uVar3 << 6) << 5 | uVar3;
    param_1 = param_1 + 1;
  }
  return uVar2;
}

