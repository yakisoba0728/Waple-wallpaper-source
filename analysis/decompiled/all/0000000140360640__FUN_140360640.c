// Function: FUN_140360640
// Addr: 140360640
// Size: 375 bytes


void FUN_140360640(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  plVar2 = (longlong *)_calloc_base(1,0x48);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = *(longlong *)(param_1 + 0x20) + 0x70;
    while (piVar4 = DAT_1404e51f0, DAT_1404e51f0 = piVar4, piVar4 == (int *)0x0) {
      piVar3 = (int *)FUN_1403baf50();
      piVar4 = &DAT_1404df428;
      if (piVar3 != (int *)0x0) {
        piVar4 = piVar3;
      }
      LOCK();
      bVar5 = DAT_1404e51f0 == (int *)0x0;
      piVar3 = piVar4;
      if (!bVar5) {
        piVar3 = DAT_1404e51f0;
      }
      DAT_1404e51f0 = piVar3;
      UNLOCK();
      if (bVar5) break;
      if ((piVar4 != (int *)0x0) && (piVar4 != &DAT_1404df428)) {
        FUN_1404160c0();
      }
    }
    if (*(char *)(param_1 + 4) == '\0') {
      puVar1 = (undefined8 *)plVar2[8];
      do {
        if (puVar1 == (undefined8 *)0x0) {
LAB_140360712:
          FUN_1403b35d0(plVar2 + 6);
          FUN_1403b35d0(plVar2 + 4);
          FUN_1403b35d0(plVar2 + 2);
          thunk_FUN_1402d9040(plVar2);
          return;
        }
        LOCK();
        bVar5 = puVar1 == (undefined8 *)plVar2[8];
        if (bVar5) {
          plVar2[8] = 0;
        }
        UNLOCK();
        if (bVar5) {
          if ((puVar1 != &DAT_14045dd10) && (puVar1 != (undefined8 *)0x0)) {
            thunk_FUN_1402d9040(puVar1);
          }
          goto LAB_140360712;
        }
        puVar1 = (undefined8 *)plVar2[8];
      } while( true );
    }
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
    }
    piVar3 = &DAT_1404df428;
    if (piVar4 != (int *)0x0) {
      piVar3 = piVar4;
    }
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    FUN_1404160c0(*(undefined8 *)(param_1 + 0x90));
    *(int **)(param_1 + 0x90) = piVar3;
    *(code **)(param_1 + 0xa0) = FUN_14039efe0;
    *(longlong **)(param_1 + 0x98) = plVar2;
    FUN_1403b2f70(param_1);
  }
  return;
}

