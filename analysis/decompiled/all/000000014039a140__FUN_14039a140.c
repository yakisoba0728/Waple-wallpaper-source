// Function: FUN_14039a140
// Addr: 14039a140
// Size: 42 bytes


int FUN_14039a140(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 2;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (iVar3 == 0) {
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x40))(param_1,1);
    }
    iVar3 = 0;
  }
  return iVar3;
}

