// Function: FUN_140014580
// Addr: 140014580
// Size: 99 bytes


longlong * FUN_140014580(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -2;
  *(undefined **)((longlong)*(int *)(param_1[-2] + 4) + -0x10 + (longlong)param_1) = &DAT_14042af80;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x14 + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x10;
  *param_1 = &DAT_14042af60;
  FUN_14028c500();
  if ((param_2 & 1) != 0) {
    plVar1 = (longlong *)func_0x00014028b040(plVar1,0x70);
    return plVar1;
  }
  return plVar1;
}

