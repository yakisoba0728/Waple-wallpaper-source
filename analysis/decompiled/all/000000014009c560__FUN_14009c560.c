// Function: FUN_14009c560
// Addr: 14009c560
// Size: 40 bytes


undefined4 FUN_14009c560(longlong *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((longlong)(ulonglong)*(uint *)(param_1 + 2) < (longlong)puVar1 + (4 - *param_1)) {
    return 0;
  }
  param_1[1] = (longlong)(puVar1 + 1);
  return *puVar1;
}

