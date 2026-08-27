// Function: FUN_140404670
// Addr: 140404670
// Size: 409 bytes


undefined8 FUN_140404670(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined8 uVar12;
  
  pcVar6 = "OUT-OF-RANGE";
  pbVar1 = param_1 + 4;
  pcVar3 = "OUT-OF-RANGE";
  iVar4 = 1;
  uVar8 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar7 = (ulonglong)(uint)param_2[6];
  if (uVar8 <= uVar7) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if ((uVar8 <= uVar7) && ((uint)*param_1 * 0x100 + (uint)param_1[1] == iVar4)) {
    lVar11 = *(longlong *)(param_2 + 2);
    pbVar1 = param_1 + 0xc;
    uVar7 = (ulonglong)(uint)param_2[6];
    uVar12 = *(undefined8 *)(param_2 + 4);
    uVar8 = (longlong)pbVar1 - lVar11;
    if (uVar8 <= uVar7) {
      pcVar6 = "OK";
    }
    iVar4 = *param_2 + 1;
    pcVar3 = "check_point [%p] in [%p..%p] -> %s";
    uVar9 = 0;
    pbVar10 = pbVar1;
    FUN_1402fc370("SANITIZE",pbVar1,0);
    if (((uVar8 <= uVar7) && (7 < (uint)param_1[6] * 0x100 + (uint)param_1[7])) &&
       (cVar2 = FUN_1404093d0(param_1 + 10,param_2,param_1), cVar2 != '\0')) {
      uVar5 = (uint)param_1[10] * 0x100 + (uint)param_1[0xb];
      if ((uVar5 != 0) && (cVar2 = FUN_140404130(param_1 + uVar5,param_2), cVar2 == '\0')) {
        return 0;
      }
      cVar2 = FUN_14036f0c0(param_2,pbVar1,(uint)param_1[8] * 0x100 + (uint)param_1[9],
                            (uint)param_1[6] * 0x100 + (uint)param_1[7],iVar4,uVar9,pcVar3,pbVar10,
                            lVar11,uVar12,pcVar6);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

