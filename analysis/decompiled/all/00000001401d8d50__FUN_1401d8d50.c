// Function: FUN_1401d8d50
// Addr: 1401d8d50
// Size: 24 bytes


undefined1 * FUN_1401d8d50(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0x1a;
  *param_1 = puVar1 + 0x40;
  *(undefined2 *)(puVar1 + 2) = 0x40;
  return puVar1 + 0x10;
}

