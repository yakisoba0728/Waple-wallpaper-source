// Function: FUN_1401d8af0
// Addr: 1401d8af0
// Size: 27 bytes


undefined1 * FUN_1401d8af0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 8;
  *param_1 = puVar1 + 0xb0;
  *(undefined2 *)(puVar1 + 2) = 0xb0;
  return puVar1 + 0x10;
}

