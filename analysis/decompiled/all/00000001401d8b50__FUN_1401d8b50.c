// Function: FUN_1401d8b50
// Addr: 1401d8b50
// Size: 18 bytes


undefined1 * FUN_1401d8b50(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 5;
  *param_1 = puVar1 + 0x24;
  return puVar1 + 4;
}

