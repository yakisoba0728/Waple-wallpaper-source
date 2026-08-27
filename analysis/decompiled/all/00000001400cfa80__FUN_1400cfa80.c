// Function: FUN_1400cfa80
// Addr: 1400cfa80
// Size: 100 bytes


int FUN_1400cfa80(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 + -1 == 0) {
    FUN_1402d3dd0(*(undefined8 *)(param_1 + 8));
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))
                (plVar3,CONCAT71((int7)((ulonglong)(param_1 + 0x10) >> 8),
                                 plVar3 != (longlong *)(param_1 + 0x10)));
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    thunk_FUN_14028af80(param_1,0x50);
  }
  return iVar1 + -1;
}

