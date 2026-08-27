// Function: FUN_1404069b0
// Addr: 1404069b0
// Size: 459 bytes


undefined8 FUN_1404069b0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar7;
  
  pbVar1 = param_1 + 0xc;
  uVar10 = (ulonglong)(uint)param_2[6];
  pcVar4 = "OUT-OF-RANGE";
  uVar11 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  iVar9 = 1;
  if (uVar11 <= uVar10) {
    pcVar4 = "OK";
  }
  uVar7 = 0;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if ((uVar11 <= uVar10) && ((uint)*param_1 * 0x100 + (uint)param_1[1] == iVar9)) {
    uVar8 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
    cVar3 = FUN_140409930(pbVar1,param_2,uVar8);
    if (cVar3 != '\0') {
      if (uVar8 != 0) {
        do {
          uVar11 = (ulonglong)(uint)param_2[6];
          lVar2 = uVar7 * 0xc;
          pbVar5 = param_1 + lVar2 + 0x18;
          pcVar4 = "OUT-OF-RANGE";
          uVar10 = (longlong)pbVar5 - *(longlong *)(param_2 + 2);
          if (uVar10 <= uVar11) {
            pcVar4 = "OK";
          }
          FUN_1402fc370("SANITIZE",pbVar5,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar5,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
          if (uVar11 < uVar10) {
            return 0;
          }
          cVar3 = FUN_140409750(param_1 + (ulonglong)pbVar1[lVar2 + 7] +
                                          ((ulonglong)pbVar1[lVar2 + 6] +
                                          (ulonglong)CONCAT11(pbVar1[lVar2 + 4],pbVar1[lVar2 + 5]) *
                                          0x100) * 0x100,param_2,
                                (uint)pbVar1[lVar2 + 3] + (uint)pbVar1[lVar2 + 2] * 0x100);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < uVar8);
      }
      return 1;
    }
  }
  return 0;
}

