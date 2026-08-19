// Function: FUN_140362870
// Addr: 140362870
// Size: 11 bytes


undefined8 * FUN_140362870(longlong param_1,int param_2,int *param_3)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = "OUT-OF-RANGE";
    param_1 = param_2 + param_1;
    if ((ulonglong)(param_1 - *(longlong *)(param_3 + 2)) <= (ulonglong)(uint)param_3[6]) {
      pcVar1 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_3 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1
                  ,*(longlong *)(param_3 + 2),*(undefined8 *)(param_3 + 4),pcVar1);
  }
  return &DAT_14045dde0;
}

