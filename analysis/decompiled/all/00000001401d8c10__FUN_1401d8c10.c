// Function: FUN_1401d8c10
// Addr: 1401d8c10
// Size: 27 bytes


undefined1 * FUN_1401d8c10(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0x10;
  *param_1 = puVar1 + 0x120;
  *(undefined2 *)(puVar1 + 2) = 0x120;
  return puVar1 + 0x10;
}

