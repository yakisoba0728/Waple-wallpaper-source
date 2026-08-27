// Function: FUN_1401d8820
// Addr: 1401d8820
// Size: 24 bytes


undefined1 * FUN_1401d8820(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 8;
  *param_1 = puVar1 + 0x10;
  *(undefined2 *)(puVar1 + 2) = 0x10;
  return puVar1 + 4;
}

