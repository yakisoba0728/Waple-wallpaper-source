// Function: FUN_14038c4f0
// Addr: 14038c4f0
// Size: 217 bytes


int * FUN_14038c4f0(int *param_1,int *param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    LOCK();
    *param_2 = *param_2 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_14040c300(param_1,0,0);
  lVar1 = *(longlong *)(param_1 + 2);
  if (lVar1 == 0) {
    FUN_1403bf0c0(param_1);
    return param_2;
  }
  pcVar2 = "OUT-OF-RANGE";
  if (0x13 < (uint)param_1[6]) {
    pcVar2 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",lVar1 + 0x14,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                lVar1 + 0x14,lVar1,*(undefined8 *)(param_1 + 4),pcVar2);
}

