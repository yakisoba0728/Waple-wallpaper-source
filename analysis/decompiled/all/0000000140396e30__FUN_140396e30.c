// Function: FUN_140396e30
// Addr: 140396e30
// Size: 165 bytes


void FUN_140396e30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    FUN_140397110(lVar2);
    thunk_FUN_1402d9040(lVar2);
  }
  piVar3 = *(int **)(param_1 + 0x28);
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
      *(undefined8 *)(param_1 + 0x28) = 0;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

