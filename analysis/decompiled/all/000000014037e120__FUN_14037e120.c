// Function: FUN_14037e120
// Addr: 14037e120
// Size: 166 bytes


void FUN_14037e120(longlong *param_1,undefined1 *param_2,longlong param_3)

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
  byte *pbVar16;
  byte *pbVar17;
  int *piVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  uint *puVar29;
  ushort uVar30;
  uint uVar31;
  int iVar32;
  uint local_64;
  uint *local_58;
  
  lVar5 = *(longlong *)(param_3 + 0x20);
  puVar29 = (uint *)0x0;
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar5 + 0x70);
  *(undefined2 *)(lVar5 + 0x59) = 1;
  *(undefined4 *)(lVar5 + 0x5c) = 0;
  *(undefined4 *)(lVar5 + 100) = 0;
  lVar6 = *(longlong *)(param_3 + 0x80);
  local_64 = 0;
  local_58 = puVar29;
  if ((lVar6 != 0) && (1 < *(uint *)(lVar6 + 4))) {
    local_58 = *(uint **)(lVar6 + 8);
  }
  pbVar16 = (byte *)*param_1;
  puVar24 = puVar29;
  if ((uint)pbVar16[1] * 0x10000 + (uint)pbVar16[2] * 0x100 + (uint)*pbVar16 * 0x1000000 +
      (uint)pbVar16[3] == 0) {
    puVar24 = (uint *)0x2;
  }
  bVar4 = pbVar16[0xf];
  lVar25 = ((ulonglong)pbVar16[0xe] +
           ((ulonglong)CONCAT11(pbVar16[0xc],pbVar16[0xd]) * 0x20 +
           (ulonglong)
           (pbVar16 + ((ulonglong)CONCAT11(pbVar16[8],pbVar16[9]) * 0x100 + (ulonglong)pbVar16[10])
                      * 0x100 + (longlong)puVar24)[pbVar16[0xb]]) * 8) * 0x20 +
           (ulonglong)
           (pbVar16 + ((ulonglong)CONCAT11(pbVar16[8],pbVar16[9]) * 0x100 + (ulonglong)pbVar16[10])
                      * 0x100 + (longlong)puVar24 + pbVar16[0xb])[1];
  lVar6 = lVar25 * 8 + (ulonglong)bVar4;
  if ((((uint)pbVar16[lVar25 * 8 + (ulonglong)bVar4 + 2] * 0x100 +
        (uint)pbVar16[lVar25 * 8 + (ulonglong)bVar4 + 3] & 0x3ff) == 0) ||
     (((uint)pbVar16[lVar6 + 4] * 0x100 + (uint)pbVar16[lVar6 + 5] == 0xffff &&
      ((uint)pbVar16[lVar6 + 6] * 0x100 + (uint)pbVar16[lVar6 + 7] == 0xffff)))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  cVar13 = *(char *)(lVar5 + 0x58);
  uVar21 = local_64;
  do {
    if (cVar13 == '\0') {
code_r0x00014037f49f:
      if ((*(char *)(lVar5 + 0x58) != '\0') &&
         (cVar13 = func_0x0001403ed130(lVar5,*(int *)(lVar5 + 0x60) - *(int *)(lVar5 + 0x5c)),
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
      lVar25 = *param_1;
      uVar20 = *(uint *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14);
      if (((lVar6 == 0) ||
          (uVar30 = *(ushort *)(lVar6 + (ulonglong)(uVar20 & 0xff) * 2), uVar30 == 0xffff)) ||
         (((uVar20 ^ uVar30) & 0xffffff00) != 0)) {
        if (uVar20 == 0xffff) {
          puVar29 = (uint *)(ulonglong)uVar21;
          uVar23 = 2;
        }
        else {
          pbVar16 = (byte *)FUN_1403cf4c0((ulonglong)*(byte *)(lVar25 + 7) +
                                          ((ulonglong)*(byte *)(lVar25 + 6) +
                                          (ulonglong)
                                          CONCAT11(*(undefined1 *)(lVar25 + 4),
                                                   *(undefined1 *)(lVar25 + 5)) * 0x100) * 0x100 +
                                          lVar25,uVar20,(int)param_1[1]);
          if (pbVar16 == (byte *)0x0) {
            uVar30 = 1;
          }
          else {
            uVar30 = (ushort)pbVar16[1] + (ushort)*pbVar16 * 0x100;
          }
          uVar23 = (uint)uVar30;
          if (((lVar6 != 0) && ((uVar20 & 0xffff0000) == 0)) && (uVar30 < 0x100)) {
            *(ushort *)(lVar6 + (ulonglong)(uVar20 & 0xff) * 2) = (ushort)uVar20 & 0xff00 | uVar30;
          }
          puVar29 = (uint *)(ulonglong)uVar21;
        }
      }
      else {
        puVar29 = (uint *)(ulonglong)uVar21;
        uVar23 = (uint)(byte)uVar30;
      }
    }
    else {
      uVar23 = 0;
    }
    while( true ) {
      pbVar16 = (byte *)*param_1;
      uVar31 = (uint)pbVar16[1] * 0x10000 + (uint)pbVar16[2] * 0x100 + (uint)*pbVar16 * 0x1000000 +
               (uint)pbVar16[3];
      bVar10 = true;
      uVar20 = uVar23;
      if (uVar31 <= uVar23) {
        uVar20 = 1;
      }
      iVar32 = (int)puVar29;
      bVar4 = pbVar16[0xf];
      lVar25 = ((ulonglong)pbVar16[0xe] +
               ((ulonglong)CONCAT11(pbVar16[0xc],pbVar16[0xd]) * 0x20 +
               (ulonglong)
               pbVar16[(((ulonglong)CONCAT11(pbVar16[8],pbVar16[9]) * 0x100 + (ulonglong)pbVar16[10]
                        ) * 0x80 + (ulonglong)(uVar20 + uVar31 * iVar32)) * 2 +
                       (ulonglong)pbVar16[0xb]]) * 8) * 0x20 +
               (ulonglong)
               (pbVar16 +
               (((ulonglong)CONCAT11(pbVar16[8],pbVar16[9]) * 0x100 + (ulonglong)pbVar16[10]) * 0x80
               + (ulonglong)(uVar20 + uVar31 * iVar32)) * 2 + (ulonglong)pbVar16[0xb])[1];
      lVar6 = lVar25 * 8 + (ulonglong)bVar4;
      local_64 = (uint)pbVar16[lVar25 * 8 + (ulonglong)bVar4] * 0x100 +
                 (uint)pbVar16[lVar25 * 8 + (ulonglong)bVar4 + 1];
      uVar20 = (uint)pbVar16[lVar25 * 8 + (ulonglong)bVar4 + 2] * 0x100 + (uint)pbVar16[lVar6 + 3];
      uVar31 = uVar20 & 0x4000;
      if (((uVar20 & 0x3ff) == 0) ||
         (((uint)pbVar16[lVar6 + 4] * 0x100 + (uint)pbVar16[lVar6 + 5] == 0xffff &&
          ((uint)pbVar16[lVar6 + 6] * 0x100 + (uint)pbVar16[lVar6 + 7] == 0xffff)))) {
        bVar10 = false;
      }
      if (local_58 != (uint *)0x0) break;
      if ((((iVar32 != 0) || (local_64 != 0)) || (!bVar11)) ||
         ((bVar10 || (uVar20 = uVar23, uVar31 != 0)))) goto code_r0x00014037e9d8;
      do {
        uVar15 = *(undefined4 *)(lVar5 + 100);
        uVar31 = (uint)pbVar16[lVar6 + 2] * 0x100 + (uint)pbVar16[lVar6 + 3];
        if ((uint)pbVar16[lVar6 + 6] * 0x100 + (uint)pbVar16[lVar6 + 7] == 0xffff) {
code_r0x00014037e665:
          if (uVar31 >> 0xf != 0) {
            *(undefined4 *)(param_2 + 0x18) = uVar15;
          }
          if ((uint)pbVar16[lVar6 + 4] * 0x100 + (uint)pbVar16[lVar6 + 5] != 0xffff) {
            uVar28 = uVar31 >> 5 & 0x1f;
            *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) - uVar28;
            if (0 < *(int *)(lVar5 + 0xe0)) {
              lVar25 = *(longlong *)(param_2 + 0x20) +
                       (ulonglong)CONCAT11(pbVar16[lVar6 + 4],pbVar16[lVar6 + 5]) * 2;
              cVar13 = FUN_14036f0a0(*(longlong *)(param_2 + 8) + 0x28,lVar25,uVar28);
              iVar32 = *(int *)(lVar5 + 100);
              uVar14 = 0;
              if (cVar13 != '\0') {
                uVar14 = uVar28;
              }
              if ((((*(uint *)(lVar5 + 0x60) <= *(uint *)(lVar5 + 0x5c)) || ((uVar31 & 0x800) != 0))
                  || (cVar13 = func_0x0001403b7c70(lVar5), cVar13 != '\0')) &&
                 (cVar13 = func_0x00014038ad40(*(undefined8 *)(param_2 + 8),uVar14,lVar25),
                 cVar13 != '\0')) {
                *param_2 = 1;
                if ((*(uint *)(lVar5 + 0x5c) < *(uint *)(lVar5 + 0x60)) && ((uVar31 & 0x800) == 0))
                {
                  *(uint *)(lVar5 + 0x5c) = *(uint *)(lVar5 + 0x5c) + 1;
                }
                if ((uVar31 >> 0xe & 1) == 0) {
                  iVar32 = iVar32 + uVar14;
                }
                func_0x0001403ec6d0(lVar5,iVar32);
              }
            }
          }
        }
        else {
          uVar28 = uVar31 & 0x1f;
          *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) - uVar28;
          if (0 < *(int *)(lVar5 + 0xe0)) {
            lVar25 = *(longlong *)(param_2 + 0x20) +
                     (ulonglong)CONCAT11(pbVar16[lVar6 + 6],pbVar16[lVar6 + 7]) * 2;
            cVar13 = FUN_14036f0a0(*(longlong *)(param_2 + 8) + 0x28,lVar25,uVar28);
            iVar32 = *(int *)(lVar5 + 100);
            uVar14 = 0;
            if (cVar13 != '\0') {
              uVar14 = uVar28;
            }
            cVar13 = func_0x0001403ec6d0(lVar5,*(undefined4 *)(param_2 + 0x18));
            if (((cVar13 != '\0') &&
                (((*(uint *)(lVar5 + 0x60) <= *(uint *)(lVar5 + 0x5c) || ((uVar31 & 0x400) != 0)) ||
                 (cVar13 = func_0x0001403b7c70(lVar5), cVar13 != '\0')))) &&
               (cVar13 = func_0x00014038ad40(*(undefined8 *)(param_2 + 8),uVar14,lVar25),
               cVar13 != '\0')) {
              *param_2 = 1;
              if ((*(uint *)(lVar5 + 0x5c) < *(uint *)(lVar5 + 0x60)) && ((uVar31 & 0x400) == 0)) {
                *(uint *)(lVar5 + 0x5c) = *(uint *)(lVar5 + 0x5c) + 1;
              }
              cVar13 = func_0x0001403ec6d0(lVar5,iVar32 + uVar14);
              if (cVar13 != '\0') {
                uVar14 = *(int *)(lVar5 + 0x5c) + 1;
                uVar28 = *(uint *)(lVar5 + 0x60);
                if (uVar14 <= *(uint *)(lVar5 + 0x60)) {
                  uVar28 = uVar14;
                }
                FUN_14040f040(lVar5,*(undefined4 *)(param_2 + 0x18),uVar28);
                goto code_r0x00014037e665;
              }
            }
          }
        }
        iVar32 = *(int *)(lVar5 + 0x5c);
        if ((iVar32 == *(int *)(lVar5 + 0x60)) || (*(char *)(lVar5 + 0x58) == '\0')) break;
        if (*(char *)(lVar5 + 0x59) == '\0') {
code_r0x00014037e7b2:
          *(int *)(lVar5 + 0x5c) = iVar32 + 1;
        }
        else {
          if ((*(longlong *)(lVar5 + 0x78) == *(longlong *)(lVar5 + 0x70)) &&
             (*(int *)(lVar5 + 100) == iVar32)) {
code_r0x00014037e7af:
            *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
            goto code_r0x00014037e7b2;
          }
          cVar13 = func_0x0001403bf270(lVar5,*(int *)(lVar5 + 100) + 1);
          if (cVar13 != '\0') {
            uVar20 = *(uint *)(lVar5 + 0x5c);
            lVar25 = *(longlong *)(lVar5 + 0x70);
            uVar31 = *(uint *)(lVar5 + 100);
            puVar1 = (undefined4 *)(lVar25 + (ulonglong)uVar20 * 0x14);
            uVar15 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            lVar26 = *(longlong *)(lVar5 + 0x78);
            puVar2 = (undefined4 *)(lVar26 + (ulonglong)uVar31 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar15;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            *(undefined4 *)(lVar26 + (ulonglong)uVar31 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar25 + 0x10 + (ulonglong)uVar20 * 0x14);
            iVar32 = *(int *)(lVar5 + 0x5c);
            goto code_r0x00014037e7af;
          }
        }
        if (*(uint *)(lVar5 + 0x5c) < *(uint *)(lVar5 + 0x60)) {
          lVar25 = *(longlong *)(param_3 + 0xa8);
          lVar26 = *param_1;
          uVar31 = *(uint *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14
                            );
          if (((lVar25 == 0) ||
              (uVar30 = *(ushort *)(lVar25 + (ulonglong)(uVar31 & 0xff) * 2), uVar30 == 0xffff)) ||
             (((uVar31 ^ uVar30) & 0xffffff00) != 0)) {
            if (uVar31 == 0xffff) {
              uVar20 = 2;
            }
            else {
              pbVar17 = (byte *)FUN_1403cf4c0((ulonglong)*(byte *)(lVar26 + 7) +
                                              ((ulonglong)*(byte *)(lVar26 + 6) +
                                              (ulonglong)
                                              CONCAT11(*(undefined1 *)(lVar26 + 4),
                                                       *(undefined1 *)(lVar26 + 5)) * 0x100) * 0x100
                                              + lVar26,uVar31,(int)param_1[1]);
              if (pbVar17 == (byte *)0x0) {
                uVar30 = 1;
              }
              else {
                uVar30 = (ushort)*pbVar17 * 0x100 + (ushort)pbVar17[1];
              }
              uVar20 = (uint)uVar30;
              if (((lVar25 != 0) && ((uVar31 & 0xffff0000) == 0)) && (uVar30 < 0x100)) {
                *(ushort *)(lVar25 + (ulonglong)(uVar31 & 0xff) * 2) =
                     (ushort)uVar31 & 0xff00 | uVar30;
              }
            }
          }
          else {
            uVar20 = (uint)(byte)uVar30;
          }
        }
        else {
          uVar20 = 0;
        }
      } while (uVar20 == uVar23);
      uVar23 = uVar20;
      if ((*(int *)(lVar5 + 0x5c) == *(int *)(lVar5 + 0x60)) || (*(char *)(lVar5 + 0x58) == '\0'))
      goto code_r0x00014037f49f;
      puVar29 = (uint *)(ulonglong)uVar21;
    }
    uVar21 = *(uint *)(lVar5 + 0x5c);
    if (uVar21 < *(uint *)(lVar5 + 0x60)) {
      uVar28 = *(uint *)(*(longlong *)(lVar5 + 0x70) + 8 + (ulonglong)uVar21 * 0x14);
      uVar20 = local_58[1];
      while (uVar28 < uVar20) {
        uVar20 = local_58[-2];
        local_58 = local_58 + -3;
      }
      uVar20 = local_58[2];
      while (uVar20 < uVar28) {
        uVar20 = local_58[5];
        local_58 = local_58 + 3;
      }
    }
    if ((*local_58 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar21 == *(uint *)(lVar5 + 0x60)) goto code_r0x00014037f49f;
      puVar29 = (uint *)0x0;
      local_64 = 0;
      if (*(char *)(lVar5 + 0x59) == '\0') {
code_r0x00014037e9cb:
        *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(lVar5 + 0x78) == *(longlong *)(lVar5 + 0x70)) &&
           (*(uint *)(lVar5 + 100) == uVar21)) {
code_r0x00014037e9c8:
          *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
          goto code_r0x00014037e9cb;
        }
        cVar13 = func_0x0001403bf270(lVar5,*(int *)(lVar5 + 100) + 1);
        if (cVar13 != '\0') {
          uVar21 = *(uint *)(lVar5 + 0x5c);
          lVar6 = *(longlong *)(lVar5 + 0x70);
          uVar23 = *(uint *)(lVar5 + 100);
          puVar1 = (undefined4 *)(lVar6 + (ulonglong)uVar21 * 0x14);
          uVar15 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          lVar25 = *(longlong *)(lVar5 + 0x78);
          puVar2 = (undefined4 *)(lVar25 + (ulonglong)uVar23 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar15;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined4 *)(lVar25 + (ulonglong)uVar23 * 0x14 + 0x10) =
               *(undefined4 *)(lVar6 + 0x10 + (ulonglong)uVar21 * 0x14);
          goto code_r0x00014037e9c8;
        }
      }
    }
    else {
code_r0x00014037e9d8:
      if ((((uint)pbVar16[lVar6 + 2] * 0x100 + (uint)pbVar16[lVar6 + 3] & 0x3ff) == 0) ||
         (((uint)pbVar16[lVar6 + 4] * 0x100 + (uint)pbVar16[lVar6 + 5] == 0xffff &&
          ((uint)pbVar16[lVar6 + 6] * 0x100 + (uint)pbVar16[lVar6 + 7] == 0xffff)))) {
        if ((iVar32 != 0) && (((pbVar16[lVar6 + 2] & 0x40) == 0 || (local_64 != 0)))) {
          pbVar17 = (byte *)*param_1;
          if ((uint)pbVar17[1] * 0x10000 + (uint)pbVar17[2] * 0x100 + (uint)*pbVar17 * 0x1000000 +
              (uint)pbVar17[3] <= uVar23) {
            uVar23 = 1;
          }
          bVar4 = pbVar17[0xf];
          lVar25 = ((ulonglong)pbVar17[0xe] +
                   ((ulonglong)CONCAT11(pbVar17[0xc],pbVar17[0xd]) * 0x20 +
                   (ulonglong)
                   pbVar17[(((ulonglong)CONCAT11(pbVar17[8],pbVar17[9]) * 0x100 +
                            (ulonglong)pbVar17[10]) * 0x80 + (ulonglong)uVar23) * 2 +
                           (ulonglong)pbVar17[0xb]]) * 8) * 0x20 +
                   (ulonglong)
                   (pbVar17 +
                   (((ulonglong)CONCAT11(pbVar17[8],pbVar17[9]) * 0x100 + (ulonglong)pbVar17[10]) *
                    0x80 + (ulonglong)uVar23) * 2 + (ulonglong)pbVar17[0xb])[1];
          pbVar3 = pbVar17 + lVar25 * 8 + (ulonglong)bVar4;
          uVar21 = (uint)pbVar17[lVar25 * 8 + (ulonglong)bVar4 + 3] +
                   (uint)pbVar17[lVar25 * 8 + (ulonglong)bVar4 + 2] * 0x100;
          if (((((uVar21 & 0x3ff) != 0) &&
               (((uint)pbVar3[5] + (uint)pbVar3[4] * 0x100 != 0xffff ||
                ((uint)pbVar3[6] * 0x100 + (uint)pbVar3[7] != 0xffff)))) ||
              (local_64 != (uint)pbVar3[1] + (uint)*pbVar3 * 0x100)) ||
             ((((uint)pbVar16[lVar6 + 2] << 8 ^ uVar21) >> 0xe & 1) != 0))
          goto code_r0x00014037ec2d;
        }
        pbVar17 = (byte *)*param_1;
        iVar22 = (uint)pbVar17[1] * 0x10000 + (uint)pbVar17[2] * 0x100 + (uint)*pbVar17 * 0x1000000
                 + (uint)pbVar17[3];
        bVar4 = pbVar17[0xf];
        lVar26 = ((ulonglong)pbVar17[0xe] +
                 ((ulonglong)CONCAT11(pbVar17[0xc],pbVar17[0xd]) * 0x20 +
                 (ulonglong)
                 pbVar17[(((ulonglong)CONCAT11(pbVar17[8],pbVar17[9]) * 0x100 +
                          (ulonglong)pbVar17[10]) * 0x80 +
                         (ulonglong)((uint)(iVar22 == 0) + iVar22 * iVar32)) * 2 +
                         (ulonglong)pbVar17[0xb]]) * 8) * 0x20 +
                 (ulonglong)
                 (pbVar17 +
                 (((ulonglong)CONCAT11(pbVar17[8],pbVar17[9]) * 0x100 + (ulonglong)pbVar17[10]) *
                  0x80 + (ulonglong)((uint)(iVar22 == 0) + iVar22 * iVar32)) * 2 +
                 (ulonglong)pbVar17[0xb])[1];
        lVar25 = lVar26 * 8 + (ulonglong)bVar4;
        if ((((uint)pbVar17[lVar26 * 8 + (ulonglong)bVar4 + 3] +
              (uint)pbVar17[lVar26 * 8 + (ulonglong)bVar4 + 2] * 0x100 & 0x3ff) != 0) &&
           (((uint)pbVar17[lVar25 + 5] + (uint)pbVar17[lVar25 + 4] * 0x100 != 0xffff ||
            ((uint)pbVar17[lVar25 + 6] * 0x100 + (uint)pbVar17[lVar25 + 7] != 0xffff))))
        goto code_r0x00014037ec2d;
      }
      else {
code_r0x00014037ec2d:
        cVar13 = *(char *)(lVar5 + 0x59);
        piVar18 = (int *)(lVar5 + 100);
        if (cVar13 == '\0') {
          piVar18 = (int *)(lVar5 + 0x5c);
        }
        if (*piVar18 != 0) {
          uVar21 = *(uint *)(lVar5 + 0x60);
          uVar23 = *(uint *)(lVar5 + 0x5c);
          if (uVar23 < uVar21) {
            uVar20 = uVar23;
            if (cVar13 != '\0') {
              uVar20 = *(uint *)(lVar5 + 100);
            }
            iVar32 = uVar20 - 1;
            uVar20 = uVar23 + 1;
            if ((uVar20 == 0xffffffff) || ((uVar23 - iVar32) + 1 < 0x100)) {
              uVar7 = *(undefined8 *)(lVar5 + 0x70);
              if (uVar20 <= uVar21) {
                uVar21 = uVar20;
              }
              uVar27 = (ulonglong)uVar21;
              if (cVar13 == '\0') {
                uVar15 = FUN_1403a1af0(lVar5,uVar7,iVar32,uVar27,0xffffffff);
                FUN_1403a1c90(lVar5,uVar7,iVar32,uVar27,uVar15,3);
              }
              else {
                uVar15 = FUN_1403a1af0(lVar5,uVar7,uVar23,uVar27,0xffffffff);
                iVar22 = FUN_1403a1af0(lVar5,*(undefined8 *)(lVar5 + 0x78),iVar32,
                                       *(undefined4 *)(lVar5 + 100),uVar15);
                FUN_1403a1c90(lVar5,*(undefined8 *)(lVar5 + 0x78),iVar32,
                              *(undefined4 *)(lVar5 + 100),iVar22,3);
                uVar23 = *(uint *)(lVar5 + 0x5c);
                uVar19 = (ulonglong)uVar23;
                if (uVar23 != uVar21) {
                  lVar25 = *(longlong *)(lVar5 + 0x70);
                  piVar18 = (int *)(lVar5 + 0xe0);
                  *piVar18 = *piVar18 + (uVar23 - uVar21);
                  if (*piVar18 < 0) {
                    *(undefined1 *)(lVar5 + 0x58) = 0;
                  }
                  uVar12 = uVar19;
                  if (*(int *)(lVar5 + 0x1c) == 2) {
joined_r0x00014037ee2b:
                    while (uVar23 < uVar21) {
                      if (iVar22 != *(int *)(lVar25 + 8 + uVar19 * 0x14)) {
                        puVar29 = (uint *)(lVar25 + 4 + uVar19 * 0x14);
                        *puVar29 = *puVar29 | 3;
                      }
                      uVar23 = (int)uVar12 + 1;
                      uVar19 = uVar19 + 1;
                      uVar12 = (ulonglong)uVar23;
                    }
                  }
                  else {
                    iVar32 = *(int *)(lVar25 + 8 + uVar19 * 0x14);
                    if (iVar22 == iVar32) {
                      while (uVar23 < uVar21) {
                        uVar21 = (int)uVar27 - 1;
                        uVar27 = (ulonglong)uVar21;
                        if (*(int *)(lVar25 + 8 + uVar27 * 0x14) == iVar32) break;
                        puVar29 = (uint *)(lVar25 + 4 + uVar27 * 0x14);
                        *puVar29 = *puVar29 | 3;
                      }
                    }
                    else {
                      iVar32 = *(int *)(lVar25 + 8 + (ulonglong)(uVar21 - 1) * 0x14);
                      if (iVar22 != iVar32) goto joined_r0x00014037ee2b;
                      while ((uVar23 < uVar21 && (*(int *)(lVar25 + 8 + uVar19 * 0x14) != iVar32)))
                      {
                        puVar29 = (uint *)(lVar25 + 4 + uVar19 * 0x14);
                        *puVar29 = *puVar29 | 3;
                        uVar23 = (int)uVar19 + 1;
                        uVar19 = (ulonglong)uVar23;
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
      uVar21 = (uint)pbVar16[lVar6 + 2] * 0x100 + (uint)pbVar16[lVar6 + 3];
      if ((uint)pbVar16[lVar6 + 6] * 0x100 + (uint)pbVar16[lVar6 + 7] == 0xffff) {
code_r0x00014037f1a3:
        if (uVar21 >> 0xf != 0) {
          *(undefined4 *)(param_2 + 0x18) = uVar15;
        }
        if ((uint)pbVar16[lVar6 + 4] * 0x100 + (uint)pbVar16[lVar6 + 5] != 0xffff) {
          uVar23 = uVar21 >> 5 & 0x1f;
          *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) - uVar23;
          if (0 < *(int *)(lVar5 + 0xe0)) {
            lVar6 = *(longlong *)(param_2 + 0x20) +
                    (ulonglong)CONCAT11(pbVar16[lVar6 + 4],pbVar16[lVar6 + 5]) * 2;
            cVar13 = FUN_14036f0a0(*(longlong *)(param_2 + 8) + 0x28,lVar6,uVar23);
            uVar20 = 0;
            if (cVar13 != '\0') {
              uVar20 = uVar23;
            }
            uVar23 = *(uint *)(lVar5 + 100);
            if ((((*(uint *)(lVar5 + 0x60) <= *(uint *)(lVar5 + 0x5c)) || ((uVar21 & 0x800) != 0))
                || (cVar13 = func_0x0001403b7c70(lVar5), cVar13 != '\0')) &&
               (cVar13 = func_0x00014038ad40(*(undefined8 *)(param_2 + 8),uVar20,lVar6),
               cVar13 != '\0')) {
              *param_2 = 1;
              uVar28 = *(uint *)(lVar5 + 0x5c);
              if ((uVar28 < *(uint *)(lVar5 + 0x60)) && ((uVar21 & 0x800) == 0)) {
                uVar28 = uVar28 + 1;
                *(uint *)(lVar5 + 0x5c) = uVar28;
              }
              if ((uVar21 >> 0xe & 1) == 0) {
                uVar23 = uVar23 + uVar20;
              }
              if (*(char *)(lVar5 + 0x59) == '\0') {
                *(uint *)(lVar5 + 0x5c) = uVar23;
              }
              else if (*(char *)(lVar5 + 0x58) != '\0') {
                uVar21 = *(uint *)(lVar5 + 100);
                if (uVar21 < uVar23) {
                  uVar23 = uVar23 - uVar21;
                  cVar13 = func_0x0001403eb040(lVar5,uVar23,uVar23);
                  if (cVar13 != '\0') {
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(*(longlong *)(lVar5 + 0x78) +
                                  (ulonglong)*(uint *)(lVar5 + 100) * 0x14,
                                  *(longlong *)(lVar5 + 0x70) +
                                  (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14,(ulonglong)uVar23 * 0x14
                                 );
                  }
                }
                else if (uVar23 < uVar21) {
                  uVar21 = uVar21 - uVar23;
                  if (uVar21 <= uVar28) {
                    uVar23 = *(int *)(lVar5 + 100) - uVar21;
                    *(uint *)(lVar5 + 100) = uVar23;
                    *(uint *)(lVar5 + 0x5c) = uVar28 - uVar21;
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(*(longlong *)(lVar5 + 0x70) + (ulonglong)(uVar28 - uVar21) * 0x14,
                                  *(longlong *)(lVar5 + 0x78) + (ulonglong)uVar23 * 0x14,
                                  (ulonglong)uVar21 * 0x14);
                  }
                  cVar13 = func_0x0001403bf270(lVar5,*(uint *)(lVar5 + 0x60) + (uVar21 - uVar28));
                  if (cVar13 != '\0') {
                    uVar23 = *(uint *)(lVar5 + 0x5c);
                    iVar32 = (*(int *)(lVar5 + 0xe0) - *(int *)(lVar5 + 0x60)) + uVar23;
                    *(int *)(lVar5 + 0xe0) = iVar32;
                    if (-1 < iVar32) {
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(*(longlong *)(lVar5 + 0x70) +
                                    ((ulonglong)(uVar21 - uVar28) + (ulonglong)uVar23) * 0x14,
                                    *(longlong *)(lVar5 + 0x70) + (ulonglong)uVar23 * 0x14,
                                    (ulonglong)(*(int *)(lVar5 + 0x60) - uVar23) * 0x14);
                    }
                    goto code_r0x00014037f333;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar23 = uVar21 & 0x1f;
        *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) - uVar23;
        if (0 < *(int *)(lVar5 + 0xe0)) {
          lVar25 = *(longlong *)(param_2 + 0x20) +
                   (ulonglong)CONCAT11(pbVar16[lVar6 + 6],pbVar16[lVar6 + 7]) * 2;
          cVar13 = FUN_14036f0a0(*(longlong *)(param_2 + 8) + 0x28,lVar25,uVar23);
          uVar20 = *(uint *)(lVar5 + 100);
          uVar28 = 0;
          if (cVar13 != '\0') {
            uVar28 = uVar23;
          }
          uVar23 = *(uint *)(param_2 + 0x18);
          if (*(char *)(lVar5 + 0x59) == '\0') {
            *(uint *)(lVar5 + 0x5c) = uVar23;
code_r0x00014037efd0:
            if ((((*(uint *)(lVar5 + 0x60) <= *(uint *)(lVar5 + 0x5c)) || ((uVar21 & 0x400) != 0))
                || (cVar13 = func_0x0001403b7c70(lVar5), cVar13 != '\0')) &&
               (cVar13 = func_0x00014038ad40(*(longlong *)(param_2 + 8),uVar28,lVar25),
               cVar13 != '\0')) {
              *param_2 = 1;
              uVar23 = *(uint *)(lVar5 + 0x5c);
              if ((uVar23 < *(uint *)(lVar5 + 0x60)) && ((uVar21 & 0x400) == 0)) {
                uVar23 = uVar23 + 1;
                *(uint *)(lVar5 + 0x5c) = uVar23;
              }
              uVar20 = uVar20 + uVar28;
              if (*(char *)(lVar5 + 0x59) == '\0') {
                *(uint *)(lVar5 + 0x5c) = uVar20;
code_r0x00014037f17b:
                uVar20 = *(int *)(lVar5 + 0x5c) + 1;
                uVar23 = *(uint *)(lVar5 + 0x60);
                if (uVar20 <= *(uint *)(lVar5 + 0x60)) {
                  uVar23 = uVar20;
                }
                FUN_14040f040(lVar5,*(undefined4 *)(param_2 + 0x18),uVar23);
                goto code_r0x00014037f1a3;
              }
              if (*(char *)(lVar5 + 0x58) != '\0') {
                uVar28 = *(uint *)(lVar5 + 100);
                if (uVar28 < uVar20) {
                  uVar20 = uVar20 - uVar28;
                  cVar13 = func_0x0001403eb040(lVar5,uVar20,uVar20);
                  if (cVar13 != '\0') {
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(*(longlong *)(lVar5 + 0x78) +
                                  (ulonglong)*(uint *)(lVar5 + 100) * 0x14,
                                  *(longlong *)(lVar5 + 0x70) +
                                  (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14,(ulonglong)uVar20 * 0x14
                                 );
                  }
                }
                else {
                  if (uVar28 <= uVar20) goto code_r0x00014037f17b;
                  uVar28 = uVar28 - uVar20;
                  if (uVar28 <= uVar23) {
                    uVar21 = *(int *)(lVar5 + 100) - uVar28;
                    *(uint *)(lVar5 + 100) = uVar21;
                    *(uint *)(lVar5 + 0x5c) = uVar23 - uVar28;
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(*(longlong *)(lVar5 + 0x70) + (ulonglong)(uVar23 - uVar28) * 0x14,
                                  *(longlong *)(lVar5 + 0x78) + (ulonglong)uVar21 * 0x14,
                                  (ulonglong)uVar28 * 0x14);
                  }
                  cVar13 = func_0x0001403bf270(lVar5,*(uint *)(lVar5 + 0x60) + (uVar28 - uVar23));
                  if (cVar13 != '\0') {
                    uVar21 = *(uint *)(lVar5 + 0x5c);
                    iVar32 = (*(int *)(lVar5 + 0xe0) - *(int *)(lVar5 + 0x60)) + uVar21;
                    *(int *)(lVar5 + 0xe0) = iVar32;
                    if (-1 < iVar32) {
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(*(longlong *)(lVar5 + 0x70) +
                                    ((ulonglong)(uVar28 - uVar23) + (ulonglong)uVar21) * 0x14,
                                    *(longlong *)(lVar5 + 0x70) + (ulonglong)uVar21 * 0x14,
                                    (ulonglong)(*(int *)(lVar5 + 0x60) - uVar21) * 0x14);
                    }
                    goto code_r0x00014037f333;
                  }
                }
              }
            }
          }
          else if (*(char *)(lVar5 + 0x58) != '\0') {
            if (uVar20 < uVar23) {
              uVar23 = uVar23 - uVar20;
              cVar13 = func_0x0001403eb040(lVar5,uVar23,uVar23);
              if (cVar13 != '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(*(longlong *)(lVar5 + 0x78) + (ulonglong)*(uint *)(lVar5 + 100) * 0x14
                              ,*(longlong *)(lVar5 + 0x70) +
                               (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14,(ulonglong)uVar23 * 0x14);
              }
            }
            else {
              if (uVar20 <= uVar23) goto code_r0x00014037efd0;
              uVar21 = *(uint *)(lVar5 + 0x5c);
              uVar20 = uVar20 - uVar23;
              if (uVar20 <= uVar21) {
                uVar23 = *(int *)(lVar5 + 100) - uVar20;
                *(uint *)(lVar5 + 100) = uVar23;
                *(uint *)(lVar5 + 0x5c) = uVar21 - uVar20;
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(*(longlong *)(lVar5 + 0x70) + (ulonglong)(uVar21 - uVar20) * 0x14,
                              *(longlong *)(lVar5 + 0x78) + (ulonglong)uVar23 * 0x14,
                              (ulonglong)uVar20 * 0x14);
              }
              cVar13 = func_0x0001403bf270(lVar5,*(int *)(lVar5 + 0x60) + (uVar20 - uVar21));
              if (cVar13 != '\0') {
                uVar23 = *(uint *)(lVar5 + 0x5c);
                iVar32 = (*(int *)(lVar5 + 0xe0) - *(int *)(lVar5 + 0x60)) + uVar23;
                *(int *)(lVar5 + 0xe0) = iVar32;
                if (-1 < iVar32) {
                    /* WARNING: Subroutine does not return */
                  FUN_1404211c0(*(longlong *)(lVar5 + 0x70) +
                                ((ulonglong)(uVar20 - uVar21) + (ulonglong)uVar23) * 0x14,
                                *(longlong *)(lVar5 + 0x70) + (ulonglong)uVar23 * 0x14,
                                (ulonglong)(*(int *)(lVar5 + 0x60) - uVar23) * 0x14);
                }
code_r0x00014037f333:
                *(undefined1 *)(lVar5 + 0x58) = 0;
              }
            }
          }
        }
      }
      if (*(int *)(lVar5 + 0x5c) == *(int *)(lVar5 + 0x60)) goto code_r0x00014037f49f;
      puVar29 = (uint *)(ulonglong)local_64;
      if ((uVar31 == 0) ||
         (iVar32 = *(int *)(lVar5 + 0xe0), *(int *)(lVar5 + 0xe0) = iVar32 + -1, iVar32 < 1)) {
        if (*(char *)(lVar5 + 0x59) != '\0') {
          if ((*(longlong *)(lVar5 + 0x78) != *(longlong *)(lVar5 + 0x70)) ||
             (*(int *)(lVar5 + 100) != *(int *)(lVar5 + 0x5c))) {
            cVar13 = func_0x0001403bf270(lVar5,*(int *)(lVar5 + 100) + 1);
            if (cVar13 == '\0') goto code_r0x00014037f46f;
            uVar21 = *(uint *)(lVar5 + 0x5c);
            lVar6 = *(longlong *)(lVar5 + 0x70);
            uVar23 = *(uint *)(lVar5 + 100);
            puVar1 = (undefined4 *)(lVar6 + (ulonglong)uVar21 * 0x14);
            uVar15 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            lVar25 = *(longlong *)(lVar5 + 0x78);
            puVar2 = (undefined4 *)(lVar25 + (ulonglong)uVar23 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar15;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            *(undefined4 *)(lVar25 + (ulonglong)uVar23 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar6 + 0x10 + (ulonglong)uVar21 * 0x14);
          }
          *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
        }
        *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
      }
    }
code_r0x00014037f46f:
    cVar13 = *(char *)(lVar5 + 0x58);
    uVar21 = local_64;
  } while( true );
}

