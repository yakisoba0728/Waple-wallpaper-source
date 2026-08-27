// Function: FUN_1400f1920
// Addr: 1400f1920
// Size: 54 bytes


int FUN_1400f1920(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &PTR_FUN_140487280;
    thunk_FUN_14028af80(param_1,0x10);
  }
  return iVar2 + -1;
}

