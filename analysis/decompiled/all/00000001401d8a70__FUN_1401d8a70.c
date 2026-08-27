// Function: FUN_1401d8a70
// Addr: 1401d8a70
// Size: 27 bytes


undefined1 * FUN_1401d8a70(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 5;
  *param_1 = puVar1 + 0x90;
  *(undefined2 *)(puVar1 + 2) = 0x90;
  return puVar1 + 0x10;
}

