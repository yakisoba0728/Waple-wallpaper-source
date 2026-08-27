// Function: FUN_1401d8430
// Addr: 1401d8430
// Size: 18 bytes


undefined1 * FUN_1401d8430(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 7;
  *param_1 = puVar1 + 0x2c;
  return puVar1 + 4;
}

