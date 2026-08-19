// Function: FUN_14036f190
// Addr: 14036f190
// Size: 4 bytes


ulonglong FUN_14036f190(int *param_1,longlong param_2,uint param_3,uint param_4)

{
  bool bVar1;
  char *pcVar2;
  
  if ((param_4 != 0) && ((uint)(0xffffffff / (ulonglong)param_4) <= param_3)) {
    return 0xffffffff / (ulonglong)param_4 & 0xffffff00;
  }
  param_3 = param_3 * param_4;
  if ((((ulonglong)(uint)param_1[6] < (ulonglong)(param_2 - *(longlong *)(param_1 + 2))) ||
      ((uint)(param_1[4] - (int)param_2) < param_3)) ||
     (param_1[7] = param_1[7] - param_3, param_1[7] < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  pcVar2 = "OUT-OF-RANGE";
  if (bVar1) {
    pcVar2 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",param_2,0,1,*param_1 + 1,0,
                "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_2,
                (ulonglong)param_3 + param_2,param_3,*(longlong *)(param_1 + 2),
                *(undefined8 *)(param_1 + 4),pcVar2);
}

