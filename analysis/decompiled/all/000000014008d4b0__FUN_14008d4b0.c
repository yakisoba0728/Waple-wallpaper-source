// Function: FUN_14008d4b0
// Addr: 14008d4b0
// Size: 114 bytes


void FUN_14008d4b0(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140485600;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x90;
  FUN_140014ae0(param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140474098;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[0x12] = (longlong)std::ios_base::vftable;
  FUN_14028c430();
  return;
}

