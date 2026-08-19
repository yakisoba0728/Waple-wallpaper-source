// Function: FUN_140374c10
// Addr: 140374c10
// Size: 40 bytes


void FUN_140374c10(int *param_1,longlong param_2)

{
  char *pcVar1;
  
  param_2 = param_2 + 2;
  pcVar1 = "OUT-OF-RANGE";
  if ((ulonglong)(param_2 - *(longlong *)(param_1 + 2)) <= (ulonglong)(uint)param_1[6]) {
    pcVar1 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",param_2,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_2,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar1);
}

