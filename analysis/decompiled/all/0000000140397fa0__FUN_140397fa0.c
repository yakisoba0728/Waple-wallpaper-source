// Function: FUN_140397fa0
// Addr: 140397fa0
// Size: 83 bytes


undefined8 * FUN_140397fa0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return (undefined8 *)*param_1;
  }
  if (param_1[-0x26] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x18);
  }
  return &DAT_14045dde0;
}

