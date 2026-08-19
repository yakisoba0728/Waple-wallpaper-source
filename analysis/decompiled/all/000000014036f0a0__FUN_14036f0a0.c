// Function: FUN_14036f0a0
// Addr: 14036f0a0
// Size: 7 bytes


ulonglong FUN_14036f0a0(int *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  ulonglong in_RAX;
  char *pcVar3;
  
  if (param_3 < 0x7fffffff) {
    uVar1 = param_3 * 2;
    if ((((ulonglong)(uint)param_1[6] < (ulonglong)(param_2 - *(longlong *)(param_1 + 2))) ||
        ((uint)(param_1[4] - (int)param_2) < uVar1)) ||
       (param_1[7] = param_1[7] + param_3 * -2, param_1[7] < 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pcVar3 = "OUT-OF-RANGE";
    if (bVar2) {
      pcVar3 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_2,0,1,*param_1 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_2,
                  (ulonglong)uVar1 + param_2,uVar1,*(longlong *)(param_1 + 2),
                  *(undefined8 *)(param_1 + 4),pcVar3);
  }
  return in_RAX & 0xffffffffffffff00;
}

