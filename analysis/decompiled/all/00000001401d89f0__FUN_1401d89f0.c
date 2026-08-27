// Function: FUN_1401d89f0
// Addr: 1401d89f0
// Size: 27 bytes


undefined1 * FUN_1401d89f0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 2;
  *param_1 = puVar1 + 0x90;
  *(undefined2 *)(puVar1 + 2) = 0x90;
  return puVar1 + 0x10;
}

