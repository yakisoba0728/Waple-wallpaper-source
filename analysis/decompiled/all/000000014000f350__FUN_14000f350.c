// Function: FUN_14000f350
// Addr: 14000f350
// Size: 175 bytes


longlong * FUN_14000f350(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -4;
  *(undefined ***)((longlong)*(int *)(param_1[-4] + 4) + -0x20 + (longlong)param_1) =
       &PTR_LAB_1404740a0;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x24 + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x20;
  *(undefined ***)((longlong)*(int *)(param_1[-2] + 4) + -0x10 + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(param_1[-2] + 4) + -0x14 + (longlong)param_1) =
       *(int *)(param_1[-2] + 4) + -0x10;
  *(undefined ***)((longlong)*(int *)(*plVar1 + 4) + -0x20 + (longlong)param_1) = &PTR_LAB_140474098
  ;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x24 + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x18;
  *param_1 = std::ios_base::vftable;
  FUN_14028c430(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(plVar1,0x80);
  }
  return plVar1;
}

