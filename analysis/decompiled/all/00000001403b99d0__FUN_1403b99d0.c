// Function: FUN_1403b99d0
// Addr: 1403b99d0
// Size: 147 bytes


void FUN_1403b99d0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    piVar3 = (int *)&DAT_14045dde0;
  }
  else {
    piVar2 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x6c6f6361,*(undefined8 *)(param_1 + 0x28));
    piVar3 = (int *)&DAT_14045dde0;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2;
    }
  }
  if (*piVar3 != 0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(piVar3 + 4);
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",lVar1,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar1,
                (ulonglong)(uint)piVar3[6] + lVar1,
                (int)((ulonglong)(uint)piVar3[6] + lVar1) - (int)lVar1);
}

