// Function: FUN_1403b8480
// Addr: 1403b8480
// Size: 248 bytes


void FUN_1403b8480(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = 0;
  uVar7 = 0;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    piVar4 = (int *)&DAT_14045dde0;
  }
  else {
    piVar2 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x53544154,*(undefined8 *)(param_1 + 0x28));
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
  lVar5 = (ulonglong)(uint)piVar4[6] + lVar1;
  iVar3 = (int)lVar5 - (int)lVar1;
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",lVar1,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar1,lVar5,iVar3,0,lVar1,
                lVar5,iVar3,uVar6,0,piVar4,uVar7);
}

