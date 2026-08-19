// Function: FUN_14003fb60
// Addr: 14003fb60
// Size: 55 bytes


void FUN_14003fb60(longlong *param_1)

{
  *(undefined **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &DAT_140475ed8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
                    /* WARNING: Subroutine does not return */
  FUN_14004a860(param_1 + 1);
}

