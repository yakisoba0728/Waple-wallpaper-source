// Function: FUN_1400144b0
// Addr: 1400144b0
// Size: 99 bytes


longlong * FUN_1400144b0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -2;
  *(undefined ***)((longlong)*(int *)(param_1[-2] + 4) + -0x10 + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x14 + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x10;
  *param_1 = std::ios_base::vftable;
  FUN_14028c430();
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(plVar1,0x70);
  }
  return plVar1;
}

