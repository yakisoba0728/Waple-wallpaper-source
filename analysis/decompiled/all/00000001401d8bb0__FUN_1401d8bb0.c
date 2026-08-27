// Function: FUN_1401d8bb0
// Addr: 1401d8bb0
// Size: 27 bytes


undefined1 * FUN_1401d8bb0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0xd;
  *param_1 = puVar1 + 0xa0;
  *(undefined2 *)(puVar1 + 2) = 0xa0;
  return puVar1 + 0x10;
}

