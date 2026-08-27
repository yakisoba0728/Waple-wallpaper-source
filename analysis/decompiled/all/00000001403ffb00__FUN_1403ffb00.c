// Function: FUN_1403ffb00
// Addr: 1403ffb00
// Size: 1185 bytes


undefined8 FUN_1403ffb00(byte *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  uint local_res8;
  undefined4 uVar21;
  undefined8 uVar20;
  uint local_58;
  
  pcVar4 = "OUT-OF-RANGE";
  pbVar9 = param_1 + 0x10;
  uVar15 = (ulonglong)(uint)param_2[6];
  uVar17 = (longlong)pbVar9 - *(longlong *)(param_2 + 2);
  if (uVar17 <= uVar15) {
    pcVar4 = "OK";
  }
  uVar20 = *(undefined8 *)(param_2 + 4);
  uVar5 = 0;
  FUN_1402fc370("SANITIZE",pbVar9,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar9,
                *(longlong *)(param_2 + 2),uVar20,pcVar4);
  if ((((uVar17 <= uVar15) &&
       (3 < (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3])) &&
      (cVar3 = FUN_140409580(param_1 + 4,param_2,param_1), cVar3 != '\0')) &&
     (cVar3 = FUN_1403fdda0(param_1 + (ulonglong)param_1[7] +
                                      ((ulonglong)param_1[6] +
                                      (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,
                            param_2), cVar3 != '\0')) {
    pbVar19 = param_1 + (ulonglong)param_1[0xb] +
                        ((ulonglong)param_1[10] + (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100
                        ) * 0x100;
    pbVar9 = param_1 + (ulonglong)param_1[0xf] +
                       ((ulonglong)param_1[0xe] +
                       (ulonglong)CONCAT11(param_1[0xc],param_1[0xd]) * 0x100) * 0x100;
    uVar16 = (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 +
             (uint)param_1[3];
    uVar15 = (ulonglong)uVar16;
    if (uVar16 < 0x7fffffff) {
      local_58 = 0;
      local_res8 = 0;
      piVar1 = param_2 + 7;
      uVar17 = uVar5;
      uVar11 = uVar5;
      uVar12 = uVar5;
      uVar18 = uVar5;
      iVar13 = uVar16 * 2;
      do {
        uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
        uVar10 = (uint)uVar12;
        uVar7 = (uint)uVar11;
        uVar8 = (uint)uVar18;
        if (uVar10 < (uint)uVar5) {
          if (((int)uVar15 != 0) && ((uint)(0xffffffff / (uVar15 & 0xffffffff)) <= uVar10)) {
            return 0;
          }
          pbVar14 = pbVar19 + (ulonglong)(uVar10 * (int)uVar15) * 2;
          cVar3 = FUN_14036f0c0(param_2,pbVar14,-uVar10,iVar13);
          if (cVar3 == '\0') {
            return 0;
          }
          *piVar1 = *piVar1 + (uVar10 - local_res8);
          if (*piVar1 < 1) {
            return 0;
          }
          pbVar2 = pbVar19;
          if (pbVar19 < pbVar14) {
            return 0;
          }
          while (pbVar14 < pbVar2) {
            uVar6 = pbVar2[-1] + 1 + (uint)pbVar2[-2] * 0x100;
            if (uVar6 <= (uint)uVar17) {
              uVar6 = (uint)uVar17;
            }
            uVar17 = (ulonglong)uVar6;
            pbVar2 = pbVar2 + -2;
          }
          iVar13 = uVar16 * 2;
          local_res8 = uVar10;
          if (uVar8 <= uVar7) goto LAB_1403ffda6;
        }
        else {
          if (uVar7 < uVar8) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = (int)uVar17;
            }
            return 1;
          }
LAB_1403ffda6:
          uVar10 = uVar7 + 1;
          cVar3 = FUN_14036f0c0(param_2,pbVar19,uVar10,iVar13);
          if (cVar3 == '\0') {
            return 0;
          }
          *piVar1 = *piVar1 + (uVar8 - uVar7) + -1;
          if (*piVar1 < 1) {
            return 0;
          }
          if ((uVar16 != 0) && ((uint)(0xffffffff / (ulonglong)uVar16) <= uVar10)) {
            return 0;
          }
          if (pbVar19 + (ulonglong)(uVar10 * uVar16) * 2 < pbVar19) {
            return 0;
          }
          for (pbVar14 = pbVar19 + (ulonglong)(uVar8 * uVar16) * 2;
              pbVar14 < pbVar19 + (ulonglong)(uVar10 * uVar16) * 2; pbVar14 = pbVar14 + 2) {
            uVar7 = pbVar14[1] + 1 + (uint)*pbVar14 * 0x100;
            if (uVar7 <= (uint)uVar17) {
              uVar7 = (uint)uVar17;
            }
            uVar17 = (ulonglong)uVar7;
          }
          uVar18 = (ulonglong)uVar10;
        }
        uVar15 = (ulonglong)uVar16;
        uVar7 = (uint)uVar17;
        if (0x1ffffffe < uVar7) {
          return 0;
        }
        uVar10 = uVar7 * 8;
        if ((((ulonglong)(uint)param_2[6] <
              (ulonglong)((longlong)pbVar9 - *(longlong *)(param_2 + 2))) ||
            ((uint)(param_2[4] - (int)pbVar9) < uVar10)) ||
           (*piVar1 = *piVar1 + uVar7 * -8, *piVar1 < 1)) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        pcVar4 = "OUT-OF-RANGE";
        if (cVar3 != '\0') {
          pcVar4 = "OK";
        }
        uVar20 = CONCAT44(uVar21,uVar10);
        iVar13 = 0;
        FUN_1402fc370("SANITIZE",pbVar9,0,1,*param_2 + 1,0,
                      "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar9,pbVar9 + uVar10,
                      uVar20,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
        if (cVar3 == '\0') {
          return 0;
        }
        *piVar1 = *piVar1 + (local_58 - uVar7);
        if (*piVar1 <= iVar13) {
          return 0;
        }
        for (pbVar14 = pbVar9 + (ulonglong)local_58 * 8; pbVar14 < pbVar9 + uVar17 * 8;
            pbVar14 = pbVar14 + 8) {
          uVar8 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
          uVar10 = uVar8;
          if ((uint)uVar12 <= uVar8) {
            uVar10 = (uint)uVar12;
          }
          uVar12 = (ulonglong)uVar10;
          uVar5 = (ulonglong)uVar8;
          if (uVar8 <= (uint)uVar11) {
            uVar5 = uVar11;
          }
          uVar11 = uVar5;
        }
        uVar5 = (ulonglong)local_res8;
        iVar13 = (int)uVar15 * 2;
        local_58 = uVar7;
      } while( true );
    }
  }
  return 0;
}

