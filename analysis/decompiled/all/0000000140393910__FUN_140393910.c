// Function: FUN_140393910
// Addr: 140393910
// Size: 361 bytes


void FUN_140393910(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*(int *)(param_2 + 0x18) == -1) {
    lVar1 = FUN_140398ae0(param_2 + 0x80);
    iVar3 = (uint)*(byte *)(lVar1 + 5) + (uint)*(byte *)(lVar1 + 4) * 0x100;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar3;
  }
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar4 = (int *)&DAT_14045dde0;
  }
  else {
    piVar2 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x6b65726e,*(undefined8 *)(param_2 + 0x28));
    piVar4 = (int *)&DAT_14045dde0;
    if (piVar2 != (int *)0x0) {
      piVar4 = piVar2;
    }
  }
  if (*piVar4 != 0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(piVar4 + 4);
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",lVar1,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar1,
                (ulonglong)(uint)piVar4[6] + lVar1,
                (int)((ulonglong)(uint)piVar4[6] + lVar1) - (int)lVar1);
}

