// Function: FUN_14037f510
// Addr: 14037f510
// Size: 76 bytes


void FUN_14037f510(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ushort uVar23;
  int iVar24;
  byte *pbVar25;
  byte *pbVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  char cStackX_20;
  int iStack_64;
  uint *puStack_50;
  
  lVar6 = *(longlong *)(param_3 + 0x20);
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar6 + 0x70);
  *(undefined2 *)(lVar6 + 0x59) = 1;
  *(undefined4 *)(lVar6 + 0x5c) = 0;
  *(undefined4 *)(lVar6 + 100) = 0;
  lVar21 = *(longlong *)(param_3 + 0x80);
  iStack_64 = 0;
  if ((lVar21 == 0) || (*(uint *)(lVar21 + 4) < 2)) {
    puStack_50 = (uint *)0x0;
  }
  else {
    puStack_50 = *(uint **)(lVar21 + 8);
  }
  pbVar25 = (byte *)*param_1;
  bVar5 = pbVar25[7];
  lVar20 = (ulonglong)
           pbVar25[(ulonglong)pbVar25[4] * 0x100 +
                   (ulonglong)((uint)pbVar25[1] + (uint)*pbVar25 * 0x100 == 0) +
                   (ulonglong)pbVar25[5]] + (ulonglong)pbVar25[6] * 0x20;
  lVar21 = lVar20 * 8 + (ulonglong)bVar5;
  if ((((uint)pbVar25[lVar20 * 8 + (ulonglong)bVar5 + 3] +
        (uint)pbVar25[lVar20 * 8 + (ulonglong)bVar5 + 2] * 0x100 & 0x3ff) == 0) ||
     (((uint)pbVar25[lVar21 + 5] + (uint)pbVar25[lVar21 + 4] * 0x100 == 0xffff &&
      ((uint)pbVar25[lVar21 + 7] + (uint)pbVar25[lVar21 + 6] * 0x100 == 0xffff)))) {
    cStackX_20 = '\x01';
  }
  else {
    cStackX_20 = '\0';
  }
  cVar12 = *(char *)(lVar6 + 0x58);
  iVar28 = iStack_64;
  do {
    if (cVar12 == '\0') {
code_r0x00014038075c:
      if ((*(char *)(lVar6 + 0x58) != '\0') &&
         (cVar12 = func_0x0001403ed130(lVar6,*(int *)(lVar6 + 0x60) - *(int *)(lVar6 + 0x5c)),
         cVar12 != '\0')) {
        if (*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) {
          *(longlong *)(lVar6 + 0x80) = *(longlong *)(lVar6 + 0x70);
          *(longlong *)(lVar6 + 0x70) = *(longlong *)(lVar6 + 0x78);
        }
        *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(lVar6 + 100);
      }
      *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar6 + 0x70);
      *(undefined1 *)(lVar6 + 0x59) = 0;
      *(undefined4 *)(lVar6 + 100) = 0;
      *(undefined4 *)(lVar6 + 0x5c) = 0;
      return;
    }
    if (*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) {
      lVar21 = *(longlong *)(param_3 + 0xa8);
      lVar20 = *param_1;
      uVar18 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
      if (lVar21 != 0) {
        uVar23 = *(ushort *)(lVar21 + (ulonglong)(uVar18 & 0xff) * 2);
        if ((uVar23 != 0xffff) && (((uVar18 ^ uVar23) & 0xffffff00) == 0)) {
          uVar29 = (ulonglong)uVar23 & 0xff;
          goto code_r0x00014037f740;
        }
      }
      if (uVar18 == 0xffff) {
        uVar29 = 2;
      }
      else {
        pbVar25 = (byte *)((ulonglong)*(byte *)(lVar20 + 3) +
                          (ulonglong)*(byte *)(lVar20 + 2) * 0x100 + lVar20);
        uVar27 = (uVar18 + (uint)*pbVar25 * -0x100) - (uint)pbVar25[1];
        if (uVar27 < (uint)pbVar25[3] + (uint)pbVar25[2] * 0x100) {
          uVar29 = (ulonglong)pbVar25[(ulonglong)uVar27 + 4];
          uVar23 = (ushort)pbVar25[(ulonglong)uVar27 + 4];
        }
        else {
          uVar29 = 1;
          uVar23 = 1;
        }
        if ((lVar21 != 0) && ((uVar18 & 0xffff0000) == 0)) {
          *(ushort *)(lVar21 + (ulonglong)(uVar18 & 0xff) * 2) = (ushort)uVar18 & 0xff00 | uVar23;
        }
      }
    }
    else {
      uVar29 = 0;
    }
