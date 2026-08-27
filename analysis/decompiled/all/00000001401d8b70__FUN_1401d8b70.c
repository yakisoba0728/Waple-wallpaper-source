// Function: FUN_1401d8b70
// Addr: 1401d8b70
// Size: 24 bytes


undefined1 * FUN_1401d8b70(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0xb;
  *param_1 = puVar1 + 0x70;
  *(undefined2 *)(puVar1 + 2) = 0x70;
  return puVar1 + 0x10;
}

