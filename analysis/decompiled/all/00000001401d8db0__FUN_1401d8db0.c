// Function: FUN_1401d8db0
// Addr: 1401d8db0
// Size: 24 bytes


undefined1 * FUN_1401d8db0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 3;
  *param_1 = puVar1 + 0x44;
  *(undefined2 *)(puVar1 + 2) = 0x44;
  return puVar1 + 4;
}

