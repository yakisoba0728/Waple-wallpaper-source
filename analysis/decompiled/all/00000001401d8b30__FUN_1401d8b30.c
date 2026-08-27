// Function: FUN_1401d8b30
// Addr: 1401d8b30
// Size: 27 bytes


undefined1 * FUN_1401d8b30(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 10;
  *param_1 = puVar1 + 0xc0;
  *(undefined2 *)(puVar1 + 2) = 0xc0;
  return puVar1 + 0x10;
}

