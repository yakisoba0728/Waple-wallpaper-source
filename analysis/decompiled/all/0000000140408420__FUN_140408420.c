// Function: FUN_140408420
// Addr: 140408420
// Size: 330 bytes


ulonglong FUN_140408420(byte *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  
  pbVar1 = param_1 + 1;
  uVar7 = (ulonglong)(uint)param_2[6];
  pcVar5 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  pcVar3 = "OUT-OF-RANGE";
  if (uVar9 <= uVar7) {
    pcVar3 = "OK";
  }
  iVar6 = 0;
  uVar4 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar9 <= uVar7) {
    uVar2 = (uint)*param_1 * 2;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar1 - *(longlong *)(param_2 + 2)))
        || ((uint)(param_2[4] - (int)pbVar1) < uVar2)) ||
       (param_2[7] = param_2[7] + (uint)*param_1 * -2, param_2[7] <= iVar6)) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x01';
    }
    if (cVar8 != '\0') {
      pcVar5 = "OK";
    }
    uVar7 = 1;
    uVar4 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,
                          "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar1,pbVar1 + uVar2,
                          uVar2,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
    if (cVar8 != '\0') {
      return uVar7 & 0xff;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

