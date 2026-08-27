// Function: FUN_140120f20
// Addr: 140120f20
// Size: 53 bytes


int FUN_140120f20(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  
  piVar2 = *(int **)(param_1 + 0x10);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 + -1 == 0) && (plVar3 = (longlong *)(param_1 + -0x70), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0xd8))(plVar3,1);
  }
  return iVar1 + -1;
}

