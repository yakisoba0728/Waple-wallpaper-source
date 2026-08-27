// Function: FUN_1400f8540
// Addr: 1400f8540
// Size: 66 bytes


undefined4 * FUN_1400f8540(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140016fc0(param_1 + 2,param_2 + 2);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[0xc] = param_2[0xc];
  return param_1;
}

