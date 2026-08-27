// Function: FUN_1401d8880
// Addr: 1401d8880
// Size: 24 bytes


undefined1 * FUN_1401d8880(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0xb;
  *param_1 = puVar1 + 0x30;
  *(undefined2 *)(puVar1 + 2) = 0x30;
  return puVar1 + 4;
}

