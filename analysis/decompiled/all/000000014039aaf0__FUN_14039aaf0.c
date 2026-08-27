// Function: FUN_14039aaf0
// Addr: 14039aaf0
// Size: 281 bytes


void FUN_14039aaf0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  FUN_1403beff0();
  if (1 < *(int *)(param_1 + 0xa0) + 1U) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xa8));
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (1 < *(int *)(param_1 + 0x108) + 1U) {
    FUN_14040bdf0(param_1 + 0x108,0);
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x110));
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (1 < *(int *)(param_1 + 0x118) + 1U) {
    FUN_14040bdf0(param_1 + 0x118,0);
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x120));
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  piVar2 = *(int **)(param_1 + 0x40);
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
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

