// Function: FUN_1403bf0c0
// Addr: 1403bf0c0
// Size: 217 bytes


void FUN_1403bf0c0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 1;
  lVar1 = 0;
  FUN_1402fc370("SERIALIZE");
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar3 == 0) {
    uVar3 = uVar2;
    if (*(int *)(param_1 + 0x50) < (int)lVar1) {
      *(uint *)(param_1 + 0x2c) = uVar2;
    }
    else if (*(char *)(param_1 + 0x70) == (char)lVar1) {
      *(uint *)(param_1 + 0x2c) = uVar2;
    }
    else {
      uVar3 = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x48) != lVar1) {
    if (uVar3 == 0) {
      if (1 < *(uint *)(param_1 + 0x54)) {
        FUN_1403f0d30(param_1,0);
        FUN_1403f8a60(param_1);
        return;
      }
    }
    else if ((uVar3 & 2) != 0) {
      *(uint *)(param_1 + 0x2c) = uVar3 | 1;
      return;
    }
  }
  return;
}

