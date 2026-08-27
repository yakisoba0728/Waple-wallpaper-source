// Function: FUN_1403fd270
// Addr: 1403fd270
// Size: 1129 bytes


undefined8 FUN_1403fd270(byte *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  pbVar17 = param_1 + 4;
  pcVar5 = "OUT-OF-RANGE";
  uVar15 = (longlong)pbVar17 - *(longlong *)(param_2 + 2);
  uVar14 = (ulonglong)(uint)param_2[6];
  if (uVar15 <= uVar14) {
    pcVar5 = "OK";
  }
  pbVar16 = (byte *)0x0;
  FUN_1402fc370("SANITIZE",pbVar17,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar17,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if ((uVar15 <= uVar14) &&
     (0xffff < (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 +
               (uint)param_1[3])) {
    uVar14 = (ulonglong)(uint)param_2[6];
    uVar15 = (longlong)(param_1 + 8) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 8,0);
    if (uVar15 <= uVar14) {
      pbVar11 = param_1 + 8;
      uVar10 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)*pbVar17 * 0x1000000 +
               (uint)param_1[7];
      pbVar17 = pbVar16;
      if (uVar10 != 0) {
        do {
          pbVar1 = pbVar11 + 8;
          pcVar5 = "OUT-OF-RANGE";
          uVar15 = (ulonglong)(uint)param_2[6];
          uVar14 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
          if (uVar14 <= uVar15) {
            pcVar5 = "OK";
          }
          FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
          if (uVar15 < uVar14) {
            return 0;
          }
          lVar2 = *(longlong *)(param_2 + 0xc);
          pbVar8 = pbVar16;
          if ((uint)pbVar17 < uVar10 - 1) {
            pbVar8 = pbVar11;
          }
          if (lVar2 == 0) {
            pbVar12 = *(byte **)(param_2 + 4);
            pbVar7 = *(byte **)(param_2 + 2);
          }
          else {
            pbVar7 = *(byte **)(lVar2 + 0x10);
            *(byte **)(param_2 + 2) = pbVar7;
            pbVar12 = pbVar7 + *(uint *)(lVar2 + 0x18);
            *(byte **)(param_2 + 4) = pbVar12;
          }
          uVar4 = (int)pbVar12 - param_2[2];
          pbVar6 = (byte *)(ulonglong)uVar4;
          param_2[6] = uVar4;
          if (pbVar8 != (byte *)0x0) {
            if ((pbVar8 < pbVar7) || (pbVar12 <= pbVar8)) {
              param_2[4] = 0;
              param_2[5] = 0;
              param_2[2] = 0;
              param_2[3] = 0;
              param_2[6] = 0;
              pbVar6 = pbVar16;
              pbVar7 = pbVar16;
              pbVar12 = pbVar16;
            }
            else {
              *(byte **)(param_2 + 2) = pbVar8;
              pbVar6 = (byte *)((ulonglong)pbVar8[3] +
                               ((ulonglong)CONCAT11(*pbVar8,pbVar8[1]) * 0x100 +
                               (ulonglong)pbVar8[2]) * 0x100);
              if (pbVar12 + -(longlong)pbVar8 <= pbVar6) {
                pbVar6 = pbVar12 + -(longlong)pbVar8;
              }
              param_2[6] = (int)pbVar6;
              *(byte **)(param_2 + 4) = pbVar6 + (longlong)pbVar8;
              pbVar7 = pbVar8;
              pbVar12 = pbVar6 + (longlong)pbVar8;
            }
          }
          uVar13 = (undefined4)((ulonglong)pbVar12 >> 0x20);
          uVar14 = (ulonglong)pbVar6 & 0xffffffff;
          uVar15 = (longlong)pbVar1 - (longlong)pbVar7;
          FUN_1402fc370("SANITIZE",pbVar1,0);
          if ((uVar14 < uVar15) ||
             (uVar4 = (uint)*pbVar11 * 0x1000000 + (uint)pbVar11[2] * 0x100 +
                      (uint)pbVar11[1] * 0x10000 + (uint)pbVar11[3], uVar4 < 8)) {
LAB_1403fd6a2:
            lVar2 = *(longlong *)(param_2 + 0xc);
            if (lVar2 != 0) {
              lVar9 = *(longlong *)(lVar2 + 0x10);
              *(longlong *)(param_2 + 2) = lVar9;
              *(ulonglong *)(param_2 + 4) = (ulonglong)*(uint *)(lVar2 + 0x18) + lVar9;
            }
            param_2[6] = param_2[4] - param_2[2];
            return 0;
          }
          if (((ulonglong)(uint)param_2[6] <
               (ulonglong)((longlong)pbVar11 - *(longlong *)(param_2 + 2))) ||
             (((uint)(param_2[4] - (int)pbVar11) < uVar4 ||
              (param_2[7] = param_2[7] - uVar4, param_2[7] < 1)))) {
            cVar3 = '\0';
          }
          else {
            cVar3 = '\x01';
          }
          pcVar5 = "OUT-OF-RANGE";
          if (cVar3 != '\0') {
            pcVar5 = "OK";
          }
          FUN_1402fc370("SANITIZE",pbVar11,0,1,*param_2 + 1,0,
                        "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar11,pbVar11 + uVar4,
                        CONCAT44(uVar13,uVar4),*(longlong *)(param_2 + 2),
                        *(undefined8 *)(param_2 + 4),pcVar5);
          if ((cVar3 == '\0') || (cVar3 = FUN_140379370(pbVar11,param_2), cVar3 == '\0'))
          goto LAB_1403fd6a2;
          lVar2 = *(longlong *)(param_2 + 0xc);
          pbVar11 = pbVar11 + ((ulonglong)CONCAT11(*pbVar11,pbVar11[1]) * 0x100 +
                              (ulonglong)pbVar11[2]) * 0x100 + (ulonglong)pbVar11[3];
          if (lVar2 == 0) {
            lVar9 = *(longlong *)(param_2 + 4);
          }
          else {
            lVar9 = *(longlong *)(lVar2 + 0x10);
            *(longlong *)(param_2 + 2) = lVar9;
            lVar9 = (ulonglong)*(uint *)(lVar2 + 0x18) + lVar9;
            *(longlong *)(param_2 + 4) = lVar9;
          }
          uVar4 = (uint)pbVar17 + 1;
          pbVar17 = (byte *)(ulonglong)uVar4;
          param_2[6] = (int)lVar9 - param_2[2];
        } while (uVar4 < uVar10);
      }
      if (((uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 < 0x30000) ||
         (cVar3 = FUN_140405dc0(pbVar11,param_2,uVar10), cVar3 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}

