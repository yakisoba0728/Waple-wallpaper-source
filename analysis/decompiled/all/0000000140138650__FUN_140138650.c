// Function: FUN_140138650
// Addr: 140138650
// Size: 66 bytes


int FUN_140138650(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 + -1 == 0) {
    FUN_1402d3dd0(*(undefined8 *)(param_1 + 0x10));
    thunk_FUN_14028af80(param_1,0x20);
  }
  return iVar1 + -1;
}

