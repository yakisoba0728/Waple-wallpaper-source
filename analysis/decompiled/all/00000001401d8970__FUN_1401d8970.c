// Function: FUN_1401d8970
// Addr: 1401d8970
// Size: 24 bytes


undefined1 * FUN_1401d8970(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0xf;
  *param_1 = puVar1 + 0x68;
  *(undefined2 *)(puVar1 + 2) = 0x68;
  return puVar1 + 4;
}

