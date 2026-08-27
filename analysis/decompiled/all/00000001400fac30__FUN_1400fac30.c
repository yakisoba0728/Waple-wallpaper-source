// Function: FUN_1400fac30
// Addr: 1400fac30
// Size: 131 bytes


int FUN_1400fac30(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  
  piVar2 = (int *)param_1[2];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 + -1 == 0) {
    FUN_1402d3dd0(param_1[2]);
    lVar3 = FUN_14004c3c0(param_1 + 5);
    if (lVar3 == 0) {
      lVar3 = (longlong)*(int *)(param_1[3] + 4);
      uVar4 = 6;
      if (*(longlong *)(lVar3 + 0x60 + (longlong)param_1) != 0) {
        uVar4 = 2;
      }
      FUN_140013b50(lVar3 + 0x18 + (longlong)param_1,
                    uVar4 | *(uint *)(lVar3 + 0x28 + (longlong)param_1),0);
    }
    (**(code **)(*param_1 + 0x90))(param_1,1);
  }
  return iVar1 + -1;
}

