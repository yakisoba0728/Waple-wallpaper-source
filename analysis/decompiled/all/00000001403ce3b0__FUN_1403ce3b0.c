// Function: FUN_1403ce3b0
// Addr: 1403ce3b0
// Size: 156 bytes


int FUN_1403ce3b0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == -1) {
    iVar6 = 0;
    uVar1 = *(uint *)(param_1 + 0x24);
    if (uVar1 != 0) {
      uVar5 = 0;
      uVar3 = uVar1;
      do {
        if ((uint)uVar5 < uVar3) {
          piVar7 = (int *)(*(longlong *)(param_1 + 0x28) + uVar5 * 0x48);
        }
        else {
          piVar7 = (int *)&DAT_14045dd10;
        }
        iVar2 = *piVar7;
        if (iVar2 == -1) {
          iVar2 = FUN_140397b80(piVar7 + 2);
          *piVar7 = iVar2;
          uVar3 = *(uint *)(param_1 + 0x24);
        }
        iVar6 = iVar6 + iVar2;
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < uVar1);
    }
    *(int *)(param_1 + 4) = iVar6;
  }
  return iVar6;
}

