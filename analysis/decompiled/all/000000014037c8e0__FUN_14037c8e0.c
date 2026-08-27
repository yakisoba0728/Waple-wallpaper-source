// Function: FUN_14037c8e0
// Addr: 14037c8e0
// Size: 2940 bytes


void FUN_14037c8e0(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  bool bVar17;
  longlong lVar18;
  char cVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  int *piVar23;
  undefined *puVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  ushort uVar30;
  uint uVar31;
  int local_64;
  uint *local_58;
  
  lVar25 = *(longlong *)(param_3 + 0x80);
  lVar11 = *(longlong *)(param_3 + 0x20);
  local_64 = 0;
  if ((lVar25 == 0) || (*(uint *)(lVar25 + 4) < 2)) {
    local_58 = (uint *)0x0;
  }
  else {
    local_58 = *(uint **)(lVar25 + 8);
  }
  pbVar21 = (byte *)*param_1;
  lVar25 = 0;
  if ((uint)pbVar21[1] * 0x10000 + (uint)pbVar21[2] * 0x100 + (uint)*pbVar21 * 0x1000000 +
      (uint)pbVar21[3] == 0) {
    lVar25 = 2;
  }
  bVar5 = pbVar21[0xf];
  lVar26 = ((ulonglong)pbVar21[0xe] +
           ((ulonglong)CONCAT11(pbVar21[0xc],pbVar21[0xd]) * 0x20 +
           (ulonglong)
           pbVar21[(ulonglong)pbVar21[0xb] +
                   lVar25 + ((ulonglong)CONCAT11(pbVar21[8],pbVar21[9]) * 0x100 +
                            (ulonglong)pbVar21[10]) * 0x100]) * 8) * 0x20 +
           (ulonglong)
           (pbVar21 +
           (ulonglong)pbVar21[0xb] +
           lVar25 + ((ulonglong)CONCAT11(pbVar21[8],pbVar21[9]) * 0x100 + (ulonglong)pbVar21[10]) *
                    0x100)[1];
  lVar25 = lVar26 * 8 + (ulonglong)bVar5;
  if (((uint)pbVar21[lVar26 * 8 + (ulonglong)bVar5 + 5] +
       (uint)pbVar21[lVar26 * 8 + (ulonglong)bVar5 + 4] * 0x100 != 0xffff) ||
     (bVar17 = true, (uint)pbVar21[lVar25 + 7] + (uint)pbVar21[lVar25 + 6] * 0x100 != 0xffff)) {
    bVar17 = false;
  }
  *(undefined4 *)(lVar11 + 0x5c) = 0;
  cVar19 = *(char *)(lVar11 + 0x58);
  iVar10 = local_64;
  do {
    if (cVar19 == '\0') {
      return;
    }
    uVar29 = 2;
    if (*(uint *)(lVar11 + 0x5c) < *(uint *)(lVar11 + 0x60)) {
      lVar25 = *(longlong *)(param_3 + 0xa8);
      lVar26 = *param_1;
      uVar28 = *(uint *)(*(longlong *)(lVar11 + 0x70) + (ulonglong)*(uint *)(lVar11 + 0x5c) * 0x14);
      if (((lVar25 == 0) ||
          (uVar30 = *(ushort *)(lVar25 + (ulonglong)(uVar28 & 0xff) * 2), uVar30 == 0xffff)) ||
         (((uVar28 ^ uVar30) & 0xffffff00) != 0)) {
        if (uVar28 != 0xffff) {
          pbVar21 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar26 + 7) +
                                          ((ulonglong)*(byte *)(lVar26 + 6) +
                                          (ulonglong)
                                          CONCAT11(*(undefined1 *)(lVar26 + 4),
                                                   *(undefined1 *)(lVar26 + 5)) * 0x100) * 0x100 +
                                          lVar26,uVar28,(int)param_1[1]);
          if (pbVar21 == (byte *)0x0) {
            uVar30 = 1;
          }
          else {
            uVar30 = (ushort)*pbVar21 * 0x100 + (ushort)pbVar21[1];
          }
          uVar29 = (uint)uVar30;
          if (((lVar25 != 0) && ((uVar28 & 0xffff0000) == 0)) && (uVar30 < 0x100)) {
            *(ushort *)(lVar25 + (ulonglong)(uVar28 & 0xff) * 2) = (ushort)uVar28 & 0xff00 | uVar30;
          }
        }
      }
      else {
        uVar29 = (uint)(byte)uVar30;
      }
    }
    else {
      uVar29 = 0;
    }
    while( true ) {
      pbVar21 = (byte *)*param_1;
      uVar31 = (uint)pbVar21[1] * 0x10000 + (uint)pbVar21[2] * 0x100 + (uint)*pbVar21 * 0x1000000 +
               (uint)pbVar21[3];
      uVar28 = uVar29;
      if (uVar31 <= uVar29) {
        uVar28 = 1;
      }
      lVar25 = (ulonglong)pbVar21[0xb] +
               ((ulonglong)pbVar21[10] + (ulonglong)CONCAT11(pbVar21[8],pbVar21[9]) * 0x100) * 0x100
      ;
      lVar26 = (ulonglong)pbVar21[0xf] +
               ((ulonglong)pbVar21[0xe] + (ulonglong)CONCAT11(pbVar21[0xc],pbVar21[0xd]) * 0x100) *
               0x100;
      uVar27 = (ulonglong)(uVar31 * iVar10 + uVar28);
      uVar27 = (ulonglong)CONCAT11(pbVar21[uVar27 * 2 + lVar25],pbVar21[uVar27 * 2 + lVar25 + 1]);
      lVar18 = uVar27 * 8 + lVar26;
      bVar5 = pbVar21[lVar18 + 2];
      local_64 = (uint)pbVar21[uVar27 * 8 + lVar26] * 0x100 + (uint)pbVar21[uVar27 * 8 + lVar26 + 1]
      ;
      iVar20 = (uint)pbVar21[lVar18 + 5] + (uint)pbVar21[lVar18 + 4] * 0x100;
      if ((iVar20 == 0xffff) &&
         ((uint)pbVar21[lVar18 + 6] * 0x100 + (uint)pbVar21[lVar18 + 7] == 0xffff)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if (local_58 != (uint *)0x0) break;
      if ((((iVar10 != 0) || (local_64 != 0)) || (!bVar17)) ||
         ((bVar16 || (uVar28 = uVar29, (bVar5 & 0x40) != 0)))) goto LAB_14037d0b2;
      do {
        uVar8 = *(uint *)(lVar11 + 0x60);
        uVar31 = *(uint *)(lVar11 + 0x5c);
        if ((uVar31 != uVar8) || (param_2[0x18] != '\0')) {
          if ((uint)pbVar21[lVar18 + 4] * 0x100 + (uint)pbVar21[lVar18 + 5] != 0xffff) {
            puVar12 = *(undefined1 **)(param_2 + 0x20);
            puVar2 = puVar12 + (ulonglong)CONCAT11(pbVar21[lVar18 + 4],pbVar21[lVar18 + 5]) * 4;
            if (puVar2 < puVar12) {
              puVar24 = &DAT_140452e6c;
            }
            else {
              puVar24 = puVar12 + (ulonglong)(byte)puVar2[3] +
                                  ((ulonglong)(byte)puVar2[2] +
                                  (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 0x100) * 0x100;
            }
            uVar9 = *(uint *)(param_2 + 0x1c);
            pbVar22 = (byte *)FUN_1403cf3f0(puVar24,*(undefined4 *)
                                                     (*(longlong *)(lVar11 + 0x70) +
                                                     (ulonglong)uVar9 * 0x14),(int)param_1[1]);
            if (pbVar22 != (byte *)0x0) {
              uVar31 = uVar31 + 1;
              if (uVar31 <= uVar8) {
                uVar8 = uVar31;
              }
              FUN_14040eef0(lVar11,(ulonglong)uVar9,uVar8);
              FUN_1403f7fb0(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x1c),
                            (uint)*pbVar22 * 0x100 + (uint)pbVar22[1]);
              *param_2 = 1;
            }
          }
          uVar31 = *(int *)(lVar11 + 0x60) - 1;
          if (*(uint *)(lVar11 + 0x5c) <= uVar31) {
            uVar31 = *(uint *)(lVar11 + 0x5c);
          }
          if ((uint)pbVar21[lVar18 + 6] * 0x100 + (uint)pbVar21[lVar18 + 7] != 0xffff) {
            puVar12 = *(undefined1 **)(param_2 + 0x20);
            puVar2 = puVar12 + (ulonglong)CONCAT11(pbVar21[lVar18 + 6],pbVar21[lVar18 + 7]) * 4;
            if (puVar2 < puVar12) {
              puVar24 = &DAT_140452e6c;
            }
            else {
              puVar24 = puVar12 + (ulonglong)(byte)puVar2[3] +
                                  ((ulonglong)(byte)puVar2[2] +
                                  (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 0x100) * 0x100;
            }
            pbVar22 = (byte *)FUN_1403cf3f0(puVar24,*(undefined4 *)
                                                     (*(longlong *)(lVar11 + 0x70) +
                                                     (ulonglong)uVar31 * 0x14),(int)param_1[1]);
            if (pbVar22 != (byte *)0x0) {
              FUN_1403f7fb0(*(undefined8 *)(param_2 + 8),(ulonglong)uVar31,
                            (uint)*pbVar22 * 0x100 + (uint)pbVar22[1]);
              *param_2 = 1;
            }
          }
          if ((pbVar21[lVar18 + 2] & 0x80) != 0) {
            param_2[0x18] = 1;
            *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar11 + 0x5c);
          }
        }
        iVar20 = *(int *)(lVar11 + 0x5c);
        if ((iVar20 == *(int *)(lVar11 + 0x60)) || (*(char *)(lVar11 + 0x58) == '\0')) break;
        plVar1 = (longlong *)(lVar11 + 0x70);
        if (*(char *)(lVar11 + 0x59) == '\0') {
LAB_14037cecf:
          *(int *)(lVar11 + 0x5c) = iVar20 + 1;
        }
        else {
          if ((*(longlong *)(lVar11 + 0x78) == *plVar1) && (*(int *)(lVar11 + 100) == iVar20)) {
LAB_14037cecc:
            *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
            goto LAB_14037cecf;
          }
          cVar19 = FUN_1403bf1a0(lVar11,*(int *)(lVar11 + 100) + 1);
          if (cVar19 != '\0') {
            uVar28 = *(uint *)(lVar11 + 0x5c);
            lVar25 = *plVar1;
            uVar31 = *(uint *)(lVar11 + 100);
            puVar3 = (undefined4 *)(lVar25 + (ulonglong)uVar28 * 0x14);
            uVar13 = puVar3[1];
            uVar14 = puVar3[2];
            uVar15 = puVar3[3];
            lVar26 = *(longlong *)(lVar11 + 0x78);
            puVar4 = (undefined4 *)(lVar26 + (ulonglong)uVar31 * 0x14);
            *puVar4 = *puVar3;
            puVar4[1] = uVar13;
            puVar4[2] = uVar14;
            puVar4[3] = uVar15;
            *(undefined4 *)(lVar26 + (ulonglong)uVar31 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar25 + 0x10 + (ulonglong)uVar28 * 0x14);
            iVar20 = *(int *)(lVar11 + 0x5c);
            goto LAB_14037cecc;
          }
        }
        if (*(uint *)(lVar11 + 0x5c) < *(uint *)(lVar11 + 0x60)) {
          lVar25 = *(longlong *)(param_3 + 0xa8);
          lVar26 = *param_1;
          uVar31 = *(uint *)(*plVar1 + (ulonglong)*(uint *)(lVar11 + 0x5c) * 0x14);
          if (((lVar25 == 0) ||
              (uVar30 = *(ushort *)(lVar25 + (ulonglong)(uVar31 & 0xff) * 2), uVar30 == 0xffff)) ||
             (((uVar30 ^ uVar31) & 0xffffff00) != 0)) {
            if (uVar31 == 0xffff) {
              uVar28 = 2;
            }
            else {
              pbVar22 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar26 + 7) +
                                              ((ulonglong)*(byte *)(lVar26 + 6) +
                                              (ulonglong)
                                              CONCAT11(*(undefined1 *)(lVar26 + 4),
                                                       *(undefined1 *)(lVar26 + 5)) * 0x100) * 0x100
                                              + lVar26,uVar31,(int)param_1[1]);
              if (pbVar22 == (byte *)0x0) {
                uVar30 = 1;
              }
              else {
                uVar30 = (ushort)pbVar22[1] + (ushort)*pbVar22 * 0x100;
              }
              uVar28 = (uint)uVar30;
              if (((lVar25 != 0) && ((uVar31 & 0xffff0000) == 0)) && (uVar30 < 0x100)) {
                *(ushort *)(lVar25 + (ulonglong)(uVar31 & 0xff) * 2) =
                     (ushort)uVar31 & 0xff00 | uVar30;
              }
            }
          }
          else {
            uVar28 = uVar30 & 0xff;
          }
        }
        else {
          uVar28 = 0;
        }
      } while (uVar28 == uVar29);
      uVar29 = uVar28;
      if (*(int *)(lVar11 + 0x5c) == *(int *)(lVar11 + 0x60)) {
        return;
      }
      if (*(char *)(lVar11 + 0x58) == '\0') {
        return;
      }
    }
    uVar28 = *(uint *)(lVar11 + 0x5c);
    if (uVar28 < *(uint *)(lVar11 + 0x60)) {
      uVar9 = *(uint *)(*(longlong *)(lVar11 + 0x70) + 8 + (ulonglong)uVar28 * 0x14);
      uVar8 = local_58[1];
      while (uVar9 < uVar8) {
        uVar8 = local_58[-2];
        local_58 = local_58 + -3;
      }
      uVar8 = local_58[2];
      while (uVar8 < uVar9) {
        uVar8 = local_58[5];
        local_58 = local_58 + 3;
      }
    }
    if ((*local_58 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar28 == *(uint *)(lVar11 + 0x60)) {
        return;
      }
      local_64 = 0;
      FUN_1403ecfd0(lVar11);
    }
    else {
LAB_14037d0b2:
      if ((iVar20 == 0xffff) &&
         ((uint)pbVar21[lVar18 + 6] * 0x100 + (uint)pbVar21[lVar18 + 7] == 0xffff)) {
        if ((iVar10 != 0) && (((bVar5 & 0x40) == 0 || (local_64 != 0)))) {
          if (uVar31 <= uVar29) {
            uVar29 = 1;
          }
          uVar27 = (ulonglong)
                   CONCAT11(pbVar21[(ulonglong)uVar29 * 2 + lVar25],
                            pbVar21[(ulonglong)uVar29 * 2 + lVar25 + 1]);
          if (((((uint)pbVar21[uVar27 * 8 + lVar26 + 5] +
                 (uint)pbVar21[uVar27 * 8 + lVar26 + 4] * 0x100 != 0xffff) ||
               ((uint)pbVar21[uVar27 * 8 + lVar26 + 6] * 0x100 +
                (uint)pbVar21[uVar27 * 8 + lVar26 + 7] != 0xffff)) ||
              (local_64 !=
               (uint)pbVar21[uVar27 * 8 + lVar26 + 1] + (uint)pbVar21[uVar27 * 8 + lVar26] * 0x100))
             || ((bVar5 & 0x40) != (pbVar21[uVar27 * 8 + lVar26 + 2] & 0x40))) goto LAB_14037d1aa;
        }
        uVar27 = (ulonglong)((uint)(uVar31 == 0) + uVar31 * iVar10);
        uVar27 = (ulonglong)CONCAT11(pbVar21[uVar27 * 2 + lVar25],pbVar21[uVar27 * 2 + lVar25 + 1]);
        if (((uint)pbVar21[uVar27 * 8 + lVar26 + 5] + (uint)pbVar21[uVar27 * 8 + lVar26 + 4] * 0x100
             != 0xffff) ||
           ((uint)pbVar21[uVar27 * 8 + lVar26 + 6] * 0x100 + (uint)pbVar21[uVar27 * 8 + lVar26 + 7]
            != 0xffff)) goto LAB_14037d1aa;
      }
      else {
LAB_14037d1aa:
        if (*(char *)(lVar11 + 0x59) == '\0') {
          piVar23 = (int *)(lVar11 + 0x5c);
        }
        else {
          piVar23 = (int *)(lVar11 + 100);
        }
        if ((*piVar23 != 0) &&
           (uVar29 = *(uint *)(lVar11 + 0x5c), uVar29 < *(uint *)(lVar11 + 0x60))) {
          uVar28 = uVar29;
          if (*(char *)(lVar11 + 0x59) != '\0') {
            uVar28 = *(uint *)(lVar11 + 100);
          }
          FUN_14040ef70(lVar11,uVar28 - 1,uVar29 + 1);
        }
      }
      uVar29 = *(uint *)(lVar11 + 0x60);
      if ((*(uint *)(lVar11 + 0x5c) != uVar29) || (param_2[0x18] != '\0')) {
        if ((uint)pbVar21[lVar18 + 4] * 0x100 + (uint)pbVar21[lVar18 + 5] != 0xffff) {
          puVar12 = *(undefined1 **)(param_2 + 0x20);
          puVar2 = puVar12 + (ulonglong)CONCAT11(pbVar21[lVar18 + 4],pbVar21[lVar18 + 5]) * 4;
          if (puVar2 < puVar12) {
            puVar24 = &DAT_140452e6c;
          }
          else {
            puVar24 = puVar12 + (ulonglong)(byte)puVar2[3] +
                                ((ulonglong)(byte)puVar2[2] +
                                (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 0x100) * 0x100;
          }
          uVar28 = *(uint *)(param_2 + 0x1c);
          pbVar22 = (byte *)FUN_1403cf3f0(puVar24,*(undefined4 *)
                                                   (*(longlong *)(lVar11 + 0x70) +
                                                   (ulonglong)uVar28 * 0x14),(int)param_1[1]);
          if (pbVar22 != (byte *)0x0) {
            uVar31 = *(int *)(lVar11 + 0x5c) + 1;
            if (uVar31 <= uVar29) {
              uVar29 = uVar31;
            }
            FUN_14040eef0(lVar11,(ulonglong)uVar28,uVar29);
            FUN_1403f7fb0(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x1c),
                          (uint)*pbVar22 * 0x100 + (uint)pbVar22[1]);
            *param_2 = 1;
          }
        }
        bVar6 = pbVar21[lVar18 + 6];
        uVar29 = *(int *)(lVar11 + 0x60) - 1;
        bVar7 = pbVar21[lVar18 + 7];
        if (*(uint *)(lVar11 + 0x5c) <= uVar29) {
          uVar29 = *(uint *)(lVar11 + 0x5c);
        }
        if ((uint)bVar6 * 0x100 + (uint)bVar7 != 0xffff) {
          puVar12 = *(undefined1 **)(param_2 + 0x20);
          puVar2 = puVar12 + (ulonglong)CONCAT11(bVar6,bVar7) * 4;
          if (puVar2 < puVar12) {
            puVar24 = &DAT_140452e6c;
          }
          else {
            puVar24 = puVar12 + (ulonglong)(byte)puVar2[3] +
                                ((ulonglong)(byte)puVar2[2] +
                                (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 0x100) * 0x100;
          }
          pbVar22 = (byte *)FUN_1403cf3f0(puVar24,*(undefined4 *)
                                                   (*(longlong *)(lVar11 + 0x70) +
                                                   (ulonglong)uVar29 * 0x14),(int)param_1[1]);
          if (pbVar22 != (byte *)0x0) {
            FUN_1403f7fb0(*(undefined8 *)(param_2 + 8),(ulonglong)uVar29,
                          (uint)*pbVar22 * 0x100 + (uint)pbVar22[1]);
            *param_2 = 1;
          }
        }
        if ((pbVar21[lVar18 + 2] & 0x80) != 0) {
          param_2[0x18] = 1;
          *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar11 + 0x5c);
        }
      }
      if (*(int *)(lVar11 + 0x5c) == *(int *)(lVar11 + 0x60)) {
        return;
      }
      if (((bVar5 & 0x40) == 0) ||
         (iVar10 = *(int *)(lVar11 + 0xe0), *(int *)(lVar11 + 0xe0) = iVar10 + -1, iVar10 < 1)) {
        if (*(char *)(lVar11 + 0x59) != '\0') {
          if ((*(longlong *)(lVar11 + 0x78) != *(longlong *)(lVar11 + 0x70)) ||
             (*(int *)(lVar11 + 100) != *(int *)(lVar11 + 0x5c))) {
            cVar19 = FUN_1403bf1a0(lVar11,*(int *)(lVar11 + 100) + 1);
            if (cVar19 == '\0') goto LAB_14037d411;
            uVar29 = *(uint *)(lVar11 + 0x5c);
            lVar25 = *(longlong *)(lVar11 + 0x70);
            uVar28 = *(uint *)(lVar11 + 100);
            puVar3 = (undefined4 *)(lVar25 + (ulonglong)uVar29 * 0x14);
            uVar13 = puVar3[1];
            uVar14 = puVar3[2];
            uVar15 = puVar3[3];
            lVar26 = *(longlong *)(lVar11 + 0x78);
            puVar4 = (undefined4 *)(lVar26 + (ulonglong)uVar28 * 0x14);
            *puVar4 = *puVar3;
            puVar4[1] = uVar13;
            puVar4[2] = uVar14;
            puVar4[3] = uVar15;
            *(undefined4 *)(lVar26 + (ulonglong)uVar28 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar25 + 0x10 + (ulonglong)uVar29 * 0x14);
          }
          *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
        }
        *(int *)(lVar11 + 0x5c) = *(int *)(lVar11 + 0x5c) + 1;
      }
    }
LAB_14037d411:
    cVar19 = *(char *)(lVar11 + 0x58);
    iVar10 = local_64;
  } while( true );
}

