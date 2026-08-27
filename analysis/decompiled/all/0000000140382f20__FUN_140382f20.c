// Function: FUN_140382f20
// Addr: 140382f20
// Size: 2494 bytes


void FUN_140382f20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  char cVar15;
  undefined4 uVar16;
  int iVar17;
  byte *pbVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  ushort uVar26;
  uint uVar27;
  longlong *plVar28;
  int iVar29;
  int local_68;
  longlong *local_60;
  uint *local_58;
  
  lVar19 = *(longlong *)(param_3 + 0x80);
  lVar10 = *(longlong *)(param_3 + 0x20);
  local_68 = 0;
  if ((lVar19 == 0) || (*(uint *)(lVar19 + 4) < 2)) {
    local_58 = (uint *)0x0;
  }
  else {
    local_58 = *(uint **)(lVar19 + 8);
  }
  pbVar18 = (byte *)*param_1;
  lVar19 = 0;
  if ((uint)pbVar18[1] * 0x10000 + (uint)pbVar18[2] * 0x100 + (uint)*pbVar18 * 0x1000000 +
      (uint)pbVar18[3] == 0) {
    lVar19 = 2;
  }
  lVar19 = (ulonglong)
           (pbVar18 +
           (ulonglong)pbVar18[0xb] +
           lVar19 + ((ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100 + (ulonglong)pbVar18[10]) *
                    0x100)[1] * 6 +
           ((ulonglong)CONCAT11(pbVar18[0xc],pbVar18[0xd]) * 0x100 + (ulonglong)pbVar18[0xe] +
           (ulonglong)
           pbVar18[(ulonglong)pbVar18[0xb] +
                   lVar19 + ((ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100 +
                            (ulonglong)pbVar18[10]) * 0x100] * 6) * 0x100;
  bVar6 = pbVar18[(ulonglong)pbVar18[0xf] + 4 + lVar19];
  bVar7 = pbVar18[(ulonglong)pbVar18[0xf] + 5 + lVar19];
  *(undefined4 *)(lVar10 + 0x5c) = 0;
  cVar15 = *(char *)(lVar10 + 0x58);
  iVar29 = local_68;
  do {
    if (cVar15 == '\0') {
      return;
    }
    uVar23 = 2;
    if (*(uint *)(lVar10 + 0x5c) < *(uint *)(lVar10 + 0x60)) {
      lVar19 = *(longlong *)(param_3 + 0xa8);
      lVar11 = *param_1;
      uVar24 = *(uint *)(*(longlong *)(lVar10 + 0x70) + (ulonglong)*(uint *)(lVar10 + 0x5c) * 0x14);
      if (((lVar19 == 0) ||
          (uVar26 = *(ushort *)(lVar19 + (ulonglong)(uVar24 & 0xff) * 2), uVar26 == 0xffff)) ||
         (((uVar26 ^ uVar24) & 0xffffff00) != 0)) {
        if (uVar24 != 0xffff) {
          pbVar18 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar11 + 7) +
                                          ((ulonglong)*(byte *)(lVar11 + 6) +
                                          (ulonglong)
                                          CONCAT11(*(undefined1 *)(lVar11 + 4),
                                                   *(undefined1 *)(lVar11 + 5)) * 0x100) * 0x100 +
                                          lVar11,uVar24,(int)param_1[1]);
          if (pbVar18 == (byte *)0x0) {
            uVar26 = 1;
          }
          else {
            uVar26 = (ushort)*pbVar18 * 0x100 + (ushort)pbVar18[1];
          }
          uVar23 = (uint)uVar26;
          if (((lVar19 != 0) && ((uVar24 & 0xffff0000) == 0)) && (uVar26 < 0x100)) {
            *(ushort *)(lVar19 + (ulonglong)(uVar24 & 0xff) * 2) = (ushort)uVar24 & 0xff00 | uVar26;
          }
        }
      }
      else {
        uVar23 = uVar26 & 0xff;
      }
    }
    else {
      uVar23 = 0;
    }
    while( true ) {
      pbVar18 = (byte *)*param_1;
      uVar27 = (uint)pbVar18[1] * 0x10000 + (uint)pbVar18[2] * 0x100 + (uint)*pbVar18 * 0x1000000 +
               (uint)pbVar18[3];
      uVar24 = 1;
      if (uVar23 < uVar27) {
        uVar24 = uVar23;
      }
      local_60 = (longlong *)(lVar10 + 0x70);
      lVar19 = (ulonglong)pbVar18[0xb] +
               ((ulonglong)pbVar18[10] + (ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100) * 0x100
      ;
      lVar11 = (ulonglong)pbVar18[0xf] +
               ((ulonglong)pbVar18[0xe] + (ulonglong)CONCAT11(pbVar18[0xc],pbVar18[0xd]) * 0x100) *
               0x100;
      uVar22 = (ulonglong)(uVar27 * iVar29 + uVar24);
      pbVar1 = pbVar18 + (ulonglong)
                         CONCAT11(pbVar18[uVar22 * 2 + lVar19],pbVar18[uVar22 * 2 + lVar19 + 1]) * 6
                         + lVar11;
      bVar8 = pbVar1[2];
      local_68 = (uint)pbVar18[(ulonglong)
                               CONCAT11(pbVar18[uVar22 * 2 + lVar19],
                                        pbVar18[uVar22 * 2 + lVar19 + 1]) * 6 + lVar11] * 0x100 +
                 (uint)pbVar1[1];
      if (local_58 != (uint *)0x0) break;
      if ((((iVar29 != 0) || (local_68 != 0)) || ((uint)bVar7 + (uint)bVar6 * 0x100 != 0xffff)) ||
         (((uint)pbVar1[5] + (uint)pbVar1[4] * 0x100 != 0xffff ||
          (uVar24 = uVar23, (bVar8 & 0x40) != 0)))) goto LAB_140383590;
      do {
        plVar28 = (longlong *)(lVar10 + 0x70);
        FUN_14040d780(param_2,lVar10,param_1,pbVar1);
        iVar17 = *(int *)(lVar10 + 0x5c);
        if ((iVar17 == *(int *)(lVar10 + 0x60)) || (*(char *)(lVar10 + 0x58) == '\0')) break;
        if (*(char *)(lVar10 + 0x59) == '\0') {
LAB_140383342:
          *(int *)(lVar10 + 0x5c) = iVar17 + 1;
        }
        else {
          if ((*(longlong *)(lVar10 + 0x78) == *plVar28) && (*(int *)(lVar10 + 100) == iVar17)) {
LAB_14038333f:
            *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
            goto LAB_140383342;
          }
          cVar15 = FUN_1403bf1a0(lVar10,*(int *)(lVar10 + 100) + 1);
          if (cVar15 != '\0') {
            uVar24 = *(uint *)(lVar10 + 0x5c);
            lVar19 = *plVar28;
            uVar27 = *(uint *)(lVar10 + 100);
            puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar24 * 0x14);
            uVar16 = puVar2[1];
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            lVar11 = *(longlong *)(lVar10 + 0x78);
            puVar3 = (undefined4 *)(lVar11 + (ulonglong)uVar27 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar16;
            puVar3[2] = uVar12;
            puVar3[3] = uVar13;
            *(undefined4 *)(lVar11 + (ulonglong)uVar27 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar24 * 0x14);
            iVar17 = *(int *)(lVar10 + 0x5c);
            goto LAB_14038333f;
          }
        }
        if (*(uint *)(lVar10 + 0x5c) < *(uint *)(lVar10 + 0x60)) {
          lVar19 = *(longlong *)(param_3 + 0xa8);
          lVar11 = *param_1;
          uVar27 = *(uint *)(*plVar28 + (ulonglong)*(uint *)(lVar10 + 0x5c) * 0x14);
          if (((lVar19 == 0) ||
              (uVar26 = *(ushort *)(lVar19 + (ulonglong)(uVar27 & 0xff) * 2), uVar26 == 0xffff)) ||
             (((uVar26 ^ uVar27) & 0xffffff00) != 0)) {
            if (uVar27 == 0xffff) {
              uVar24 = 2;
            }
            else {
              pbVar18 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar11 + 7) +
                                              ((ulonglong)*(byte *)(lVar11 + 6) +
                                              (ulonglong)
                                              CONCAT11(*(undefined1 *)(lVar11 + 4),
                                                       *(undefined1 *)(lVar11 + 5)) * 0x100) * 0x100
                                              + lVar11,uVar27,(int)param_1[1]);
              if (pbVar18 == (byte *)0x0) {
                uVar26 = 1;
              }
              else {
                uVar26 = (ushort)*pbVar18 * 0x100 + (ushort)pbVar18[1];
              }
              uVar24 = (uint)uVar26;
              if (((lVar19 != 0) && ((uVar27 & 0xffff0000) == 0)) && (uVar26 < 0x100)) {
                *(ushort *)(lVar19 + (ulonglong)(uVar27 & 0xff) * 2) =
                     (ushort)uVar27 & 0xff00 | uVar26;
              }
            }
          }
          else {
            uVar24 = uVar26 & 0xff;
          }
        }
        else {
          uVar24 = 0;
        }
      } while (uVar24 == uVar23);
      uVar23 = uVar24;
      if (*(int *)(lVar10 + 0x5c) == *(int *)(lVar10 + 0x60)) {
        return;
      }
      if (*(char *)(lVar10 + 0x58) == '\0') {
        return;
      }
    }
    uVar24 = *(uint *)(lVar10 + 0x5c);
    if (uVar24 < *(uint *)(lVar10 + 0x60)) {
      uVar9 = *(uint *)(*local_60 + 8 + (ulonglong)uVar24 * 0x14);
      uVar5 = local_58[1];
      while (uVar9 < uVar5) {
        uVar5 = local_58[-2];
        local_58 = local_58 + -3;
      }
      uVar5 = local_58[2];
      while (uVar5 < uVar9) {
        uVar5 = local_58[5];
        local_58 = local_58 + 3;
      }
    }
    if ((*local_58 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar24 == *(uint *)(lVar10 + 0x60)) {
        return;
      }
      local_68 = 0;
      if (*(char *)(lVar10 + 0x59) == '\0') {
LAB_140383584:
        *(int *)(lVar10 + 0x5c) = *(int *)(lVar10 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(lVar10 + 0x78) == *local_60) && (*(uint *)(lVar10 + 100) == uVar24)) {
LAB_140383581:
          *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
          goto LAB_140383584;
        }
        cVar15 = FUN_1403bf1a0(lVar10,*(int *)(lVar10 + 100) + 1);
        if (cVar15 != '\0') {
          uVar23 = *(uint *)(lVar10 + 0x5c);
          lVar19 = *local_60;
          uVar24 = *(uint *)(lVar10 + 100);
          puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar23 * 0x14);
          uVar16 = puVar2[1];
          uVar12 = puVar2[2];
          uVar13 = puVar2[3];
          lVar11 = *(longlong *)(lVar10 + 0x78);
          puVar3 = (undefined4 *)(lVar11 + (ulonglong)uVar24 * 0x14);
          *puVar3 = *puVar2;
          puVar3[1] = uVar16;
          puVar3[2] = uVar12;
          puVar3[3] = uVar13;
          *(undefined4 *)(lVar11 + (ulonglong)uVar24 * 0x14 + 0x10) =
               *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar23 * 0x14);
          goto LAB_140383581;
        }
      }
    }
    else {
LAB_140383590:
      if ((uint)pbVar1[5] + (uint)pbVar1[4] * 0x100 == 0xffff) {
        if ((iVar29 != 0) && (((bVar8 & 0x40) == 0 || (local_68 != 0)))) {
          if (uVar27 <= uVar23) {
            uVar23 = 1;
          }
          uVar22 = (ulonglong)
                   CONCAT11(pbVar18[(ulonglong)uVar23 * 2 + lVar19],
                            pbVar18[(ulonglong)uVar23 * 2 + lVar19 + 1]);
          pbVar4 = pbVar18 + uVar22 * 6 + lVar11;
          if ((((uint)pbVar18[uVar22 * 6 + lVar11 + 5] +
                (uint)pbVar18[uVar22 * 6 + lVar11 + 4] * 0x100 != 0xffff) ||
              (local_68 != (uint)pbVar4[1] + (uint)*pbVar4 * 0x100)) ||
             ((bVar8 & 0x40) != (pbVar4[2] & 0x40))) goto LAB_14038363b;
        }
        lVar19 = FUN_1403c79b0(pbVar18,iVar29,0);
        if ((uint)*(byte *)(lVar19 + 5) + (uint)*(byte *)(lVar19 + 4) * 0x100 != 0xffff)
        goto LAB_14038363b;
      }
      else {
LAB_14038363b:
        cVar15 = *(char *)(lVar10 + 0x59);
        if (cVar15 == '\0') {
          piVar20 = (int *)(lVar10 + 0x5c);
        }
        else {
          piVar20 = (int *)(lVar10 + 100);
        }
        puVar25 = (uint *)(lVar10 + 100);
        if (*piVar20 != 0) {
          uVar23 = *(uint *)(lVar10 + 0x60);
          uVar24 = *(uint *)(lVar10 + 0x5c);
          if (uVar24 < uVar23) {
            uVar27 = uVar24;
            if (cVar15 != '\0') {
              uVar27 = *puVar25;
            }
            iVar29 = uVar27 - 1;
            uVar27 = uVar24 + 1;
            if ((uVar27 == 0xffffffff) || ((uVar24 - iVar29) + 1 < 0x100)) {
              if (uVar27 <= uVar23) {
                uVar23 = uVar27;
              }
              uVar22 = (ulonglong)uVar23;
              if (cVar15 == '\0') {
                lVar19 = *local_60;
                uVar16 = FUN_1403a1a20(lVar10,lVar19,iVar29,uVar23,0xffffffff);
                FUN_1403a1bc0(lVar10,lVar19,iVar29,uVar23,uVar16,3);
              }
              else {
                uVar16 = FUN_1403a1a20(lVar10,*local_60,uVar24,uVar23,0xffffffff);
                iVar17 = FUN_1403a1a20(lVar10,*(undefined8 *)(lVar10 + 0x78),iVar29,*puVar25,uVar16)
                ;
                FUN_1403a1bc0(lVar10,*(undefined8 *)(lVar10 + 0x78),iVar29,*puVar25,iVar17,3);
                uVar24 = *(uint *)(lVar10 + 0x5c);
                uVar21 = (ulonglong)uVar24;
                if (uVar24 != uVar23) {
                  lVar19 = *local_60;
                  piVar20 = (int *)(lVar10 + 0xe0);
                  *piVar20 = *piVar20 + (uVar24 - uVar23);
                  if (*piVar20 < 0) {
                    *(undefined1 *)(lVar10 + 0x58) = 0;
                  }
                  uVar14 = uVar21;
                  if (*(int *)(lVar10 + 0x1c) == 2) {
joined_r0x000140383793:
                    while (uVar24 < uVar23) {
                      if (iVar17 != *(int *)(lVar19 + 8 + uVar21 * 0x14)) {
                        puVar25 = (uint *)(lVar19 + 4 + uVar21 * 0x14);
                        *puVar25 = *puVar25 | 3;
                      }
                      uVar24 = (int)uVar14 + 1;
                      uVar21 = uVar21 + 1;
                      uVar14 = (ulonglong)uVar24;
                    }
                  }
                  else {
                    iVar29 = *(int *)(lVar19 + 8 + uVar21 * 0x14);
                    if (iVar17 == iVar29) {
                      while (uVar24 < uVar23) {
                        uVar23 = (int)uVar22 - 1;
                        uVar22 = (ulonglong)uVar23;
                        if (*(int *)(lVar19 + 8 + uVar22 * 0x14) == iVar29) break;
                        puVar25 = (uint *)(lVar19 + 4 + uVar22 * 0x14);
                        *puVar25 = *puVar25 | 3;
                      }
                    }
                    else {
                      iVar29 = *(int *)(lVar19 + 8 + (ulonglong)(uVar23 - 1) * 0x14);
                      if (iVar17 != iVar29) goto joined_r0x000140383793;
                      while ((uVar24 < uVar23 && (*(int *)(lVar19 + 8 + uVar21 * 0x14) != iVar29)))
                      {
                        puVar25 = (uint *)(lVar19 + 4 + uVar21 * 0x14);
                        *puVar25 = *puVar25 | 3;
                        uVar24 = (int)uVar21 + 1;
                        uVar21 = (ulonglong)uVar24;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_14040d780(param_2,lVar10,param_1,pbVar1);
      if (*(int *)(lVar10 + 0x5c) == *(int *)(lVar10 + 0x60)) {
        return;
      }
      if (((bVar8 & 0x40) == 0) ||
         (iVar29 = *(int *)(lVar10 + 0xe0), *(int *)(lVar10 + 0xe0) = iVar29 + -1, iVar29 < 1)) {
        if (*(char *)(lVar10 + 0x59) != '\0') {
          if ((*(longlong *)(lVar10 + 0x78) != *(longlong *)(lVar10 + 0x70)) ||
             (*(int *)(lVar10 + 100) != *(int *)(lVar10 + 0x5c))) {
            cVar15 = FUN_1403bf1a0(lVar10,*(int *)(lVar10 + 100) + 1);
            if (cVar15 == '\0') goto LAB_14038388e;
            uVar23 = *(uint *)(lVar10 + 0x5c);
            lVar19 = *(longlong *)(lVar10 + 0x70);
            uVar24 = *(uint *)(lVar10 + 100);
            puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar23 * 0x14);
            uVar16 = puVar2[1];
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            lVar11 = *(longlong *)(lVar10 + 0x78);
            puVar3 = (undefined4 *)(lVar11 + (ulonglong)uVar24 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar16;
            puVar3[2] = uVar12;
            puVar3[3] = uVar13;
            *(undefined4 *)(lVar11 + (ulonglong)uVar24 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar23 * 0x14);
          }
          *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
        }
        *(int *)(lVar10 + 0x5c) = *(int *)(lVar10 + 0x5c) + 1;
      }
    }
LAB_14038388e:
    cVar15 = *(char *)(lVar10 + 0x58);
    iVar29 = local_68;
  } while( true );
}

