// Function: FUN_1404164f0
// Addr: 1404164f0
// Size: 32 bytes


void FUN_1404164f0(longlong param_1,int param_2,int param_3)

{
  if ((*(char *)(param_1 + 4) != '\0') &&
     ((*(int *)(param_1 + 0x28) != param_2 || (*(int *)(param_1 + 0x2c) != param_3)))) {
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
    FUN_1403b3040();
    return;
  }
  return;
}

