// Function: FUN_1400fb260
// Addr: 1400fb260
// Size: 113 bytes


int FUN_1400fb260(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  while (iVar1 != 0x7fffffff) {
    LOCK();
    bVar2 = iVar1 == *(int *)((longlong)param_1 + 0xc);
    if (bVar2) {
      *(int *)((longlong)param_1 + 0xc) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar2) break;
    iVar1 = *(int *)((longlong)param_1 + 0xc);
  }
  if (iVar1 + -1 == 0) {
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x90))(param_1,1);
    }
    if (DAT_1404e8f80 != (longlong *)0x0) {
      (**(code **)(*DAT_1404e8f80 + 0x10))();
    }
  }
  return iVar1 + -1;
}

