// Function: FUN_1401d3720
// Addr: 1401d3720
// Size: 90 bytes


void FUN_1401d3720(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(plVar1[1] + 0x1518) + 0x28))
              (*(longlong **)(plVar1[1] + 0x1518),plVar1[4]);
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *plVar1 = 0;
    func_0x00014028b040(plVar1,0x28);
    return;
  }
  plVar1 = (longlong *)param_2[1];
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(plVar1[1] + 0x1518) + 0x28))
              (*(longlong **)(plVar1[1] + 0x1518),plVar1[4]);
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *plVar1 = 0;
    func_0x00014028b040(plVar1,0x28);
  }
  plVar1 = (longlong *)param_2[2];
  param_2[1] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(plVar1[1] + 0x1518) + 0x28))
              (*(longlong **)(plVar1[1] + 0x1518),plVar1[4]);
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *plVar1 = 0;
    func_0x00014028b040(plVar1,0x28);
  }
  param_2[2] = 0;
  if (param_2[7] != 0) {
    FUN_1402d3ea0();
  }
  param_2[7] = 0;
  if (param_2[8] != 0) {
    FUN_1402d3ea0();
  }
  param_2[8] = 0;
  if (param_2[9] != 0) {
    FUN_1402d3ea0();
  }
  param_2[9] = 0;
  *(undefined2 *)(param_2 + 10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  return;
}

