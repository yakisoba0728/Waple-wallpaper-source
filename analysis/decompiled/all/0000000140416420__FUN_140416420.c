// Function: FUN_140416420
// Addr: 140416420
// Size: 32 bytes


void FUN_140416420(longlong param_1,int param_2,int param_3)

{
  if ((*(char *)(param_1 + 4) != '\0') &&
     ((*(int *)(param_1 + 0x28) != param_2 || (*(int *)(param_1 + 0x2c) != param_3)))) {
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
    FUN_1403b2f70();
    return;
  }
  return;
}

