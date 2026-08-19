// Function: FUN_14009afb0
// Addr: 14009afb0
// Size: 34 bytes


void FUN_14009afb0(longlong param_1,int param_2,undefined8 param_3)

{
  *(int *)(param_1 + 0x34) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(param_1 + 0x38,param_3,(longlong)param_2 << 3);
}