code_r0x00014037f740:
    while( true ) {
      pbVar25 = (byte *)*param_1;
      uVar19 = (uint)uVar29;
      uVar27 = (uint)pbVar25[1] + (uint)*pbVar25 * 0x100;
      uVar18 = uVar19;
      if (uVar27 <= uVar19) {
        uVar18 = 1;
      }
      lVar21 = (ulonglong)
               pbVar25[(ulonglong)pbVar25[5] +
                       (ulonglong)(uVar18 + uVar27 * iVar28) + (ulonglong)pbVar25[4] * 0x100] +
               (ulonglong)pbVar25[6] * 0x20;
      lVar20 = lVar21 * 8 + (ulonglong)pbVar25[7];
      lVar21 = (longlong)
               (int)((((uint)pbVar25[lVar21 * 8 + (ulonglong)pbVar25[7]] - (uint)pbVar25[4]) * 0x100
                     + (uint)pbVar25[lVar20 + 1]) - (uint)pbVar25[5]) / (longlong)(int)uVar27;
      uVar27 = (uint)pbVar25[lVar20 + 2] * 0x100 + (uint)pbVar25[lVar20 + 3];
      iStack_64 = (int)lVar21;
      uVar18 = uVar27 & 0x4000;
      if (((uVar27 & 0x3ff) == 0) ||
         (((uint)pbVar25[lVar20 + 4] * 0x100 + (uint)pbVar25[lVar20 + 5] == 0xffff &&
          ((uint)pbVar25[lVar20 + 6] * 0x100 + (uint)pbVar25[lVar20 + 7] == 0xffff)))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (puStack_50 != (uint *)0x0) break;
      if ((((iVar28 != 0) || (iStack_64 != 0)) || (cStackX_20 == (char)lVar21)) ||
         ((bVar10 || (uVar18 != 0)))) goto code_r0x00014037fcf7;
      do {
        uVar14 = *(undefined4 *)(lVar6 + 100);
        uVar18 = (uint)pbVar25[lVar20 + 2] * 0x100 + (uint)pbVar25[lVar20 + 3];
        if ((uint)pbVar25[lVar20 + 6] * 0x100 + (uint)pbVar25[lVar20 + 7] == 0xffff) {
code_r0x00014037f996:
          if (uVar18 >> 0xf != 0) {
            *(undefined4 *)(param_2 + 0x18) = uVar14;
          }
          if ((uint)pbVar25[lVar20 + 4] * 0x100 + (uint)pbVar25[lVar20 + 5] != 0xffff) {
            uVar27 = uVar18 >> 5 & 0x1f;
            *(int *)(lVar6 + 0xe0) = *(int *)(lVar6 + 0xe0) - uVar27;
            if (0 < *(int *)(lVar6 + 0xe0)) {
              lVar21 = *(longlong *)(param_2 + 0x20) +
                       (ulonglong)CONCAT11(pbVar25[lVar20 + 4],pbVar25[lVar20 + 5]) * 2;
              cVar12 = FUN_14036f0a0(*(longlong *)(param_2 + 8) + 0x28,lVar21,uVar27);
              iVar24 = *(int *)(lVar6 + 100);
              uVar13 = 0;
              if (cVar12 != '\0') {
                uVar13 = uVar27;
              }
              if ((((*(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c)) || ((uVar18 & 0x800) != 0))
                  || (cVar12 = func_0x0001403b7c70(lVar6), cVar12 != '\0')) &&
                 (cVar12 = func_0x00014038ad40(*(undefined8 *)(param_2 + 8),uVar13,lVar21),
                 cVar12 != '\0')) {
                *param_2 = 1;
                if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar18 & 0x800) == 0))
                {
                  *(uint *)(lVar6 + 0x5c) = *(uint *)(lVar6 + 0x5c) + 1;
                }
                if ((uVar18 >> 0xe & 1) == 0) {
                  iVar24 = iVar24 + uVar13;
                }
                func_0x0001403ec6d0(lVar6,iVar24);
              }
            }
          }
        }
        else {
          uVar27 = uVar18 & 0x1f;
          *(int *)(lVar6 + 0xe0) = *(int *)(lVar6 + 0xe0) - uVar27;
          if (0 < *(int *)(lVar6 + 0xe0)) {
            lVar21 = *(longlong *)(param_2 + 0x20) +
                     (ulonglong)CONCAT11(pbVar25[lVar20 + 6],pbVar25[lVar20 + 7]) * 2;
            cVar12 = FUN_14036f0a0(*(longlong *)(param_2 + 8) + 0x28,lVar21,uVar27);
            iVar24 = *(int *)(lVar6 + 100);
            uVar13 = 0;
            if (cVar12 != '\0') {
              uVar13 = uVar27;
            }
            cVar12 = func_0x0001403ec6d0(lVar6,*(undefined4 *)(param_2 + 0x18));
            if (((cVar12 != '\0') &&
                (((*(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c) || ((uVar18 & 0x400) != 0)) ||
                 (cVar12 = func_0x0001403b7c70(lVar6), cVar12 != '\0')))) &&
               (cVar12 = func_0x00014038ad40(*(undefined8 *)(param_2 + 8),uVar13,lVar21),
               cVar12 != '\0')) {
              *param_2 = 1;
              if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar18 & 0x400) == 0)) {
                *(uint *)(lVar6 + 0x5c) = *(uint *)(lVar6 + 0x5c) + 1;
              }
              cVar12 = func_0x0001403ec6d0(lVar6,uVar13 + iVar24);
              if (cVar12 != '\0') {
                uVar13 = *(int *)(lVar6 + 0x5c) + 1;
                uVar27 = *(uint *)(lVar6 + 0x60);
                if (uVar13 <= *(uint *)(lVar6 + 0x60)) {
                  uVar27 = uVar13;
                }
                FUN_14040f040(lVar6,*(undefined4 *)(param_2 + 0x18),uVar27);
                goto code_r0x00014037f996;
              }
            }
          }
        }
        iVar24 = *(int *)(lVar6 + 0x5c);
        if ((iVar24 == *(int *)(lVar6 + 0x60)) || (*(char *)(lVar6 + 0x58) == '\0')) break;
        if (*(char *)(lVar6 + 0x59) == '\0') {
code_r0x00014037faeb:
          *(int *)(lVar6 + 0x5c) = iVar24 + 1;
        }
        else {
          if ((*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) &&
             (*(int *)(lVar6 + 100) == iVar24)) {
code_r0x00014037fae8:
            *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
            goto code_r0x00014037faeb;
          }
          cVar12 = func_0x0001403bf270(lVar6,*(int *)(lVar6 + 100) + 1);
          if (cVar12 != '\0') {
            uVar18 = *(uint *)(lVar6 + 0x5c);
            lVar21 = *(longlong *)(lVar6 + 0x70);
            uVar27 = *(uint *)(lVar6 + 100);
            puVar1 = (undefined4 *)(lVar21 + (ulonglong)uVar18 * 0x14);
            uVar14 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            lVar22 = *(longlong *)(lVar6 + 0x78);
            puVar2 = (undefined4 *)(lVar22 + (ulonglong)uVar27 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar14;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            *(undefined4 *)(lVar22 + (ulonglong)uVar27 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar18 * 0x14);
            iVar24 = *(int *)(lVar6 + 0x5c);
            goto code_r0x00014037fae8;
          }
        }
        if (*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) {
          lVar21 = *(longlong *)(param_3 + 0xa8);
          lVar22 = *param_1;
          uVar18 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14
                            );
          if (lVar21 != 0) {
            uVar23 = *(ushort *)(lVar21 + (ulonglong)(uVar18 & 0xff) * 2);
            if ((uVar23 != 0xffff) && (((uVar18 ^ uVar23) & 0xffffff00) == 0)) {
              uVar29 = (ulonglong)uVar23 & 0xff;
              goto code_r0x00014037fbe8;
            }
          }
          if (uVar18 == 0xffff) {
            uVar29 = 2;
          }
          else {
            pbVar26 = (byte *)(lVar22 + (ulonglong)*(byte *)(lVar22 + 2) * 0x100 +
                              (ulonglong)*(byte *)(lVar22 + 3));
            uVar27 = (uVar18 - pbVar26[1]) + (uint)*pbVar26 * -0x100;
            if (uVar27 < (uint)pbVar26[2] * 0x100 + (uint)pbVar26[3]) {
              uVar29 = (ulonglong)pbVar26[(ulonglong)uVar27 + 4];
            }
            else {
              uVar29 = 1;
            }
            if ((lVar21 != 0) && ((uVar18 & 0xffff0000) == 0)) {
              *(ushort *)(lVar21 + (ulonglong)(uVar18 & 0xff) * 2) =
                   (ushort)uVar18 & 0xff00 | (ushort)uVar29;
            }
          }
        }
        else {
          uVar29 = 0;
        }
