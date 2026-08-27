// Function: FUN_1401d8860
// Addr: 1401d8860
// Size: 24 bytes


undefined1 * FUN_1401d8860(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 10;
  *param_1 = puVar1 + 0x20;
  *(undefined2 *)(puVar1 + 2) = 0x20;
  return puVar1 + 4;
}

