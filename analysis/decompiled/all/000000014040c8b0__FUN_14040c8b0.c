// Function: FUN_14040c8b0
// Addr: 14040c8b0
// Size: 80 bytes


byte * FUN_14040c8b0(byte *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 0x7f) == 0) {
    uVar1 = param_1[1] - 1;
    if (param_1[1] <= uVar1) {
      return (byte *)((longlong)&DAT_14045dd10 + 1);
    }
    return param_1 + (ulonglong)uVar1 + 3;
  }
  if ((*param_1 & 0x7f) != 1) {
    return (byte *)&DAT_14045dd10;
  }
  uVar1 = param_1[1] - 1;
  if (param_1[1] <= uVar1) {
    return (byte *)((longlong)&DAT_14045dd10 + 2);
  }
  return param_1 + ((ulonglong)uVar1 + 2) * 2;
}

