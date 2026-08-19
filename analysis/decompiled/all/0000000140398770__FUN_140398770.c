// Function: FUN_140398770
// Addr: 140398770
// Size: 80 bytes


undefined8 * FUN_140398770(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return (undefined8 *)*param_1;
  }
  if (param_1[-3] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x60);
  }
  return &DAT_14045dde0;
}

