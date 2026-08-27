// Function: FUN_1403b9900
// Addr: 1403b9900
// Size: 459 bytes


int * FUN_1403b9900(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    piVar4 = (int *)&DAT_14045dd10;
  }
  else {
    piVar2 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x6c6f6361,*(undefined8 *)(param_1 + 0x28));
    piVar4 = (int *)&DAT_14045dd10;
    if (piVar2 != (int *)0x0) {
      piVar4 = piVar2;
    }
  }
  if (*piVar4 != 0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(piVar4 + 4);
  iVar5 = 1;
  FUN_1402fc370("SANITIZE",lVar3,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar3,
                (ulonglong)(uint)piVar4[6] + lVar3,
                (int)((ulonglong)(uint)piVar4[6] + lVar3) - (int)lVar3);
  iVar6 = -1;
  if (lVar3 == 0) {
    FUN_1402fc370("SANITIZE");
    if (*piVar4 != 0) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + iVar6;
      UNLOCK();
      if (iVar1 == iVar5) {
        *piVar4 = -0xdead;
        lVar3 = *(longlong *)(piVar4 + 2);
        if (lVar3 != 0) {
          FUN_1403c3220(lVar3);
          thunk_FUN_1402d9040(lVar3);
          piVar4[2] = 0;
          piVar4[3] = 0;
        }
        if (*(code **)(piVar4 + 10) != (code *)0x0) {
          (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
          piVar4[8] = 0;
          piVar4[9] = 0;
          piVar4[10] = 0;
          piVar4[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar4);
        return piVar4;
      }
    }
  }
  else {
    FUN_1402fc370("SANITIZE");
    if (*piVar4 != 0) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + iVar6;
      UNLOCK();
      if (iVar1 == iVar5) {
        *piVar4 = -0xdead;
        lVar3 = *(longlong *)(piVar4 + 2);
        if (lVar3 != 0) {
          FUN_1403c3220(lVar3);
          thunk_FUN_1402d9040(lVar3);
          piVar4[2] = 0;
          piVar4[3] = 0;
        }
        if (*(code **)(piVar4 + 10) != (code *)0x0) {
          (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
          piVar4[8] = 0;
          piVar4[9] = 0;
          piVar4[10] = 0;
          piVar4[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar4);
      }
    }
    if ((char)piVar4[1] != '\0') {
      *(undefined1 *)(piVar4 + 1) = 0;
    }
  }
  return piVar4;
}

