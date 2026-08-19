// Function: FUN_140261750
// Addr: 140261750
// Size: 16 bytes


undefined2 FUN_140261750(longlong *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)param_1[1];
  if ((longlong)(ulonglong)*(uint *)(param_1 + 2) < (longlong)puVar1 + (2 - *param_1)) {
    return 0;
  }
  param_1[1] = (longlong)(puVar1 + 1);
  return *puVar1;
}

