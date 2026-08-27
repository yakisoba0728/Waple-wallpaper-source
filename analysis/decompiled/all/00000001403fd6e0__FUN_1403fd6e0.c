// Function: FUN_1403fd6e0
// Addr: 1403fd6e0
// Size: 996 bytes


undefined8 FUN_1403fd6e0(byte *param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  uint uVar19;
  undefined8 uVar20;
  char *pcVar21;
  byte *pbVar22;
  undefined8 uVar23;
  byte *pbVar5;
  
  pbVar11 = param_1 + 2;
  pcVar4 = "OUT-OF-RANGE";
  uVar17 = (longlong)pbVar11 - *(longlong *)(param_2 + 2);
  uVar16 = (ulonglong)(uint)param_2[6];
  if (uVar17 <= uVar16) {
    pcVar4 = "OK";
  }
  pbVar18 = (byte *)0x0;
  FUN_1402fc370("SANITIZE",pbVar11,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar11,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if (uVar17 <= uVar16) {
    pbVar9 = *(byte **)(param_2 + 2);
    pbVar22 = param_1 + 4;
    pcVar4 = "OUT-OF-RANGE";
    uVar16 = (ulonglong)(uint)param_2[6];
    uVar17 = (longlong)pbVar22 - (longlong)pbVar9;
    if (uVar17 <= uVar16) {
      pcVar4 = "OK";
    }
    iVar7 = *param_2 + 1;
    uVar23 = *(undefined8 *)(param_2 + 4);
    pcVar21 = "check_point [%p] in [%p..%p] -> %s";
    uVar20 = 0;
    FUN_1402fc370("SANITIZE",pbVar22,0);
    if (uVar17 <= uVar16) {
      pbVar12 = param_1 + 4;
      uVar19 = (uint)param_1[3] + (uint)*pbVar11 * 0x100;
      pbVar11 = pbVar18;
      if (uVar19 != 0) {
        do {
          pbVar22 = pbVar12 + 6;
          pcVar4 = "OUT-OF-RANGE";
          uVar17 = (ulonglong)(uint)param_2[6];
          uVar16 = (longlong)pbVar22 - *(longlong *)(param_2 + 2);
          if (uVar16 <= uVar17) {
            pcVar4 = "OK";
          }
          FUN_1402fc370("SANITIZE",pbVar22,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar22,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
          if (uVar17 < uVar16) {
            return 0;
          }
          lVar1 = *(longlong *)(param_2 + 0xc);
          pbVar9 = pbVar18;
          if ((uint)pbVar11 < uVar19 - 1) {
            pbVar9 = pbVar12;
          }
          if (lVar1 == 0) {
            pbVar13 = *(byte **)(param_2 + 4);
            pbVar8 = *(byte **)(param_2 + 2);
          }
          else {
            pbVar8 = *(byte **)(lVar1 + 0x10);
            *(byte **)(param_2 + 2) = pbVar8;
            pbVar13 = pbVar8 + *(uint *)(lVar1 + 0x18);
            *(byte **)(param_2 + 4) = pbVar13;
          }
          uVar3 = (int)pbVar13 - param_2[2];
          pbVar5 = (byte *)(ulonglong)uVar3;
          param_2[6] = uVar3;
          if (pbVar9 != (byte *)0x0) {
            if ((pbVar9 < pbVar8) || (pbVar13 <= pbVar9)) {
              param_2[4] = 0;
              param_2[5] = 0;
              param_2[2] = 0;
              param_2[3] = 0;
              param_2[6] = 0;
              pbVar5 = pbVar18;
              pbVar8 = pbVar18;
              pbVar13 = pbVar18;
            }
            else {
              *(byte **)(param_2 + 2) = pbVar9;
              pbVar5 = (byte *)(ulonglong)CONCAT11(pbVar9[2],pbVar9[3]);
              if (pbVar13 + -(longlong)pbVar9 <= (byte *)(ulonglong)CONCAT11(pbVar9[2],pbVar9[3])) {
                pbVar5 = pbVar13 + -(longlong)pbVar9;
              }
              param_2[6] = (int)pbVar5;
              *(byte **)(param_2 + 4) = pbVar5 + (longlong)pbVar9;
              pbVar8 = pbVar9;
              pbVar13 = pbVar5 + (longlong)pbVar9;
            }
          }
          uVar14 = (undefined4)((ulonglong)pbVar13 >> 0x20);
          uVar16 = (ulonglong)pbVar5 & 0xffffffff;
          uVar17 = (longlong)pbVar22 - (longlong)pbVar8;
          FUN_1402fc370("SANITIZE",pbVar22,0);
          if ((uVar16 < uVar17) || (uVar3 = (uint)pbVar12[3] + (uint)pbVar12[2] * 0x100, uVar3 < 6))
          {
LAB_1403fda8d:
            lVar1 = *(longlong *)(param_2 + 0xc);
            if (lVar1 != 0) {
              lVar10 = *(longlong *)(lVar1 + 0x10);
              *(longlong *)(param_2 + 2) = lVar10;
              *(ulonglong *)(param_2 + 4) = (ulonglong)*(uint *)(lVar1 + 0x18) + lVar10;
            }
            param_2[6] = param_2[4] - param_2[2];
            return 0;
          }
          pcVar4 = *(char **)(param_2 + 2);
          if (((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar12 - (longlong)pcVar4)) ||
             (((uint)(param_2[4] - (int)pbVar12) < uVar3 ||
              (param_2[7] = param_2[7] - uVar3, param_2[7] < 1)))) {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x01';
          }
          pcVar6 = "OUT-OF-RANGE";
          if (cVar2 != '\0') {
            pcVar6 = "OK";
          }
          pbVar9 = pbVar12 + uVar3;
          iVar7 = *param_2 + 1;
          uVar23 = CONCAT44(uVar14,uVar3);
          pcVar21 = "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s";
          uVar20 = 0;
          pbVar22 = pbVar12;
          FUN_1402fc370("SANITIZE",pbVar12,0,1,iVar7,0,
                        "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar12,pbVar9,uVar23,
                        pcVar4,*(undefined8 *)(param_2 + 4),pcVar6);
          if ((cVar2 == '\0') || (cVar2 = FUN_1403795f0(pbVar12,param_2), cVar2 == '\0'))
          goto LAB_1403fda8d;
          lVar1 = *(longlong *)(param_2 + 0xc);
          pbVar12 = pbVar12 + (ulonglong)pbVar12[3] + (ulonglong)pbVar12[2] * 0x100;
          if (lVar1 == 0) {
            lVar10 = *(longlong *)(param_2 + 4);
          }
          else {
            lVar10 = *(longlong *)(lVar1 + 0x10);
            *(longlong *)(param_2 + 2) = lVar10;
            lVar10 = (ulonglong)*(uint *)(lVar1 + 0x18) + lVar10;
            *(longlong *)(param_2 + 4) = lVar10;
          }
          uVar3 = (uint)pbVar11 + 1;
          pbVar11 = (byte *)(ulonglong)uVar3;
          param_2[6] = (int)lVar10 - param_2[2];
        } while (uVar3 < uVar19);
      }
      uVar15 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if ((uVar15 < 3) ||
         (cVar2 = FUN_140405dc0(pbVar12,param_2,uVar19,uVar15,iVar7,uVar20,pcVar21,pbVar22,pbVar9,
                                uVar23,pcVar4), cVar2 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}

