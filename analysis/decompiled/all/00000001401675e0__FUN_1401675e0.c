// Function: FUN_1401675e0
// Addr: 1401675e0
// Size: 147 bytes


uint FUN_1401675e0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_140167680();
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 == 0x13) {
    FUN_140166a90(param_1);
    uVar3 = FUN_140167680(param_1);
    uVar2 = uVar2 & uVar3;
    iVar1 = *(int *)(param_1 + 8);
  }
  while (iVar1 == 0x15) {
    FUN_140166a90(param_1);
    uVar3 = FUN_140167680(param_1);
    iVar1 = *(int *)(param_1 + 8);
    while (iVar1 == 0x13) {
      FUN_140166a90(param_1);
      uVar4 = FUN_140167680(param_1);
      uVar3 = uVar3 & uVar4;
      iVar1 = *(int *)(param_1 + 8);
    }
    uVar2 = uVar2 ^ uVar3;
  }
  return uVar2;
}

