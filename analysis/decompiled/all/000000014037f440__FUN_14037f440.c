// Function: FUN_14037f440
// Addr: 14037f440
// Size: 4796 bytes


void FUN_14037f440(longlong *param_1,undefined1 *param_2,longlong param_3)

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
  uint uVar16;
  int *piVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ushort uVar24;
  int iVar25;
  uint uVar26;
  byte *pbVar27;
  byte *pbVar28;
  uint uVar29;
  int iVar30;
  ulonglong uVar31;
  char local_res20;
  int local_64;
  uint *local_50;
  
  lVar6 = *(longlong *)(param_3 + 0x20);
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar6 + 0x70);
  *(undefined2 *)(lVar6 + 0x59) = 1;
  *(undefined4 *)(lVar6 + 0x5c) = 0;
  *(undefined4 *)(lVar6 + 100) = 0;
  lVar22 = *(longlong *)(param_3 + 0x80);
  local_64 = 0;
  if ((lVar22 == 0) || (*(uint *)(lVar22 + 4) < 2)) {
    local_50 = (uint *)0x0;
  }
  else {
    local_50 = *(uint **)(lVar22 + 8);
  }
  pbVar27 = (byte *)*param_1;
  bVar5 = pbVar27[7];
  lVar21 = (ulonglong)
           pbVar27[(ulonglong)pbVar27[4] * 0x100 +
                   (ulonglong)((uint)pbVar27[1] + (uint)*pbVar27 * 0x100 == 0) +
                   (ulonglong)pbVar27[5]] + (ulonglong)pbVar27[6] * 0x20;
  lVar22 = lVar21 * 8 + (ulonglong)bVar5;
  if ((((uint)pbVar27[lVar21 * 8 + (ulonglong)bVar5 + 3] +
        (uint)pbVar27[lVar21 * 8 + (ulonglong)bVar5 + 2] * 0x100 & 0x3ff) == 0) ||
     (((uint)pbVar27[lVar22 + 5] + (uint)pbVar27[lVar22 + 4] * 0x100 == 0xffff &&
      ((uint)pbVar27[lVar22 + 7] + (uint)pbVar27[lVar22 + 6] * 0x100 == 0xffff)))) {
    local_res20 = '\x01';
  }
  else {
    local_res20 = '\0';
  }
  cVar12 = *(char *)(lVar6 + 0x58);
  iVar30 = local_64;
  do {
    if (cVar12 == '\0') {
LAB_14038068c:
      if ((*(char *)(lVar6 + 0x58) != '\0') &&
         (cVar12 = FUN_1403ed060(lVar6,*(int *)(lVar6 + 0x60) - *(int *)(lVar6 + 0x5c)),
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
      lVar22 = *(longlong *)(param_3 + 0xa8);
      lVar21 = *param_1;
      uVar19 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
      if (lVar22 != 0) {
        uVar24 = *(ushort *)(lVar22 + (ulonglong)(uVar19 & 0xff) * 2);
        if ((uVar24 != 0xffff) && (((uVar19 ^ uVar24) & 0xffffff00) == 0)) {
          uVar31 = (ulonglong)uVar24 & 0xff;
          goto LAB_14037f670;
        }
      }
      if (uVar19 == 0xffff) {
        uVar31 = 2;
      }
      else {
        pbVar27 = (byte *)((ulonglong)*(byte *)(lVar21 + 3) +
                          (ulonglong)*(byte *)(lVar21 + 2) * 0x100 + lVar21);
        uVar29 = (uVar19 + (uint)*pbVar27 * -0x100) - (uint)pbVar27[1];
        if (uVar29 < (uint)pbVar27[3] + (uint)pbVar27[2] * 0x100) {
          uVar31 = (ulonglong)pbVar27[(ulonglong)uVar29 + 4];
          uVar24 = (ushort)pbVar27[(ulonglong)uVar29 + 4];
        }
        else {
          uVar31 = 1;
          uVar24 = 1;
        }
        if ((lVar22 != 0) && ((uVar19 & 0xffff0000) == 0)) {
          *(ushort *)(lVar22 + (ulonglong)(uVar19 & 0xff) * 2) = (ushort)uVar19 & 0xff00 | uVar24;
        }
      }
    }
    else {
      uVar31 = 0;
    }
LAB_14037f670:
    while( true ) {
      pbVar27 = (byte *)*param_1;
      uVar20 = (uint)uVar31;
      uVar29 = (uint)pbVar27[1] + (uint)*pbVar27 * 0x100;
      uVar19 = uVar20;
      if (uVar29 <= uVar20) {
        uVar19 = 1;
      }
      lVar22 = (ulonglong)
               pbVar27[(ulonglong)pbVar27[5] +
                       (ulonglong)(uVar19 + uVar29 * iVar30) + (ulonglong)pbVar27[4] * 0x100] +
               (ulonglong)pbVar27[6] * 0x20;
      lVar21 = lVar22 * 8 + (ulonglong)pbVar27[7];
      lVar22 = (longlong)
               (int)((((uint)pbVar27[lVar22 * 8 + (ulonglong)pbVar27[7]] - (uint)pbVar27[4]) * 0x100
                     + (uint)pbVar27[lVar21 + 1]) - (uint)pbVar27[5]) / (longlong)(int)uVar29;
      uVar29 = (uint)pbVar27[lVar21 + 2] * 0x100 + (uint)pbVar27[lVar21 + 3];
      local_64 = (int)lVar22;
      uVar19 = uVar29 & 0x4000;
      if (((uVar29 & 0x3ff) == 0) ||
         (((uint)pbVar27[lVar21 + 4] * 0x100 + (uint)pbVar27[lVar21 + 5] == 0xffff &&
          ((uint)pbVar27[lVar21 + 6] * 0x100 + (uint)pbVar27[lVar21 + 7] == 0xffff)))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (local_50 != (uint *)0x0) break;
      if ((((iVar30 != 0) || (local_64 != 0)) || (local_res20 == (char)lVar22)) ||
         ((bVar10 || (uVar19 != 0)))) goto LAB_14037fc27;
      do {
        uVar14 = *(undefined4 *)(lVar6 + 100);
        uVar19 = (uint)pbVar27[lVar21 + 2] * 0x100 + (uint)pbVar27[lVar21 + 3];
        if ((uint)pbVar27[lVar21 + 6] * 0x100 + (uint)pbVar27[lVar21 + 7] == 0xffff) {
LAB_14037f8c6:
          if (uVar19 >> 0xf != 0) {
            *(undefined4 *)(param_2 + 0x18) = uVar14;
          }
          if ((uint)pbVar27[lVar21 + 4] * 0x100 + (uint)pbVar27[lVar21 + 5] != 0xffff) {
            uVar29 = uVar19 >> 5 & 0x1f;
            *(int *)(lVar6 + 0xe0) = *(int *)(lVar6 + 0xe0) - uVar29;
            if (0 < *(int *)(lVar6 + 0xe0)) {
              lVar22 = *(longlong *)(param_2 + 0x20) +
                       (ulonglong)CONCAT11(pbVar27[lVar21 + 4],pbVar27[lVar21 + 5]) * 2;
              cVar12 = FUN_14036efd0(*(longlong *)(param_2 + 8) + 0x28,lVar22,uVar29);
              iVar25 = *(int *)(lVar6 + 100);
              uVar13 = 0;
              if (cVar12 != '\0') {
                uVar13 = uVar29;
              }
              if ((((*(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c)) || ((uVar19 & 0x800) != 0))
                  || (cVar12 = FUN_1403b7ba0(lVar6), cVar12 != '\0')) &&
                 (cVar12 = FUN_14038ac70(*(undefined8 *)(param_2 + 8),uVar13,lVar22), cVar12 != '\0'
                 )) {
                *param_2 = 1;
                if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar19 & 0x800) == 0))
                {
                  *(uint *)(lVar6 + 0x5c) = *(uint *)(lVar6 + 0x5c) + 1;
                }
                if ((uVar19 >> 0xe & 1) == 0) {
                  iVar25 = iVar25 + uVar13;
                }
                FUN_1403ec600(lVar6,iVar25);
              }
            }
          }
        }
        else {
          uVar29 = uVar19 & 0x1f;
          *(int *)(lVar6 + 0xe0) = *(int *)(lVar6 + 0xe0) - uVar29;
          if (0 < *(int *)(lVar6 + 0xe0)) {
            lVar22 = *(longlong *)(param_2 + 0x20) +
                     (ulonglong)CONCAT11(pbVar27[lVar21 + 6],pbVar27[lVar21 + 7]) * 2;
            cVar12 = FUN_14036efd0(*(longlong *)(param_2 + 8) + 0x28,lVar22,uVar29);
            iVar25 = *(int *)(lVar6 + 100);
            uVar13 = 0;
            if (cVar12 != '\0') {
              uVar13 = uVar29;
            }
            cVar12 = FUN_1403ec600(lVar6,*(undefined4 *)(param_2 + 0x18));
            if ((cVar12 != '\0') &&
               ((((*(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c) || ((uVar19 & 0x400) != 0)) ||
                 (cVar12 = FUN_1403b7ba0(lVar6), cVar12 != '\0')) &&
                (cVar12 = FUN_14038ac70(*(undefined8 *)(param_2 + 8),uVar13,lVar22), cVar12 != '\0')
                ))) {
              *param_2 = 1;
              if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar19 & 0x400) == 0)) {
                *(uint *)(lVar6 + 0x5c) = *(uint *)(lVar6 + 0x5c) + 1;
              }
              cVar12 = FUN_1403ec600(lVar6,uVar13 + iVar25);
              if (cVar12 != '\0') {
                uVar13 = *(int *)(lVar6 + 0x5c) + 1;
                uVar29 = *(uint *)(lVar6 + 0x60);
                if (uVar13 <= *(uint *)(lVar6 + 0x60)) {
                  uVar29 = uVar13;
                }
                FUN_14040ef70(lVar6,*(undefined4 *)(param_2 + 0x18),uVar29);
                goto LAB_14037f8c6;
              }
            }
          }
        }
        iVar25 = *(int *)(lVar6 + 0x5c);
        if ((iVar25 == *(int *)(lVar6 + 0x60)) || (*(char *)(lVar6 + 0x58) == '\0')) break;
        if (*(char *)(lVar6 + 0x59) == '\0') {
LAB_14037fa1b:
          *(int *)(lVar6 + 0x5c) = iVar25 + 1;
        }
        else {
          if ((*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) &&
             (*(int *)(lVar6 + 100) == iVar25)) {
LAB_14037fa18:
            *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
            goto LAB_14037fa1b;
          }
          cVar12 = FUN_1403bf1a0(lVar6,*(int *)(lVar6 + 100) + 1);
          if (cVar12 != '\0') {
            uVar19 = *(uint *)(lVar6 + 0x5c);
            lVar22 = *(longlong *)(lVar6 + 0x70);
            uVar29 = *(uint *)(lVar6 + 100);
            puVar1 = (undefined4 *)(lVar22 + (ulonglong)uVar19 * 0x14);
            uVar14 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            lVar23 = *(longlong *)(lVar6 + 0x78);
            puVar2 = (undefined4 *)(lVar23 + (ulonglong)uVar29 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar14;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            *(undefined4 *)(lVar23 + (ulonglong)uVar29 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar22 + 0x10 + (ulonglong)uVar19 * 0x14);
            iVar25 = *(int *)(lVar6 + 0x5c);
            goto LAB_14037fa18;
          }
        }
        if (*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) {
          lVar22 = *(longlong *)(param_3 + 0xa8);
          lVar23 = *param_1;
          uVar19 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14
                            );
          if (lVar22 != 0) {
            uVar24 = *(ushort *)(lVar22 + (ulonglong)(uVar19 & 0xff) * 2);
            if ((uVar24 != 0xffff) && (((uVar19 ^ uVar24) & 0xffffff00) == 0)) {
              uVar31 = (ulonglong)uVar24 & 0xff;
              goto LAB_14037fb18;
            }
          }
          if (uVar19 == 0xffff) {
            uVar31 = 2;
          }
          else {
            pbVar28 = (byte *)(lVar23 + (ulonglong)*(byte *)(lVar23 + 2) * 0x100 +
                              (ulonglong)*(byte *)(lVar23 + 3));
            uVar29 = (uVar19 - pbVar28[1]) + (uint)*pbVar28 * -0x100;
            if (uVar29 < (uint)pbVar28[2] * 0x100 + (uint)pbVar28[3]) {
              uVar31 = (ulonglong)pbVar28[(ulonglong)uVar29 + 4];
            }
            else {
              uVar31 = 1;
            }
            if ((lVar22 != 0) && ((uVar19 & 0xffff0000) == 0)) {
              *(ushort *)(lVar22 + (ulonglong)(uVar19 & 0xff) * 2) =
                   (ushort)uVar19 & 0xff00 | (ushort)uVar31;
            }
          }
        }
        else {
          uVar31 = 0;
        }
