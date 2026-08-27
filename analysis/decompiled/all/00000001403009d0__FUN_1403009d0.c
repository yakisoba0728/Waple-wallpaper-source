// Function: FUN_1403009d0
// Addr: 1403009d0
// Size: 125 bytes


void FUN_1403009d0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 8);
  iVar4 = *(int *)(lVar2 + 0x14);
  lVar5 = lVar2;
  iVar6 = iVar4;
  do {
    lVar5 = *(longlong *)(lVar5 + 0x20);
    iVar1 = *(int *)(lVar5 + 0x14);
    iVar3 = iVar1;
    if (iVar4 <= iVar1) {
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    if (iVar1 <= iVar6) {
      iVar1 = iVar6;
    }
    iVar6 = iVar1;
  } while (lVar5 != lVar2);
  iVar6 = iVar6 - iVar4;
  iVar4 = (iVar4 + 0x20U & 0xffffffc0) - iVar4;
  if (iVar6 < 0xc0) {
    iVar4 = (int)((iVar6 + 0x20U & 0xffffffc0) - iVar6) / 2 + iVar4;
  }
  lVar5 = lVar2;
  if (lVar2 != 0) {
    do {
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + iVar4;
      lVar5 = *(longlong *)(lVar5 + 0x20);
    } while (lVar5 != lVar2);
  }
  return;
}

