// Function: FUN_140381500
// Addr: 140381500
// Size: 3579 bytes


void FUN_140381500(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  char cVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ushort uVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  ushort uVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte bVar31;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  uint local_58;
  uint *local_50;
  
  lVar21 = *(longlong *)(param_3 + 0x80);
  uVar23 = 0;
  lVar9 = *(longlong *)(param_3 + 0x20);
  local_58 = 0;
  if ((lVar21 == 0) || (*(uint *)(lVar21 + 4) < 2)) {
    local_50 = (uint *)0x0;
  }
  else {
    local_50 = *(uint **)(lVar21 + 8);
  }
  pbVar29 = (byte *)*param_1;
  lVar21 = (ulonglong)
           pbVar29[(ulonglong)pbVar29[4] * 0x100 +
                   (ulonglong)((uint)*pbVar29 * 0x100 + (uint)pbVar29[1] == 0) +
                   (ulonglong)pbVar29[5]] + (ulonglong)pbVar29[6] * 0x40;
  bVar6 = pbVar29[lVar21 * 4 + (ulonglong)pbVar29[7] + 2];
  bVar7 = pbVar29[lVar21 * 4 + (ulonglong)pbVar29[7] + 3];
  *(undefined4 *)(lVar9 + 0x5c) = 0;
  cVar15 = *(char *)(lVar9 + 0x58);
  uVar20 = local_58;
  do {
    if (cVar15 == '\0') {
      return;
    }
    uVar34 = 0;
    if (*(uint *)(lVar9 + 0x5c) < *(uint *)(lVar9 + 0x60)) {
      lVar21 = *(longlong *)(param_3 + 0xa8);
      lVar22 = *param_1;
      uVar25 = *(uint *)(*(longlong *)(lVar9 + 0x70) + (ulonglong)*(uint *)(lVar9 + 0x5c) * 0x14);
      if (lVar21 != 0) {
        uVar24 = *(ushort *)(lVar21 + (ulonglong)(uVar25 & 0xff) * 2);
        if ((uVar24 != 0xffff) && (((uVar24 ^ uVar25) & 0xffffff00) == 0)) {
          uVar34 = (ulonglong)(uVar24 & 0xff);
          goto LAB_1403816d0;
        }
      }
      if (uVar25 == 0xffff) {
        uVar34 = 2;
      }
      else {
        pbVar29 = (byte *)((ulonglong)*(byte *)(lVar22 + 2) * 0x100 +
                          (ulonglong)*(byte *)(lVar22 + 3) + lVar22);
        uVar16 = (uVar25 - pbVar29[1]) + (uint)*pbVar29 * -0x100;
        if (uVar16 < (uint)pbVar29[3] + (uint)pbVar29[2] * 0x100) {
          uVar34 = (ulonglong)pbVar29[(ulonglong)uVar16 + 4];
          uVar24 = (ushort)pbVar29[(ulonglong)uVar16 + 4];
        }
        else {
          uVar34 = 1;
          uVar24 = 1;
        }
        if ((lVar21 != 0) && ((uVar25 & 0xffff0000) == 0)) {
          *(ushort *)(lVar21 + (ulonglong)(uVar25 & 0xff) * 2) = (ushort)uVar25 & 0xff00 | uVar24;
        }
      }
    }
LAB_1403816d0:
    while( true ) {
      uVar16 = (uint)uVar23;
      pbVar29 = (byte *)*param_1;
      uVar33 = (uint)uVar34;
      uVar32 = (uint)pbVar29[1] + (uint)*pbVar29 * 0x100;
      uVar25 = uVar33;
      if (uVar32 <= uVar33) {
        uVar25 = 1;
      }
      lVar22 = (ulonglong)
               pbVar29[(ulonglong)pbVar29[5] +
                       (ulonglong)(uVar25 + uVar32 * uVar16) + (ulonglong)pbVar29[4] * 0x100] +
               (ulonglong)pbVar29[6] * 0x40;
      lVar21 = lVar22 * 4 + (ulonglong)pbVar29[7];
      uVar23 = (longlong)
               (int)((((uint)pbVar29[lVar22 * 4 + (ulonglong)pbVar29[7]] - (uint)pbVar29[4]) * 0x100
                     + (uint)pbVar29[lVar21 + 1]) - (uint)pbVar29[5]) / (longlong)(int)uVar32;
      uVar25 = (uint)pbVar29[lVar21 + 2] * 0x100 + (uint)pbVar29[lVar21 + 3];
      local_58 = (uint)uVar23;
      uVar23 = uVar23 & 0xffffffff;
      uVar32 = uVar25 & 0x4000;
      if (local_50 != (uint *)0x0) break;
      if ((((uVar16 != 0) || (local_58 != 0)) || (((uint)bVar6 * 0x100 + (uint)bVar7 & 0x3fff) != 0)
          ) || (((uVar25 & 0x3fff) != 0 || (uVar32 != 0)))) goto LAB_140381cab;
      do {
        if ((pbVar29[lVar21 + 2] & 0x80) != 0) {
          if (*(uint *)(param_2 + 7) < 8) {
            *(undefined4 *)((longlong)param_2 + (ulonglong)*(uint *)(param_2 + 7) * 4 + 0x18) =
                 *(undefined4 *)(lVar9 + 0x5c);
            *(int *)(param_2 + 7) = (int)param_2[7] + 1;
          }
          else {
            *(undefined4 *)(param_2 + 7) = 0;
          }
        }
        uVar25 = (uint)pbVar29[lVar21 + 2] * 0x100 + (uint)pbVar29[lVar21 + 3] & 0x3fff;
        if ((uVar25 != 0) && (uVar16 = *(uint *)(param_2 + 7), uVar16 != 0)) {
          iVar18 = (int)param_2[2];
          iVar26 = (int)param_2[1] + 6;
          uVar32 = (iVar26 - iVar18) + uVar25 >> 1;
          if (uVar25 < (uint)(iVar18 - iVar26)) {
            uVar32 = 0x3fffffff;
          }
          if (2 < (uint)(0xffffffff / (ulonglong)uVar16)) {
            pbVar30 = (byte *)(param_2[2] + (ulonglong)uVar32 * 2);
            cVar15 = FUN_14036f0c0(*param_2 + 0x28,pbVar30,uVar16 * 2,1);
            if (cVar15 != '\0') {
              bVar31 = 0;
              uVar25 = *(uint *)(*(longlong *)(*param_2 + 8) + 0xb0);
              do {
                if ((int)param_2[7] == 0) break;
                uVar16 = (int)param_2[7] - 1;
                *(uint *)(param_2 + 7) = uVar16;
                uVar16 = *(uint *)((longlong)param_2 + (ulonglong)uVar16 * 4 + 0x18);
                if (uVar16 < *(uint *)(lVar9 + 0x60)) {
                  lVar22 = (ulonglong)uVar16 * 0x14;
                  uVar24 = (ushort)pbVar30[1] + (ushort)*pbVar30 * 0x100;
                  lVar10 = *(longlong *)(lVar9 + 0x80);
                  uVar28 = uVar24 & 0xfffe;
                  bVar31 = (byte)uVar24 & 1;
                  if ((*(uint *)(lVar9 + 0x38) & 0xfffffffe) == 4) {
                    if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
                      if ((*(uint *)(*(longlong *)(lVar9 + 0x70) + 4 + lVar22) & uVar25) != 0) {
                        iVar26 = (int)((ulonglong)
                                       ((longlong)(short)uVar28 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x58) +
                                       0x8000) >> 0x10);
                        *(int *)(lVar10 + lVar22) = *(int *)(lVar10 + lVar22) + iVar26;
                        piVar27 = (int *)(lVar10 + 8 + lVar22);
                        *piVar27 = *piVar27 + iVar26;
                      }
                    }
                    else if (uVar28 == 0x8000) {
                      *(undefined1 *)(lVar10 + 0x12 + lVar22) = 0;
                      *(undefined2 *)(lVar10 + 0x10 + lVar22) = 0;
                      *(undefined4 *)(lVar10 + 0xc + lVar22) = 0;
                    }
                    else if (*(char *)(lVar10 + 0x12 + lVar22) != '\0') {
                      piVar27 = (int *)(lVar10 + 0xc + lVar22);
                      *piVar27 = *piVar27 +
                                 (int)((ulonglong)
                                       ((longlong)(short)uVar28 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x60) +
                                       0x8000) >> 0x10);
                      *(uint *)(lVar9 + 0xd8) = *(uint *)(lVar9 + 0xd8) | 8;
                    }
                  }
                  else if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
                    if ((*(uint *)(*(longlong *)(lVar9 + 0x70) + 4 + lVar22) & uVar25) != 0) {
                      piVar27 = (int *)(lVar10 + 4 + lVar22);
                      *piVar27 = *piVar27 +
                                 (int)((ulonglong)
                                       ((longlong)(short)uVar28 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x60) +
                                       0x8000) >> 0x10);
                      piVar27 = (int *)(lVar10 + 0xc + lVar22);
                      *piVar27 = *piVar27 +
                                 (int)((ulonglong)
                                       ((longlong)(short)uVar28 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x60) +
                                       0x8000) >> 0x10);
                    }
                  }
                  else if (uVar28 == 0x8000) {
                    *(undefined1 *)(lVar10 + 0x12 + lVar22) = 0;
                    *(undefined2 *)(lVar10 + 0x10 + lVar22) = 0;
                    *(undefined4 *)(lVar10 + 8 + lVar22) = 0;
                  }
                  else if (*(char *)(lVar10 + 0x12 + lVar22) != '\0') {
                    piVar27 = (int *)(lVar10 + 8 + lVar22);
                    *piVar27 = *piVar27 +
                               (int)((ulonglong)
                                     ((longlong)(short)uVar28 *
                                      *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x58) + 0x8000)
                                    >> 0x10);
                    *(uint *)(lVar9 + 0xd8) = *(uint *)(lVar9 + 0xd8) | 8;
                  }
                }
                pbVar30 = pbVar30 + 2;
              } while (bVar31 == 0);
              goto LAB_140381a31;
            }
          }
          *(undefined4 *)(param_2 + 7) = 0;
        }
