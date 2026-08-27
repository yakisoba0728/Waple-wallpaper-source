// Function: FUN_14000f1e0
// Addr: 14000f1e0
// Size: 99 bytes


longlong * FUN_14000f1e0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -3;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_140474098;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x1c + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x18;
  *param_1 = std::ios_base::vftable;
  FUN_14028c430();
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(plVar1,0x78);
  }
  return plVar1;
}

