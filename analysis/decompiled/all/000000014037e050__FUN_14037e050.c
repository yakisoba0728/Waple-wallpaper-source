// Function: FUN_14037e050
// Addr: 14037e050
// Size: 5104 bytes


void FUN_14037e050(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  int *piVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  uint *puVar30;
  ushort uVar31;
  uint uVar32;
  int iVar33;
  uint local_64;
  uint *local_58;
  
  lVar5 = *(longlong *)(param_3 + 0x20);
  puVar30 = (uint *)0x0;
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar5 + 0x70);
  *(undefined2 *)(lVar5 + 0x59) = 1;
  *(undefined4 *)(lVar5 + 0x5c) = 0;
  *(undefined4 *)(lVar5 + 100) = 0;
  lVar6 = *(longlong *)(param_3 + 0x80);
  local_64 = 0;
  local_58 = puVar30;
  if ((lVar6 != 0) && (1 < *(uint *)(lVar6 + 4))) {
    local_58 = *(uint **)(lVar6 + 8);
  }
  pbVar17 = (byte *)*param_1;
  puVar25 = puVar30;
  if ((uint)pbVar17[1] * 0x10000 + (uint)pbVar17[2] * 0x100 + (uint)*pbVar17 * 0x1000000 +
      (uint)pbVar17[3] == 0) {
    puVar25 = (uint *)0x2;
  }
  bVar4 = pbVar17[0xf];
  lVar26 = ((ulonglong)pbVar17[0xe] +
           ((ulonglong)CONCAT11(pbVar17[0xc],pbVar17[0xd]) * 0x20 +
           (ulonglong)
           (pbVar17 + ((ulonglong)CONCAT11(pbVar17[8],pbVar17[9]) * 0x100 + (ulonglong)pbVar17[10])
                      * 0x100 + (longlong)puVar25)[pbVar17[0xb]]) * 8) * 0x20 +
           (ulonglong)
           (pbVar17 + ((ulonglong)CONCAT11(pbVar17[8],pbVar17[9]) * 0x100 + (ulonglong)pbVar17[10])
                      * 0x100 + (longlong)puVar25 + pbVar17[0xb])[1];
  lVar6 = lVar26 * 8 + (ulonglong)bVar4;
  if ((((uint)pbVar17[lVar26 * 8 + (ulonglong)bVar4 + 2] * 0x100 +
        (uint)pbVar17[lVar26 * 8 + (ulonglong)bVar4 + 3] & 0x3ff) == 0) ||
     (((uint)pbVar17[lVar6 + 4] * 0x100 + (uint)pbVar17[lVar6 + 5] == 0xffff &&
      ((uint)pbVar17[lVar6 + 6] * 0x100 + (uint)pbVar17[lVar6 + 7] == 0xffff)))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  cVar13 = *(char *)(lVar5 + 0x58);
  uVar22 = local_64;
  do {
    if (cVar13 == '\0') {
LAB_14037f3cf:
      if ((*(char *)(lVar5 + 0x58) != '\0') &&
         (cVar13 = FUN_1403ed060(lVar5,*(int *)(lVar5 + 0x60) - *(int *)(lVar5 + 0x5c)),
         cVar13 != '\0')) {
        if (*(longlong *)(lVar5 + 0x78) != *(longlong *)(lVar5 + 0x70)) {
          *(longlong *)(lVar5 + 0x80) = *(longlong *)(lVar5 + 0x70);
          *(longlong *)(lVar5 + 0x70) = *(longlong *)(lVar5 + 0x78);
        }
        *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(lVar5 + 100);
      }
      *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar5 + 0x70);
      *(undefined1 *)(lVar5 + 0x59) = 0;
      *(undefined4 *)(lVar5 + 100) = 0;
      *(undefined4 *)(lVar5 + 0x5c) = 0;
      return;
    }
    if (*(uint *)(lVar5 + 0x5c) < *(uint *)(lVar5 + 0x60)) {
      lVar6 = *(longlong *)(param_3 + 0xa8);
      lVar26 = *param_1;
      uVar21 = *(uint *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14);
      if (((lVar6 == 0) ||
          (uVar31 = *(ushort *)(lVar6 + (ulonglong)(uVar21 & 0xff) * 2), uVar31 == 0xffff)) ||
         (((uVar21 ^ uVar31) & 0xffffff00) != 0)) {
        if (uVar21 == 0xffff) {
          puVar30 = (uint *)(ulonglong)uVar22;
          uVar24 = 2;
        }
        else {
          pbVar17 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar26 + 7) +
                                          ((ulonglong)*(byte *)(lVar26 + 6) +
                                          (ulonglong)
                                          CONCAT11(*(undefined1 *)(lVar26 + 4),
                                                   *(undefined1 *)(lVar26 + 5)) * 0x100) * 0x100 +
                                          lVar26,uVar21,(int)param_1[1]);
          if (pbVar17 == (byte *)0x0) {
            uVar31 = 1;
          }
          else {
            uVar31 = (ushort)pbVar17[1] + (ushort)*pbVar17 * 0x100;
          }
          uVar24 = (uint)uVar31;
          if (((lVar6 != 0) && ((uVar21 & 0xffff0000) == 0)) && (uVar31 < 0x100)) {
            *(ushort *)(lVar6 + (ulonglong)(uVar21 & 0xff) * 2) = (ushort)uVar21 & 0xff00 | uVar31;
          }
          puVar30 = (uint *)(ulonglong)uVar22;
        }
      }
      else {
        puVar30 = (uint *)(ulonglong)uVar22;
        uVar24 = (uint)(byte)uVar31;
      }
    }
    else {
      uVar24 = 0;
    }
    while( true ) {
      pbVar17 = (byte *)*param_1;
      uVar32 = (uint)pbVar17[1] * 0x10000 + (uint)pbVar17[2] * 0x100 + (uint)*pbVar17 * 0x1000000 +
               (uint)pbVar17[3];
      bVar10 = true;
      uVar21 = uVar24;
      if (uVar32 <= uVar24) {
        uVar21 = 1;
      }
      iVar33 = (int)puVar30;
      bVar4 = pbVar17[0xf];
      lVar26 = ((ulonglong)pbVar17[0xe] +
               ((ulonglong)CONCAT11(pbVar17[0xc],pbVar17[0xd]) * 0x20 +
               (ulonglong)
               pbVar17[(((ulonglong)CONCAT11(pbVar17[8],pbVar17[9]) * 0x100 + (ulonglong)pbVar17[10]
                        ) * 0x80 + (ulonglong)(uVar21 + uVar32 * iVar33)) * 2 +
                       (ulonglong)pbVar17[0xb]]) * 8) * 0x20 +
               (ulonglong)
               (pbVar17 +
               (((ulonglong)CONCAT11(pbVar17[8],pbVar17[9]) * 0x100 + (ulonglong)pbVar17[10]) * 0x80
               + (ulonglong)(uVar21 + uVar32 * iVar33)) * 2 + (ulonglong)pbVar17[0xb])[1];
      lVar6 = lVar26 * 8 + (ulonglong)bVar4;
      local_64 = (uint)pbVar17[lVar26 * 8 + (ulonglong)bVar4] * 0x100 +
                 (uint)pbVar17[lVar26 * 8 + (ulonglong)bVar4 + 1];
      uVar21 = (uint)pbVar17[lVar26 * 8 + (ulonglong)bVar4 + 2] * 0x100 + (uint)pbVar17[lVar6 + 3];
      uVar32 = uVar21 & 0x4000;
      if (((uVar21 & 0x3ff) == 0) ||
         (((uint)pbVar17[lVar6 + 4] * 0x100 + (uint)pbVar17[lVar6 + 5] == 0xffff &&
          ((uint)pbVar17[lVar6 + 6] * 0x100 + (uint)pbVar17[lVar6 + 7] == 0xffff)))) {
        bVar10 = false;
      }
      if (local_58 != (uint *)0x0) break;
      if ((((iVar33 != 0) || (local_64 != 0)) || (!bVar11)) ||
         ((bVar10 || (uVar21 = uVar24, uVar32 != 0)))) goto LAB_14037e908;
      do {
        uVar15 = *(undefined4 *)(lVar5 + 100);
        uVar32 = (uint)pbVar17[lVar6 + 2] * 0x100 + (uint)pbVar17[lVar6 + 3];
        if ((uint)pbVar17[lVar6 + 6] * 0x100 + (uint)pbVar17[lVar6 + 7] == 0xffff) {
LAB_14037e595:
          if (uVar32 >> 0xf != 0) {
            *(undefined4 *)(param_2 + 0x18) = uVar15;
          }
          if ((uint)pbVar17[lVar6 + 4] * 0x100 + (uint)pbVar17[lVar6 + 5] != 0xffff) {
            uVar29 = uVar32 >> 5 & 0x1f;
            *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) - uVar29;
            if (0 < *(int *)(lVar5 + 0xe0)) {
              lVar26 = *(longlong *)(param_2 + 0x20) +
                       (ulonglong)CONCAT11(pbVar17[lVar6 + 4],pbVar17[lVar6 + 5]) * 2;
              cVar13 = FUN_14036efd0(*(longlong *)(param_2 + 8) + 0x28,lVar26,uVar29);
              iVar33 = *(int *)(lVar5 + 100);
              uVar14 = 0;
              if (cVar13 != '\0') {
                uVar14 = uVar29;
              }
              if ((((*(uint *)(lVar5 + 0x60) <= *(uint *)(lVar5 + 0x5c)) || ((uVar32 & 0x800) != 0))
                  || (cVar13 = FUN_1403b7ba0(lVar5), cVar13 != '\0')) &&
                 (cVar13 = FUN_14038ac70(*(undefined8 *)(param_2 + 8),uVar14,lVar26), cVar13 != '\0'
                 )) {
                *param_2 = 1;
                if ((*(uint *)(lVar5 + 0x5c) < *(uint *)(lVar5 + 0x60)) && ((uVar32 & 0x800) == 0))
                {
                  *(uint *)(lVar5 + 0x5c) = *(uint *)(lVar5 + 0x5c) + 1;
                }
                if ((uVar32 >> 0xe & 1) == 0) {
                  iVar33 = iVar33 + uVar14;
                }
                FUN_1403ec600(lVar5,iVar33);
              }
            }
          }
        }
        else {
          uVar29 = uVar32 & 0x1f;
          *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) - uVar29;
          if (0 < *(int *)(lVar5 + 0xe0)) {
            lVar26 = *(longlong *)(param_2 + 0x20) +
                     (ulonglong)CONCAT11(pbVar17[lVar6 + 6],pbVar17[lVar6 + 7]) * 2;
            cVar13 = FUN_14036efd0(*(longlong *)(param_2 + 8) + 0x28,lVar26,uVar29);
            iVar33 = *(int *)(lVar5 + 100);
            uVar14 = 0;
            if (cVar13 != '\0') {
              uVar14 = uVar29;
            }
            cVar13 = FUN_1403ec600(lVar5,*(undefined4 *)(param_2 + 0x18));
            if ((cVar13 != '\0') &&
               ((((*(uint *)(lVar5 + 0x60) <= *(uint *)(lVar5 + 0x5c) || ((uVar32 & 0x400) != 0)) ||
                 (cVar13 = FUN_1403b7ba0(lVar5), cVar13 != '\0')) &&
                (cVar13 = FUN_14038ac70(*(undefined8 *)(param_2 + 8),uVar14,lVar26), cVar13 != '\0')
                ))) {
              *param_2 = 1;
              if ((*(uint *)(lVar5 + 0x5c) < *(uint *)(lVar5 + 0x60)) && ((uVar32 & 0x400) == 0)) {
                *(uint *)(lVar5 + 0x5c) = *(uint *)(lVar5 + 0x5c) + 1;
              }
              cVar13 = FUN_1403ec600(lVar5,iVar33 + uVar14);
              if (cVar13 != '\0') {
                uVar14 = *(int *)(lVar5 + 0x5c) + 1;
                uVar29 = *(uint *)(lVar5 + 0x60);
                if (uVar14 <= *(uint *)(lVar5 + 0x60)) {
                  uVar29 = uVar14;
                }
                FUN_14040ef70(lVar5,*(undefined4 *)(param_2 + 0x18),uVar29);
                goto LAB_14037e595;
              }
            }
          }
        }
        iVar33 = *(int *)(lVar5 + 0x5c);
        if ((iVar33 == *(int *)(lVar5 + 0x60)) || (*(char *)(lVar5 + 0x58) == '\0')) break;
        if (*(char *)(lVar5 + 0x59) == '\0') {
LAB_14037e6e2:
          *(int *)(lVar5 + 0x5c) = iVar33 + 1;
        }
        else {
          if ((*(longlong *)(lVar5 + 0x78) == *(longlong *)(lVar5 + 0x70)) &&
             (*(int *)(lVar5 + 100) == iVar33)) {
LAB_14037e6df:
            *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
            goto LAB_14037e6e2;
          }
          cVar13 = FUN_1403bf1a0(lVar5,*(int *)(lVar5 + 100) + 1);
          if (cVar13 != '\0') {
            uVar21 = *(uint *)(lVar5 + 0x5c);
            lVar26 = *(longlong *)(lVar5 + 0x70);
            uVar32 = *(uint *)(lVar5 + 100);
            puVar1 = (undefined4 *)(lVar26 + (ulonglong)uVar21 * 0x14);
            uVar15 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            lVar27 = *(longlong *)(lVar5 + 0x78);
            puVar2 = (undefined4 *)(lVar27 + (ulonglong)uVar32 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar15;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            *(undefined4 *)(lVar27 + (ulonglong)uVar32 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar26 + 0x10 + (ulonglong)uVar21 * 0x14);
            iVar33 = *(int *)(lVar5 + 0x5c);
            goto LAB_14037e6df;
          }
        }
        if (*(uint *)(lVar5 + 0x5c) < *(uint *)(lVar5 + 0x60)) {
          lVar26 = *(longlong *)(param_3 + 0xa8);
          lVar27 = *param_1;
          uVar32 = *(uint *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14
                            );
          if (((lVar26 == 0) ||
              (uVar31 = *(ushort *)(lVar26 + (ulonglong)(uVar32 & 0xff) * 2), uVar31 == 0xffff)) ||
             (((uVar32 ^ uVar31) & 0xffffff00) != 0)) {
            if (uVar32 == 0xffff) {
              uVar21 = 2;
            }
            else {
              pbVar18 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar27 + 7) +
                                              ((ulonglong)*(byte *)(lVar27 + 6) +
                                              (ulonglong)
                                              CONCAT11(*(undefined1 *)(lVar27 + 4),
                                                       *(undefined1 *)(lVar27 + 5)) * 0x100) * 0x100
                                              + lVar27,uVar32,(int)param_1[1]);
              if (pbVar18 == (byte *)0x0) {
                uVar31 = 1;
              }
              else {
                uVar31 = (ushort)*pbVar18 * 0x100 + (ushort)pbVar18[1];
              }
              uVar21 = (uint)uVar31;
              if (((lVar26 != 0) && ((uVar32 & 0xffff0000) == 0)) && (uVar31 < 0x100)) {
                *(ushort *)(lVar26 + (ulonglong)(uVar32 & 0xff) * 2) =
                     (ushort)uVar32 & 0xff00 | uVar31;
              }
            }
          }
          else {
            uVar21 = (uint)(byte)uVar31;
          }
        }
        else {
          uVar21 = 0;
        }
      } while (uVar21 == uVar24);
      uVar24 = uVar21;
      if ((*(int *)(lVar5 + 0x5c) == *(int *)(lVar5 + 0x60)) || (*(char *)(lVar5 + 0x58) == '\0'))
      goto LAB_14037f3cf;
      puVar30 = (uint *)(ulonglong)uVar22;
    }
    uVar22 = *(uint *)(lVar5 + 0x5c);
    if (uVar22 < *(uint *)(lVar5 + 0x60)) {
      uVar29 = *(uint *)(*(longlong *)(lVar5 + 0x70) + 8 + (ulonglong)uVar22 * 0x14);
      uVar21 = local_58[1];
      while (uVar29 < uVar21) {
        uVar21 = local_58[-2];
        local_58 = local_58 + -3;
      }
      uVar21 = local_58[2];
      while (uVar21 < uVar29) {
        uVar21 = local_58[5];
        local_58 = local_58 + 3;
      }
    }
    if ((*local_58 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar22 == *(uint *)(lVar5 + 0x60)) goto LAB_14037f3cf;
      puVar30 = (uint *)0x0;
      local_64 = 0;
      if (*(char *)(lVar5 + 0x59) == '\0') {
LAB_14037e8fb:
        *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(lVar5 + 0x78) == *(longlong *)(lVar5 + 0x70)) &&
           (*(uint *)(lVar5 + 100) == uVar22)) {
LAB_14037e8f8:
          *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
          goto LAB_14037e8fb;
        }
        cVar13 = FUN_1403bf1a0(lVar5,*(int *)(lVar5 + 100) + 1);
        if (cVar13 != '\0') {
          uVar22 = *(uint *)(lVar5 + 0x5c);
          lVar6 = *(longlong *)(lVar5 + 0x70);
          uVar24 = *(uint *)(lVar5 + 100);
          puVar1 = (undefined4 *)(lVar6 + (ulonglong)uVar22 * 0x14);
          uVar15 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          lVar26 = *(longlong *)(lVar5 + 0x78);
          puVar2 = (undefined4 *)(lVar26 + (ulonglong)uVar24 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar15;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined4 *)(lVar26 + (ulonglong)uVar24 * 0x14 + 0x10) =
               *(undefined4 *)(lVar6 + 0x10 + (ulonglong)uVar22 * 0x14);
          goto LAB_14037e8f8;
        }
      }
    }
    else {
LAB_14037e908:
      if ((((uint)pbVar17[lVar6 + 2] * 0x100 + (uint)pbVar17[lVar6 + 3] & 0x3ff) == 0) ||
         (((uint)pbVar17[lVar6 + 4] * 0x100 + (uint)pbVar17[lVar6 + 5] == 0xffff &&
          ((uint)pbVar17[lVar6 + 6] * 0x100 + (uint)pbVar17[lVar6 + 7] == 0xffff)))) {
        if ((iVar33 != 0) && (((pbVar17[lVar6 + 2] & 0x40) == 0 || (local_64 != 0)))) {
          pbVar18 = (byte *)*param_1;
          if ((uint)pbVar18[1] * 0x10000 + (uint)pbVar18[2] * 0x100 + (uint)*pbVar18 * 0x1000000 +
              (uint)pbVar18[3] <= uVar24) {
            uVar24 = 1;
          }
          bVar4 = pbVar18[0xf];
          lVar26 = ((ulonglong)pbVar18[0xe] +
                   ((ulonglong)CONCAT11(pbVar18[0xc],pbVar18[0xd]) * 0x20 +
                   (ulonglong)
                   pbVar18[(((ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100 +
                            (ulonglong)pbVar18[10]) * 0x80 + (ulonglong)uVar24) * 2 +
                           (ulonglong)pbVar18[0xb]]) * 8) * 0x20 +
                   (ulonglong)
                   (pbVar18 +
                   (((ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100 + (ulonglong)pbVar18[10]) *
                    0x80 + (ulonglong)uVar24) * 2 + (ulonglong)pbVar18[0xb])[1];
          pbVar3 = pbVar18 + lVar26 * 8 + (ulonglong)bVar4;
          uVar22 = (uint)pbVar18[lVar26 * 8 + (ulonglong)bVar4 + 3] +
                   (uint)pbVar18[lVar26 * 8 + (ulonglong)bVar4 + 2] * 0x100;
          if (((((uVar22 & 0x3ff) != 0) &&
               (((uint)pbVar3[5] + (uint)pbVar3[4] * 0x100 != 0xffff ||
                ((uint)pbVar3[6] * 0x100 + (uint)pbVar3[7] != 0xffff)))) ||
              (local_64 != (uint)pbVar3[1] + (uint)*pbVar3 * 0x100)) ||
             ((((uint)pbVar17[lVar6 + 2] << 8 ^ uVar22) >> 0xe & 1) != 0)) goto LAB_14037eb5d;
        }
        pbVar18 = (byte *)*param_1;
        iVar23 = (uint)pbVar18[1] * 0x10000 + (uint)pbVar18[2] * 0x100 + (uint)*pbVar18 * 0x1000000
                 + (uint)pbVar18[3];
        bVar4 = pbVar18[0xf];
        lVar27 = ((ulonglong)pbVar18[0xe] +
                 ((ulonglong)CONCAT11(pbVar18[0xc],pbVar18[0xd]) * 0x20 +
                 (ulonglong)
                 pbVar18[(((ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100 +
                          (ulonglong)pbVar18[10]) * 0x80 +
                         (ulonglong)((uint)(iVar23 == 0) + iVar23 * iVar33)) * 2 +
                         (ulonglong)pbVar18[0xb]]) * 8) * 0x20 +
                 (ulonglong)
                 (pbVar18 +
                 (((ulonglong)CONCAT11(pbVar18[8],pbVar18[9]) * 0x100 + (ulonglong)pbVar18[10]) *
                  0x80 + (ulonglong)((uint)(iVar23 == 0) + iVar23 * iVar33)) * 2 +
                 (ulonglong)pbVar18[0xb])[1];
        lVar26 = lVar27 * 8 + (ulonglong)bVar4;
        if ((((uint)pbVar18[lVar27 * 8 + (ulonglong)bVar4 + 3] +
              (uint)pbVar18[lVar27 * 8 + (ulonglong)bVar4 + 2] * 0x100 & 0x3ff) != 0) &&
           (((uint)pbVar18[lVar26 + 5] + (uint)pbVar18[lVar26 + 4] * 0x100 != 0xffff ||
            ((uint)pbVar18[lVar26 + 6] * 0x100 + (uint)pbVar18[lVar26 + 7] != 0xffff))))
        goto LAB_14037eb5d;
      }
      else {
LAB_14037eb5d:
        cVar13 = *(char *)(lVar5 + 0x59);
        piVar19 = (int *)(lVar5 + 100);
        if (cVar13 == '\0') {
          piVar19 = (int *)(lVar5 + 0x5c);
        }
        if (*piVar19 != 0) {
          uVar22 = *(uint *)(lVar5 + 0x60);
          uVar24 = *(uint *)(lVar5 + 0x5c);
          if (uVar24 < uVar22) {
            uVar21 = uVar24;
            if (cVar13 != '\0') {
              uVar21 = *(uint *)(lVar5 + 100);
            }
            iVar33 = uVar21 - 1;
            uVar21 = uVar24 + 1;
            if ((uVar21 == 0xffffffff) || ((uVar24 - iVar33) + 1 < 0x100)) {
              uVar7 = *(undefined8 *)(lVar5 + 0x70);
              if (uVar21 <= uVar22) {
                uVar22 = uVar21;
              }
              uVar28 = (ulonglong)uVar22;
              if (cVar13 == '\0') {
                uVar15 = FUN_1403a1a20(lVar5,uVar7,iVar33,uVar28,0xffffffff);
                FUN_1403a1bc0(lVar5,uVar7,iVar33,uVar28,uVar15,3);
              }
              else {
                uVar15 = FUN_1403a1a20(lVar5,uVar7,uVar24,uVar28,0xffffffff);
                iVar23 = FUN_1403a1a20(lVar5,*(undefined8 *)(lVar5 + 0x78),iVar33,
                                       *(undefined4 *)(lVar5 + 100),uVar15);
                FUN_1403a1bc0(lVar5,*(undefined8 *)(lVar5 + 0x78),iVar33,
                              *(undefined4 *)(lVar5 + 100),iVar23,3);
                uVar24 = *(uint *)(lVar5 + 0x5c);
                uVar20 = (ulonglong)uVar24;
                if (uVar24 != uVar22) {
                  lVar26 = *(longlong *)(lVar5 + 0x70);
                  piVar19 = (int *)(lVar5 + 0xe0);
                  *piVar19 = *piVar19 + (uVar24 - uVar22);
                  if (*piVar19 < 0) {
                    *(undefined1 *)(lVar5 + 0x58) = 0;
                  }
                  uVar12 = uVar20;
                  if (*(int *)(lVar5 + 0x1c) == 2) {
joined_r0x00014037ed5b:
                    while (uVar24 < uVar22) {
                      if (iVar23 != *(int *)(lVar26 + 8 + uVar20 * 0x14)) {
                        puVar30 = (uint *)(lVar26 + 4 + uVar20 * 0x14);
                        *puVar30 = *puVar30 | 3;
                      }
                      uVar24 = (int)uVar12 + 1;
                      uVar20 = uVar20 + 1;
                      uVar12 = (ulonglong)uVar24;
                    }
                  }
                  else {
                    iVar33 = *(int *)(lVar26 + 8 + uVar20 * 0x14);
                    if (iVar23 == iVar33) {
                      while (uVar24 < uVar22) {
                        uVar22 = (int)uVar28 - 1;
                        uVar28 = (ulonglong)uVar22;
                        if (*(int *)(lVar26 + 8 + uVar28 * 0x14) == iVar33) break;
                        puVar30 = (uint *)(lVar26 + 4 + uVar28 * 0x14);
                        *puVar30 = *puVar30 | 3;
                      }
                    }
                    else {
                      iVar33 = *(int *)(lVar26 + 8 + (ulonglong)(uVar22 - 1) * 0x14);
                      if (iVar23 != iVar33) goto joined_r0x00014037ed5b;
                      while ((uVar24 < uVar22 && (*(int *)(lVar26 + 8 + uVar20 * 0x14) != iVar33)))
                      {
                        puVar30 = (uint *)(lVar26 + 4 + uVar20 * 0x14);
                        *puVar30 = *puVar30 | 3;
                        uVar24 = (int)uVar20 + 1;
                        uVar20 = (ulonglong)uVar24;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar15 = *(undefined4 *)(lVar5 + 100);
      uVar22 = (uint)pbVar17[lVar6 + 2] * 0x100 + (uint)pbVar17[lVar6 + 3];
      if ((uint)pbVar17[lVar6 + 6] * 0x100 + (uint)pbVar17[lVar6 + 7] == 0xffff) {
LAB_14037f0d3:
        if (uVar22 >> 0xf != 0) {
          *(undefined4 *)(param_2 + 0x18) = uVar15;
        }
        if ((uint)pbVar17[lVar6 + 4] * 0x100 + (uint)pbVar17[lVar6 + 5] != 0xffff) {
          uVar24 = uVar22 >> 5 & 0x1f;
          *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) - uVar24;
          if (0 < *(int *)(lVar5 + 0xe0)) {
            lVar6 = *(longlong *)(param_2 + 0x20) +
                    (ulonglong)CONCAT11(pbVar17[lVar6 + 4],pbVar17[lVar6 + 5]) * 2;
            cVar13 = FUN_14036efd0(*(longlong *)(param_2 + 8) + 0x28,lVar6,uVar24);
            uVar21 = 0;
            if (cVar13 != '\0') {
              uVar21 = uVar24;
            }
            uVar24 = *(uint *)(lVar5 + 100);
            if ((((*(uint *)(lVar5 + 0x60) <= *(uint *)(lVar5 + 0x5c)) || ((uVar22 & 0x800) != 0))
                || (cVar13 = FUN_1403b7ba0(lVar5), cVar13 != '\0')) &&
               (cVar13 = FUN_14038ac70(*(undefined8 *)(param_2 + 8),uVar21,lVar6), cVar13 != '\0'))
            {
              *param_2 = 1;
              uVar29 = *(uint *)(lVar5 + 0x5c);
              if ((uVar29 < *(uint *)(lVar5 + 0x60)) && ((uVar22 & 0x800) == 0)) {
                uVar29 = uVar29 + 1;
                *(uint *)(lVar5 + 0x5c) = uVar29;
              }
              if ((uVar22 >> 0xe & 1) == 0) {
                uVar24 = uVar24 + uVar21;
              }
              if (*(char *)(lVar5 + 0x59) == '\0') {
                *(uint *)(lVar5 + 0x5c) = uVar24;
              }
              else if (*(char *)(lVar5 + 0x58) != '\0') {
                uVar22 = *(uint *)(lVar5 + 100);
                if (uVar22 < uVar24) {
                  uVar24 = uVar24 - uVar22;
                  cVar13 = FUN_1403eaf70(lVar5,uVar24,uVar24);
                  if (cVar13 != '\0') {
                    FUN_1404210f0(*(longlong *)(lVar5 + 0x78) +
                                  (ulonglong)*(uint *)(lVar5 + 100) * 0x14,
                                  *(longlong *)(lVar5 + 0x70) +
                                  (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14,(ulonglong)uVar24 * 0x14
                                 );
                    *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + uVar24;
                    *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + uVar24;
                  }
                }
                else if (uVar24 < uVar22) {
                  uVar22 = uVar22 - uVar24;
                  if (uVar29 < uVar22) {
                    uVar29 = uVar22 - uVar29;
                    cVar13 = FUN_1403bf1a0(lVar5,*(uint *)(lVar5 + 0x60) + uVar29);
                    if (cVar13 == '\0') goto LAB_14037f309;
                    uVar24 = *(uint *)(lVar5 + 0x5c);
                    iVar33 = (*(int *)(lVar5 + 0xe0) - *(int *)(lVar5 + 0x60)) + uVar24;
                    *(int *)(lVar5 + 0xe0) = iVar33;
                    if (iVar33 < 0) goto LAB_14037f263;
                    FUN_1404210f0(*(longlong *)(lVar5 + 0x70) +
                                  ((ulonglong)uVar29 + (ulonglong)uVar24) * 0x14,
                                  *(longlong *)(lVar5 + 0x70) + (ulonglong)uVar24 * 0x14,
                                  (ulonglong)(*(int *)(lVar5 + 0x60) - uVar24) * 0x14);
                    uVar24 = *(uint *)(lVar5 + 0x60);
                    if ((uVar24 < *(int *)(lVar5 + 0x5c) + uVar29) &&
                       (iVar33 = (*(int *)(lVar5 + 0x5c) - uVar24) + uVar29,
                       (iVar33 * 5 & 0x3fffffffU) != 0)) {
                      FUN_1404217a0(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar24 * 0x14,0,
                                    iVar33 * 0x14);
                    }
                    *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + uVar29;
                    uVar29 = *(int *)(lVar5 + 0x5c) + uVar29;
                  }
                  uVar24 = *(int *)(lVar5 + 100) - uVar22;
                  *(uint *)(lVar5 + 100) = uVar24;
                  *(uint *)(lVar5 + 0x5c) = uVar29 - uVar22;
                  FUN_1404210f0(*(longlong *)(lVar5 + 0x70) + (ulonglong)(uVar29 - uVar22) * 0x14,
                                *(longlong *)(lVar5 + 0x78) + (ulonglong)uVar24 * 0x14,
                                (ulonglong)uVar22 * 0x14);
                }
              }
            }
          }
        }
      }
      else {
        uVar24 = uVar22 & 0x1f;
        *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) - uVar24;
        if (*(int *)(lVar5 + 0xe0) < 1) goto LAB_14037f309;
        lVar26 = *(longlong *)(param_2 + 0x20) +
                 (ulonglong)CONCAT11(pbVar17[lVar6 + 6],pbVar17[lVar6 + 7]) * 2;
        cVar13 = FUN_14036efd0(*(longlong *)(param_2 + 8) + 0x28,lVar26,uVar24);
        uVar21 = *(uint *)(lVar5 + 100);
        uVar29 = 0;
        if (cVar13 != '\0') {
          uVar29 = uVar24;
        }
        uVar24 = *(uint *)(param_2 + 0x18);
        if (*(char *)(lVar5 + 0x59) == '\0') {
          *(uint *)(lVar5 + 0x5c) = uVar24;
          goto LAB_14037ef00;
        }
        if (*(char *)(lVar5 + 0x58) != '\0') {
          if (uVar21 < uVar24) {
            uVar24 = uVar24 - uVar21;
            cVar13 = FUN_1403eaf70(lVar5,uVar24,uVar24);
            if (cVar13 != '\0') {
              FUN_1404210f0(*(longlong *)(lVar5 + 0x78) + (ulonglong)*(uint *)(lVar5 + 100) * 0x14,
                            *(longlong *)(lVar5 + 0x70) + (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14,
                            (ulonglong)uVar24 * 0x14);
              *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + uVar24;
              *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + uVar24;
              goto LAB_14037ef00;
            }
          }
          else if (uVar24 < uVar21) {
            uVar14 = *(uint *)(lVar5 + 0x5c);
            uVar24 = uVar21 - uVar24;
            if (uVar24 <= uVar14) {
LAB_14037eebc:
              uVar16 = *(int *)(lVar5 + 100) - uVar24;
              *(uint *)(lVar5 + 100) = uVar16;
              *(uint *)(lVar5 + 0x5c) = uVar14 - uVar24;
              FUN_1404210f0(*(longlong *)(lVar5 + 0x70) + (ulonglong)(uVar14 - uVar24) * 0x14,
                            *(longlong *)(lVar5 + 0x78) + (ulonglong)uVar16 * 0x14,
                            (ulonglong)uVar24 * 0x14);
              goto LAB_14037ef00;
            }
            uVar14 = uVar24 - uVar14;
            cVar13 = FUN_1403bf1a0(lVar5,*(int *)(lVar5 + 0x60) + uVar14);
            if (cVar13 == '\0') goto LAB_14037f309;
            uVar16 = *(uint *)(lVar5 + 0x5c);
            iVar33 = (*(int *)(lVar5 + 0xe0) - *(int *)(lVar5 + 0x60)) + uVar16;
            *(int *)(lVar5 + 0xe0) = iVar33;
            if (-1 < iVar33) {
              FUN_1404210f0(*(longlong *)(lVar5 + 0x70) +
                            ((ulonglong)uVar14 + (ulonglong)uVar16) * 0x14,
                            *(longlong *)(lVar5 + 0x70) + (ulonglong)uVar16 * 0x14,
                            (ulonglong)(*(int *)(lVar5 + 0x60) - uVar16) * 0x14);
              uVar16 = *(uint *)(lVar5 + 0x60);
              if ((uVar16 < *(int *)(lVar5 + 0x5c) + uVar14) &&
                 (iVar33 = (*(int *)(lVar5 + 0x5c) - uVar16) + uVar14,
                 (iVar33 * 5 & 0x3fffffffU) != 0)) {
                FUN_1404217a0(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar16 * 0x14,0,iVar33 * 0x14
                             );
              }
              *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + uVar14;
              uVar14 = *(int *)(lVar5 + 0x5c) + uVar14;
              goto LAB_14037eebc;
            }
LAB_14037f263:
            *(undefined1 *)(lVar5 + 0x58) = 0;
          }
          else {
LAB_14037ef00:
            if ((((*(uint *)(lVar5 + 0x60) <= *(uint *)(lVar5 + 0x5c)) || ((uVar22 & 0x400) != 0))
                || (cVar13 = FUN_1403b7ba0(lVar5), cVar13 != '\0')) &&
               (cVar13 = FUN_14038ac70(*(undefined8 *)(param_2 + 8),uVar29,lVar26), cVar13 != '\0'))
            {
              *param_2 = 1;
              uVar24 = *(uint *)(lVar5 + 0x5c);
              if ((uVar24 < *(uint *)(lVar5 + 0x60)) && ((uVar22 & 0x400) == 0)) {
                uVar24 = uVar24 + 1;
                *(uint *)(lVar5 + 0x5c) = uVar24;
              }
              uVar21 = uVar21 + uVar29;
              if (*(char *)(lVar5 + 0x59) == '\0') {
                *(uint *)(lVar5 + 0x5c) = uVar21;
              }
              else {
                if (*(char *)(lVar5 + 0x58) == '\0') goto LAB_14037f309;
                uVar29 = *(uint *)(lVar5 + 100);
                if (uVar29 < uVar21) {
                  uVar21 = uVar21 - uVar29;
                  cVar13 = FUN_1403eaf70(lVar5,uVar21,uVar21);
                  if (cVar13 == '\0') goto LAB_14037f309;
                  FUN_1404210f0(*(longlong *)(lVar5 + 0x78) +
                                (ulonglong)*(uint *)(lVar5 + 100) * 0x14,
                                *(longlong *)(lVar5 + 0x70) +
                                (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14,(ulonglong)uVar21 * 0x14);
                  *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + uVar21;
                  *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + uVar21;
                }
                else if (uVar21 < uVar29) {
                  uVar29 = uVar29 - uVar21;
                  if (uVar24 < uVar29) {
                    uVar24 = uVar29 - uVar24;
                    cVar13 = FUN_1403bf1a0(lVar5,*(uint *)(lVar5 + 0x60) + uVar24);
                    if (cVar13 == '\0') goto LAB_14037f309;
                    uVar21 = *(uint *)(lVar5 + 0x5c);
                    iVar33 = (*(int *)(lVar5 + 0xe0) - *(int *)(lVar5 + 0x60)) + uVar21;
                    *(int *)(lVar5 + 0xe0) = iVar33;
                    if (iVar33 < 0) goto LAB_14037f263;
                    FUN_1404210f0(*(longlong *)(lVar5 + 0x70) +
                                  ((ulonglong)uVar24 + (ulonglong)uVar21) * 0x14,
                                  *(longlong *)(lVar5 + 0x70) + (ulonglong)uVar21 * 0x14,
                                  (ulonglong)(*(int *)(lVar5 + 0x60) - uVar21) * 0x14);
                    uVar21 = *(uint *)(lVar5 + 0x60);
                    if ((uVar21 < *(int *)(lVar5 + 0x5c) + uVar24) &&
                       (iVar33 = (*(int *)(lVar5 + 0x5c) - uVar21) + uVar24,
                       (iVar33 * 5 & 0x3fffffffU) != 0)) {
                      FUN_1404217a0(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar21 * 0x14,0,
                                    iVar33 * 0x14);
                    }
                    *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + uVar24;
                    uVar24 = *(int *)(lVar5 + 0x5c) + uVar24;
                  }
                  uVar21 = *(int *)(lVar5 + 100) - uVar29;
                  *(uint *)(lVar5 + 100) = uVar21;
                  *(uint *)(lVar5 + 0x5c) = uVar24 - uVar29;
                  FUN_1404210f0(*(longlong *)(lVar5 + 0x70) + (ulonglong)(uVar24 - uVar29) * 0x14,
                                *(longlong *)(lVar5 + 0x78) + (ulonglong)uVar21 * 0x14,
                                (ulonglong)uVar29 * 0x14);
                }
              }
              uVar21 = *(int *)(lVar5 + 0x5c) + 1;
              uVar24 = *(uint *)(lVar5 + 0x60);
              if (uVar21 <= *(uint *)(lVar5 + 0x60)) {
                uVar24 = uVar21;
              }
              FUN_14040ef70(lVar5,*(undefined4 *)(param_2 + 0x18),uVar24);
              goto LAB_14037f0d3;
            }
          }
        }
      }
LAB_14037f309:
      if (*(int *)(lVar5 + 0x5c) == *(int *)(lVar5 + 0x60)) goto LAB_14037f3cf;
      puVar30 = (uint *)(ulonglong)local_64;
      if ((uVar32 == 0) ||
         (iVar33 = *(int *)(lVar5 + 0xe0), *(int *)(lVar5 + 0xe0) = iVar33 + -1, iVar33 < 1)) {
        if (*(char *)(lVar5 + 0x59) != '\0') {
          if ((*(longlong *)(lVar5 + 0x78) != *(longlong *)(lVar5 + 0x70)) ||
             (*(int *)(lVar5 + 100) != *(int *)(lVar5 + 0x5c))) {
            cVar13 = FUN_1403bf1a0(lVar5,*(int *)(lVar5 + 100) + 1);
            if (cVar13 == '\0') goto LAB_14037f39f;
            uVar22 = *(uint *)(lVar5 + 0x5c);
            lVar6 = *(longlong *)(lVar5 + 0x70);
            uVar24 = *(uint *)(lVar5 + 100);
            puVar1 = (undefined4 *)(lVar6 + (ulonglong)uVar22 * 0x14);
            uVar15 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            lVar26 = *(longlong *)(lVar5 + 0x78);
            puVar2 = (undefined4 *)(lVar26 + (ulonglong)uVar24 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar15;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            *(undefined4 *)(lVar26 + (ulonglong)uVar24 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar6 + 0x10 + (ulonglong)uVar22 * 0x14);
          }
          *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
        }
        *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
      }
    }
LAB_14037f39f:
    cVar13 = *(char *)(lVar5 + 0x58);
    uVar22 = local_64;
  } while( true );
}

