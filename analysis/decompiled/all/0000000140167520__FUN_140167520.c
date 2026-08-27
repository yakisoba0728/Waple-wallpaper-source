// Function: FUN_140167520
// Addr: 140167520
// Size: 191 bytes


ulonglong FUN_140167520(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = FUN_1401675e0();
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = uVar6 & 0xffffffff;
  while (iVar1 == 0x14) {
    FUN_140166a90(param_1);
    uVar3 = FUN_140167680(param_1);
    iVar1 = *(int *)(param_1 + 8);
    while (iVar1 == 0x13) {
      FUN_140166a90(param_1);
      uVar4 = FUN_140167680(param_1);
      uVar3 = uVar3 & uVar4;
      iVar1 = *(int *)(param_1 + 8);
    }
    while (iVar1 == 0x15) {
      FUN_140166a90(param_1);
      uVar4 = FUN_140167680(param_1);
      iVar1 = *(int *)(param_1 + 8);
      while (iVar1 == 0x13) {
        FUN_140166a90(param_1);
        uVar5 = FUN_140167680(param_1);
        uVar4 = uVar4 & uVar5;
        iVar1 = *(int *)(param_1 + 8);
      }
      uVar3 = uVar3 ^ uVar4;
    }
    uVar6 = (ulonglong)((uint)uVar2 | uVar3);
    uVar2 = uVar6;
  }
  return uVar6;
}

