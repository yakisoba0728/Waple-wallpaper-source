// Function: FUN_1400fa6f0
// Addr: 1400fa6f0
// Size: 16 bytes


int FUN_1400fa6f0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  return iVar1 + 1;
}

