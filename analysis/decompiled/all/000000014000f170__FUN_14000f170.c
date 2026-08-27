// Function: FUN_14000f170
// Addr: 14000f170
// Size: 99 bytes


longlong * FUN_14000f170(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -2;
  *(undefined ***)((longlong)*(int *)(param_1[-2] + 4) + -0x10 + (longlong)param_1) =
       &PTR_LAB_1404741b8;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x14 + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x10;
  *param_1 = std::ios_base::vftable;
  FUN_14028c430();
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(plVar1,0x70);
  }
  return plVar1;
}

