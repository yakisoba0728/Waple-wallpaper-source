// Function: FUN_140400470
// Addr: 140400470
// Size: 943 bytes


undefined8 FUN_140400470(byte *param_1,int *param_2,uint *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  uint uVar15;
  uint local_res8;
  
  pcVar4 = "OUT-OF-RANGE";
  pbVar14 = param_1 + 0x10;
  uVar13 = (longlong)pbVar14 - *(longlong *)(param_2 + 2);
  uVar12 = (ulonglong)(uint)param_2[6];
  if (uVar13 <= uVar12) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar14,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar14,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if ((((uVar12 < uVar13) ||
       ((uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 +
        (uint)param_1[3] < 4)) ||
      (cVar3 = FUN_140409580(param_1 + 4,param_2,param_1), cVar3 == '\0')) ||
     ((cVar3 = FUN_1403fdda0(param_1 + (ulonglong)param_1[7] +
                                       ((ulonglong)param_1[6] +
                                       (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,
                             param_2), cVar3 == '\0' ||
      (uVar15 = (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 +
                (uint)param_1[3], 0x7ffffffe < uVar15)))) {
    return 0;
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar5 = 0;
  pbVar14 = param_1 + (ulonglong)param_1[0xb] +
                      ((ulonglong)param_1[10] + (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100)
                      * 0x100;
  param_1 = param_1 + (ulonglong)param_1[0xf] +
                      ((ulonglong)param_1[0xe] +
                      (ulonglong)CONCAT11(param_1[0xc],param_1[0xd]) * 0x100) * 0x100;
  local_res8 = 0;
  uVar6 = 0;
  do {
    if (uVar10 < local_res8) {
      if ((uVar15 != 0) && ((uint)(0xffffffff / (ulonglong)uVar15) <= uVar10)) {
        return 0;
      }
      pbVar11 = pbVar14 + (ulonglong)(uVar10 * uVar15) * 2;
      cVar3 = FUN_14036f0c0(param_2,pbVar11,-uVar10,uVar15 * 2);
      if (cVar3 == '\0') {
        return 0;
      }
      param_2[7] = param_2[7] + (uVar10 - local_res8);
      if (param_2[7] < 1) {
        return 0;
      }
      pbVar2 = pbVar14;
      uVar8 = uVar6;
      if (pbVar14 < pbVar11) {
        return 0;
      }
      while (uVar7 = uVar8, pbVar11 < pbVar2) {
        pbVar1 = pbVar2 + -1;
        pbVar2 = pbVar2 + -2;
        uVar8 = *pbVar1 + 1 + (uint)*pbVar2 * 0x100;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
      }
      local_res8 = uVar10;
      if (uVar5 <= uVar9) goto LAB_1404006e9;
    }
    else {
      uVar7 = uVar6;
      if (uVar9 < uVar5) {
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar6;
        }
        return 1;
      }
LAB_1404006e9:
      uVar8 = uVar9 + 1;
      cVar3 = FUN_14036f0c0(param_2,pbVar14,uVar8,uVar15 * 2);
      if (cVar3 == '\0') {
        return 0;
      }
      param_2[7] = param_2[7] + (uVar5 - uVar9) + -1;
      if (param_2[7] < 1) {
        return 0;
      }
      if ((uVar15 != 0) && ((uint)(0xffffffff / (ulonglong)uVar15) <= uVar8)) {
        return 0;
      }
      if (pbVar14 + (ulonglong)(uVar8 * uVar15) * 2 < pbVar14) {
        return 0;
      }
      for (pbVar11 = pbVar14 + (ulonglong)(uVar5 * uVar15) * 2; uVar5 = uVar8,
          pbVar11 < pbVar14 + (ulonglong)(uVar8 * uVar15) * 2; pbVar11 = pbVar11 + 2) {
        uVar5 = pbVar11[1] + 1 + (uint)*pbVar11 * 0x100;
        if (uVar5 <= uVar7) {
          uVar5 = uVar7;
        }
        uVar7 = uVar5;
      }
    }
    cVar3 = FUN_14036edf0(param_2,param_1,uVar7);
    if (cVar3 == '\0') {
      return 0;
    }
    param_2[7] = param_2[7] + (uVar6 - uVar7);
    if (param_2[7] < 1) {
      return 0;
    }
    for (pbVar11 = param_1 + (ulonglong)uVar6 * 4; uVar6 = uVar7,
        pbVar11 < param_1 + (ulonglong)uVar7 * 4; pbVar11 = pbVar11 + 4) {
      uVar8 = (uint)*pbVar11 * 0x100 + (uint)pbVar11[1];
      uVar6 = uVar8;
      if (uVar10 <= uVar8) {
        uVar6 = uVar10;
      }
      if (uVar8 <= uVar9) {
        uVar8 = uVar9;
      }
      uVar10 = uVar6;
      uVar9 = uVar8;
    }
  } while( true );
}

