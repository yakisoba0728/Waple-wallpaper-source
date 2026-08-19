// Function: FUN_1403c5040
// Addr: 1403c5040
// Size: 83 bytes


undefined8 * FUN_1403c5040(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return (undefined8 *)*param_1;
  }
  if (param_1[-0x1a] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x18);
  }
  return &DAT_14045dde0;
}

