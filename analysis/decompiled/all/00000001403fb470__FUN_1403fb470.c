// Function: FUN_1403fb470
// Addr: 1403fb470
// Size: 630 bytes


undefined8 FUN_1403fb470(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  
  pbVar1 = param_1 + 4;
  uVar8 = (ulonglong)(uint)param_2[6];
  pcVar10 = "OUT-OF-RANGE";
  pcVar5 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar4 = 1;
  if (uVar9 <= uVar8) {
    pcVar5 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if (uVar9 <= uVar8) {
    uVar7 = (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar7 == 0) {
      return 1;
    }
    if (uVar7 < uVar7 + 1) {
      lVar14 = *(longlong *)(param_2 + 2);
      pbVar13 = param_1 + 5;
      uVar8 = (ulonglong)(uint)param_2[6];
      uVar9 = (longlong)pbVar13 - lVar14;
      pcVar5 = "OUT-OF-RANGE";
      if (uVar9 <= uVar8) {
        pcVar5 = "OK";
      }
      iVar6 = *param_2 + 1;
      uVar15 = *(undefined8 *)(param_2 + 4);
      pcVar12 = "check_point [%p] in [%p..%p] -> %s";
      uVar11 = 0;
      FUN_1402fc370("SANITIZE",pbVar13,0);
      if (uVar9 <= uVar8) {
        bVar2 = *pbVar1;
        if ((bVar2 - 1 < 4) && ((bVar2 == 0 || (uVar4 < (uint)(0xffffffff / (ulonglong)bVar2))))) {
          cVar3 = FUN_14036f0c0(param_2,param_1 + 5,(ulonglong)bVar2,
                                param_1[3] + 1 +
                                (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
                                (uint)*param_1 * 0x1000000,iVar6,uVar11,pcVar12,pbVar13,lVar14,
                                uVar15,pcVar5);
          uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
          if (cVar3 != '\0') {
            iVar6 = (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
                    (uint)*param_1 * 0x1000000 + (uint)param_1[3];
            uVar4 = FUN_1403ed440(param_1,iVar6);
            param_1 = param_1 + (ulonglong)((iVar6 + 1) * (uint)*pbVar1) + 4;
            if ((((ulonglong)(uint)param_2[6] <
                  (ulonglong)((longlong)param_1 - *(longlong *)(param_2 + 2))) ||
                ((uint)(param_2[4] - (int)param_1) < uVar4)) ||
               (param_2[7] = param_2[7] - uVar4, param_2[7] < 1)) {
              cVar3 = '\0';
            }
            else {
              cVar3 = '\x01';
            }
            if (cVar3 != '\0') {
              pcVar10 = "OK";
            }
            FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                          "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                          param_1 + uVar4,CONCAT44(uVar16,uVar4),*(longlong *)(param_2 + 2),
                          *(undefined8 *)(param_2 + 4),pcVar10);
            if (cVar3 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

