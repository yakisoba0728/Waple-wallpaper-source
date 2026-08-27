// Function: FUN_140300940
// Addr: 140300940
// Size: 129 bytes


int FUN_140300940(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 8);
  iVar5 = *(int *)(lVar2 + 0x14);
  lVar4 = lVar2;
  iVar6 = iVar5;
  do {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    iVar1 = *(int *)(lVar4 + 0x14);
    iVar3 = iVar1;
    if (iVar5 <= iVar1) {
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    if (iVar1 <= iVar6) {
      iVar1 = iVar6;
    }
    iVar6 = iVar1;
  } while (lVar4 != lVar2);
  iVar5 = iVar6 - iVar5;
  iVar6 = (iVar6 + 0x20U & 0xffffffc0) - iVar6;
  if (iVar5 < 0xc0) {
    iVar6 = iVar6 - (int)((iVar5 + 0x20U & 0xffffffc0) - iVar5) / 2;
  }
  lVar4 = lVar2;
  if (lVar2 != 0) {
    do {
      *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + iVar6;
      lVar4 = *(longlong *)(lVar4 + 0x20);
    } while (lVar4 != lVar2);
  }
  return iVar6;
}