code_r0x00014037fbe8:
      } while ((uint)uVar29 == uVar19);
      if ((*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) || (*(char *)(lVar6 + 0x58) == '\0'))
      goto code_r0x00014038075c;
    }
    uVar27 = *(uint *)(lVar6 + 0x5c);
    if (uVar27 < *(uint *)(lVar6 + 0x60)) {
      uVar15 = *(uint *)(*(longlong *)(lVar6 + 0x70) + 8 + (ulonglong)uVar27 * 0x14);
      uVar13 = puStack_50[1];
      while (uVar15 < uVar13) {
        uVar13 = puStack_50[-2];
        puStack_50 = puStack_50 + -3;
      }
      uVar13 = puStack_50[2];
      while (uVar13 < uVar15) {
        uVar13 = puStack_50[5];
        puStack_50 = puStack_50 + 3;
      }
    }
    if ((*puStack_50 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar27 == *(uint *)(lVar6 + 0x60)) goto code_r0x00014038075c;
      iStack_64 = 0;
      if (*(char *)(lVar6 + 0x59) == '\0') {
code_r0x00014037fcef:
        *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) &&
           (*(uint *)(lVar6 + 100) == uVar27)) {
code_r0x00014037fcec:
          *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
          goto code_r0x00014037fcef;
        }
        cVar12 = func_0x0001403bf270(lVar6,*(int *)(lVar6 + 100) + 1);
        if (cVar12 != '\0') {
          uVar18 = *(uint *)(lVar6 + 0x5c);
          lVar21 = *(longlong *)(lVar6 + 0x70);
          uVar27 = *(uint *)(lVar6 + 100);
          puVar1 = (undefined4 *)(lVar21 + (ulonglong)uVar18 * 0x14);
          uVar14 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          lVar20 = *(longlong *)(lVar6 + 0x78);
          puVar2 = (undefined4 *)(lVar20 + (ulonglong)uVar27 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar14;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined4 *)(lVar20 + (ulonglong)uVar27 * 0x14 + 0x10) =
               *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar18 * 0x14);
          goto code_r0x00014037fcec;
        }
      }
    }
    else {
code_r0x00014037fcf7:
      if ((((uint)pbVar25[lVar20 + 2] * 0x100 + (uint)pbVar25[lVar20 + 3] & 0x3ff) == 0) ||
         (((uint)pbVar25[lVar20 + 4] * 0x100 + (uint)pbVar25[lVar20 + 5] == 0xffff &&
          ((uint)pbVar25[lVar20 + 6] * 0x100 + (uint)pbVar25[lVar20 + 7] == 0xffff)))) {
        if ((iVar28 != 0) && (((pbVar25[lVar20 + 2] & 0x40) == 0 || (iStack_64 != 0)))) {
          pbVar26 = (byte *)*param_1;
          if ((uint)*pbVar26 * 0x100 + (uint)pbVar26[1] <= uVar19) {
            uVar29 = 1;
          }
          bVar5 = pbVar26[7];
          lVar21 = (ulonglong)
                   pbVar26[(ulonglong)pbVar26[5] + (ulonglong)pbVar26[4] * 0x100 + uVar29] +
                   (ulonglong)pbVar26[6] * 0x20;
          pbVar3 = pbVar26 + lVar21 * 8 + (ulonglong)bVar5;
          uVar27 = (uint)pbVar26[lVar21 * 8 + (ulonglong)bVar5 + 3] +
                   (uint)pbVar26[lVar21 * 8 + (ulonglong)bVar5 + 2] * 0x100;
          if (((((uVar27 & 0x3ff) != 0) &&
               (((uint)pbVar3[5] + (uint)pbVar3[4] * 0x100 != 0xffff ||
                ((uint)pbVar3[6] * 0x100 + (uint)pbVar3[7] != 0xffff)))) ||
              (iStack_64 !=
               (int)(((uint)*pbVar3 * 0x100 + (uint)pbVar26[4] * -0x100 + (uint)pbVar3[1]) -
                    (uint)pbVar26[5]) / (int)(uint)CONCAT11(*pbVar26,pbVar26[1]))) ||
             ((((uint)pbVar25[lVar20 + 2] << 8 ^ uVar27) >> 0xe & 1) != 0))
          goto code_r0x00014037feee;
        }
        pbVar26 = (byte *)*param_1;
        iVar24 = (uint)pbVar26[1] + (uint)*pbVar26 * 0x100;
        bVar5 = pbVar26[7];
        lVar22 = (ulonglong)
                 pbVar26[(ulonglong)pbVar26[5] +
                         (ulonglong)((uint)(iVar24 == 0) + iVar24 * iVar28) +
                         (ulonglong)pbVar26[4] * 0x100] + (ulonglong)pbVar26[6] * 0x20;
        lVar21 = lVar22 * 8 + (ulonglong)bVar5;
        if ((((uint)pbVar26[lVar22 * 8 + (ulonglong)bVar5 + 3] +
              (uint)pbVar26[lVar22 * 8 + (ulonglong)bVar5 + 2] * 0x100 & 0x3ff) != 0) &&
           (((uint)pbVar26[lVar21 + 5] + (uint)pbVar26[lVar21 + 4] * 0x100 != 0xffff ||
            ((uint)pbVar26[lVar21 + 6] * 0x100 + (uint)pbVar26[lVar21 + 7] != 0xffff))))
        goto code_r0x00014037feee;
      }
      else {
code_r0x00014037feee:
        cVar12 = *(char *)(lVar6 + 0x59);
        piVar16 = (int *)(lVar6 + 100);
        if (cVar12 == '\0') {
          piVar16 = (int *)(lVar6 + 0x5c);
        }
        if (*piVar16 != 0) {
          uVar27 = *(uint *)(lVar6 + 0x60);
          uVar19 = *(uint *)(lVar6 + 0x5c);
          if (uVar19 < uVar27) {
            uVar13 = uVar19;
            if (cVar12 != '\0') {
              uVar13 = *(uint *)(lVar6 + 100);
            }
            iVar28 = uVar13 - 1;
            uVar13 = uVar19 + 1;
            if ((uVar13 == 0xffffffff) || ((uVar19 - iVar28) + 1 < 0x100)) {
              uVar7 = *(undefined8 *)(lVar6 + 0x70);
              if (uVar13 <= uVar27) {
                uVar27 = uVar13;
              }
              uVar29 = (ulonglong)uVar27;
              if (cVar12 == '\0') {
                uVar14 = FUN_1403a1af0(lVar6,uVar7,iVar28,uVar27,0xffffffff);
                FUN_1403a1c90(lVar6,uVar7,iVar28,uVar27,uVar14,3);
              }
              else {
                uVar14 = FUN_1403a1af0(lVar6,uVar7,uVar19,uVar27,0xffffffff);
                iVar24 = FUN_1403a1af0(lVar6,*(undefined8 *)(lVar6 + 0x78),iVar28,
                                       *(undefined4 *)(lVar6 + 100),uVar14);
                FUN_1403a1c90(lVar6,*(undefined8 *)(lVar6 + 0x78),iVar28,
                              *(undefined4 *)(lVar6 + 100),iVar24,3);
                uVar19 = *(uint *)(lVar6 + 0x5c);
                uVar17 = (ulonglong)uVar19;
                if (uVar19 != uVar27) {
                  lVar21 = *(longlong *)(lVar6 + 0x70);
                  piVar16 = (int *)(lVar6 + 0xe0);
                  *piVar16 = *piVar16 + (uVar19 - uVar27);
                  if (*piVar16 < 0) {
                    *(undefined1 *)(lVar6 + 0x58) = 0;
                  }
                  uVar11 = uVar17;
                  if (*(int *)(lVar6 + 0x1c) == 2) {
joined_r0x0001403800e9:
                    while (uVar19 < uVar27) {
                      if (iVar24 != *(int *)(lVar21 + 8 + uVar17 * 0x14)) {
                        puVar4 = (uint *)(lVar21 + 4 + uVar17 * 0x14);
                        *puVar4 = *puVar4 | 3;
                      }
                      uVar19 = (int)uVar11 + 1;
                      uVar17 = uVar17 + 1;
                      uVar11 = (ulonglong)uVar19;
                    }
                  }
                  else {
                    iVar28 = *(int *)(lVar21 + 8 + uVar17 * 0x14);
                    if (iVar24 == iVar28) {
                      while (uVar19 < uVar27) {
                        uVar27 = (int)uVar29 - 1;
                        uVar29 = (ulonglong)uVar27;
                        if (*(int *)(lVar21 + 8 + uVar29 * 0x14) == iVar28) break;
                        puVar4 = (uint *)(lVar21 + 4 + uVar29 * 0x14);
                        *puVar4 = *puVar4 | 3;
                      }
                    }
                    else {
                      iVar28 = *(int *)(lVar21 + 8 + (ulonglong)(uVar27 - 1) * 0x14);
                      if (iVar24 != iVar28) goto joined_r0x0001403800e9;
                      while ((uVar19 < uVar27 && (*(int *)(lVar21 + 8 + uVar17 * 0x14) != iVar28)))
                      {
                        puVar4 = (uint *)(lVar21 + 4 + uVar17 * 0x14);
                        *puVar4 = *puVar4 | 3;
                        uVar19 = (int)uVar17 + 1;
                        uVar17 = (ulonglong)uVar19;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar14 = *(undefined4 *)(lVar6 + 100);
      uVar27 = (uint)pbVar25[lVar20 + 3] + (uint)pbVar25[lVar20 + 2] * 0x100;
      if ((uint)pbVar25[lVar20 + 6] * 0x100 + (uint)pbVar25[lVar20 + 7] == 0xffff) {
code_r0x000140380464:
        if (uVar27 >> 0xf != 0) {
          *(undefined4 *)(param_2 + 0x18) = uVar14;
        }
        if ((uint)pbVar25[lVar20 + 4] * 0x100 + (uint)pbVar25[lVar20 + 5] != 0xffff) {
          uVar19 = uVar27 >> 5 & 0x1f;
          *(int *)(lVar6 + 0xe0) = *(int *)(lVar6 + 0xe0) - uVar19;
          if (0 < *(int *)(lVar6 + 0xe0)) {
            lVar21 = *(longlong *)(param_2 + 0x20) +
                     (ulonglong)CONCAT11(pbVar25[lVar20 + 4],pbVar25[lVar20 + 5]) * 2;
            cVar12 = FUN_14036f0a0(*(longlong *)(param_2 + 8) + 0x28,lVar21,uVar19);
            uVar13 = 0;
            if (cVar12 != '\0') {
              uVar13 = uVar19;
            }
            uVar19 = *(uint *)(lVar6 + 100);
            if ((((*(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c)) || ((uVar27 & 0x800) != 0))
                || (cVar12 = func_0x0001403b7c70(lVar6), cVar12 != '\0')) &&
               (cVar12 = func_0x00014038ad40(*(undefined8 *)(param_2 + 8),uVar13,lVar21),
               cVar12 != '\0')) {
              *param_2 = 1;
              uVar15 = *(uint *)(lVar6 + 0x5c);
              if ((uVar15 < *(uint *)(lVar6 + 0x60)) && ((uVar27 & 0x800) == 0)) {
                uVar15 = uVar15 + 1;
                *(uint *)(lVar6 + 0x5c) = uVar15;
              }
              if ((uVar27 >> 0xe & 1) == 0) {
                uVar19 = uVar19 + uVar13;
              }
              if (*(char *)(lVar6 + 0x59) == '\0') {
                *(uint *)(lVar6 + 0x5c) = uVar19;
              }
              else if (*(char *)(lVar6 + 0x58) != '\0') {
                uVar27 = *(uint *)(lVar6 + 100);
                if (uVar27 < uVar19) {
                  uVar19 = uVar19 - uVar27;
                  cVar12 = func_0x0001403eb040(lVar6,uVar19,uVar19);
                  if (cVar12 != '\0') {
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(*(longlong *)(lVar6 + 0x78) +
                                  (ulonglong)*(uint *)(lVar6 + 100) * 0x14,
                                  *(longlong *)(lVar6 + 0x70) +
                                  (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14,(ulonglong)uVar19 * 0x14
                                 );
                  }
                }
                else if (uVar19 < uVar27) {
                  uVar27 = uVar27 - uVar19;
                  if (uVar27 <= uVar15) {
                    uVar18 = *(int *)(lVar6 + 100) - uVar27;
                    *(uint *)(lVar6 + 100) = uVar18;
                    *(uint *)(lVar6 + 0x5c) = uVar15 - uVar27;
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(*(longlong *)(lVar6 + 0x70) + (ulonglong)(uVar15 - uVar27) * 0x14,
                                  *(longlong *)(lVar6 + 0x78) + (ulonglong)uVar18 * 0x14,
                                  (ulonglong)uVar27 * 0x14);
                  }
                  cVar12 = func_0x0001403bf270(lVar6,*(uint *)(lVar6 + 0x60) + (uVar27 - uVar15));
                  if (cVar12 != '\0') {
                    uVar19 = *(uint *)(lVar6 + 0x5c);
                    iVar28 = (*(int *)(lVar6 + 0xe0) - *(int *)(lVar6 + 0x60)) + uVar19;
                    *(int *)(lVar6 + 0xe0) = iVar28;
                    if (-1 < iVar28) {
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(*(longlong *)(lVar6 + 0x70) +
                                    ((ulonglong)(uVar27 - uVar15) + (ulonglong)uVar19) * 0x14,
                                    *(longlong *)(lVar6 + 0x70) + (ulonglong)uVar19 * 0x14,
                                    (ulonglong)(*(int *)(lVar6 + 0x60) - uVar19) * 0x14);
                    }
                    goto code_r0x0001403805ed;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar19 = uVar27 & 0x1f;
        *(int *)(lVar6 + 0xe0) = *(int *)(lVar6 + 0xe0) - uVar19;
        if (0 < *(int *)(lVar6 + 0xe0)) {
          lVar21 = *(longlong *)(param_2 + 0x20) +
                   (ulonglong)CONCAT11(pbVar25[lVar20 + 6],pbVar25[lVar20 + 7]) * 2;
          cVar12 = FUN_14036f0a0(*(longlong *)(param_2 + 8) + 0x28,lVar21,uVar19);
          uVar15 = *(uint *)(lVar6 + 100);
          uVar13 = 0;
          if (cVar12 != '\0') {
            uVar13 = uVar19;
          }
          uVar19 = *(uint *)(param_2 + 0x18);
          if (*(char *)(lVar6 + 0x59) == '\0') {
            *(uint *)(lVar6 + 0x5c) = uVar19;
code_r0x00014038028d:
            if ((((*(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c)) || ((uVar27 & 0x400) != 0))
                || (cVar12 = func_0x0001403b7c70(lVar6), cVar12 != '\0')) &&
               (cVar12 = func_0x00014038ad40(*(longlong *)(param_2 + 8),uVar13,lVar21),
               cVar12 != '\0')) {
              *param_2 = 1;
              uVar19 = *(uint *)(lVar6 + 0x5c);
              if ((uVar19 < *(uint *)(lVar6 + 0x60)) && ((uVar27 & 0x400) == 0)) {
                uVar19 = uVar19 + 1;
                *(uint *)(lVar6 + 0x5c) = uVar19;
              }
              uVar13 = uVar13 + uVar15;
              if (*(char *)(lVar6 + 0x59) == '\0') {
                *(uint *)(lVar6 + 0x5c) = uVar13;
code_r0x00014038043b:
                uVar13 = *(int *)(lVar6 + 0x5c) + 1;
                uVar19 = *(uint *)(lVar6 + 0x60);
                if (uVar13 <= *(uint *)(lVar6 + 0x60)) {
                  uVar19 = uVar13;
                }
                FUN_14040f040(lVar6,*(undefined4 *)(param_2 + 0x18),uVar19);
                goto code_r0x000140380464;
              }
              if (*(char *)(lVar6 + 0x58) != '\0') {
                uVar15 = *(uint *)(lVar6 + 100);
                if (uVar15 < uVar13) {
                  uVar13 = uVar13 - uVar15;
                  cVar12 = func_0x0001403eb040(lVar6,uVar13,uVar13);
                  if (cVar12 != '\0') {
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(*(longlong *)(lVar6 + 0x78) +
                                  (ulonglong)*(uint *)(lVar6 + 100) * 0x14,
                                  *(longlong *)(lVar6 + 0x70) +
                                  (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14,(ulonglong)uVar13 * 0x14
                                 );
                  }
                }
                else {
                  if (uVar15 <= uVar13) goto code_r0x00014038043b;
                  uVar15 = uVar15 - uVar13;
                  if (uVar15 <= uVar19) {
                    uVar18 = *(int *)(lVar6 + 100) - uVar15;
                    *(uint *)(lVar6 + 100) = uVar18;
                    *(uint *)(lVar6 + 0x5c) = uVar19 - uVar15;
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(*(longlong *)(lVar6 + 0x70) + (ulonglong)(uVar19 - uVar15) * 0x14,
                                  *(longlong *)(lVar6 + 0x78) + (ulonglong)uVar18 * 0x14,
                                  (ulonglong)uVar15 * 0x14);
                  }
                  cVar12 = func_0x0001403bf270(lVar6,*(uint *)(lVar6 + 0x60) + (uVar15 - uVar19));
                  if (cVar12 != '\0') {
                    uVar27 = *(uint *)(lVar6 + 0x5c);
                    iVar28 = (*(int *)(lVar6 + 0xe0) - *(int *)(lVar6 + 0x60)) + uVar27;
                    *(int *)(lVar6 + 0xe0) = iVar28;
                    if (-1 < iVar28) {
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(*(longlong *)(lVar6 + 0x70) +
                                    ((ulonglong)(uVar15 - uVar19) + (ulonglong)uVar27) * 0x14,
                                    *(longlong *)(lVar6 + 0x70) + (ulonglong)uVar27 * 0x14,
                                    (ulonglong)(*(int *)(lVar6 + 0x60) - uVar27) * 0x14);
                    }
                    goto code_r0x0001403805ed;
                  }
                }
              }
            }
          }
          else if (*(char *)(lVar6 + 0x58) != '\0') {
            if (uVar15 < uVar19) {
              uVar19 = uVar19 - uVar15;
              cVar12 = func_0x0001403eb040(lVar6,uVar19,uVar19);
              if (cVar12 != '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(*(longlong *)(lVar6 + 0x78) + (ulonglong)*(uint *)(lVar6 + 100) * 0x14
                              ,*(longlong *)(lVar6 + 0x70) +
                               (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14,(ulonglong)uVar19 * 0x14);
              }
            }
            else {
              if (uVar15 <= uVar19) goto code_r0x00014038028d;
              uVar27 = *(uint *)(lVar6 + 0x5c);
              uVar15 = uVar15 - uVar19;
              if (uVar15 <= uVar27) {
                uVar18 = *(int *)(lVar6 + 100) - uVar15;
                *(uint *)(lVar6 + 100) = uVar18;
                *(uint *)(lVar6 + 0x5c) = uVar27 - uVar15;
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(*(longlong *)(lVar6 + 0x70) + (ulonglong)(uVar27 - uVar15) * 0x14,
                              *(longlong *)(lVar6 + 0x78) + (ulonglong)uVar18 * 0x14,
                              (ulonglong)uVar15 * 0x14);
              }
              cVar12 = func_0x0001403bf270(lVar6,*(int *)(lVar6 + 0x60) + (uVar15 - uVar27));
              if (cVar12 != '\0') {
                uVar19 = *(uint *)(lVar6 + 0x5c);
                iVar28 = (*(int *)(lVar6 + 0xe0) - *(int *)(lVar6 + 0x60)) + uVar19;
                *(int *)(lVar6 + 0xe0) = iVar28;
                if (-1 < iVar28) {
                    /* WARNING: Subroutine does not return */
                  FUN_1404211c0(*(longlong *)(lVar6 + 0x70) +
                                ((ulonglong)(uVar15 - uVar27) + (ulonglong)uVar19) * 0x14,
                                *(longlong *)(lVar6 + 0x70) + (ulonglong)uVar19 * 0x14,
                                (ulonglong)(*(int *)(lVar6 + 0x60) - uVar19) * 0x14);
                }
code_r0x0001403805ed:
                *(undefined1 *)(lVar6 + 0x58) = 0;
              }
            }
          }
        }
      }
      if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) goto code_r0x00014038075c;
      if ((uVar18 == 0) ||
         (iVar28 = *(int *)(lVar6 + 0xe0), *(int *)(lVar6 + 0xe0) = iVar28 + -1, iVar28 < 1)) {
        if (*(char *)(lVar6 + 0x59) != '\0') {
          if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
             (*(int *)(lVar6 + 100) != *(int *)(lVar6 + 0x5c))) {
            cVar12 = func_0x0001403bf270(lVar6,*(int *)(lVar6 + 100) + 1);
            if (cVar12 == '\0') goto code_r0x000140380735;
            uVar18 = *(uint *)(lVar6 + 0x5c);
            lVar21 = *(longlong *)(lVar6 + 0x70);
            uVar27 = *(uint *)(lVar6 + 100);
            puVar1 = (undefined4 *)(lVar21 + (ulonglong)uVar18 * 0x14);
            uVar14 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            lVar20 = *(longlong *)(lVar6 + 0x78);
            puVar2 = (undefined4 *)(lVar20 + (ulonglong)uVar27 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar14;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            *(undefined4 *)(lVar20 + (ulonglong)uVar27 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar18 * 0x14);
          }
          *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
        }
        *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
      }
    }
code_r0x000140380735:
    cVar12 = *(char *)(lVar6 + 0x58);
    iVar28 = iStack_64;
  } while( true );
}

