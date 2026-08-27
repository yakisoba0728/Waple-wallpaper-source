// Function: FUN_140167390
// Addr: 140167390
// Size: 391 bytes


ulonglong FUN_140167390(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = FUN_140167520();
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = uVar7 & 0xffffffff;
  while (iVar1 == 0xc) {
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
    while (iVar1 == 0x14) {
      FUN_140166a90(param_1);
      uVar4 = FUN_140167680(param_1);
      iVar1 = *(int *)(param_1 + 8);
      while (iVar1 == 0x13) {
        FUN_140166a90(param_1);
        uVar5 = FUN_140167680(param_1);
        uVar4 = uVar4 & uVar5;
        iVar1 = *(int *)(param_1 + 8);
      }
      while (iVar1 == 0x15) {
        FUN_140166a90(param_1);
        uVar5 = FUN_140167680(param_1);
        iVar1 = *(int *)(param_1 + 8);
        while (iVar1 == 0x13) {
          FUN_140166a90(param_1);
          uVar6 = FUN_140167680(param_1);
          uVar5 = uVar5 & uVar6;
          iVar1 = *(int *)(param_1 + 8);
        }
        uVar4 = uVar4 ^ uVar5;
      }
      uVar3 = uVar3 | uVar4;
    }
    if (((int)uVar2 == 0) || (uVar3 == 0)) {
      uVar7 = 0;
      uVar2 = uVar7;
    }
    else {
      uVar7 = 1;
      uVar2 = uVar7;
    }
  }
  return uVar7;
}

