// Function: FUN_1402f7930
// Addr: 1402f7930
// Size: 305 bytes


void FUN_1402f7930(int *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_2;
  if (param_3 == 3) {
    iVar2 = *(int *)(lVar1 + 0x158);
    if (*(int *)(lVar1 + 0x158) <= *(int *)(lVar1 + 0x160)) {
      iVar2 = *(int *)(lVar1 + 0x160);
    }
    iVar3 = *(int *)(lVar1 + 0x168);
    if (*(int *)(lVar1 + 0x168) < iVar2) {
      iVar3 = iVar2;
    }
    *param_1 = *param_1 - iVar3;
    iVar2 = *(int *)(lVar1 + 0x158);
    if (*(int *)(lVar1 + 0x160) <= *(int *)(lVar1 + 0x158)) {
      iVar2 = *(int *)(lVar1 + 0x160);
    }
    iVar3 = *(int *)(lVar1 + 0x168);
    if (iVar2 < *(int *)(lVar1 + 0x168)) {
      iVar3 = iVar2;
    }
    param_1[2] = param_1[2] - iVar3;
    iVar2 = *(int *)(lVar1 + 0x15c);
    if (*(int *)(lVar1 + 0x15c) <= *(int *)(lVar1 + 0x164)) {
      iVar2 = *(int *)(lVar1 + 0x164);
    }
    iVar3 = *(int *)(lVar1 + 0x16c);
    if (*(int *)(lVar1 + 0x16c) < iVar2) {
      iVar3 = iVar2;
    }
    param_1[1] = param_1[1] - iVar3;
    iVar2 = *(int *)(lVar1 + 0x15c);
    if (*(int *)(lVar1 + 0x164) <= *(int *)(lVar1 + 0x15c)) {
      iVar2 = *(int *)(lVar1 + 0x164);
    }
    iVar3 = *(int *)(lVar1 + 0x16c);
    if (iVar2 < *(int *)(lVar1 + 0x16c)) {
      iVar3 = iVar2;
    }
    param_1[3] = param_1[3] - iVar3;
    return;
  }
  if (param_3 == 4) {
    iVar2 = *(int *)(lVar1 + 0x15c);
    if (*(int *)(lVar1 + 0x15c) <= *(int *)(lVar1 + 0x164)) {
      iVar2 = *(int *)(lVar1 + 0x164);
    }
    iVar3 = *(int *)(lVar1 + 0x16c);
    if (*(int *)(lVar1 + 0x16c) < iVar2) {
      iVar3 = iVar2;
    }
    *param_1 = *param_1 - iVar3;
    iVar2 = *(int *)(lVar1 + 0x15c);
    if (*(int *)(lVar1 + 0x164) <= *(int *)(lVar1 + 0x15c)) {
      iVar2 = *(int *)(lVar1 + 0x164);
    }
    iVar3 = *(int *)(lVar1 + 0x16c);
    if (iVar2 < *(int *)(lVar1 + 0x16c)) {
      iVar3 = iVar2;
    }
    param_1[2] = param_1[2] - iVar3;
    iVar2 = *(int *)(lVar1 + 0x158);
    if (*(int *)(lVar1 + 0x160) <= *(int *)(lVar1 + 0x158)) {
      iVar2 = *(int *)(lVar1 + 0x160);
    }
    iVar3 = *(int *)(lVar1 + 0x168);
    if (iVar2 < *(int *)(lVar1 + 0x168)) {
      iVar3 = iVar2;
    }
    param_1[1] = param_1[1] + iVar3;
    iVar2 = *(int *)(lVar1 + 0x158);
    if (*(int *)(lVar1 + 0x158) <= *(int *)(lVar1 + 0x160)) {
      iVar2 = *(int *)(lVar1 + 0x160);
    }
    iVar3 = *(int *)(lVar1 + 0x168);
    if (*(int *)(lVar1 + 0x168) < iVar2) {
      iVar3 = iVar2;
    }
    param_1[3] = param_1[3] + iVar3;
  }
  return;
}

