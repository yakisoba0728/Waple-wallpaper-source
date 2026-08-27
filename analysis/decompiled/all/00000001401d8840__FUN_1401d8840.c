// Function: FUN_1401d8840
// Addr: 1401d8840
// Size: 24 bytes


undefined1 * FUN_1401d8840(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 9;
  *param_1 = puVar1 + 100;
  *(undefined2 *)(puVar1 + 2) = 100;
  return puVar1 + 4;
}

