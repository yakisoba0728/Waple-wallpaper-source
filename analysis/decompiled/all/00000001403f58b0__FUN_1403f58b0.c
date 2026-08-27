// Function: FUN_1403f58b0
// Addr: 1403f58b0
// Size: 46 bytes


void FUN_1403f58b0(undefined1 *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < 0x201) {
    *(uint *)(param_1 + 4) = uVar1 + 1;
    *(double *)(param_1 + (ulonglong)uVar1 * 8 + 8) = (double)param_2;
    return;
  }
  *param_1 = 1;
  DAT_1404e4f20 = (double)param_2;
  return;
}

