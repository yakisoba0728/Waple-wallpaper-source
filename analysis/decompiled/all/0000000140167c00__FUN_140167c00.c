// Function: FUN_140167c00
// Addr: 140167c00
// Size: 524 bytes


uint FUN_140167c00(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar3 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar3 == 5) {
      FUN_140166a90(param_1);
      iVar3 = FUN_140167c00(param_1);
      return (uint)(iVar3 == 0);
    }
    if (iVar3 == 0x16) {
      FUN_140166a90(param_1);
      uVar4 = FUN_140167c00(param_1);
      return ~uVar4;
    }
    if (iVar3 == 0xf) {
      FUN_140166a90(param_1);
      iVar3 = FUN_140167c00(param_1);
      return -iVar3;
    }
    if (iVar3 != 0xe) break;
    FUN_140166a90(param_1);
    iVar3 = *(int *)(param_1 + 8);
  }
  if (iVar3 == 1) {
    uVar4 = *(uint *)(param_1 + 0xc);
    FUN_140166a90(param_1);
    return uVar4;
  }
  if (iVar3 == 2) {
    if (*(longlong *)(param_1 + 0x18) == 7) {
      piVar1 = *(int **)(param_1 + 0x10);
      iVar3 = *piVar1 + -0x69666564;
      if ((iVar3 == 0) && (iVar3 = *(ushort *)(piVar1 + 1) - 0x656e, iVar3 == 0)) {
        iVar3 = *(byte *)((longlong)piVar1 + 6) - 100;
      }
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0x44) = 1;
        FUN_140166a90(param_1);
        bVar5 = *(int *)(param_1 + 8) == 3;
        if (bVar5) {
          FUN_140166a90(param_1);
        }
        if (*(int *)(param_1 + 8) == 2) {
          local_18 = *(undefined4 *)(param_1 + 0x10);
          uStack_14 = *(undefined4 *)(param_1 + 0x14);
          uStack_10 = *(undefined4 *)(param_1 + 0x18);
          uStack_c = *(undefined4 *)(param_1 + 0x1c);
          bVar2 = FUN_1401669a0(*(undefined8 *)(param_1 + 0x48),&local_18);
          uVar4 = (uint)bVar2;
          *(undefined1 *)(param_1 + 0x44) = 0;
          FUN_140166a90(param_1);
        }
        else {
          uVar4 = 0;
          *(undefined1 *)(param_1 + 0x44) = 0;
        }
        if (bVar5) {
          if (*(int *)(param_1 + 8) == 4) {
            FUN_140166a90(param_1);
            return uVar4;
          }
          return uVar4;
        }
        return uVar4;
      }
    }
  }
  else {
    if (iVar3 == 3) {
      FUN_140166a90(param_1);
      uVar4 = FUN_140167390(param_1);
      iVar3 = *(int *)(param_1 + 8);
      while (iVar3 == 0xd) {
        FUN_140166a90(param_1);
        iVar3 = FUN_140167390(param_1);
        uVar4 = (uint)(iVar3 != 0 || uVar4 != 0);
        iVar3 = *(int *)(param_1 + 8);
      }
      if (iVar3 == 4) {
        FUN_140166a90(param_1);
      }
      return uVar4;
    }
    if (iVar3 != 0x19) {
      return 0;
    }
  }
  FUN_140166a90(param_1);
  return 0;
}

