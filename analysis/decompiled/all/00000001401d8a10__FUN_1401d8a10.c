// Function: FUN_1401d8a10
// Addr: 1401d8a10
// Size: 18 bytes


undefined1 * FUN_1401d8a10(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 9;
  *param_1 = puVar1 + 0x34;
  return puVar1 + 4;
}

