// Function: FUN_1401d88f0
// Addr: 1401d88f0
// Size: 24 bytes


undefined1 * FUN_1401d88f0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0xd;
  *param_1 = puVar1 + 0x5c;
  *(undefined2 *)(puVar1 + 2) = 0x5c;
  return puVar1 + 4;
}

