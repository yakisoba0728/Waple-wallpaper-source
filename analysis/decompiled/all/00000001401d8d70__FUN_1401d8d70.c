// Function: FUN_1401d8d70
// Addr: 1401d8d70
// Size: 24 bytes


undefined1 * FUN_1401d8d70(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 1;
  *param_1 = puVar1 + 0x3c;
  *(undefined2 *)(puVar1 + 2) = 0x3c;
  return puVar1 + 4;
}

