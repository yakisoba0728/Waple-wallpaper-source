// Function: FUN_1401d8ad0
// Addr: 1401d8ad0
// Size: 27 bytes


undefined1 * FUN_1401d8ad0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 7;
  *param_1 = puVar1 + 0xe0;
  *(undefined2 *)(puVar1 + 2) = 0xe0;
  return puVar1 + 0x10;
}

