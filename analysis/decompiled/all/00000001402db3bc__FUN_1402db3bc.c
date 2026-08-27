// Function: FUN_1402db3bc
// Addr: 1402db3bc
// Size: 71 bytes


void FUN_1402db3bc(undefined2 *param_1)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_1402db158(local_18);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}

