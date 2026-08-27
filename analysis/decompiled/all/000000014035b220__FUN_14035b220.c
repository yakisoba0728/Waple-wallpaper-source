// Function: FUN_14035b220
// Addr: 14035b220
// Size: 424 bytes


void FUN_14035b220(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  while (plVar1 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
LAB_14035b358:
      if (*(char *)(param_1 + 4) == '\0') {
        return;
      }
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
      }
      if (DAT_1404df428 != 0) {
        LOCK();
        DAT_1404df428 = DAT_1404df428 + 1;
        UNLOCK();
      }
      FUN_1404160c0(*(undefined8 *)(param_1 + 0x90));
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(int **)(param_1 + 0x90) = &DAT_1404df428;
      FUN_1403b2f70(param_1);
      return;
    }
    plVar1 = (longlong *)FUN_140413ae0();
    LOCK();
    bVar4 = *(longlong *)(param_1 + 0xb8) == 0;
    if (bVar4) {
      *(longlong *)(param_1 + 0xb8) = (longlong)plVar1;
    }
    UNLOCK();
    if (bVar4) {
      if (plVar1 == (longlong *)0x0) goto LAB_14035b358;
      break;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar1 = *(longlong **)(param_1 + 0xb8);
  }
  (**(code **)(*plVar1 + 8))();
  while (piVar3 = DAT_1404e51b0, DAT_1404e51b0 = piVar3, piVar3 == (int *)0x0) {
    piVar2 = (int *)FUN_1403ba670();
    piVar3 = &DAT_1404df428;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2;
    }
    LOCK();
    bVar4 = DAT_1404e51b0 == (int *)0x0;
    piVar2 = piVar3;
    if (!bVar4) {
      piVar2 = DAT_1404e51b0;
    }
    DAT_1404e51b0 = piVar2;
    UNLOCK();
    if (bVar4) break;
    if ((piVar3 != (int *)0x0) && (piVar3 != &DAT_1404df428)) {
      FUN_1404160c0(piVar3);
    }
  }
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
    }
    piVar2 = &DAT_1404df428;
    if (piVar3 != (int *)0x0) {
      piVar2 = piVar3;
    }
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    FUN_1404160c0(*(undefined8 *)(param_1 + 0x90));
    *(int **)(param_1 + 0x90) = piVar2;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_1403b2f70(param_1);
  }
  return;
}

