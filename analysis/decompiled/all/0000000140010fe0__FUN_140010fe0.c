// Function: FUN_140010fe0
// Addr: 140010fe0
// Size: 144 bytes


undefined8 * FUN_140010fe0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) != 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x50 + (longlong)param_2);
  if ((plVar1 != (longlong *)0x0) && (plVar1 != param_2)) {
    FUN_140012a00();
    *(bool *)(param_1 + 1) =
         *(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0;
    return param_1;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

