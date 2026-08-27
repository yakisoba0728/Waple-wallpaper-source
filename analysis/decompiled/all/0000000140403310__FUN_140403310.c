// Function: FUN_140403310
// Addr: 140403310
// Size: 484 bytes


ulonglong FUN_140403310(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pbVar1 = param_1 + 1;
  uVar6 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar5 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar4 = 1;
  if (uVar5 <= uVar6) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar6 < uVar5) {
    return 0;
  }
  if (*param_1 == 0) {
    uVar4 = (ulonglong)(uint)param_2[6];
    uVar6 = (longlong)(param_1 + 4) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 4);
    if (uVar4 < uVar6) {
      return 0;
    }
  }
  else {
    if ((uint)*param_1 != (uint)uVar4) {
      return uVar4 & 0xff;
    }
    uVar4 = (ulonglong)(uint)param_2[6];
    uVar6 = (longlong)(param_1 + 6) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 6,0);
    if (uVar4 < uVar6) {
      return 0;
    }
  }
  cVar2 = FUN_14036f0c0(param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}

