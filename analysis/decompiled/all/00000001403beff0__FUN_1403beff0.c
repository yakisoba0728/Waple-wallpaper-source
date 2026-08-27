// Function: FUN_1403beff0
// Addr: 1403beff0
// Size: 199 bytes


void FUN_1403beff0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  iVar4 = 1;
  FUN_1402fc370("SANITIZE",*(undefined8 *)(param_1 + 8),0,1,0,0xffffffff,"end [%p..%p]",
                *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  piVar2 = *(int **)(param_1 + 0x30);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + iVar5;
    UNLOCK();
    if (iVar1 == iVar4) {
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
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

