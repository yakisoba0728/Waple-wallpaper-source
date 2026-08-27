// Function: FUN_1401d85a0
// Addr: 1401d85a0
// Size: 24 bytes


undefined1 * FUN_1401d85a0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 5;
  *param_1 = puVar1 + 0x34;
  *(undefined2 *)(puVar1 + 2) = 0x34;
  return puVar1 + 4;
}