LAB_14037fb18:
      } while ((uint)uVar31 == uVar20);
      if ((*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) || (*(char *)(lVar6 + 0x58) == '\0'))
      goto LAB_14038068c;
    }
    uVar29 = *(uint *)(lVar6 + 0x5c);
    if (uVar29 < *(uint *)(lVar6 + 0x60)) {
      uVar16 = *(uint *)(*(longlong *)(lVar6 + 0x70) + 8 + (ulonglong)uVar29 * 0x14);
      uVar13 = local_50[1];
      while (uVar16 < uVar13) {
        uVar13 = local_50[-2];
        local_50 = local_50 + -3;
      }
      uVar13 = local_50[2];
      while (uVar13 < uVar16) {
        uVar13 = local_50[5];
        local_50 = local_50 + 3;
      }
    }
    if ((*local_50 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar29 == *(uint *)(lVar6 + 0x60)) goto LAB_14038068c;
      local_64 = 0;
      if (*(char *)(lVar6 + 0x59) == '\0') {
LAB_14037fc1f:
        *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) &&
           (*(uint *)(lVar6 + 100) == uVar29)) {
LAB_14037fc1c:
          *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
          goto LAB_14037fc1f;
        }
        cVar12 = FUN_1403bf1a0(lVar6,*(int *)(lVar6 + 100) + 1);
        if (cVar12 != '\0') {
          uVar19 = *(uint *)(lVar6 + 0x5c);
          lVar22 = *(longlong *)(lVar6 + 0x70);
          uVar29 = *(uint *)(lVar6 + 100);
          puVar1 = (undefined4 *)(lVar22 + (ulonglong)uVar19 * 0x14);
          uVar14 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          lVar21 = *(longlong *)(lVar6 + 0x78);
          puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar29 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar14;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined4 *)(lVar21 + (ulonglong)uVar29 * 0x14 + 0x10) =
               *(undefined4 *)(lVar22 + 0x10 + (ulonglong)uVar19 * 0x14);
          goto LAB_14037fc1c;
        }
      }
    }
    else {
LAB_14037fc27:
      if ((((uint)pbVar27[lVar21 + 2] * 0x100 + (uint)pbVar27[lVar21 + 3] & 0x3ff) == 0) ||
         (((uint)pbVar27[lVar21 + 4] * 0x100 + (uint)pbVar27[lVar21 + 5] == 0xffff &&
          ((uint)pbVar27[lVar21 + 6] * 0x100 + (uint)pbVar27[lVar21 + 7] == 0xffff)))) {
        if ((iVar30 != 0) && (((pbVar27[lVar21 + 2] & 0x40) == 0 || (local_64 != 0)))) {
          pbVar28 = (byte *)*param_1;
          if ((uint)*pbVar28 * 0x100 + (uint)pbVar28[1] <= uVar20) {
            uVar31 = 1;
          }
          bVar5 = pbVar28[7];
          lVar22 = (ulonglong)
                   pbVar28[(ulonglong)pbVar28[5] + (ulonglong)pbVar28[4] * 0x100 + uVar31] +
                   (ulonglong)pbVar28[6] * 0x20;
          pbVar3 = pbVar28 + lVar22 * 8 + (ulonglong)bVar5;
          uVar29 = (uint)pbVar28[lVar22 * 8 + (ulonglong)bVar5 + 3] +
                   (uint)pbVar28[lVar22 * 8 + (ulonglong)bVar5 + 2] * 0x100;
          if (((((uVar29 & 0x3ff) != 0) &&
               (((uint)pbVar3[5] + (uint)pbVar3[4] * 0x100 != 0xffff ||
                ((uint)pbVar3[6] * 0x100 + (uint)pbVar3[7] != 0xffff)))) ||
              (local_64 !=
               (int)(((uint)*pbVar3 * 0x100 + (uint)pbVar28[4] * -0x100 + (uint)pbVar3[1]) -
                    (uint)pbVar28[5]) / (int)(uint)CONCAT11(*pbVar28,pbVar28[1]))) ||
             ((((uint)pbVar27[lVar21 + 2] << 8 ^ uVar29) >> 0xe & 1) != 0)) goto LAB_14037fe1e;
        }
        pbVar28 = (byte *)*param_1;
        iVar25 = (uint)pbVar28[1] + (uint)*pbVar28 * 0x100;
        bVar5 = pbVar28[7];
        lVar23 = (ulonglong)
                 pbVar28[(ulonglong)pbVar28[5] +
                         (ulonglong)((uint)(iVar25 == 0) + iVar25 * iVar30) +
                         (ulonglong)pbVar28[4] * 0x100] + (ulonglong)pbVar28[6] * 0x20;
        lVar22 = lVar23 * 8 + (ulonglong)bVar5;
        if ((((uint)pbVar28[lVar23 * 8 + (ulonglong)bVar5 + 3] +
              (uint)pbVar28[lVar23 * 8 + (ulonglong)bVar5 + 2] * 0x100 & 0x3ff) != 0) &&
           (((uint)pbVar28[lVar22 + 5] + (uint)pbVar28[lVar22 + 4] * 0x100 != 0xffff ||
            ((uint)pbVar28[lVar22 + 6] * 0x100 + (uint)pbVar28[lVar22 + 7] != 0xffff))))
        goto LAB_14037fe1e;
      }
      else {
LAB_14037fe1e:
        cVar12 = *(char *)(lVar6 + 0x59);
        piVar17 = (int *)(lVar6 + 100);
        if (cVar12 == '\0') {
          piVar17 = (int *)(lVar6 + 0x5c);
        }
        if (*piVar17 != 0) {
          uVar29 = *(uint *)(lVar6 + 0x60);
          uVar20 = *(uint *)(lVar6 + 0x5c);
          if (uVar20 < uVar29) {
            uVar13 = uVar20;
            if (cVar12 != '\0') {
              uVar13 = *(uint *)(lVar6 + 100);
            }
            iVar30 = uVar13 - 1;
            uVar13 = uVar20 + 1;
            if ((uVar13 == 0xffffffff) || ((uVar20 - iVar30) + 1 < 0x100)) {
              uVar7 = *(undefined8 *)(lVar6 + 0x70);
              if (uVar13 <= uVar29) {
                uVar29 = uVar13;
              }
              uVar31 = (ulonglong)uVar29;
              if (cVar12 == '\0') {
                uVar14 = FUN_1403a1a20(lVar6,uVar7,iVar30,uVar29,0xffffffff);
                FUN_1403a1bc0(lVar6,uVar7,iVar30,uVar29,uVar14,3);
              }
              else {
                uVar14 = FUN_1403a1a20(lVar6,uVar7,uVar20,uVar29,0xffffffff);
                iVar25 = FUN_1403a1a20(lVar6,*(undefined8 *)(lVar6 + 0x78),iVar30,
                                       *(undefined4 *)(lVar6 + 100),uVar14);
                FUN_1403a1bc0(lVar6,*(undefined8 *)(lVar6 + 0x78),iVar30,
                              *(undefined4 *)(lVar6 + 100),iVar25,3);
                uVar20 = *(uint *)(lVar6 + 0x5c);
                uVar18 = (ulonglong)uVar20;
                if (uVar20 != uVar29) {
                  lVar22 = *(longlong *)(lVar6 + 0x70);
                  piVar17 = (int *)(lVar6 + 0xe0);
                  *piVar17 = *piVar17 + (uVar20 - uVar29);
                  if (*piVar17 < 0) {
                    *(undefined1 *)(lVar6 + 0x58) = 0;
                  }
                  uVar11 = uVar18;
                  if (*(int *)(lVar6 + 0x1c) == 2) {
joined_r0x000140380019:
                    while (uVar20 < uVar29) {
                      if (iVar25 != *(int *)(lVar22 + 8 + uVar18 * 0x14)) {
                        puVar4 = (uint *)(lVar22 + 4 + uVar18 * 0x14);
                        *puVar4 = *puVar4 | 3;
                      }
                      uVar20 = (int)uVar11 + 1;
                      uVar18 = uVar18 + 1;
                      uVar11 = (ulonglong)uVar20;
                    }
                  }
                  else {
                    iVar30 = *(int *)(lVar22 + 8 + uVar18 * 0x14);
                    if (iVar25 == iVar30) {
                      while (uVar20 < uVar29) {
                        uVar29 = (int)uVar31 - 1;
                        uVar31 = (ulonglong)uVar29;
                        if (*(int *)(lVar22 + 8 + uVar31 * 0x14) == iVar30) break;
                        puVar4 = (uint *)(lVar22 + 4 + uVar31 * 0x14);
                        *puVar4 = *puVar4 | 3;
                      }
                    }
                    else {
                      iVar30 = *(int *)(lVar22 + 8 + (ulonglong)(uVar29 - 1) * 0x14);
                      if (iVar25 != iVar30) goto joined_r0x000140380019;
                      while ((uVar20 < uVar29 && (*(int *)(lVar22 + 8 + uVar18 * 0x14) != iVar30)))
                      {
                        puVar4 = (uint *)(lVar22 + 4 + uVar18 * 0x14);
                        *puVar4 = *puVar4 | 3;
                        uVar20 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar20;
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
      uVar29 = (uint)pbVar27[lVar21 + 3] + (uint)pbVar27[lVar21 + 2] * 0x100;
      if ((uint)pbVar27[lVar21 + 6] * 0x100 + (uint)pbVar27[lVar21 + 7] == 0xffff) {
LAB_140380394:
        if (uVar29 >> 0xf != 0) {
          *(undefined4 *)(param_2 + 0x18) = uVar14;
        }
        if ((uint)pbVar27[lVar21 + 4] * 0x100 + (uint)pbVar27[lVar21 + 5] != 0xffff) {
          uVar20 = uVar29 >> 5 & 0x1f;
          *(int *)(lVar6 + 0xe0) = *(int *)(lVar6 + 0xe0) - uVar20;
          if (0 < *(int *)(lVar6 + 0xe0)) {
            lVar22 = *(longlong *)(param_2 + 0x20) +
                     (ulonglong)CONCAT11(pbVar27[lVar21 + 4],pbVar27[lVar21 + 5]) * 2;
            cVar12 = FUN_14036efd0(*(longlong *)(param_2 + 8) + 0x28,lVar22,uVar20);
            uVar13 = 0;
            if (cVar12 != '\0') {
              uVar13 = uVar20;
            }
            uVar20 = *(uint *)(lVar6 + 100);
            if ((((*(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c)) || ((uVar29 & 0x800) != 0))
                || (cVar12 = FUN_1403b7ba0(lVar6), cVar12 != '\0')) &&
               (cVar12 = FUN_14038ac70(*(undefined8 *)(param_2 + 8),uVar13,lVar22), cVar12 != '\0'))
            {
              *param_2 = 1;
              uVar16 = *(uint *)(lVar6 + 0x5c);
              if ((uVar16 < *(uint *)(lVar6 + 0x60)) && ((uVar29 & 0x800) == 0)) {
                uVar16 = uVar16 + 1;
                *(uint *)(lVar6 + 0x5c) = uVar16;
              }
              if ((uVar29 >> 0xe & 1) == 0) {
                uVar20 = uVar20 + uVar13;
              }
              if (*(char *)(lVar6 + 0x59) == '\0') {
                *(uint *)(lVar6 + 0x5c) = uVar20;
              }
              else if (*(char *)(lVar6 + 0x58) != '\0') {
                uVar29 = *(uint *)(lVar6 + 100);
                if (uVar29 < uVar20) {
                  uVar20 = uVar20 - uVar29;
                  cVar12 = FUN_1403eaf70(lVar6,uVar20,uVar20);
                  if (cVar12 != '\0') {
                    FUN_1404210f0(*(longlong *)(lVar6 + 0x78) +
                                  (ulonglong)*(uint *)(lVar6 + 100) * 0x14,
                                  *(longlong *)(lVar6 + 0x70) +
                                  (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14,(ulonglong)uVar20 * 0x14
                                 );
                    *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + uVar20;
                    *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + uVar20;
                  }
                }
                else if (uVar20 < uVar29) {
                  uVar29 = uVar29 - uVar20;
                  if (uVar16 < uVar29) {
                    uVar16 = uVar29 - uVar16;
                    cVar12 = FUN_1403bf1a0(lVar6,*(uint *)(lVar6 + 0x60) + uVar16);
                    if (cVar12 == '\0') goto LAB_1403805c5;
                    uVar20 = *(uint *)(lVar6 + 0x5c);
                    iVar30 = (*(int *)(lVar6 + 0xe0) - *(int *)(lVar6 + 0x60)) + uVar20;
                    *(int *)(lVar6 + 0xe0) = iVar30;
                    if (iVar30 < 0) goto LAB_14038051d;
                    FUN_1404210f0(*(longlong *)(lVar6 + 0x70) +
                                  ((ulonglong)uVar16 + (ulonglong)uVar20) * 0x14,
                                  *(longlong *)(lVar6 + 0x70) + (ulonglong)uVar20 * 0x14,
                                  (ulonglong)(*(int *)(lVar6 + 0x60) - uVar20) * 0x14);
                    uVar20 = *(uint *)(lVar6 + 0x60);
                    if ((uVar20 < uVar16 + *(int *)(lVar6 + 0x5c)) &&
                       (iVar30 = (uVar16 - uVar20) + *(int *)(lVar6 + 0x5c),
                       (iVar30 * 5 & 0x3fffffffU) != 0)) {
                      FUN_1404217a0(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar20 * 0x14,0,
                                    iVar30 * 0x14);
                    }
                    *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x60) + uVar16;
                    uVar16 = *(int *)(lVar6 + 0x5c) + uVar16;
                  }
                  uVar20 = *(int *)(lVar6 + 100) - uVar29;
                  *(uint *)(lVar6 + 100) = uVar20;
                  *(uint *)(lVar6 + 0x5c) = uVar16 - uVar29;
                  FUN_1404210f0(*(longlong *)(lVar6 + 0x70) + (ulonglong)(uVar16 - uVar29) * 0x14,
                                *(longlong *)(lVar6 + 0x78) + (ulonglong)uVar20 * 0x14,
                                (ulonglong)uVar29 * 0x14);
                }
              }
            }
          }
        }
      }
      else {
        uVar20 = uVar29 & 0x1f;
        *(int *)(lVar6 + 0xe0) = *(int *)(lVar6 + 0xe0) - uVar20;
        if (*(int *)(lVar6 + 0xe0) < 1) goto LAB_1403805c5;
        lVar22 = *(longlong *)(param_2 + 0x20) +
                 (ulonglong)CONCAT11(pbVar27[lVar21 + 6],pbVar27[lVar21 + 7]) * 2;
        cVar12 = FUN_14036efd0(*(longlong *)(param_2 + 8) + 0x28,lVar22,uVar20);
        uVar16 = *(uint *)(lVar6 + 100);
        uVar13 = 0;
        if (cVar12 != '\0') {
          uVar13 = uVar20;
        }
        uVar20 = *(uint *)(param_2 + 0x18);
        if (*(char *)(lVar6 + 0x59) == '\0') {
          *(uint *)(lVar6 + 0x5c) = uVar20;
          goto LAB_1403801bd;
        }
        if (*(char *)(lVar6 + 0x58) != '\0') {
          if (uVar16 < uVar20) {
            uVar20 = uVar20 - uVar16;
            cVar12 = FUN_1403eaf70(lVar6,uVar20,uVar20);
            if (cVar12 != '\0') {
              FUN_1404210f0(*(longlong *)(lVar6 + 0x78) + (ulonglong)*(uint *)(lVar6 + 100) * 0x14,
                            *(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14,
                            (ulonglong)uVar20 * 0x14);
              *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + uVar20;
              *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + uVar20;
              goto LAB_1403801bd;
            }
          }
          else if (uVar20 < uVar16) {
            uVar26 = *(uint *)(lVar6 + 0x5c);
            uVar20 = uVar16 - uVar20;
            if (uVar20 <= uVar26) {
LAB_140380179:
              uVar15 = *(int *)(lVar6 + 100) - uVar20;
              *(uint *)(lVar6 + 100) = uVar15;
              *(uint *)(lVar6 + 0x5c) = uVar26 - uVar20;
              FUN_1404210f0(*(longlong *)(lVar6 + 0x70) + (ulonglong)(uVar26 - uVar20) * 0x14,
                            *(longlong *)(lVar6 + 0x78) + (ulonglong)uVar15 * 0x14,
                            (ulonglong)uVar20 * 0x14);
              goto LAB_1403801bd;
            }
            uVar26 = uVar20 - uVar26;
            cVar12 = FUN_1403bf1a0(lVar6,*(int *)(lVar6 + 0x60) + uVar26);
            if (cVar12 == '\0') goto LAB_1403805c5;
            uVar15 = *(uint *)(lVar6 + 0x5c);
            iVar30 = (*(int *)(lVar6 + 0xe0) - *(int *)(lVar6 + 0x60)) + uVar15;
            *(int *)(lVar6 + 0xe0) = iVar30;
            if (-1 < iVar30) {
              FUN_1404210f0(*(longlong *)(lVar6 + 0x70) +
                            ((ulonglong)uVar26 + (ulonglong)uVar15) * 0x14,
                            *(longlong *)(lVar6 + 0x70) + (ulonglong)uVar15 * 0x14,
                            (ulonglong)(*(int *)(lVar6 + 0x60) - uVar15) * 0x14);
              uVar15 = *(uint *)(lVar6 + 0x60);
              if ((uVar15 < uVar26 + *(int *)(lVar6 + 0x5c)) &&
                 (iVar30 = (uVar26 - uVar15) + *(int *)(lVar6 + 0x5c),
                 (iVar30 * 5 & 0x3fffffffU) != 0)) {
                FUN_1404217a0(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar15 * 0x14,0,iVar30 * 0x14
                             );
              }
              *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x60) + uVar26;
              uVar26 = *(int *)(lVar6 + 0x5c) + uVar26;
              goto LAB_140380179;
            }
LAB_14038051d:
            *(undefined1 *)(lVar6 + 0x58) = 0;
          }
          else {
LAB_1403801bd:
            if ((((*(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c)) || ((uVar29 & 0x400) != 0))
                || (cVar12 = FUN_1403b7ba0(lVar6), cVar12 != '\0')) &&
               (cVar12 = FUN_14038ac70(*(undefined8 *)(param_2 + 8),uVar13,lVar22), cVar12 != '\0'))
            {
              *param_2 = 1;
              uVar20 = *(uint *)(lVar6 + 0x5c);
              if ((uVar20 < *(uint *)(lVar6 + 0x60)) && ((uVar29 & 0x400) == 0)) {
                uVar20 = uVar20 + 1;
                *(uint *)(lVar6 + 0x5c) = uVar20;
              }
              uVar13 = uVar13 + uVar16;
              if (*(char *)(lVar6 + 0x59) == '\0') {
                *(uint *)(lVar6 + 0x5c) = uVar13;
              }
              else {
                if (*(char *)(lVar6 + 0x58) == '\0') goto LAB_1403805c5;
                uVar16 = *(uint *)(lVar6 + 100);
                if (uVar16 < uVar13) {
                  uVar13 = uVar13 - uVar16;
                  cVar12 = FUN_1403eaf70(lVar6,uVar13,uVar13);
                  if (cVar12 == '\0') goto LAB_1403805c5;
                  FUN_1404210f0(*(longlong *)(lVar6 + 0x78) +
                                (ulonglong)*(uint *)(lVar6 + 100) * 0x14,
                                *(longlong *)(lVar6 + 0x70) +
                                (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14,(ulonglong)uVar13 * 0x14);
                  *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + uVar13;
                  *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + uVar13;
                }
                else if (uVar13 < uVar16) {
                  uVar16 = uVar16 - uVar13;
                  if (uVar20 < uVar16) {
                    uVar20 = uVar16 - uVar20;
                    cVar12 = FUN_1403bf1a0(lVar6,*(uint *)(lVar6 + 0x60) + uVar20);
                    if (cVar12 == '\0') goto LAB_1403805c5;
                    uVar13 = *(uint *)(lVar6 + 0x5c);
                    iVar30 = (*(int *)(lVar6 + 0xe0) - *(int *)(lVar6 + 0x60)) + uVar13;
                    *(int *)(lVar6 + 0xe0) = iVar30;
                    if (iVar30 < 0) goto LAB_14038051d;
                    FUN_1404210f0(*(longlong *)(lVar6 + 0x70) +
                                  ((ulonglong)uVar20 + (ulonglong)uVar13) * 0x14,
                                  *(longlong *)(lVar6 + 0x70) + (ulonglong)uVar13 * 0x14,
                                  (ulonglong)(*(int *)(lVar6 + 0x60) - uVar13) * 0x14);
                    uVar13 = *(uint *)(lVar6 + 0x60);
                    if ((uVar13 < uVar20 + *(int *)(lVar6 + 0x5c)) &&
                       (iVar30 = (uVar20 - uVar13) + *(int *)(lVar6 + 0x5c),
                       (iVar30 * 5 & 0x3fffffffU) != 0)) {
                      FUN_1404217a0(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar13 * 0x14,0,
                                    iVar30 * 0x14);
                    }
                    *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x60) + uVar20;
                    uVar20 = *(int *)(lVar6 + 0x5c) + uVar20;
                  }
                  uVar13 = *(int *)(lVar6 + 100) - uVar16;
                  *(uint *)(lVar6 + 100) = uVar13;
                  *(uint *)(lVar6 + 0x5c) = uVar20 - uVar16;
                  FUN_1404210f0(*(longlong *)(lVar6 + 0x70) + (ulonglong)(uVar20 - uVar16) * 0x14,
                                *(longlong *)(lVar6 + 0x78) + (ulonglong)uVar13 * 0x14,
                                (ulonglong)uVar16 * 0x14);
                }
              }
              uVar13 = *(int *)(lVar6 + 0x5c) + 1;
              uVar20 = *(uint *)(lVar6 + 0x60);
              if (uVar13 <= *(uint *)(lVar6 + 0x60)) {
                uVar20 = uVar13;
              }
              FUN_14040ef70(lVar6,*(undefined4 *)(param_2 + 0x18),uVar20);
              goto LAB_140380394;
            }
          }
        }
      }
LAB_1403805c5:
      if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) goto LAB_14038068c;
      if ((uVar19 == 0) ||
         (iVar30 = *(int *)(lVar6 + 0xe0), *(int *)(lVar6 + 0xe0) = iVar30 + -1, iVar30 < 1)) {
        if (*(char *)(lVar6 + 0x59) != '\0') {
          if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
             (*(int *)(lVar6 + 100) != *(int *)(lVar6 + 0x5c))) {
            cVar12 = FUN_1403bf1a0(lVar6,*(int *)(lVar6 + 100) + 1);
            if (cVar12 == '\0') goto LAB_140380665;
            uVar19 = *(uint *)(lVar6 + 0x5c);
            lVar22 = *(longlong *)(lVar6 + 0x70);
            uVar29 = *(uint *)(lVar6 + 100);
            puVar1 = (undefined4 *)(lVar22 + (ulonglong)uVar19 * 0x14);
            uVar14 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            lVar21 = *(longlong *)(lVar6 + 0x78);
            puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar29 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar14;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            *(undefined4 *)(lVar21 + (ulonglong)uVar29 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar22 + 0x10 + (ulonglong)uVar19 * 0x14);
          }
          *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
        }
        *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
      }
    }
LAB_140380665:
    cVar12 = *(char *)(lVar6 + 0x58);
    iVar30 = local_64;
  } while( true );
}

