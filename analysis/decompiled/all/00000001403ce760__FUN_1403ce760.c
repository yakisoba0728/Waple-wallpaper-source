// Function: FUN_1403ce760
// Addr: 1403ce760
// Size: 242 bytes


longlong * FUN_1403ce760(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  while( true ) {
    if (plVar4 != (longlong *)0x0) {
      return plVar4;
    }
    lVar2 = param_1[-2];
    if (lVar2 == 0) break;
    piVar3 = (int *)FUN_140415980(lVar2);
    plVar4 = (longlong *)FUN_1403bec00(piVar3,*(undefined4 *)(lVar2 + 0x10));
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        *piVar3 = -0xdead;
        lVar2 = *(longlong *)(piVar3 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
          piVar3[2] = 0;
          piVar3[3] = 0;
        }
        if (*(code **)(piVar3 + 10) != (code *)0x0) {
          (**(code **)(piVar3 + 10))(*(undefined8 *)(piVar3 + 8));
          piVar3[8] = 0;
          piVar3[9] = 0;
          piVar3[10] = 0;
          piVar3[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar3);
      }
    }
    LOCK();
    lVar2 = *param_1;
    if (lVar2 == 0) {
      *param_1 = (longlong)plVar4;
    }
    UNLOCK();
    if (lVar2 == 0) {
      return plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    plVar4 = (longlong *)*param_1;
  }
  return (longlong *)0x0;
}

