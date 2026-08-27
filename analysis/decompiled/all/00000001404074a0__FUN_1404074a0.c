// Function: FUN_1404074a0
// Addr: 1404074a0
// Size: 323 bytes


ulonglong FUN_1404074a0(byte *param_1,int *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  
  pbVar3 = param_1 + 1;
  pcVar1 = "OUT-OF-RANGE";
  uVar6 = (longlong)pbVar3 - *(longlong *)(param_2 + 2);
  uVar4 = (ulonglong)(uint)param_2[6];
  if (uVar6 <= uVar4) {
    pcVar1 = "OK";
  }
  uVar2 = FUN_1402fc370("SANITIZE",pbVar3,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar3,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar1);
  if (uVar6 <= uVar4) {
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar3 - *(longlong *)(param_2 + 2)))
        || ((uint)(param_2[4] - (int)pbVar3) < (uint)*param_1)) ||
       (param_2[7] = param_2[7] - (uint)*param_1, param_2[7] < 1)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    uVar4 = 1;
    uVar2 = FUN_1402fc370("SANITIZE");
    if (cVar5 != '\0') {
      return uVar4 & 0xff;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

