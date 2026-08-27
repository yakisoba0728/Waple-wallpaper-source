// Function: FUN_14038c340
// Addr: 14038c340
// Size: 215 bytes


ulonglong FUN_14038c340(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  char *pcVar3;
  ulonglong uVar4;
  char cVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0xffffffff) {
    lVar2 = *(longlong *)(param_1 + 8);
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)(lVar2 - *(longlong *)(param_2 + 2))) ||
        ((uint)(param_2[4] - (int)lVar2) < uVar1)) ||
       (param_2[7] = param_2[7] - uVar1, param_2[7] < 1)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    pcVar3 = "OUT-OF-RANGE";
    if (cVar5 != '\0') {
      pcVar3 = "OK";
    }
    uVar4 = 1;
    in_RAX = FUN_1402fc370("SANITIZE",lVar2,0,1,*param_2 + 1,0,
                           "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",lVar2,
                           lVar2 + (ulonglong)uVar1,uVar1,*(longlong *)(param_2 + 2),
                           *(undefined8 *)(param_2 + 4),pcVar3);
    if (cVar5 != '\0') {
      return uVar4 & 0xff;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

