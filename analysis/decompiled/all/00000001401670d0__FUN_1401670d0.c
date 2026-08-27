// Function: FUN_1401670d0
// Addr: 1401670d0
// Size: 702 bytes


ulonglong FUN_1401670d0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = FUN_140167390();
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = uVar8 & 0xffffffff;
  while (iVar1 == 0xd) {
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
    while (iVar1 == 0xc) {
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
      while (iVar1 == 0x14) {
        FUN_140166a90(param_1);
        uVar5 = FUN_140167680(param_1);
        iVar1 = *(int *)(param_1 + 8);
        while (iVar1 == 0x13) {
          FUN_140166a90(param_1);
          uVar6 = FUN_140167680(param_1);
          uVar5 = uVar5 & uVar6;
          iVar1 = *(int *)(param_1 + 8);
        }
        while (iVar1 == 0x15) {
          FUN_140166a90(param_1);
          uVar6 = FUN_140167680(param_1);
          iVar1 = *(int *)(param_1 + 8);
          while (iVar1 == 0x13) {
            FUN_140166a90(param_1);
            uVar7 = FUN_140167680(param_1);
            uVar6 = uVar6 & uVar7;
            iVar1 = *(int *)(param_1 + 8);
          }
          uVar5 = uVar5 ^ uVar6;
        }
        uVar4 = uVar4 | uVar5;
      }
      if ((uVar3 == 0) || (uVar4 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    uVar8 = (ulonglong)(uVar3 != 0 || (int)uVar2 != 0);
    uVar2 = uVar8;
  }
  return uVar8;
}

