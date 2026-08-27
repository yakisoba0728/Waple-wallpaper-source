// Function: FUN_140261770
// Addr: 140261770
// Size: 68 bytes


void FUN_140261770(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  puVar1 = (uint *)param_1[1];
  lVar2 = *param_1;
  uVar3 = *(uint *)(param_1 + 2);
  if ((longlong)puVar1 + (4 - lVar2) <= (longlong)(ulonglong)uVar3) {
    param_1[1] = (longlong)(puVar1 + 1);
    if (*puVar1 <= uVar3) {
      uVar3 = *puVar1;
    }
    param_1[3] = (ulonglong)uVar3 + lVar2;
    return;
  }
  param_1[3] = lVar2;
  return;
}

