// Function: FUN_1403c52c0
// Addr: 1403c52c0
// Size: 96 bytes


undefined8 * FUN_1403c52c0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return (undefined8 *)*param_1;
  }
  if (param_1[-0xf] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x38);
  }
  return &DAT_14045dde0;
}

