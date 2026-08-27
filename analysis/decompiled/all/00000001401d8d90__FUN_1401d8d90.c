// Function: FUN_1401d8d90
// Addr: 1401d8d90
// Size: 24 bytes


undefined1 * FUN_1401d8d90(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 2;
  *param_1 = puVar1 + 0x4c;
  *(undefined2 *)(puVar1 + 2) = 0x4c;
  return puVar1 + 4;
}

