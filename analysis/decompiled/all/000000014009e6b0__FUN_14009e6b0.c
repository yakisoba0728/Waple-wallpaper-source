// Function: FUN_14009e6b0
// Addr: 14009e6b0
// Size: 136 bytes


ulonglong FUN_14009e6b0(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,ulonglong param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  param_6 = param_6 >> 3;
  param_2 = param_2 >> 2;
  uVar2 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar2 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    *param_1 = (((uint)((ulonglong)uVar1 >> 0x28) & 0xff |
                (uint)(byte)((ulonglong)uVar1 >> 0x38) << 8) << 8 |
               (uint)((ulonglong)uVar1 >> 0x18) & 0xff) << 8 | (uint)((ulonglong)uVar1 >> 8) & 0xff;
    param_1 = param_1 + 1;
  }
  return uVar2;
}

