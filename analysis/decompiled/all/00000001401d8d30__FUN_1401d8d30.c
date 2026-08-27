// Function: FUN_1401d8d30
// Addr: 1401d8d30
// Size: 27 bytes


undefined1 * FUN_1401d8d30(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0x19;
  *param_1 = puVar1 + 0x140;
  *(undefined2 *)(puVar1 + 2) = 0x140;
  return puVar1 + 0x10;
}

