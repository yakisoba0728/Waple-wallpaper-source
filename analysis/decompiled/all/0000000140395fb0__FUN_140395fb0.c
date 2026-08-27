// Function: FUN_140395fb0
// Addr: 140395fb0
// Size: 91 bytes


void FUN_140395fb0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = *(int **)(param_1 + 0x11f0);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 0;
    LOCK();
    bVar2 = **(longlong **)(param_1 + 0x11f8) == 0;
    if (bVar2) {
      **(longlong **)(param_1 + 0x11f8) = (longlong)piVar1;
    }
    UNLOCK();
    if (!bVar2) {
      if (1 < *piVar1 + 1U) {
        piVar1[1] = 0;
        thunk_FUN_1402d9040(*(undefined8 *)(piVar1 + 2));
      }
      piVar1[0] = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      thunk_FUN_1402d9040(piVar1);
    }
  }
  return;
}

