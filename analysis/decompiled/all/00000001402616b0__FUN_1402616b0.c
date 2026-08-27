// Function: FUN_1402616b0
// Addr: 1402616b0
// Size: 40 bytes


undefined8 FUN_1402616b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((longlong)(ulonglong)*(uint *)(param_1 + 2) < (longlong)puVar1 + (8 - *param_1)) {
    return 0;
  }
  param_1[1] = (longlong)(puVar1 + 1);
  return *puVar1;
}

