// Function: FUN_1403c5500
// Addr: 1403c5500
// Size: 80 bytes


undefined8 * FUN_1403c5500(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return (undefined8 *)*param_1;
  }
  if (param_1[-5] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x28);
  }
  return &DAT_14045dde0;
}

