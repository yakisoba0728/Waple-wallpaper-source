// Function: FUN_14009c5c0
// Addr: 14009c5c0
// Size: 94 bytes


longlong FUN_14009c5c0(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  puVar1 = (uint *)param_1[1];
  if ((longlong)(ulonglong)*(uint *)(param_1 + 2) < (longlong)puVar1 + (4 - *param_1)) {
    uVar3 = 0;
  }
  else {
    param_1[1] = (longlong)(puVar1 + 1);
    uVar3 = *puVar1;
  }
  *param_2 = uVar3;
  lVar2 = param_1[1];
  if ((longlong)(((ulonglong)*(uint *)(param_1 + 2) - lVar2) + *param_1) <
      (longlong)(ulonglong)uVar3) {
    *param_2 = 0;
    return 0;
  }
  param_1[1] = (int)uVar3 + lVar2;
  return lVar2;
}

