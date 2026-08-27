// Function: FUN_1401d8c50
// Addr: 1401d8c50
// Size: 24 bytes


undefined1 * FUN_1401d8c50(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0x12;
  *param_1 = puVar1 + 0x60;
  *(undefined2 *)(puVar1 + 2) = 0x60;
  return puVar1 + 0x10;
}