LAB_140381a31:
        iVar26 = *(int *)(lVar9 + 0x5c);
        if ((iVar26 == *(int *)(lVar9 + 0x60)) || (*(char *)(lVar9 + 0x58) == '\0')) break;
        plVar1 = (longlong *)(lVar9 + 0x70);
        if (*(char *)(lVar9 + 0x59) == '\0') {
LAB_140381aa1:
          *(int *)(lVar9 + 0x5c) = iVar26 + 1;
        }
        else {
          if ((*(longlong *)(lVar9 + 0x78) == *plVar1) && (*(int *)(lVar9 + 100) == iVar26)) {
LAB_140381a9e:
            *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
            goto LAB_140381aa1;
          }
          cVar15 = FUN_1403bf1a0(lVar9);
          if (cVar15 != '\0') {
            uVar25 = *(uint *)(lVar9 + 0x5c);
            lVar22 = *plVar1;
            uVar16 = *(uint *)(lVar9 + 100);
            puVar2 = (undefined4 *)(lVar22 + (ulonglong)uVar25 * 0x14);
            uVar17 = puVar2[1];
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            lVar10 = *(longlong *)(lVar9 + 0x78);
            puVar3 = (undefined4 *)(lVar10 + (ulonglong)uVar16 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar17;
            puVar3[2] = uVar12;
            puVar3[3] = uVar13;
            *(undefined4 *)(lVar10 + (ulonglong)uVar16 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar22 + 0x10 + (ulonglong)uVar25 * 0x14);
            iVar26 = *(int *)(lVar9 + 0x5c);
            goto LAB_140381a9e;
          }
        }
        if (*(uint *)(lVar9 + 0x5c) < *(uint *)(lVar9 + 0x60)) {
          lVar22 = *param_1;
          lVar10 = *(longlong *)(param_3 + 0xa8);
          uVar25 = *(uint *)(*plVar1 + (ulonglong)*(uint *)(lVar9 + 0x5c) * 0x14);
          if (lVar10 != 0) {
            uVar24 = *(ushort *)(lVar10 + ((ulonglong)uVar25 & 0xff) * 2);
            if ((uVar24 != 0xffff) && (((uVar24 ^ uVar25) & 0xffffff00) == 0)) {
              uVar34 = (ulonglong)(uVar24 & 0xff);
              goto LAB_140381bb3;
            }
          }
          if (uVar25 == 0xffff) {
            uVar34 = 2;
          }
          else {
            pbVar30 = (byte *)(lVar22 + (ulonglong)*(byte *)(lVar22 + 3) +
                              (ulonglong)*(byte *)(lVar22 + 2) * 0x100);
            uVar16 = (uVar25 + (uint)*pbVar30 * -0x100) - (uint)pbVar30[1];
            if (uVar16 < (uint)pbVar30[3] + (uint)pbVar30[2] * 0x100) {
              uVar34 = (ulonglong)pbVar30[(ulonglong)uVar16 + 4];
            }
            else {
              uVar34 = 1;
            }
            if ((lVar10 != 0) && ((uVar25 & 0xffff0000) == 0)) {
              *(ushort *)(lVar10 + ((ulonglong)uVar25 & 0xff) * 2) =
                   (ushort)uVar25 & 0xff00 | (ushort)uVar34;
            }
          }
        }
        else {
          uVar34 = 0;
        }
LAB_140381bb3:
      } while ((uint)uVar34 == uVar33);
      if (*(int *)(lVar9 + 0x5c) == *(int *)(lVar9 + 0x60)) {
        return;
      }
      if (*(char *)(lVar9 + 0x58) == '\0') {
        return;
      }
      uVar23 = (ulonglong)uVar20;
    }
    if (*(uint *)(lVar9 + 0x5c) < *(uint *)(lVar9 + 0x60)) {
      uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x70) + 8 + (ulonglong)*(uint *)(lVar9 + 0x5c) * 0x14)
      ;
      uVar25 = local_50[1];
      while (uVar8 < uVar25) {
        uVar25 = local_50[-2];
        local_50 = local_50 + -3;
      }
      uVar25 = local_50[2];
      while (uVar25 < uVar8) {
        uVar25 = local_50[5];
        local_50 = local_50 + 3;
      }
    }
    if ((*local_50 & *(uint *)(param_3 + 0x88)) == 0) {
      if (*(int *)(lVar9 + 0x5c) == *(int *)(lVar9 + 0x60)) {
        return;
      }
      uVar23 = 0;
      local_58 = 0;
      if (*(char *)(lVar9 + 0x59) == '\0') {
LAB_140381ca3:
        *(int *)(lVar9 + 0x5c) = *(int *)(lVar9 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(lVar9 + 0x78) == *(longlong *)(lVar9 + 0x70)) &&
           (*(int *)(lVar9 + 100) == *(int *)(lVar9 + 0x5c))) {
LAB_140381ca0:
          *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
          goto LAB_140381ca3;
        }
        cVar15 = FUN_1403bf1a0(lVar9,*(int *)(lVar9 + 100) + 1);
        if (cVar15 != '\0') {
          uVar20 = *(uint *)(lVar9 + 0x5c);
          lVar21 = *(longlong *)(lVar9 + 0x70);
          uVar25 = *(uint *)(lVar9 + 100);
          puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar20 * 0x14);
          uVar17 = puVar2[1];
          uVar12 = puVar2[2];
          uVar13 = puVar2[3];
          lVar22 = *(longlong *)(lVar9 + 0x78);
          puVar3 = (undefined4 *)(lVar22 + (ulonglong)uVar25 * 0x14);
          *puVar3 = *puVar2;
          puVar3[1] = uVar17;
          puVar3[2] = uVar12;
          puVar3[3] = uVar13;
          *(undefined4 *)(lVar22 + (ulonglong)uVar25 * 0x14 + 0x10) =
               *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar20 * 0x14);
          goto LAB_140381ca0;
        }
      }
    }
    else {
LAB_140381cab:
      bVar31 = pbVar29[lVar21 + 2];
      if (((uint)bVar31 * 0x100 + (uint)pbVar29[lVar21 + 3] & 0x3fff) == 0) {
        if ((uVar16 != 0) && (((bVar31 & 0x40) == 0 || (local_58 != 0)))) {
          pbVar30 = (byte *)*param_1;
          if ((uint)*pbVar30 * 0x100 + (uint)pbVar30[1] <= uVar33) {
            uVar34 = 1;
          }
          lVar22 = (ulonglong)
                   pbVar30[uVar34 + (ulonglong)pbVar30[4] * 0x100 + (ulonglong)pbVar30[5]] +
                   (ulonglong)pbVar30[6] * 0x40;
          pbVar4 = pbVar30 + lVar22 * 4 + (ulonglong)pbVar30[7];
          uVar25 = (uint)pbVar4[3] + (uint)pbVar30[lVar22 * 4 + (ulonglong)pbVar30[7] + 2] * 0x100;
          if ((((uVar25 & 0x3fff) != 0) ||
              (local_58 !=
               (int)(((uint)*pbVar4 * 0x100 + (uint)pbVar30[4] * -0x100 + (uint)pbVar4[1]) -
                    (uint)pbVar30[5]) / (int)(uint)CONCAT11(*pbVar30,pbVar30[1]))) ||
             (uVar16 = uVar20, (bVar31 & 0x40) << 8 != (uVar25 & 0x4000))) goto LAB_140381e08;
        }
        pbVar30 = (byte *)*param_1;
        iVar26 = (uint)pbVar30[1] + (uint)*pbVar30 * 0x100;
        lVar22 = (ulonglong)
                 pbVar30[(ulonglong)pbVar30[4] * 0x100 +
                         (ulonglong)(iVar26 * uVar16 + (uint)(iVar26 == 0)) + (ulonglong)pbVar30[5]]
                 + (ulonglong)pbVar30[6] * 0x40;
        if (((uint)pbVar30[lVar22 * 4 + (ulonglong)pbVar30[7] + 3] +
             (uint)pbVar30[lVar22 * 4 + (ulonglong)pbVar30[7] + 2] * 0x100 & 0x3fff) != 0)
        goto LAB_140381e08;
      }
      else {
LAB_140381e08:
        cVar15 = *(char *)(lVar9 + 0x59);
        piVar27 = (int *)(lVar9 + 100);
        if (cVar15 == '\0') {
          piVar27 = (int *)(lVar9 + 0x5c);
        }
        if (*piVar27 != 0) {
          uVar20 = *(uint *)(lVar9 + 0x60);
          uVar25 = *(uint *)(lVar9 + 0x5c);
          if (uVar25 < uVar20) {
            uVar16 = uVar25;
            if (cVar15 != '\0') {
              uVar16 = *(uint *)(lVar9 + 100);
            }
            iVar26 = uVar16 - 1;
            uVar16 = uVar25 + 1;
            if ((uVar16 == 0xffffffff) || ((uVar25 - iVar26) + 1 < 0x100)) {
              uVar11 = *(undefined8 *)(lVar9 + 0x70);
              if (uVar16 <= uVar20) {
                uVar20 = uVar16;
              }
              uVar34 = (ulonglong)uVar20;
              if (cVar15 == '\0') {
                uVar17 = FUN_1403a1a20(lVar9,uVar11,iVar26,uVar20,0xffffffff);
                FUN_1403a1bc0(lVar9,uVar11,iVar26,uVar20,uVar17,3);
              }
              else {
                uVar17 = FUN_1403a1a20(lVar9,uVar11,uVar25,uVar20,0xffffffff);
                iVar18 = FUN_1403a1a20(lVar9,*(undefined8 *)(lVar9 + 0x78),iVar26,
                                       *(undefined4 *)(lVar9 + 100),uVar17);
                FUN_1403a1bc0(lVar9,*(undefined8 *)(lVar9 + 0x78),iVar26,
                              *(undefined4 *)(lVar9 + 100),iVar18,3);
                uVar25 = *(uint *)(lVar9 + 0x5c);
                uVar19 = (ulonglong)uVar25;
                if (uVar25 != uVar20) {
                  lVar22 = *(longlong *)(lVar9 + 0x70);
                  piVar27 = (int *)(lVar9 + 0xe0);
                  *piVar27 = *piVar27 + (uVar25 - uVar20);
                  if (*piVar27 < 0) {
                    *(undefined1 *)(lVar9 + 0x58) = 0;
                  }
                  uVar14 = uVar19;
                  if (*(int *)(lVar9 + 0x1c) == 2) {
joined_r0x0001403820c9:
                    while (uVar25 < uVar20) {
                      if (iVar18 != *(int *)(lVar22 + 8 + uVar19 * 0x14)) {
                        puVar5 = (uint *)(lVar22 + 4 + uVar19 * 0x14);
                        *puVar5 = *puVar5 | 3;
                      }
                      uVar25 = (int)uVar14 + 1;
                      uVar19 = uVar19 + 1;
                      uVar14 = (ulonglong)uVar25;
                    }
                  }
                  else {
                    iVar26 = *(int *)(lVar22 + 8 + uVar19 * 0x14);
                    if (iVar18 == iVar26) {
                      while (uVar25 < uVar20) {
                        uVar20 = (int)uVar34 - 1;
                        uVar34 = (ulonglong)uVar20;
                        if (*(int *)(lVar22 + 8 + uVar34 * 0x14) == iVar26) break;
                        puVar5 = (uint *)(lVar22 + 4 + uVar34 * 0x14);
                        *puVar5 = *puVar5 | 3;
                      }
                    }
                    else {
                      iVar26 = *(int *)(lVar22 + 8 + (ulonglong)(uVar20 - 1) * 0x14);
                      if (iVar18 != iVar26) goto joined_r0x0001403820c9;
                      while ((uVar25 < uVar20 && (*(int *)(lVar22 + 8 + uVar19 * 0x14) != iVar26)))
                      {
                        puVar5 = (uint *)(lVar22 + 4 + uVar19 * 0x14);
                        *puVar5 = *puVar5 | 3;
                        uVar25 = (int)uVar19 + 1;
                        uVar19 = (ulonglong)uVar25;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ((pbVar29[lVar21 + 2] & 0x80) != 0) {
        if (*(uint *)(param_2 + 7) < 8) {
          *(undefined4 *)((longlong)param_2 + (ulonglong)*(uint *)(param_2 + 7) * 4 + 0x18) =
               *(undefined4 *)(lVar9 + 0x5c);
          *(int *)(param_2 + 7) = (int)param_2[7] + 1;
        }
        else {
          *(undefined4 *)(param_2 + 7) = 0;
        }
      }
      uVar20 = (uint)pbVar29[lVar21 + 2] * 0x100 + (uint)pbVar29[lVar21 + 3] & 0x3fff;
      if ((uVar20 != 0) && (uVar25 = *(uint *)(param_2 + 7), uVar25 != 0)) {
        iVar18 = (int)param_2[2];
        iVar26 = (int)param_2[1] + 6;
        uVar16 = (uVar20 - iVar18) + iVar26 >> 1;
        if (uVar20 < (uint)(iVar18 - iVar26)) {
          uVar16 = 0x3fffffff;
        }
        if (2 < (uint)(0xffffffff / (ulonglong)uVar25)) {
          pbVar29 = (byte *)(param_2[2] + (ulonglong)uVar16 * 2);
          cVar15 = FUN_14036f0c0(*param_2 + 0x28,pbVar29,uVar25 * 2,1);
          if (cVar15 != '\0') {
            bVar31 = 0;
            uVar20 = *(uint *)(*(longlong *)(*param_2 + 8) + 0xb0);
            while ((int)param_2[7] != 0) {
              uVar25 = (int)param_2[7] - 1;
              *(uint *)(param_2 + 7) = uVar25;
              uVar25 = *(uint *)((longlong)param_2 + (ulonglong)uVar25 * 4 + 0x18);
              if (uVar25 < *(uint *)(lVar9 + 0x60)) {
                lVar21 = (ulonglong)uVar25 * 0x14;
                piVar27 = (int *)(*(longlong *)(lVar9 + 0x80) + lVar21);
                uVar24 = (ushort)*pbVar29 * 0x100 + (ushort)pbVar29[1];
                bVar31 = (byte)uVar24 & 1;
                uVar24 = uVar24 & 0xfffe;
                if ((*(uint *)(lVar9 + 0x38) & 0xfffffffe) == 4) {
                  if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
                    if ((*(uint *)(*(longlong *)(lVar9 + 0x70) + 4 + lVar21) & uVar20) != 0) {
                      iVar26 = (int)((ulonglong)
                                     ((longlong)(short)uVar24 *
                                      *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x58) + 0x8000)
                                    >> 0x10);
                      *piVar27 = *piVar27 + iVar26;
                      piVar27[2] = piVar27[2] + iVar26;
                    }
                  }
                  else if (uVar24 == 0x8000) {
                    *(undefined1 *)((longlong)piVar27 + 0x12) = 0;
                    *(undefined2 *)(piVar27 + 4) = 0;
                    piVar27[3] = 0;
                  }
                  else if (*(char *)((longlong)piVar27 + 0x12) != '\0') {
                    piVar27[3] = piVar27[3] +
                                 (int)((ulonglong)
                                       ((longlong)(short)uVar24 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x60) +
                                       0x8000) >> 0x10);
                    *(uint *)(lVar9 + 0xd8) = *(uint *)(lVar9 + 0xd8) | 8;
                  }
                }
                else if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
                  if ((*(uint *)(*(longlong *)(lVar9 + 0x70) + 4 + lVar21) & uVar20) != 0) {
                    piVar27[1] = piVar27[1] +
                                 (int)((ulonglong)
                                       ((longlong)(short)uVar24 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x60) +
                                       0x8000) >> 0x10);
                    piVar27[3] = piVar27[3] +
                                 (int)((ulonglong)
                                       ((longlong)(short)uVar24 *
                                        *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x60) +
                                       0x8000) >> 0x10);
                  }
                }
                else if (uVar24 == 0x8000) {
                  *(undefined1 *)((longlong)piVar27 + 0x12) = 0;
                  *(undefined2 *)(piVar27 + 4) = 0;
                  piVar27[2] = 0;
                }
                else if (*(char *)((longlong)piVar27 + 0x12) != '\0') {
                  piVar27[2] = piVar27[2] +
                               (int)((ulonglong)
                                     ((longlong)(short)uVar24 *
                                      *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x58) + 0x8000)
                                    >> 0x10);
                  *(uint *)(lVar9 + 0xd8) = *(uint *)(lVar9 + 0xd8) | 8;
                }
              }
              pbVar29 = pbVar29 + 2;
              if (bVar31 != 0) break;
            }
            goto LAB_140382232;
          }
        }
        *(undefined4 *)(param_2 + 7) = 0;
      }
LAB_140382232:
      if (*(int *)(lVar9 + 0x5c) == *(int *)(lVar9 + 0x60)) {
        return;
      }
      if ((uVar32 == 0) ||
         (iVar26 = *(int *)(lVar9 + 0xe0), *(int *)(lVar9 + 0xe0) = iVar26 + -1, iVar26 < 1)) {
        if (*(char *)(lVar9 + 0x59) != '\0') {
          if ((*(longlong *)(lVar9 + 0x78) != *(longlong *)(lVar9 + 0x70)) ||
             (*(int *)(lVar9 + 100) != *(int *)(lVar9 + 0x5c))) {
            cVar15 = FUN_1403bf1a0(lVar9,*(int *)(lVar9 + 100) + 1);
            if (cVar15 == '\0') goto LAB_1403822c5;
            uVar20 = *(uint *)(lVar9 + 0x5c);
            lVar21 = *(longlong *)(lVar9 + 0x70);
            uVar25 = *(uint *)(lVar9 + 100);
            puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar20 * 0x14);
            uVar17 = puVar2[1];
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            lVar22 = *(longlong *)(lVar9 + 0x78);
            puVar3 = (undefined4 *)(lVar22 + (ulonglong)uVar25 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar17;
            puVar3[2] = uVar12;
            puVar3[3] = uVar13;
            *(undefined4 *)(lVar22 + (ulonglong)uVar25 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar20 * 0x14);
          }
          *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
        }
        *(int *)(lVar9 + 0x5c) = *(int *)(lVar9 + 0x5c) + 1;
      }
    }
LAB_1403822c5:
    cVar15 = *(char *)(lVar9 + 0x58);
    uVar20 = local_58;
  } while( true );
}

