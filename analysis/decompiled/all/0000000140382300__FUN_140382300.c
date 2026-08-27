// Function: FUN_140382300
// Addr: 140382300
// Size: 3101 bytes


void FUN_140382300(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  byte *pbVar16;
  longlong lVar17;
  int *piVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ushort uVar23;
  uint uVar24;
  byte *pbVar25;
  ushort uVar26;
  byte bVar27;
  int iVar28;
  uint uVar29;
  bool bVar30;
  int local_58;
  uint *local_50;
  
  lVar17 = *(longlong *)(param_3 + 0x80);
  lVar7 = *(longlong *)(param_3 + 0x20);
  local_58 = 0;
  if ((lVar17 == 0) || (*(uint *)(lVar17 + 4) < 2)) {
    local_50 = (uint *)0x0;
  }
  else {
    local_50 = *(uint **)(lVar17 + 8);
  }
  pbVar25 = (byte *)*param_1;
  lVar17 = 0;
  if ((uint)pbVar25[1] * 0x10000 + (uint)pbVar25[2] * 0x100 + (uint)*pbVar25 * 0x1000000 +
      (uint)pbVar25[3] == 0) {
    lVar17 = 2;
  }
  lVar17 = (ulonglong)
           (pbVar25 +
           (ulonglong)pbVar25[0xb] +
           lVar17 + ((ulonglong)CONCAT11(pbVar25[8],pbVar25[9]) * 0x100 + (ulonglong)pbVar25[10]) *
                    0x100)[1] * 6 +
           ((ulonglong)CONCAT11(pbVar25[0xc],pbVar25[0xd]) * 0x100 +
            (ulonglong)
            pbVar25[(ulonglong)pbVar25[0xb] +
                    lVar17 + ((ulonglong)CONCAT11(pbVar25[8],pbVar25[9]) * 0x100 +
                             (ulonglong)pbVar25[10]) * 0x100] * 6 + (ulonglong)pbVar25[0xe]) * 0x100
  ;
  bVar5 = pbVar25[(ulonglong)pbVar25[0xf] + 4 + lVar17];
  bVar6 = pbVar25[(ulonglong)pbVar25[0xf] + 5 + lVar17];
  *(undefined4 *)(lVar7 + 0x5c) = 0;
  cVar13 = *(char *)(lVar7 + 0x58);
  iVar28 = local_58;
  do {
    if (cVar13 == '\0') {
      return;
    }
    if (*(uint *)(lVar7 + 0x5c) < *(uint *)(lVar7 + 0x60)) {
      lVar17 = *(longlong *)(param_3 + 0xa8);
      lVar8 = *param_1;
      uVar29 = *(uint *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14);
      if (((lVar17 == 0) ||
          (uVar23 = *(ushort *)(lVar17 + (ulonglong)(uVar29 & 0xff) * 2), uVar23 == 0xffff)) ||
         (((uVar29 ^ uVar23) & 0xffffff00) != 0)) {
        if (uVar29 == 0xffff) {
          uVar21 = 2;
        }
        else {
          pbVar25 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar8 + 7) +
                                          ((ulonglong)*(byte *)(lVar8 + 6) +
                                          (ulonglong)
                                          CONCAT11(*(undefined1 *)(lVar8 + 4),
                                                   *(undefined1 *)(lVar8 + 5)) * 0x100) * 0x100 +
                                          lVar8,uVar29,(int)param_1[1]);
          if (pbVar25 == (byte *)0x0) {
            uVar23 = 1;
          }
          else {
            uVar23 = (ushort)pbVar25[1] + (ushort)*pbVar25 * 0x100;
          }
          uVar21 = (uint)uVar23;
          if (((lVar17 != 0) && ((uVar29 & 0xffff0000) == 0)) && (uVar23 < 0x100)) {
            *(ushort *)(lVar17 + (ulonglong)(uVar29 & 0xff) * 2) = (ushort)uVar29 & 0xff00 | uVar23;
          }
        }
      }
      else {
        uVar21 = (uint)(byte)uVar23;
      }
    }
    else {
      uVar21 = 0;
    }
    while( true ) {
      pbVar25 = (byte *)*param_1;
      uVar24 = (uint)pbVar25[1] * 0x10000 + (uint)pbVar25[2] * 0x100 + (uint)*pbVar25 * 0x1000000 +
               (uint)pbVar25[3];
      uVar29 = uVar21;
      if (uVar24 <= uVar21) {
        uVar29 = 1;
      }
      pbVar25 = pbVar25 + (ulonglong)pbVar25[0xf] +
                          (ulonglong)
                          (pbVar25 +
                          (((ulonglong)CONCAT11(pbVar25[8],pbVar25[9]) * 0x100 +
                           (ulonglong)pbVar25[10]) * 0x80 + (ulonglong)(uVar29 + uVar24 * iVar28)) *
                          2 + (ulonglong)pbVar25[0xb])[1] * 6 +
                          ((ulonglong)CONCAT11(pbVar25[0xc],pbVar25[0xd]) * 0x100 +
                           (ulonglong)pbVar25[0xe] +
                          (ulonglong)
                          pbVar25[(((ulonglong)CONCAT11(pbVar25[8],pbVar25[9]) * 0x100 +
                                   (ulonglong)pbVar25[10]) * 0x80 +
                                  (ulonglong)(uVar29 + uVar24 * iVar28)) * 2 +
                                  (ulonglong)pbVar25[0xb]] * 6) * 0x100;
      bVar27 = pbVar25[2];
      local_58 = (uint)pbVar25[1] + (uint)*pbVar25 * 0x100;
      if (local_50 != (uint *)0x0) break;
      if (((iVar28 != 0) || (local_58 != 0)) ||
         (((uint)bVar5 * 0x100 + (uint)bVar6 != 0xffff ||
          (((uint)pbVar25[4] * 0x100 + (uint)pbVar25[5] != 0xffff ||
           (uVar29 = uVar21, (bVar27 & 0x40) != 0)))))) goto LAB_140382b59;
      do {
        bVar27 = pbVar25[2];
        if ((bVar27 >> 5 & 1) != 0) {
          *(undefined4 *)(param_2 + 7) = 0;
        }
        if ((char)bVar27 < '\0') {
          if (*(uint *)(param_2 + 7) < 8) {
            *(undefined4 *)((longlong)param_2 + (ulonglong)*(uint *)(param_2 + 7) * 4 + 0x18) =
                 *(undefined4 *)(lVar7 + 0x5c);
            *(int *)(param_2 + 7) = (int)param_2[7] + 1;
          }
          else {
            *(undefined4 *)(param_2 + 7) = 0;
          }
        }
        if (((uint)pbVar25[4] * 0x100 + (uint)pbVar25[5] != 0xffff) &&
           (uVar24 = *(uint *)(param_2 + 7), uVar24 != 0)) {
          lVar17 = param_2[1];
          uVar20 = (uint)*(byte *)(lVar17 + 9) * 0x10000 + (uint)*(byte *)(lVar17 + 10) * 0x100 +
                   (uint)*(byte *)(lVar17 + 8) * 0x1000000 + (uint)*(byte *)(lVar17 + 0xb);
          uVar22 = (ulonglong)uVar20;
          if (uVar20 < 2) {
            uVar22 = 1;
          }
          if (2 < (uint)(0xffffffff / (ulonglong)uVar24)) {
            pbVar16 = (byte *)(param_2[2] +
                              ((ulonglong)CONCAT11(pbVar25[4],pbVar25[5]) & 0xfffffffffffffffe));
            cVar13 = FUN_14036f0c0(*param_2 + 0x28,pbVar16,uVar24 * 2,uVar22);
            if (cVar13 != '\0') {
              bVar27 = 0;
              uVar24 = *(uint *)(*(longlong *)(*param_2 + 8) + 0xb0);
              do {
                if ((int)param_2[7] == 0) break;
                uVar20 = (int)param_2[7] - 1;
                *(uint *)(param_2 + 7) = uVar20;
                uVar20 = *(uint *)((longlong)param_2 + (ulonglong)uVar20 * 4 + 0x18);
                if (uVar20 < *(uint *)(lVar7 + 0x60)) {
                  lVar8 = *(longlong *)(lVar7 + 0x80);
                  lVar17 = (ulonglong)uVar20 * 0x14;
                  uVar23 = (ushort)pbVar16[1] + (ushort)*pbVar16 * 0x100;
                  uVar26 = uVar23 & 0xfffe;
                  bVar27 = (byte)uVar23 & 1;
                  if ((*(uint *)(lVar7 + 0x38) & 0xfffffffe) == 4) {
                    if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
                      if ((*(uint *)(*(longlong *)(lVar7 + 0x70) + 4 + lVar17) & uVar24) != 0) {
                        iVar15 = (int)((ulonglong)
                                       ((longlong)(short)uVar26 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x58) +
                                       0x8000) >> 0x10);
                        *(int *)(lVar8 + lVar17) = *(int *)(lVar8 + lVar17) + iVar15;
                        piVar18 = (int *)(lVar8 + 8 + lVar17);
                        *piVar18 = *piVar18 + iVar15;
                      }
                    }
                    else if (uVar26 == 0x8000) {
                      *(undefined1 *)(lVar8 + 0x12 + lVar17) = 0;
                      *(undefined2 *)(lVar8 + 0x10 + lVar17) = 0;
                      *(undefined4 *)(lVar8 + 0xc + lVar17) = 0;
                    }
                    else if (*(char *)(lVar8 + 0x12 + lVar17) != '\0') {
                      piVar18 = (int *)(lVar8 + 0xc + lVar17);
                      *piVar18 = *piVar18 +
                                 (int)((ulonglong)
                                       ((longlong)(short)uVar26 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x60) +
                                       0x8000) >> 0x10);
                      *(uint *)(lVar7 + 0xd8) = *(uint *)(lVar7 + 0xd8) | 8;
                    }
                  }
                  else if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
                    if ((*(uint *)(*(longlong *)(lVar7 + 0x70) + 4 + lVar17) & uVar24) != 0) {
                      piVar18 = (int *)(lVar8 + 4 + lVar17);
                      *piVar18 = *piVar18 +
                                 (int)((ulonglong)
                                       ((longlong)(short)uVar26 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x60) +
                                       0x8000) >> 0x10);
                      piVar18 = (int *)(lVar8 + 0xc + lVar17);
                      *piVar18 = *piVar18 +
                                 (int)((ulonglong)
                                       ((longlong)(short)uVar26 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x60) +
                                       0x8000) >> 0x10);
                    }
                  }
                  else if (uVar26 == 0x8000) {
                    *(undefined1 *)(lVar8 + 0x12 + lVar17) = 0;
                    *(undefined2 *)(lVar8 + 0x10 + lVar17) = 0;
                    *(undefined4 *)(lVar8 + 8 + lVar17) = 0;
                  }
                  else if (*(char *)(lVar8 + 0x12 + lVar17) != '\0') {
                    piVar18 = (int *)(lVar8 + 8 + lVar17);
                    *piVar18 = *piVar18 +
                               (int)((ulonglong)
                                     ((longlong)(short)uVar26 *
                                      *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x58) + 0x8000)
                                    >> 0x10);
                    *(uint *)(lVar7 + 0xd8) = *(uint *)(lVar7 + 0xd8) | 8;
                  }
                }
                pbVar16 = pbVar16 + uVar22 * 2;
              } while (bVar27 == 0);
              goto LAB_14038290d;
            }
          }
          *(undefined4 *)(param_2 + 7) = 0;
        }
