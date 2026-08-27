// Function: FUN_1401d8990
// Addr: 1401d8990
// Size: 24 bytes


undefined1 * FUN_1401d8990(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0x10;
  *param_1 = puVar1 + 8;
  *(undefined2 *)(puVar1 + 2) = 8;
  return puVar1 + 4;
}

