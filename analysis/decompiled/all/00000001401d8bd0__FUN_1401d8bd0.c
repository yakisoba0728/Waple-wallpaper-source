// Function: FUN_1401d8bd0
// Addr: 1401d8bd0
// Size: 27 bytes


undefined1 * FUN_1401d8bd0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0xe;
  *param_1 = puVar1 + 0x100;
  *(undefined2 *)(puVar1 + 2) = 0x100;
  return puVar1 + 0x10;
}

