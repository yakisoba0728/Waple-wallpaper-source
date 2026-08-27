// Function: FUN_1403969f0
// Addr: 1403969f0
// Size: 479 bytes


void FUN_1403969f0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      puVar2 = *(undefined8 **)(param_1[2] + uVar5 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (1 < *(int *)(puVar2 + 6) + 1U) {
          *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
          thunk_FUN_1402d9040(puVar2[7]);
        }
        puVar2[6] = 0;
        puVar2[7] = 0;
        if (1 < *(int *)(puVar2 + 3) + 1U) {
          *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
          thunk_FUN_1402d9040(puVar2[4]);
        }
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined4 *)(puVar2 + 8) = 0xffff2153;
        lVar3 = puVar2[9];
        if (lVar3 != 0) {
          FUN_1403c3220(lVar3);
          thunk_FUN_1402d9040(lVar3);
          puVar2[9] = 0;
        }
        if (puVar2[0xd] != 0) {
          thunk_FUN_1402d9040();
          puVar2[0xd] = 0;
        }
        *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
        piVar4 = (int *)*puVar2;
        if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
          LOCK();
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 1) {
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
        thunk_FUN_1402d9040(puVar2);
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)((longlong)param_1 + 0xc));
  }
  if (1 < *(int *)(param_1 + 1) + 1U) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    thunk_FUN_1402d9040(param_1[2]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  piVar4 = (int *)*param_1;
  if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
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
  *param_1 = 0;
  if (1 < *(int *)(param_1 + 1) + 1U) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    thunk_FUN_1402d9040(param_1[2]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

