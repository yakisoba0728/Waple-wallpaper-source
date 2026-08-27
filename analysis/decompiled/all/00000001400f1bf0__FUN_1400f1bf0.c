// Function: FUN_1400f1bf0
// Addr: 1400f1bf0
// Size: 66 bytes


int FUN_1400f1bf0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 + -1 == 0) {
    FUN_1402d3dd0(*(undefined8 *)(param_1 + 8));
    thunk_FUN_14028af80(param_1,0x18);
  }
  return iVar1 + -1;
}

