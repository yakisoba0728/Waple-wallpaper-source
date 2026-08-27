// Function: FUN_140407a10
// Addr: 140407a10
// Size: 325 bytes


ulonglong FUN_140407a10(byte *param_1,int *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  
  pbVar3 = param_1 + 1;
  pcVar1 = "OUT-OF-RANGE";
  uVar8 = (longlong)pbVar3 - *(longlong *)(param_2 + 2);
  uVar6 = (ulonglong)(uint)param_2[6];
  if (uVar8 <= uVar6) {
    pcVar1 = "OK";
  }
  iVar4 = 0;
  uVar2 = FUN_1402fc370("SANITIZE",pbVar3,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar3,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar1);
  if (uVar8 <= uVar6) {
    uVar5 = (uint)*param_1 + (uint)*param_1 * 2;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar3 - *(longlong *)(param_2 + 2)))
        || ((uint)(param_2[4] - (int)pbVar3) < uVar5)) ||
       (param_2[7] = param_2[7] - uVar5, param_2[7] <= iVar4)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    uVar6 = 1;
    uVar2 = FUN_1402fc370("SANITIZE");
    if (cVar7 != '\0') {
      return uVar6 & 0xff;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

