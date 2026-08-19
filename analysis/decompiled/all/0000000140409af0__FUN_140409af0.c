// Function: FUN_140409af0
// Addr: 140409af0
// Size: 10 bytes


ulonglong FUN_140409af0(longlong param_1,int *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  ulonglong in_RAX;
  char *pcVar3;
  
  if (param_3 < 0x1fffffff) {
    uVar1 = param_3 * 8;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)(param_1 - *(longlong *)(param_2 + 2))) ||
        ((uint)(param_2[4] - (int)param_1) < uVar1)) ||
       (param_2[7] = param_2[7] + param_3 * -8, param_2[7] < 1)) {
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
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                  (ulonglong)uVar1 + param_1,uVar1,*(longlong *)(param_2 + 2),
                  *(undefined8 *)(param_2 + 4),pcVar3);
  }
  return in_RAX & 0xffffffffffffff00;
}

