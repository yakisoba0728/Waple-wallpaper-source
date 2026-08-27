// Function: FUN_1400ec060
// Addr: 1400ec060
// Size: 435 bytes


void FUN_1400ec060(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined8 *)param_1[0x1d];
  *param_1 = &PTR_FUN_140487088;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined4 *)puVar1[1];
    for (puVar7 = (undefined4 *)*puVar1; puVar7 != puVar2; puVar7 = puVar7 + 8) {
      puVar1 = *(undefined8 **)(puVar7 + 4);
      for (puVar5 = *(undefined8 **)(puVar7 + 2); puVar5 != puVar1; puVar5 = puVar5 + 4) {
        if ((*(uint *)((longlong)puVar5 + 0xc) & 0x40000000) != 0) {
          (**(code **)(**(longlong **)(param_1[1] + 0x158) + 0x18))
                    (*(longlong **)(param_1[1] + 0x158),*puVar7,*puVar5,*(undefined4 *)(puVar5 + 1))
          ;
        }
      }
    }
    lVar3 = param_1[0x1d];
    if (lVar3 != 0) {
      FUN_1400efce0(lVar3);
      thunk_FUN_14028af80(lVar3,0x20);
    }
    param_1[0x1d] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x1b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x1b] = 0;
  if ((undefined8 *)param_1[0x1c] != (undefined8 *)0x0) {
    (**(code **)(**(longlong **)(param_1[1] + 0x158) + 0x150))
              (*(longlong **)(param_1[1] + 0x158),*(undefined8 *)param_1[0x1c]);
    thunk_FUN_14028af80(param_1[0x1c],0x20);
    param_1[0x1c] = 0;
  }
  if ((longlong *)param_1[0x2d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x10))();
    param_1[0x2d] = 0;
  }
  plVar4 = (longlong *)param_1[0x29];
  for (plVar6 = (longlong *)param_1[0x28]; plVar6 != plVar4; plVar6 = plVar6 + 3) {
    if ((longlong *)plVar6[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar6[2] + 0x10))();
      plVar6[2] = 0;
    }
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x10))();
        *plVar6 = 0;
      }
      if ((longlong *)plVar6[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar6[1] + 0x10))();
        plVar6[1] = 0;
      }
    }
  }
  FUN_1400efc60(param_1 + 0x28);
  FUN_14015ede0(param_1);
  return;
}

