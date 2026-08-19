// Function: FUN_1403c56e0
// Addr: 1403c56e0
// Size: 83 bytes


undefined8 * FUN_1403c56e0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return (undefined8 *)*param_1;
  }
  if (param_1[-0x1e] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x20);
  }
  return &DAT_14045dde0;
}

