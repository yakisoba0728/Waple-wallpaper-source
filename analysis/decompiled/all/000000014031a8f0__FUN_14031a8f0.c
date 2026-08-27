// Function: FUN_14031a8f0
// Addr: 14031a8f0
// Size: 195 bytes


void FUN_14031a8f0(longlong param_1,int *param_2,int param_3)

{
  if (param_3 == 1) {
    *param_2 = *(int *)(param_1 + 4);
    return;
  }
  if (param_3 == 2) {
    *param_2 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4);
    param_2[1] = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
    return;
  }
  if (param_3 == 3) {
    *param_2 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc) +
               *(int *)(param_1 + 4);
    param_2[1] = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) +
                 *(int *)(param_1 + 0x18);
    param_2[2] = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) +
                 *(int *)(param_1 + 0x18);
    return;
  }
  *param_2 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x3c) +
             *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24) +
             *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4);
  param_2[1] = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x1c) +
               *(int *)(param_1 + 8) + *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0xc) +
               *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x18);
  param_2[2] = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34) +
               *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x3c) +
               *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
  param_2[3] = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34) +
               *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c) +
               *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28);
  return;
}

