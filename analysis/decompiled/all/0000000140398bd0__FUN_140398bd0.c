// Function: FUN_140398bd0
// Addr: 140398bd0
// Size: 80 bytes


undefined8 * FUN_140398bd0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    return (undefined8 *)*param_1;
  }
  if (param_1[-7] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x38);
  }
  return &DAT_14045dde0;
}

