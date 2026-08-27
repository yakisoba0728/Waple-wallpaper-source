// Function: FUN_140084f20
// Addr: 140084f20
// Size: 34 bytes


ulonglong * FUN_140084f20(ulonglong *param_1,uint param_2)

{
  *(undefined1 *)(param_1 + 1) = 2;
  *(uint *)(param_1 + 1) = (uint)param_1[1] & 0xfffffeff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (ulonglong)param_2;
  return param_1;
}

