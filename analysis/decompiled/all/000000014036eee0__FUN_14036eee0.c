// Function: FUN_14036eee0
// Addr: 14036eee0
// Size: 236 bytes


ulonglong FUN_14036eee0(int *param_1,longlong param_2,uint param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (param_3 < 0x15555555) {
    uVar4 = param_3 * 0xc;
    if ((((ulonglong)(uint)param_1[6] < (ulonglong)(param_2 - *(longlong *)(param_1 + 2))) ||
        ((uint)(param_1[4] - (int)param_2) < uVar4)) ||
       (param_1[7] = param_1[7] + param_3 * -0xc, param_1[7] < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    pcVar2 = "OUT-OF-RANGE";
    if (bVar1) {
      pcVar2 = "OK";
    }
    uVar3 = 1;
    in_RAX = FUN_1402fc370("SANITIZE",param_2,0,1,*param_1 + 1,0,
                           "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_2,
                           (ulonglong)uVar4 + param_2,uVar4,*(longlong *)(param_1 + 2),
                           *(undefined8 *)(param_1 + 4),pcVar2);
    if (bVar1) {
      return uVar3 & 0xff;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

