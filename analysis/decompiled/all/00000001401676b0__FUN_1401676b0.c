// Function: FUN_1401676b0
// Addr: 1401676b0
// Size: 147 bytes


uint FUN_1401676b0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_140167750();
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 == 0x13) {
    FUN_140166b60(param_1);
    uVar3 = FUN_140167750(param_1);
    uVar2 = uVar2 & uVar3;
    iVar1 = *(int *)(param_1 + 8);
  }
  while (iVar1 == 0x15) {
    FUN_140166b60(param_1);
    uVar3 = FUN_140167750(param_1);
    iVar1 = *(int *)(param_1 + 8);
    while (iVar1 == 0x13) {
      FUN_140166b60(param_1);
      uVar4 = FUN_140167750(param_1);
      uVar3 = uVar3 & uVar4;
      iVar1 = *(int *)(param_1 + 8);
    }
    uVar2 = uVar2 ^ uVar3;
  }
  return uVar2;
}

