// Function: FUN_1401d8950
// Addr: 1401d8950
// Size: 18 bytes


undefined1 * FUN_1401d8950(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 4;
  *param_1 = puVar1 + 0x24;
  return puVar1 + 4;
}

