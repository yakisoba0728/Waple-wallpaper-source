// Function: FUN_1403f0d00
// Addr: 1403f0d00
// Size: 45 bytes


int FUN_1403f0d00(undefined1 *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(int *)(param_1 + 4) - 1;
    *(uint *)(param_1 + 4) = uVar1;
    return (int)*(double *)(param_1 + (ulonglong)uVar1 * 8 + 8);
  }
  *param_1 = 1;
  DAT_1404e4f20 = DAT_14045dd10;
  return (int)DAT_14045dd10;
}