LAB_14038290d:
        iVar15 = *(int *)(lVar7 + 0x5c);
        if ((iVar15 == *(int *)(lVar7 + 0x60)) || (*(char *)(lVar7 + 0x58) == '\0')) break;
        plVar1 = (longlong *)(lVar7 + 0x70);
        if (*(char *)(lVar7 + 0x59) == '\0') {
LAB_14038297d:
          *(int *)(lVar7 + 0x5c) = iVar15 + 1;
        }
        else {
          if ((*(longlong *)(lVar7 + 0x78) == *plVar1) && (*(int *)(lVar7 + 100) == iVar15)) {
LAB_14038297a:
            *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
            goto LAB_14038297d;
          }
          cVar13 = FUN_1403bf1a0(lVar7,*(int *)(lVar7 + 100) + 1);
          if (cVar13 != '\0') {
            uVar29 = *(uint *)(lVar7 + 0x5c);
            lVar17 = *plVar1;
            uVar24 = *(uint *)(lVar7 + 100);
            puVar2 = (undefined4 *)(lVar17 + (ulonglong)uVar29 * 0x14);
            uVar14 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            lVar8 = *(longlong *)(lVar7 + 0x78);
            puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar24 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar14;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            *(undefined4 *)(lVar8 + (ulonglong)uVar24 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar17 + 0x10 + (ulonglong)uVar29 * 0x14);
            iVar15 = *(int *)(lVar7 + 0x5c);
            goto LAB_14038297a;
          }
        }
        if (*(uint *)(lVar7 + 0x5c) < *(uint *)(lVar7 + 0x60)) {
          lVar17 = *param_1;
          lVar8 = *(longlong *)(param_3 + 0xa8);
          uVar24 = *(uint *)(*plVar1 + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14);
          if (((lVar8 == 0) ||
              (uVar23 = *(ushort *)(lVar8 + (ulonglong)(uVar24 & 0xff) * 2), uVar23 == 0xffff)) ||
             (((uVar23 ^ uVar24) & 0xffffff00) != 0)) {
            if (uVar24 == 0xffff) {
              uVar29 = 2;
            }
            else {
              pbVar16 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar17 + 7) +
                                              ((ulonglong)*(byte *)(lVar17 + 6) +
                                              (ulonglong)
                                              CONCAT11(*(undefined1 *)(lVar17 + 4),
                                                       *(undefined1 *)(lVar17 + 5)) * 0x100) * 0x100
                                              + lVar17,uVar24,(int)param_1[1]);
              if (pbVar16 == (byte *)0x0) {
                uVar23 = 1;
              }
              else {
                uVar23 = (ushort)*pbVar16 * 0x100 + (ushort)pbVar16[1];
              }
              uVar29 = (uint)uVar23;
              if (((lVar8 != 0) && ((uVar24 & 0xffff0000) == 0)) && (uVar23 < 0x100)) {
                *(ushort *)(lVar8 + (ulonglong)(uVar24 & 0xff) * 2) =
                     (ushort)uVar24 & 0xff00 | uVar23;
              }
            }
          }
          else {
            uVar29 = uVar23 & 0xff;
          }
        }
        else {
          uVar29 = 0;
        }
      } while (uVar29 == uVar21);
      uVar21 = uVar29;
      if (*(int *)(lVar7 + 0x5c) == *(int *)(lVar7 + 0x60)) {
        return;
      }
      if (*(char *)(lVar7 + 0x58) == '\0') {
        return;
      }
    }
    uVar29 = *(uint *)(lVar7 + 0x5c);
    if (uVar29 < *(uint *)(lVar7 + 0x60)) {
      uVar20 = *(uint *)(*(longlong *)(lVar7 + 0x70) + 8 + (ulonglong)uVar29 * 0x14);
      uVar24 = local_50[1];
      while (uVar20 < uVar24) {
        uVar24 = local_50[-2];
        local_50 = local_50 + -3;
      }
      uVar24 = local_50[2];
      while (uVar24 < uVar20) {
        uVar24 = local_50[5];
        local_50 = local_50 + 3;
      }
    }
    if ((*local_50 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar29 == *(uint *)(lVar7 + 0x60)) {
        return;
      }
      local_58 = 0;
      if (*(char *)(lVar7 + 0x59) == '\0') goto LAB_140382ed3;
      if (*(longlong *)(lVar7 + 0x78) == *(longlong *)(lVar7 + 0x70)) {
        bVar30 = *(uint *)(lVar7 + 100) == uVar29;
LAB_140382e91:
        if (!bVar30) goto LAB_140382e93;
      }
      else {
LAB_140382e93:
        cVar13 = FUN_1403bf1a0(lVar7,*(int *)(lVar7 + 100) + 1);
        if (cVar13 == '\0') goto LAB_140382ed6;
        uVar21 = *(uint *)(lVar7 + 0x5c);
        lVar17 = *(longlong *)(lVar7 + 0x70);
        uVar29 = *(uint *)(lVar7 + 100);
        puVar2 = (undefined4 *)(lVar17 + (ulonglong)uVar21 * 0x14);
        uVar14 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        lVar8 = *(longlong *)(lVar7 + 0x78);
        puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar29 * 0x14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar14;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        *(undefined4 *)(lVar8 + (ulonglong)uVar29 * 0x14 + 0x10) =
             *(undefined4 *)(lVar17 + 0x10 + (ulonglong)uVar21 * 0x14);
      }
      *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
LAB_140382ed3:
      *(int *)(lVar7 + 0x5c) = *(int *)(lVar7 + 0x5c) + 1;
    }
    else {
LAB_140382b59:
      if ((uint)pbVar25[5] + (uint)pbVar25[4] * 0x100 == 0xffff) {
        if ((iVar28 != 0) && (((pbVar25[2] & 0x40) == 0 || (local_58 != 0)))) {
          pbVar16 = (byte *)*param_1;
          if ((uint)pbVar16[1] * 0x10000 + (uint)pbVar16[2] * 0x100 + (uint)*pbVar16 * 0x1000000 +
              (uint)pbVar16[3] <= uVar21) {
            uVar21 = 1;
          }
          pbVar16 = pbVar16 + (ulonglong)pbVar16[0xf] +
                              (ulonglong)
                              (pbVar16 +
                              (((ulonglong)CONCAT11(pbVar16[8],pbVar16[9]) * 0x100 +
                               (ulonglong)pbVar16[10]) * 0x80 + (ulonglong)uVar21) * 2 +
                              (ulonglong)pbVar16[0xb])[1] * 6 +
                              ((ulonglong)CONCAT11(pbVar16[0xc],pbVar16[0xd]) * 0x100 +
                               (ulonglong)pbVar16[0xe] +
                              (ulonglong)
                              pbVar16[(((ulonglong)CONCAT11(pbVar16[8],pbVar16[9]) * 0x100 +
                                       (ulonglong)pbVar16[10]) * 0x80 + (ulonglong)uVar21) * 2 +
                                      (ulonglong)pbVar16[0xb]] * 6) * 0x100;
          if ((((uint)pbVar16[5] + (uint)pbVar16[4] * 0x100 != 0xffff) ||
              (local_58 != (uint)pbVar16[1] + (uint)*pbVar16 * 0x100)) ||
             (((pbVar25[2] ^ pbVar16[2]) & 0x40) != 0)) goto LAB_140382c9d;
        }
        lVar17 = FUN_1403c79b0(*param_1,iVar28,0);
        if ((uint)*(byte *)(lVar17 + 5) + (uint)*(byte *)(lVar17 + 4) * 0x100 != 0xffff)
        goto LAB_140382c9d;
      }
      else {
LAB_140382c9d:
        cVar13 = *(char *)(lVar7 + 0x59);
        piVar18 = (int *)(lVar7 + 100);
        if (cVar13 == '\0') {
          piVar18 = (int *)(lVar7 + 0x5c);
        }
        if (*piVar18 != 0) {
          uVar21 = *(uint *)(lVar7 + 0x60);
          uVar29 = *(uint *)(lVar7 + 0x5c);
          if (uVar29 < uVar21) {
            uVar24 = uVar29;
            if (cVar13 != '\0') {
              uVar24 = *(uint *)(lVar7 + 100);
            }
            iVar28 = uVar24 - 1;
            uVar24 = uVar29 + 1;
            if ((uVar24 == 0xffffffff) || ((uVar29 - iVar28) + 1 < 0x100)) {
              uVar9 = *(undefined8 *)(lVar7 + 0x70);
              if (uVar24 <= uVar21) {
                uVar21 = uVar24;
              }
              uVar22 = (ulonglong)uVar21;
              if (cVar13 == '\0') {
                uVar14 = FUN_1403a1a20(lVar7,uVar9,iVar28,uVar21,0xffffffff);
                FUN_1403a1bc0(lVar7,uVar9,iVar28,uVar21,uVar14,3);
              }
              else {
                uVar14 = FUN_1403a1a20(lVar7,uVar9,uVar29,uVar21,0xffffffff);
                iVar15 = FUN_1403a1a20(lVar7,*(undefined8 *)(lVar7 + 0x78),iVar28,
                                       *(undefined4 *)(lVar7 + 100),uVar14);
                FUN_1403a1bc0(lVar7,*(undefined8 *)(lVar7 + 0x78),iVar28,
                              *(undefined4 *)(lVar7 + 100),iVar15,3);
                uVar29 = *(uint *)(lVar7 + 0x5c);
                uVar19 = (ulonglong)uVar29;
                if (uVar29 != uVar21) {
                  lVar17 = *(longlong *)(lVar7 + 0x70);
                  piVar18 = (int *)(lVar7 + 0xe0);
                  *piVar18 = *piVar18 + (uVar29 - uVar21);
                  if (*piVar18 < 0) {
                    *(undefined1 *)(lVar7 + 0x58) = 0;
                  }
                  uVar12 = uVar19;
                  if (*(int *)(lVar7 + 0x1c) == 2) {
joined_r0x000140382de3:
                    while (uVar29 < uVar21) {
                      if (iVar15 != *(int *)(lVar17 + 8 + uVar19 * 0x14)) {
                        puVar4 = (uint *)(lVar17 + 4 + uVar19 * 0x14);
                        *puVar4 = *puVar4 | 3;
                      }
                      uVar29 = (int)uVar12 + 1;
                      uVar19 = uVar19 + 1;
                      uVar12 = (ulonglong)uVar29;
                    }
                  }
                  else {
                    iVar28 = *(int *)(lVar17 + 8 + uVar19 * 0x14);
                    if (iVar15 == iVar28) {
                      while (uVar29 < uVar21) {
                        uVar21 = (int)uVar22 - 1;
                        uVar22 = (ulonglong)uVar21;
                        if (*(int *)(lVar17 + 8 + uVar22 * 0x14) == iVar28) break;
                        puVar4 = (uint *)(lVar17 + 4 + uVar22 * 0x14);
                        *puVar4 = *puVar4 | 3;
                      }
                    }
                    else {
                      iVar28 = *(int *)(lVar17 + 8 + (ulonglong)(uVar21 - 1) * 0x14);
                      if (iVar15 != iVar28) goto joined_r0x000140382de3;
                      while ((uVar29 < uVar21 && (*(int *)(lVar17 + 8 + uVar19 * 0x14) != iVar28)))
                      {
                        puVar4 = (uint *)(lVar17 + 4 + uVar19 * 0x14);
                        *puVar4 = *puVar4 | 3;
                        uVar29 = (int)uVar19 + 1;
                        uVar19 = (ulonglong)uVar29;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_14040d4a0(param_2,lVar7,param_1,pbVar25);
      if (*(int *)(lVar7 + 0x5c) == *(int *)(lVar7 + 0x60)) {
        return;
      }
      if (((bVar27 & 0x40) == 0) ||
         (iVar28 = *(int *)(lVar7 + 0xe0), *(int *)(lVar7 + 0xe0) = iVar28 + -1, iVar28 < 1)) {
        if (*(char *)(lVar7 + 0x59) != '\0') {
          if (*(longlong *)(lVar7 + 0x78) == *(longlong *)(lVar7 + 0x70)) {
            bVar30 = *(int *)(lVar7 + 100) == *(int *)(lVar7 + 0x5c);
            goto LAB_140382e91;
          }
          goto LAB_140382e93;
        }
        goto LAB_140382ed3;
      }
    }
LAB_140382ed6:
    cVar13 = *(char *)(lVar7 + 0x58);
    iVar28 = local_58;
  } while( true );
}

