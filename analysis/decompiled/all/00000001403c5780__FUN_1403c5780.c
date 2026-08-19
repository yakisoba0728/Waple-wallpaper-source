// Function: FUN_1403c5780
// Addr: 1403c5780
// Size: 83 bytes


undefined8 * FUN_1403c5780(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return (undefined8 *)*param_1;
  }
  if (param_1[-0x1d] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x20);
  }
  return &DAT_14045dde0;
}

