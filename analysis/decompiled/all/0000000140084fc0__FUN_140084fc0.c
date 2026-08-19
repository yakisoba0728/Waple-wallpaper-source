// Function: FUN_140084fc0
// Addr: 140084fc0
// Size: 21 bytes


longlong * FUN_140084fc0(longlong *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffeff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (longlong)param_2;
  return param_1;
}

