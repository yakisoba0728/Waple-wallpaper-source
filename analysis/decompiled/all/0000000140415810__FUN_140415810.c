// Function: FUN_140415810
// Addr: 140415810
// Size: 360 bytes


void FUN_140415810(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      lVar2 = *(longlong *)(param_1 + 2);
      if (lVar2 != 0) {
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      puVar5 = *(undefined8 **)(param_1 + 0x70);
      while (puVar5 != (undefined8 *)0x0) {
        piVar3 = (int *)*puVar5;
        puVar4 = (undefined8 *)puVar5[1];
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
            thunk_FUN_1402d9040(*(undefined8 *)(piVar3 + 0xe));
            piVar3[0xe] = 0;
            piVar3[0xf] = 0;
            FUN_140397460(piVar3 + 0x18);
            thunk_FUN_1402d9040(piVar3);
          }
        }
        thunk_FUN_1402d9040(puVar5);
        puVar5 = puVar4;
      }
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      }
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      FUN_1403c2a40(param_1 + 0x1c);
      if (*(code **)(param_1 + 0x12) != (code *)0x0) {
        (**(code **)(param_1 + 0x12))(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(code **)(param_1 + 0xc) != (code *)0x0) {
        (**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 10));
      }
      thunk_FUN_1402d9040(param_1);
    }
  }
  return;
}

