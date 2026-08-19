// Function: FUN_140409a00
// Addr: 140409a00
// Size: 10 bytes


ulonglong FUN_140409a00(longlong param_1,int *param_2,uint param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  char *pcVar2;
  uint uVar3;
  
  if (param_3 < 0x15555555) {
    uVar3 = param_3 * 0xc;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)(param_1 - *(longlong *)(param_2 + 2))) ||
        ((uint)(param_2[4] - (int)param_1) < uVar3)) ||
       (param_2[7] = param_2[7] + param_3 * -0xc, param_2[7] < 1)) {
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
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                  (ulonglong)uVar3 + param_1,uVar3,*(longlong *)(param_2 + 2),
                  *(undefined8 *)(param_2 + 4),pcVar2);
  }
  return in_RAX & 0xffffffffffffff00;
}

