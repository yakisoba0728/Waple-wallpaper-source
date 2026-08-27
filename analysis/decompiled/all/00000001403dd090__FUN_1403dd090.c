// Function: FUN_1403dd090
// Addr: 1403dd090
// Size: 132 bytes


undefined8 FUN_1403dd090(undefined8 param_1,longlong param_2)

{
  int *in_stack_00000040;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (in_stack_00000040 == (int *)0x0) {
    return 0;
  }
  local_18 = (float)*in_stack_00000040;
  local_c = (float)in_stack_00000040[1];
  local_14 = (float)in_stack_00000040[3] + local_c;
  local_10 = (float)in_stack_00000040[2] + local_18;
  FUN_1403f5620(param_2,&local_18);
  FUN_1403ed6d0(param_2);
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  }
  return 1;
}

