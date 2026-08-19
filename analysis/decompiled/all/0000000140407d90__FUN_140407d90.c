// Function: FUN_140407d90
// Addr: 140407d90
// Size: 132 bytes


void FUN_140407d90(longlong param_1,int *param_2)

{
  char *pcVar1;
  
  param_1 = param_1 + 4;
  pcVar1 = "OUT-OF-RANGE";
  if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
    pcVar1 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar1);
}

