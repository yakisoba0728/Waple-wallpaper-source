// Function: FUN_140396ca0
// Addr: 140396ca0
// Size: 155 bytes


void FUN_140396ca0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *piVar2 = -0xdead;
      lVar3 = *(longlong *)(piVar2 + 2);
      if (lVar3 != 0) {
        FUN_1403c3220(lVar3);
        thunk_FUN_1402d9040(lVar3);
        piVar2[2] = 0;
        piVar2[3] = 0;
      }
      if (*(code **)(piVar2 + 10) != (code *)0x0) {
        (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
        piVar2[8] = 0;
        piVar2[9] = 0;
        piVar2[10] = 0;
        piVar2[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (1 < *(int *)(param_1 + 0x18) + 1U) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

