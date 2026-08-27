// Function: FUN_1401d8800
// Addr: 1401d8800
// Size: 18 bytes


undefined1 * FUN_1401d8800(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 10;
  *param_1 = puVar1 + 0x3c;
  return puVar1 + 4;
}

