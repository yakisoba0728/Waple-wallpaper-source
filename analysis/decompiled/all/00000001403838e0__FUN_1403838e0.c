// Function: FUN_1403838e0
// Addr: 1403838e0
// Size: 2542 bytes


void FUN_1403838e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
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
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  uint uVar26;
  int iVar27;
  int local_78;
  uint *local_68;
  
  lVar10 = *(longlong *)(param_3 + 0x20);
  puVar1 = (uint *)(lVar10 + 100);
  *puVar1 = 0;
  *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x70);
  *(undefined2 *)(lVar10 + 0x59) = 1;
  *(undefined4 *)(lVar10 + 0x5c) = 0;
  lVar19 = *(longlong *)(param_3 + 0x80);
  local_78 = 0;
  if ((lVar19 == 0) || (*(uint *)(lVar19 + 4) < 2)) {
    local_68 = (uint *)0x0;
  }
  else {
    local_68 = *(uint **)(lVar19 + 8);
  }
  pbVar18 = (byte *)*param_1;
  lVar19 = 0;
  if ((uint)pbVar18[1] * 0x10000 + (uint)pbVar18[2] * 0x100 + (uint)*pbVar18 * 0x1000000 +
      (uint)pbVar18[3] == 0) {
    lVar19 = 2;
  }
  bVar7 = pbVar18[(ulonglong)pbVar18[0xf] + 2 +
                  (ulonglong)
                  (pbVar18 +
                  (ulonglong)pbVar18[0xb] +
                  lVar19 + ((ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100 +
                           (ulonglong)pbVar18[10]) * 0x100)[1] * 6 +
                  ((ulonglong)CONCAT11(pbVar18[0xc],pbVar18[0xd]) * 0x100 + (ulonglong)pbVar18[0xe]
                  + (ulonglong)
                    pbVar18[(ulonglong)pbVar18[0xb] +
                            lVar19 + ((ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100 +
                                     (ulonglong)pbVar18[10]) * 0x100] * 6) * 0x100];
  cVar15 = *(char *)(lVar10 + 0x58);
  iVar27 = local_78;
  do {
    if (cVar15 == '\0') {
LAB_140383f71:
      if ((*(char *)(lVar10 + 0x58) != '\0') &&
         (cVar15 = FUN_1403ed060(lVar10,*(int *)(lVar10 + 0x60) - *(int *)(lVar10 + 0x5c)),
         cVar15 != '\0')) {
        if (*(longlong *)(lVar10 + 0x78) != *(longlong *)(lVar10 + 0x70)) {
          *(longlong *)(lVar10 + 0x80) = *(longlong *)(lVar10 + 0x70);
          *(longlong *)(lVar10 + 0x70) = *(longlong *)(lVar10 + 0x78);
        }
        *(undefined4 *)(lVar10 + 0x60) = *(undefined4 *)(lVar10 + 100);
      }
      *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x70);
      *(undefined1 *)(lVar10 + 0x59) = 0;
      *(undefined4 *)(lVar10 + 100) = 0;
      *(undefined4 *)(lVar10 + 0x5c) = 0;
      return;
    }
    uVar23 = 2;
    if (*(uint *)(lVar10 + 0x5c) < *(uint *)(lVar10 + 0x60)) {
      lVar19 = *(longlong *)(param_3 + 0xa8);
      lVar11 = *param_1;
      uVar24 = *(uint *)(*(longlong *)(lVar10 + 0x70) + (ulonglong)*(uint *)(lVar10 + 0x5c) * 0x14);
      if (((lVar19 == 0) ||
          (uVar25 = *(ushort *)(lVar19 + (ulonglong)(uVar24 & 0xff) * 2), uVar25 == 0xffff)) ||
         (((uVar25 ^ uVar24) & 0xffffff00) != 0)) {
        if (uVar24 != 0xffff) {
          pbVar18 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar11 + 7) +
                                          ((ulonglong)*(byte *)(lVar11 + 6) +
                                          (ulonglong)
                                          CONCAT11(*(undefined1 *)(lVar11 + 4),
                                                   *(undefined1 *)(lVar11 + 5)) * 0x100) * 0x100 +
                                          lVar11,uVar24,(int)param_1[1]);
          if (pbVar18 == (byte *)0x0) {
            uVar25 = 1;
          }
          else {
            uVar25 = (ushort)pbVar18[1] + (ushort)*pbVar18 * 0x100;
          }
          uVar23 = (uint)uVar25;
          if (((lVar19 != 0) && ((uVar24 & 0xffff0000) == 0)) && (uVar25 < 0x100)) {
            *(ushort *)(lVar19 + (ulonglong)(uVar24 & 0xff) * 2) = (ushort)uVar24 & 0xff00 | uVar25;
          }
        }
      }
      else {
        uVar23 = uVar25 & 0xff;
      }
    }
    else {
      uVar23 = 0;
    }
    while( true ) {
      pbVar18 = (byte *)*param_1;
      uVar26 = (uint)pbVar18[1] * 0x10000 + (uint)pbVar18[2] * 0x100 + (uint)*pbVar18 * 0x1000000 +
               (uint)pbVar18[3];
      uVar24 = uVar23;
      if (uVar26 <= uVar23) {
        uVar24 = 1;
      }
      lVar19 = (ulonglong)pbVar18[0xb] +
               ((ulonglong)pbVar18[10] + (ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100) * 0x100
      ;
      lVar11 = (ulonglong)pbVar18[0xf] +
               ((ulonglong)pbVar18[0xe] + (ulonglong)CONCAT11(pbVar18[0xc],pbVar18[0xd]) * 0x100) *
               0x100;
      uVar22 = (ulonglong)(uVar26 * iVar27 + uVar24);
      uVar22 = (ulonglong)CONCAT11(pbVar18[uVar22 * 2 + lVar19],pbVar18[uVar22 * 2 + lVar19 + 1]);
      pbVar3 = pbVar18 + uVar22 * 6 + lVar11;
      bVar8 = pbVar3[2];
      local_78 = (uint)pbVar18[uVar22 * 6 + lVar11] * 0x100 + (uint)pbVar18[uVar22 * 6 + lVar11 + 1]
      ;
      if (local_68 != (uint *)0x0) break;
      if ((((iVar27 != 0) || (local_78 != 0)) || ((bVar7 & 0x20) != 0)) ||
         (((bVar8 >> 5 & 1) != 0 || (uVar24 = uVar23, (bVar8 & 0x40) != 0)))) goto LAB_140383ff6;
      do {
        FUN_14040df20(param_2,lVar10,param_1,pbVar3);
        uVar26 = *(uint *)(lVar10 + 0x5c);
        if ((uVar26 == *(uint *)(lVar10 + 0x60)) || (*(char *)(lVar10 + 0x58) == '\0')) break;
        if (*(char *)(lVar10 + 0x59) == '\0') {
LAB_140383d14:
          *(uint *)(lVar10 + 0x5c) = uVar26 + 1;
        }
        else {
          if ((*(longlong *)(lVar10 + 0x78) == *(longlong *)(lVar10 + 0x70)) && (*puVar1 == uVar26))
          {
LAB_140383d11:
            *puVar1 = *puVar1 + 1;
            goto LAB_140383d14;
          }
          cVar15 = FUN_1403bf1a0(lVar10,*puVar1 + 1);
          if (cVar15 != '\0') {
            uVar24 = *(uint *)(lVar10 + 0x5c);
            lVar19 = *(longlong *)(lVar10 + 0x70);
            uVar26 = *puVar1;
            puVar4 = (undefined4 *)(lVar19 + (ulonglong)uVar24 * 0x14);
            uVar16 = puVar4[1];
            uVar12 = puVar4[2];
            uVar13 = puVar4[3];
            lVar11 = *(longlong *)(lVar10 + 0x78);
            puVar5 = (undefined4 *)(lVar11 + (ulonglong)uVar26 * 0x14);
            *puVar5 = *puVar4;
            puVar5[1] = uVar16;
            puVar5[2] = uVar12;
            puVar5[3] = uVar13;
            *(undefined4 *)(lVar11 + (ulonglong)uVar26 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar24 * 0x14);
            uVar26 = *(uint *)(lVar10 + 0x5c);
            goto LAB_140383d11;
          }
        }
        if (*(uint *)(lVar10 + 0x5c) < *(uint *)(lVar10 + 0x60)) {
          lVar19 = *param_1;
          lVar11 = *(longlong *)(param_3 + 0xa8);
          uVar26 = *(uint *)(*(longlong *)(lVar10 + 0x70) +
                            (ulonglong)*(uint *)(lVar10 + 0x5c) * 0x14);
          if (((lVar11 == 0) ||
              (uVar25 = *(ushort *)(lVar11 + (ulonglong)(uVar26 & 0xff) * 2), uVar25 == 0xffff)) ||
             (((uVar25 ^ uVar26) & 0xffffff00) != 0)) {
            if (uVar26 == 0xffff) {
              uVar24 = 2;
            }
            else {
              pbVar18 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar19 + 7) +
                                              ((ulonglong)*(byte *)(lVar19 + 6) +
                                              (ulonglong)
                                              CONCAT11(*(undefined1 *)(lVar19 + 4),
                                                       *(undefined1 *)(lVar19 + 5)) * 0x100) * 0x100
                                              + lVar19,uVar26,(int)param_1[1]);
              if (pbVar18 == (byte *)0x0) {
                uVar25 = 1;
              }
              else {
                uVar25 = (ushort)*pbVar18 * 0x100 + (ushort)pbVar18[1];
              }
              uVar24 = (uint)uVar25;
              if (((lVar11 != 0) && ((uVar26 & 0xffff0000) == 0)) && (uVar25 < 0x100)) {
                *(ushort *)(lVar11 + (ulonglong)(uVar26 & 0xff) * 2) =
                     (ushort)uVar26 & 0xff00 | uVar25;
              }
            }
          }
          else {
            uVar24 = uVar25 & 0xff;
          }
        }
        else {
          uVar24 = 0;
        }
      } while (uVar24 == uVar23);
      uVar23 = uVar24;
      if ((*(int *)(lVar10 + 0x5c) == *(int *)(lVar10 + 0x60)) || (*(char *)(lVar10 + 0x58) == '\0')
         ) goto LAB_140383f71;
    }
    uVar24 = *(uint *)(lVar10 + 0x5c);
    if (uVar24 < *(uint *)(lVar10 + 0x60)) {
      uVar9 = *(uint *)(*(longlong *)(lVar10 + 0x70) + 8 + (ulonglong)uVar24 * 0x14);
      uVar6 = local_68[1];
      while (uVar9 < uVar6) {
        uVar6 = local_68[-2];
        local_68 = local_68 + -3;
      }
      uVar6 = local_68[2];
      while (uVar6 < uVar9) {
        uVar6 = local_68[5];
        local_68 = local_68 + 3;
      }
    }
    if ((*local_68 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar24 == *(uint *)(lVar10 + 0x60)) goto LAB_140383f71;
      local_78 = 0;
      if (*(char *)(lVar10 + 0x59) == '\0') {
LAB_140383f2c:
        *(int *)(lVar10 + 0x5c) = *(int *)(lVar10 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(lVar10 + 0x78) == *(longlong *)(lVar10 + 0x70)) && (*puVar1 == uVar24)) {
LAB_140383f29:
          *puVar1 = *puVar1 + 1;
          goto LAB_140383f2c;
        }
        cVar15 = FUN_1403bf1a0(lVar10,*puVar1 + 1);
        if (cVar15 != '\0') {
          uVar23 = *(uint *)(lVar10 + 0x5c);
          lVar19 = *(longlong *)(lVar10 + 0x70);
          uVar24 = *puVar1;
          puVar4 = (undefined4 *)(lVar19 + (ulonglong)uVar23 * 0x14);
          uVar16 = puVar4[1];
          uVar12 = puVar4[2];
          uVar13 = puVar4[3];
          lVar11 = *(longlong *)(lVar10 + 0x78);
          puVar5 = (undefined4 *)(lVar11 + (ulonglong)uVar24 * 0x14);
          *puVar5 = *puVar4;
          puVar5[1] = uVar16;
          puVar5[2] = uVar12;
          puVar5[3] = uVar13;
          *(undefined4 *)(lVar11 + (ulonglong)uVar24 * 0x14 + 0x10) =
               *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar23 * 0x14);
          goto LAB_140383f29;
        }
      }
    }
    else {
LAB_140383ff6:
      if ((bVar8 & 0x20) == 0) {
        if ((iVar27 != 0) && (((bVar8 & 0x40) == 0 || (local_78 != 0)))) {
          if (uVar26 <= uVar23) {
            uVar23 = 1;
          }
          uVar22 = (ulonglong)
                   CONCAT11(pbVar18[(ulonglong)uVar23 * 2 + lVar19],
                            pbVar18[(ulonglong)uVar23 * 2 + lVar19 + 1]);
          if ((((pbVar18[uVar22 * 6 + lVar11 + 2] >> 5 & 1) != 0) ||
              (local_78 !=
               (uint)pbVar18[uVar22 * 6 + lVar11 + 1] + (uint)pbVar18[uVar22 * 6 + lVar11] * 0x100))
             || ((bVar8 & 0x40) != (pbVar18[uVar22 * 6 + lVar11 + 2] & 0x40))) goto LAB_140384085;
        }
        lVar19 = FUN_1403c79b0(pbVar18,iVar27,0);
        if ((*(byte *)(lVar19 + 2) & 0x20) != 0) goto LAB_140384085;
      }
      else {
LAB_140384085:
        cVar15 = *(char *)(lVar10 + 0x59);
        puVar20 = (uint *)(lVar10 + 0x5c);
        if (cVar15 != '\0') {
          puVar20 = puVar1;
        }
        if (*puVar20 != 0) {
          uVar23 = *(uint *)(lVar10 + 0x60);
          uVar24 = *(uint *)(lVar10 + 0x5c);
          if (uVar24 < uVar23) {
            uVar26 = uVar24;
            if (cVar15 != '\0') {
              uVar26 = *puVar1;
            }
            iVar27 = uVar26 - 1;
            uVar26 = uVar24 + 1;
            if ((uVar26 == 0xffffffff) || ((uVar24 - iVar27) + 1 < 0x100)) {
              if (uVar26 <= uVar23) {
                uVar23 = uVar26;
              }
              uVar22 = (ulonglong)uVar23;
              if (cVar15 == '\0') {
                uVar16 = FUN_1403a1a20(lVar10,*(undefined8 *)(lVar10 + 0x70),iVar27,uVar22,
                                       0xffffffff);
                FUN_1403a1bc0(lVar10,*(undefined8 *)(lVar10 + 0x70),iVar27,uVar23,uVar16,3);
              }
              else {
                uVar16 = FUN_1403a1a20(lVar10,*(undefined8 *)(lVar10 + 0x70),uVar24,uVar22,
                                       0xffffffff);
                iVar17 = FUN_1403a1a20(lVar10,*(undefined8 *)(lVar10 + 0x78),iVar27,*puVar1,uVar16);
                FUN_1403a1bc0(lVar10,*(undefined8 *)(lVar10 + 0x78),iVar27,*puVar1,iVar17,3);
                uVar24 = *(uint *)(lVar10 + 0x5c);
                uVar21 = (ulonglong)uVar24;
                if (uVar24 != uVar23) {
                  lVar19 = *(longlong *)(lVar10 + 0x70);
                  piVar2 = (int *)(lVar10 + 0xe0);
                  *piVar2 = *piVar2 + (uVar24 - uVar23);
                  if (*piVar2 < 0) {
                    *(undefined1 *)(lVar10 + 0x58) = 0;
                  }
                  uVar14 = uVar21;
                  if (*(int *)(lVar10 + 0x1c) == 2) {
joined_r0x0001403841ce:
                    while (uVar24 < uVar23) {
                      if (iVar17 != *(int *)(lVar19 + 8 + uVar21 * 0x14)) {
                        puVar20 = (uint *)(lVar19 + 4 + uVar21 * 0x14);
                        *puVar20 = *puVar20 | 3;
                      }
                      uVar24 = (int)uVar14 + 1;
                      uVar21 = uVar21 + 1;
                      uVar14 = (ulonglong)uVar24;
                    }
                  }
                  else {
                    iVar27 = *(int *)(lVar19 + 8 + uVar21 * 0x14);
                    if (iVar17 == iVar27) {
                      while (uVar24 < uVar23) {
                        uVar23 = (int)uVar22 - 1;
                        uVar22 = (ulonglong)uVar23;
                        if (*(int *)(lVar19 + 8 + uVar22 * 0x14) == iVar27) break;
                        puVar20 = (uint *)(lVar19 + 4 + uVar22 * 0x14);
                        *puVar20 = *puVar20 | 3;
                      }
                    }
                    else {
                      iVar27 = *(int *)(lVar19 + 8 + (ulonglong)(uVar23 - 1) * 0x14);
                      if (iVar17 != iVar27) goto joined_r0x0001403841ce;
                      while ((uVar24 < uVar23 && (*(int *)(lVar19 + 8 + uVar21 * 0x14) != iVar27)))
                      {
                        puVar20 = (uint *)(lVar19 + 4 + uVar21 * 0x14);
                        *puVar20 = *puVar20 | 3;
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
      FUN_14040df20(param_2,lVar10,param_1,pbVar3);
      if (*(uint *)(lVar10 + 0x5c) == *(uint *)(lVar10 + 0x60)) goto LAB_140383f71;
      if (((bVar8 & 0x40) == 0) ||
         (iVar27 = *(int *)(lVar10 + 0xe0), *(int *)(lVar10 + 0xe0) = iVar27 + -1, iVar27 < 1)) {
        if (*(char *)(lVar10 + 0x59) != '\0') {
          if ((*(longlong *)(lVar10 + 0x78) != *(longlong *)(lVar10 + 0x70)) ||
             (*puVar1 != *(uint *)(lVar10 + 0x5c))) {
            cVar15 = FUN_1403bf1a0(lVar10,*puVar1 + 1);
            if (cVar15 == '\0') goto LAB_140383f37;
            uVar23 = *(uint *)(lVar10 + 0x5c);
            lVar19 = *(longlong *)(lVar10 + 0x70);
            uVar24 = *(uint *)(lVar10 + 100);
            puVar4 = (undefined4 *)(lVar19 + (ulonglong)uVar23 * 0x14);
            uVar16 = puVar4[1];
            uVar12 = puVar4[2];
            uVar13 = puVar4[3];
            lVar11 = *(longlong *)(lVar10 + 0x78);
            puVar5 = (undefined4 *)(lVar11 + (ulonglong)uVar24 * 0x14);
            *puVar5 = *puVar4;
            puVar5[1] = uVar16;
            puVar5[2] = uVar12;
            puVar5[3] = uVar13;
            *(undefined4 *)(lVar11 + (ulonglong)uVar24 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar23 * 0x14);
          }
          *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
        }
        *(int *)(lVar10 + 0x5c) = *(int *)(lVar10 + 0x5c) + 1;
      }
    }
LAB_140383f37:
    cVar15 = *(char *)(lVar10 + 0x58);
    iVar27 = local_78;
  } while( true );
}

