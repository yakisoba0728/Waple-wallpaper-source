// Function: FUN_1401d8ab0
// Addr: 1401d8ab0
// Size: 24 bytes


undefined1 * FUN_1401d8ab0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 6;
  *param_1 = puVar1 + 0x50;
  *(undefined2 *)(puVar1 + 2) = 0x50;
  return puVar1 + 0x10;
}

