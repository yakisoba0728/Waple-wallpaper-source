// Function: FUN_1401d8a30
// Addr: 1401d8a30
// Size: 24 bytes


undefined1 * FUN_1401d8a30(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 3;
  *param_1 = puVar1 + 0x30;
  *(undefined2 *)(puVar1 + 2) = 0x30;
  return puVar1 + 0x10;
}

