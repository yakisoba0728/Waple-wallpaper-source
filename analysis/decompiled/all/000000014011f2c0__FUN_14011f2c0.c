// Function: FUN_14011f2c0
// Addr: 14011f2c0
// Size: 709 bytes


void FUN_14011f2c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  DWORD DVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *param_1 = &PTR_FUN_140489d68;
  LOCK();
  *(undefined1 *)(param_1 + 0x1c9) = 0;
  UNLOCK();
  if (*(int *)(param_1 + 0x1c8) != 0) {
    DVar6 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0x1c8) == DVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    local_28 = *(undefined4 *)(param_1 + 0x1c7);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0xe3c);
    uStack_20 = *(undefined4 *)(param_1 + 0x1c8);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0xe44);
    iVar7 = FUN_140291150(&local_28,0);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(2);
    }
    param_1[0x1c7] = 0;
    param_1[0x1c8] = 0;
  }
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0xe49) = 0;
  UNLOCK();
  plVar1 = (longlong *)param_1[0x1c6];
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
    lVar5 = param_1[0x1c6];
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x3128);
      FUN_14017d730(lVar5 + 0x10);
      thunk_FUN_14028af80(lVar5,0x31f0);
    }
    param_1[0x1c6] = 0;
  }
  param_1[0x1c5] = 0;
  FUN_14012b820(param_1 + 0x18);
  (**(code **)(param_1[0x54] + 0x28))(param_1 + 0x54);
  if (*(int *)(param_1 + 0x1c8) == 0) {
    FUN_1400c16d0(param_1 + 0x54);
    FUN_14003f730(param_1 + 0x32);
    FUN_14000d9e0(param_1 + 0x2d);
    FUN_140030c70(param_1 + 0x2b);
    FUN_140016770(param_1 + 0x26);
    FUN_14007ac00(param_1 + 0x24);
    param_1[0x23] = &PTR_FUN_140489890;
    FUN_140016770(param_1 + 0x14);
    FUN_140016770(param_1 + 0x10);
    *param_1 = &PTR_FUN_140489e48;
    FUN_140016770(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140015110();
}

