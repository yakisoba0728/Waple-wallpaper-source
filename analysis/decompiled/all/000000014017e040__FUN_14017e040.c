// Function: FUN_14017e040
// Addr: 14017e040
// Size: 312 bytes


void FUN_14017e040(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  if (*(char *)(param_1 + 0x14e0) != '\0') {
    LOCK();
    *(undefined1 *)(param_1 + 0x14e0) = 0;
    UNLOCK();
    iVar3 = FUN_140290d80(param_1 + 0x1490);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)(param_1 + 0x14dc) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x14dc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x14f0);
    for (puVar5 = *(undefined8 **)(param_1 + 0x14e8); puVar5 != puVar1; puVar5 = puVar5 + 0x1b) {
      plVar4 = puVar5 + 3;
      if (0xf < (ulonglong)puVar5[6]) {
        plVar4 = (longlong *)*plVar4;
      }
      plVar4 = (longlong *)FUN_14014cf90(param_1 + 0x1520,plVar4,0);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4,puVar5);
      }
      piVar2 = (int *)*puVar5;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        thunk_FUN_14028af80(*(undefined8 *)(piVar2 + 2));
        thunk_FUN_14028af80(piVar2,0x18);
      }
    }
    if (*(longlong *)(param_1 + 0x14e8) != *(longlong *)(param_1 + 0x14f0)) {
      FUN_14017e540();
      *(undefined8 *)(param_1 + 0x14f0) = *(undefined8 *)(param_1 + 0x14e8);
    }
    FUN_140290ea0(param_1 + 0x1490);
  }
  return;
}

