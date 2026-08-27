// Function: FUN_140401c20
// Addr: 140401c20
// Size: 618 bytes


undefined8 FUN_140401c20(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  char *pcVar11;
  
  pbVar1 = param_1 + 0xc;
  uVar7 = (ulonglong)(uint)param_2[6];
  pcVar11 = "OUT-OF-RANGE";
  uVar10 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  pcVar5 = "OUT-OF-RANGE";
  if (uVar10 <= uVar7) {
    pcVar5 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if (((uVar10 <= uVar7) &&
      (cVar4 = FUN_14036edf0(param_2,param_1 + (ulonglong)param_1[0xb] +
                                               ((ulonglong)param_1[10] +
                                               (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100) *
                                               0x100,(uint)param_1[7] + (uint)param_1[6] * 0x100),
      cVar4 != '\0')) &&
     (cVar4 = FUN_14036f0c0(param_2,pbVar1,(uint)param_1[4] * 0x100 + (uint)param_1[5],2),
     cVar4 != '\0')) {
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 0) {
      return 1;
    }
    uVar10 = (ulonglong)(uint)param_2[6];
    bVar2 = param_1[3];
    bVar3 = param_1[2];
    iVar8 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    pbVar9 = param_1 + (iVar8 * 2 + 0xc);
    pbVar1 = pbVar9 + 0xc;
    uVar7 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    if (uVar7 <= uVar10) {
      pcVar11 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar11);
    if (((uVar7 <= uVar10) &&
        ((uVar6 = (uint)pbVar9[1] * 0x10000 + (uint)pbVar9[2] * 0x100 + (uint)*pbVar9 * 0x1000000 +
                  (uint)pbVar9[3], uVar6 == 0 ||
         (cVar4 = FUN_14036edf0(param_2,param_1 + uVar6,iVar8), cVar4 != '\0')))) &&
       ((uVar6 = (uint)pbVar9[5] * 0x10000 + (uint)pbVar9[6] * 0x100 + (uint)pbVar9[4] * 0x1000000 +
                 (uint)pbVar9[7], uVar6 == 0 ||
        (cVar4 = FUN_140409660(param_1 + uVar6,param_2,iVar8), cVar4 != '\0')))) {
      uVar6 = (uint)pbVar9[9] * 0x10000 + (uint)pbVar9[10] * 0x100 + (uint)pbVar9[8] * 0x1000000 +
              (uint)pbVar9[0xb];
      if (uVar6 == 0) {
        return 1;
      }
      cVar4 = FUN_140409660(param_1 + uVar6,param_2,(uint)bVar3 * 0x100 + (uint)bVar2);
      if (cVar4 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

