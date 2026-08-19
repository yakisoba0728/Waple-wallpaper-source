// Function: FUN_14031da80
// Addr: 14031da80
// Size: 21 bytes


undefined8 FUN_14031da80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(ulonglong *)(param_1 + 0x28) < lVar1 + 0x10U) {
    return 0xa1;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  iVar3 = FUN_14031ff10(param_1,lVar1);
  if (-1 < iVar3) {
    *(int *)(lVar2 + 0x74) = iVar3;
    iVar3 = FUN_14031ff10(param_1,lVar1 + 8);
    if (-1 < iVar3) {
      *(int *)(lVar2 + 0x70) = iVar3;
      return 0;
    }
  }
  return 3;
}

