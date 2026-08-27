// Function: FUN_1401d8cb0
// Addr: 1401d8cb0
// Size: 27 bytes


undefined1 * FUN_1401d8cb0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0x15;
  *param_1 = puVar1 + 0x80;
  *(undefined2 *)(puVar1 + 2) = 0x80;
  return puVar1 + 0x10;
}

