// Function: FUN_140409270
// Addr: 140409270
// Size: 345 bytes


undefined8 FUN_140409270(byte *param_1,int *param_2)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  
  pbVar3 = param_1 + 2;
  pcVar2 = "OUT-OF-RANGE";
  uVar8 = (longlong)pbVar3 - *(longlong *)(param_2 + 2);
  uVar6 = (ulonglong)(uint)param_2[6];
  if (uVar8 <= uVar6) {
    pcVar2 = "OK";
  }
  iVar4 = 0;
  FUN_1402fc370("SANITIZE",pbVar3,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar3,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if (uVar6 < uVar8) {
    return 0;
  }
  iVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar5 != 0) {
    uVar1 = iVar5 * 2 - 2;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar3 - *(longlong *)(param_2 + 2)))
        || ((uint)(param_2[4] - (int)pbVar3) < uVar1)) ||
       (param_2[7] = param_2[7] - uVar1, param_2[7] <= iVar4)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    FUN_1402fc370("SANITIZE");
    if (cVar7 == '\0') {
      return 0;
    }
  }
  return 1;
}

