// Function: FUN_14039ac10
// Addr: 14039ac10
// Size: 332 bytes


int * FUN_14039ac10(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  FUN_1403beff0();
  if (1 < *(int *)(param_1 + 0x50) + 1U) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (1 < *(int *)(param_1 + 0xa0) + 1U) {
    FUN_14040bdf0(param_1 + 0xa0,0);
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xa8));
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  uVar4 = *(int *)(param_1 + 0xb0) + 1;
  piVar5 = (int *)(ulonglong)uVar4;
  if (1 < uVar4) {
    FUN_14040bea0(param_1 + 0xb0,0);
    piVar5 = (int *)thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xb8));
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  puVar1 = *(uint **)(param_1 + 0x40);
  if ((puVar1 != (uint *)0x0) && (piVar5 = (int *)(ulonglong)*puVar1, *puVar1 != 0)) {
    LOCK();
    uVar4 = *puVar1;
    piVar5 = (int *)(ulonglong)uVar4;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar4 == 1) {
      *puVar1 = 0xffff2153;
      lVar2 = *(longlong *)(puVar1 + 2);
      if (lVar2 != 0) {
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      if (*(code **)(puVar1 + 10) != (code *)0x0) {
        (**(code **)(puVar1 + 10))(*(undefined8 *)(puVar1 + 8));
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
      }
      piVar5 = (int *)thunk_FUN_1402d9040(puVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  piVar3 = *(int **)(param_1 + 0xc0);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar5 = *(int **)(param_1 + 0xc0);
    bVar6 = piVar3 == piVar5;
    if (bVar6) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      piVar5 = piVar3;
    }
    UNLOCK();
    if (bVar6) {
      if (1 < *piVar3 + 1U) {
        piVar3[1] = 0;
        thunk_FUN_1402d9040(*(undefined8 *)(piVar3 + 2));
      }
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar5 = (int *)thunk_FUN_1402d9040(piVar3);
    }
  }
  return piVar5;
}

