// Function: FUN_1403985e0
// Addr: 1403985e0
// Size: 28 bytes


undefined8 * FUN_1403985e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if ((puVar1 == (undefined8 *)0x0) && (puVar1 = &DAT_14045dde0, param_1[-0x10] != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x138);
  }
  return puVar1;
}

