// Function: FUN_1401205d0
// Addr: 1401205d0
// Size: 438 bytes


void FUN_1401205d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  LOCK();
  *(undefined1 *)(param_1 + 0xe49) = 0;
  UNLOCK();
  plVar1 = *(longlong **)(param_1 + 0xe30);
  if (plVar1 != (longlong *)0x0) {
    *(uint *)(plVar1 + 0x25) = *(uint *)(plVar1 + 0x25) | 0xc000000;
    plVar1[0x2ef] = 0;
    if ((longlong *)plVar1[0x308] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x308] + 0x10))();
    }
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)plVar1[0xb];
    *plVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    plVar1[0x614] = 0;
    plVar1[0x615] = 0;
    plVar1[0x616] = 0;
    plVar1[0xb] = 0;
    plVar1[0x612] = 0;
    plVar1[0x613] = 0;
    plVar1[0x61f] = 0;
    plVar1[0x620] = 0;
    plVar1[0x617] = 0;
    plVar1[0x618] = 0;
    plVar1[0x619] = 0;
    plVar1[0x61a] = 0;
    plVar1[0x61b] = 0;
    plVar1[0x61c] = 0;
    plVar1[0x61d] = 0;
    plVar1[0x61e] = 0;
    plVar1[0x2a2] = 0;
    plVar1[0x63a] = 0;
    plVar1[0x63b] = 0;
    plVar1[0x63c] = 0;
    *(undefined4 *)(plVar1 + 0x63d) = 0;
    puVar2 = (undefined8 *)plVar1[0x2db];
    for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
      puVar4 = (undefined8 *)puVar3[6];
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    FUN_140151e70(plVar1 + 0x2da);
    FUN_14017eb50(plVar1);
    *(uint *)(plVar1 + 0x25) = *(uint *)(plVar1 + 0x25) & 0xf3ffffff;
    lVar5 = *(longlong *)(param_1 + 0xe30);
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x3128);
      FUN_14017d730(lVar5 + 0x10);
      thunk_FUN_14028af80(lVar5,0x31f0);
    }
    *(undefined8 *)(param_1 + 0xe30) = 0;
  }
  *(undefined8 *)(param_1 + 0xe28) = 0;
  FUN_14012b820(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x000140120782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x2a0) + 0x28))();
  return;
}

