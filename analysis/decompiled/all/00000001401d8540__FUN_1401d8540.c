// Function: FUN_1401d8540
// Addr: 1401d8540
// Size: 18 bytes


undefined1 * FUN_1401d8540(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0xb;
  *param_1 = puVar1 + 0x44;
  return puVar1 + 4;
}

