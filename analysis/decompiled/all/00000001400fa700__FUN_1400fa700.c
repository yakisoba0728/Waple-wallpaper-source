// Function: FUN_1400fa700
// Addr: 1400fa700
// Size: 80 bytes


int FUN_1400fa700(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[2];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 + -1 == 0) {
    FUN_1402d3dd0(param_1[2]);
    thunk_FUN_14028af80(param_1[3]);
    (**(code **)(*param_1 + 0x90))(param_1,1);
  }
  return iVar1 + -1;
}

