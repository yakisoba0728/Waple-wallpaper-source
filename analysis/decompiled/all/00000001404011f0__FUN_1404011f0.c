// Function: FUN_1404011f0
// Addr: 1404011f0
// Size: 494 bytes


undefined8 FUN_1404011f0(byte *param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pbVar1 = param_1 + 2;
  uVar10 = (ulonglong)(uint)param_2[6];
  pcVar7 = "OUT-OF-RANGE";
  uVar11 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  pcVar4 = "OUT-OF-RANGE";
  if (uVar11 <= uVar10) {
    pcVar4 = "OK";
  }
  iVar9 = 0;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if ((uVar11 <= uVar10) &&
     (((param_3 == 0 ||
       ((uint)*param_1 * 0x100 + (uint)param_1[1] < (uint)(0xffffffff / (ulonglong)param_3))) &&
      (param_3 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) * param_3, param_3 < 0x7fffffff)))) {
    uVar6 = param_3 * 2;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar1 - *(longlong *)(param_2 + 2)))
        || ((uint)(param_2[4] - (int)pbVar1) < uVar6)) ||
       (param_2[7] = param_2[7] + param_3 * -2, param_2[7] <= iVar9)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (cVar3 != '\0') {
      pcVar7 = "OK";
    }
    cVar8 = '\0';
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar1,pbVar1 + uVar6,uVar6,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar7);
    if (cVar3 != '\0') {
      if ((*(char *)((longlong)param_2 + 0x3d) == cVar8) && (uVar6 = 0, param_3 != 0)) {
        do {
          pbVar2 = pbVar1 + (ulonglong)uVar6 * 2;
          cVar3 = FUN_1404093d0(pbVar2,param_2,param_1);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar5 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
          if ((uVar5 != 0) && (cVar3 = FUN_140400fb0(param_1 + uVar5,param_2), cVar3 == '\0')) {
            return 0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_3);
      }
      return 1;
    }
  }
  return 0;
}

