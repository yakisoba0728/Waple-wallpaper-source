// Function: FUN_140084ef0
// Addr: 140084ef0
// Size: 35 bytes


longlong * FUN_140084ef0(longlong *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffeff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (longlong)param_2;
  return param_1;
}

