// Function: FUN_14003f800
// Addr: 14003f800
// Size: 55 bytes


void FUN_14003f800(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       &PTR_UNWIND_INFO_140475ec8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
                    /* WARNING: Subroutine does not return */
  FUN_14004a860(param_1 + 2);
}

