// Function: FUN_1401d8910
// Addr: 1401d8910
// Size: 18 bytes


undefined1 * FUN_1401d8910(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 3;
  *param_1 = puVar1 + 0x24;
  return puVar1 + 4;
}

