// Function: FUN_140384c20
// Addr: 140384c20
// Size: 3226 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140384c20(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  int *piVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  uint *puVar22;
  longlong lVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  bool bVar31;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  uint local_e4;
  longlong local_e0;
  int local_d8;
  longlong *local_d0;
  uint local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  uint *local_a8;
  byte *local_a0;
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_118;
  lVar21 = *(longlong *)(param_3 + 0x80);
  iVar29 = 0;
  lVar6 = *(longlong *)(param_3 + 0x20);
  local_d8 = 0;
  if ((lVar21 == 0) || (*(uint *)(lVar21 + 4) < 2)) {
    local_a8 = (uint *)0x0;
  }
  else {
    local_a8 = *(uint **)(lVar21 + 8);
  }
  pbVar15 = (byte *)*param_1;
  lVar21 = 0;
  if ((uint)pbVar15[1] * 0x10000 + (uint)pbVar15[2] * 0x100 + (uint)*pbVar15 * 0x1000000 +
      (uint)pbVar15[3] == 0) {
    lVar21 = 2;
  }
  bVar4 = pbVar15[(((ulonglong)pbVar15[0xe] +
                   ((ulonglong)CONCAT11(pbVar15[0xc],pbVar15[0xd]) * 0x40 +
                   (ulonglong)
                   pbVar15[(ulonglong)pbVar15[0xb] +
                           lVar21 + ((ulonglong)CONCAT11(pbVar15[8],pbVar15[9]) * 0x100 +
                                    (ulonglong)pbVar15[10]) * 0x100]) * 4) * 0x40 +
                  (ulonglong)
                  (pbVar15 +
                  (ulonglong)pbVar15[0xb] +
                  lVar21 + ((ulonglong)CONCAT11(pbVar15[8],pbVar15[9]) * 0x100 +
                           (ulonglong)pbVar15[10]) * 0x100)[1]) * 4 + (ulonglong)pbVar15[0xf] + 3];
  *(undefined4 *)(lVar6 + 0x5c) = 0;
  local_b0 = bVar4 & 0xf;
  cVar12 = *(char *)(lVar6 + 0x58);
  local_e0 = param_3;
  local_d0 = param_1;
  puVar22 = local_a8;
  do {
    if (cVar12 == '\0') {
      return;
    }
    uVar27 = 2;
    local_a8 = puVar22;
    if (*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) {
      lVar21 = *(longlong *)(param_3 + 0xa8);
      lVar23 = *param_1;
      uVar19 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
      iVar28 = local_d8;
      if (lVar21 != 0) {
        uVar24 = *(ushort *)(lVar21 + (ulonglong)(uVar19 & 0xff) * 2);
        local_e8._2_2_ = (undefined2)(local_e8 >> 0x10);
        local_e8 = CONCAT22(local_e8._2_2_,0xffff);
        if ((uVar24 != 0xffff) && (((uVar19 ^ uVar24) & 0xffffff00) == 0)) {
          uVar27 = (ulonglong)(byte)uVar24;
          local_e4 = (uint)(byte)uVar24;
          goto LAB_140384e80;
        }
      }
      if (uVar19 == 0xffff) {
        local_e4 = 2;
      }
      else {
        pbVar15 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar23 + 7) +
                                        ((ulonglong)*(byte *)(lVar23 + 6) +
                                        (ulonglong)
                                        CONCAT11(*(undefined1 *)(lVar23 + 4),
                                                 *(undefined1 *)(lVar23 + 5)) * 0x100) * 0x100 +
                                        lVar23,uVar19,(int)param_1[1]);
        if (pbVar15 == (byte *)0x0) {
          uVar24 = 1;
        }
        else {
          uVar24 = (ushort)pbVar15[1] + (ushort)*pbVar15 * 0x100;
        }
        uVar27 = (ulonglong)uVar24;
        local_e4 = (uint)uVar24;
        iVar28 = local_d8;
        if (((lVar21 != 0) && ((uVar19 & 0xffff0000) == 0)) && (uVar24 < 0x100)) {
          *(ushort *)(lVar21 + (ulonglong)(uVar19 & 0xff) * 2) = (ushort)uVar19 & 0xff00 | uVar24;
        }
      }
    }
    else {
      uVar27 = 0;
      local_e4 = 0;
      iVar28 = iVar29;
    }
LAB_140384e80:
    while( true ) {
      pbVar15 = (byte *)*param_1;
      uVar17 = (uint)uVar27;
      uVar25 = (uint)pbVar15[1] * 0x10000 + (uint)pbVar15[2] * 0x100 + (uint)*pbVar15 * 0x1000000 +
               (uint)pbVar15[3];
      uVar19 = uVar17;
      if (uVar25 <= uVar17) {
        uVar19 = 1;
      }
      bVar4 = pbVar15[0xf];
      lVar21 = ((ulonglong)pbVar15[0xe] +
               ((ulonglong)CONCAT11(pbVar15[0xc],pbVar15[0xd]) * 0x40 +
               (ulonglong)
               pbVar15[(((ulonglong)CONCAT11(pbVar15[8],pbVar15[9]) * 0x100 + (ulonglong)pbVar15[10]
                        ) * 0x80 + (ulonglong)(uVar19 + uVar25 * iVar28)) * 2 +
                       (ulonglong)pbVar15[0xb]]) * 4) * 0x40 +
               (ulonglong)
               (pbVar15 +
               (((ulonglong)CONCAT11(pbVar15[8],pbVar15[9]) * 0x100 + (ulonglong)pbVar15[10]) * 0x80
               + (ulonglong)(uVar19 + uVar25 * iVar28)) * 2 + (ulonglong)pbVar15[0xb])[1];
      local_a0 = pbVar15 + lVar21 * 4 + (ulonglong)bVar4;
      iVar29 = (uint)pbVar15[lVar21 * 4 + (ulonglong)bVar4] * 0x100 +
               (uint)pbVar15[lVar21 * 4 + (ulonglong)bVar4 + 1];
      uVar19 = (uint)pbVar15[lVar21 * 4 + (ulonglong)bVar4 + 2] * 0x100 + (uint)local_a0[3];
      local_e8 = uVar19 & 0x4000;
      if (puVar22 != (uint *)0x0) break;
      if (((iVar28 != 0) || (iVar29 != 0)) ||
         ((local_b0 != 0 || (((uVar19 & 0xf) != 0 || (local_e8 != 0)))))) goto LAB_140385468;
      local_e8 = 0;
      uVar18 = uVar27;
      local_c8 = uVar17;
      do {
        uVar19 = (uint)local_a0[2] * 0x100 + (uint)local_a0[3];
        if (uVar19 >> 0xf != 0) {
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar6 + 0x5c);
        }
        if ((uVar19 >> 0xd & 1) != 0) {
          uVar17 = *(int *)(lVar6 + 0x5c) + 1;
          uVar25 = *(uint *)(lVar6 + 0x60);
          if (uVar17 <= *(uint *)(lVar6 + 0x60)) {
            uVar25 = uVar17;
          }
          *(uint *)(param_2 + 0x14) = uVar25;
        }
        if ((uVar19 & 0xf) != 0) {
          uVar25 = *(uint *)(param_2 + 0x10);
          if (uVar25 < *(uint *)(param_2 + 0x14)) {
            local_c0 = 0x11011000;
            local_bc = 0x3023020;
            local_b8 = 0x31211312;
            local_b4 = 0x33233222;
            bVar4 = *(byte *)((longlong)&local_c0 + (ulonglong)(uVar19 & 0xf));
            local_e8 = (uint)(bVar4 >> 4);
            uVar19 = local_e8;
            if (1 < local_e8) {
              uVar19 = 2;
            }
            uVar30 = bVar4 & 0xf;
            uVar17 = uVar30;
            if (1 < uVar30) {
              uVar17 = 2;
            }
            uVar26 = *(uint *)(param_2 + 0x14) - uVar25;
            if ((uVar26 < uVar17 + uVar19) || (0x40 < uVar26)) {
              uVar18 = (ulonglong)local_c8;
              param_3 = local_e0;
            }
            else {
              uVar13 = *(int *)(lVar6 + 0x5c) + 1;
              uVar26 = *(uint *)(lVar6 + 0x60);
              if (uVar13 <= *(uint *)(lVar6 + 0x60)) {
                uVar26 = uVar13;
              }
              if (1 < uVar26 - uVar25) {
                if (*(uint *)(lVar6 + 0x1c) < 2) {
                  FUN_1403ec280(lVar6,uVar25);
                }
                else {
                  FUN_14040eef0();
                }
              }
              if (1 < (uint)(*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10))) {
                if (*(uint *)(lVar6 + 0x1c) < 2) {
                  FUN_1403ec280(lVar6);
                }
                else {
                  FUN_14040eef0();
                }
              }
              lVar21 = *(longlong *)(lVar6 + 0x70);
              if (uVar19 * 0x14 != 0) {
                FUN_1404210f0(local_98,lVar21 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x14);
              }
              lVar23 = (ulonglong)uVar17 * 0x14;
              if (lVar23 != 0) {
                FUN_1404210f0(local_70,lVar21 + ((ulonglong)*(uint *)(param_2 + 0x14) -
                                                (ulonglong)uVar17) * 0x14,lVar23);
              }
              if (uVar19 != uVar17) {
                uVar25 = *(uint *)(param_2 + 0x10);
                FUN_1404210f0(lVar21 + ((ulonglong)uVar17 + (ulonglong)uVar25) * 0x14,
                              lVar21 + ((ulonglong)uVar19 + (ulonglong)uVar25) * 0x14,
                              (ulonglong)(((*(int *)(param_2 + 0x14) - uVar17) - uVar19) - uVar25) *
                              0x14);
              }
              if (lVar23 != 0) {
                FUN_1404210f0(lVar21 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x14,local_70,lVar23);
              }
              if (uVar19 * 0x14 != 0) {
                FUN_1404210f0(lVar21 + ((ulonglong)*(uint *)(param_2 + 0x14) - (ulonglong)uVar19) *
                                       0x14,local_98);
              }
              if (local_e8 == 3) {
                uVar27 = (ulonglong)(*(int *)(param_2 + 0x14) - 1);
                puVar1 = (undefined8 *)(lVar21 + uVar27 * 0x14);
                uVar7 = *puVar1;
                uVar11 = puVar1[1];
                uVar5 = *(undefined4 *)(lVar21 + 0x10 + uVar27 * 0x14);
                puVar2 = (undefined4 *)(lVar21 + uVar27 * 0x14);
                uVar27 = (ulonglong)(*(int *)(param_2 + 0x14) - 2);
                puVar3 = (undefined4 *)(lVar21 + uVar27 * 0x14);
                uVar8 = puVar3[1];
                uVar9 = puVar3[2];
                uVar10 = puVar3[3];
                *puVar2 = *puVar3;
                puVar2[1] = uVar8;
                puVar2[2] = uVar9;
                puVar2[3] = uVar10;
                puVar2[4] = *(undefined4 *)(lVar21 + 0x10 + uVar27 * 0x14);
                uVar27 = (ulonglong)(*(int *)(param_2 + 0x14) - 2);
                puVar1 = (undefined8 *)(lVar21 + uVar27 * 0x14);
                *puVar1 = uVar7;
                puVar1[1] = uVar11;
                *(undefined4 *)(lVar21 + 0x10 + uVar27 * 0x14) = uVar5;
              }
              uVar27 = (ulonglong)local_e4;
              uVar18 = (ulonglong)local_c8;
              param_3 = local_e0;
              param_1 = local_d0;
              if (uVar30 == 3) {
                uVar14 = (ulonglong)*(uint *)(param_2 + 0x10);
                puVar1 = (undefined8 *)(lVar21 + uVar14 * 0x14);
                uVar7 = *puVar1;
                uVar11 = puVar1[1];
                uVar5 = *(undefined4 *)(lVar21 + 0x10 + uVar14 * 0x14);
                puVar2 = (undefined4 *)(lVar21 + uVar14 * 0x14);
                uVar14 = (ulonglong)(*(uint *)(param_2 + 0x10) + 1);
                puVar3 = (undefined4 *)(lVar21 + uVar14 * 0x14);
                uVar8 = puVar3[1];
                uVar9 = puVar3[2];
                uVar10 = puVar3[3];
                *puVar2 = *puVar3;
                puVar2[1] = uVar8;
                puVar2[2] = uVar9;
                puVar2[3] = uVar10;
                puVar2[4] = *(undefined4 *)(lVar21 + 0x10 + uVar14 * 0x14);
                uVar14 = (ulonglong)(*(int *)(param_2 + 0x10) + 1);
                puVar1 = (undefined8 *)(lVar21 + uVar14 * 0x14);
                *puVar1 = uVar7;
                puVar1[1] = uVar11;
                *(undefined4 *)(lVar21 + 0x10 + uVar14 * 0x14) = uVar5;
              }
            }
          }
        }
        if ((*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) || (*(char *)(lVar6 + 0x58) == '\0'))
        break;
        if (*(char *)(lVar6 + 0x59) == '\0') {
LAB_14038529b:
          *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
        }
        else {
          if ((*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) &&
             (*(int *)(lVar6 + 100) == *(int *)(lVar6 + 0x5c))) {
LAB_140385298:
            *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
            goto LAB_14038529b;
          }
          cVar12 = FUN_1403bf1a0(lVar6,*(int *)(lVar6 + 100) + 1);
          if (cVar12 != '\0') {
            uVar19 = *(uint *)(lVar6 + 0x5c);
            lVar21 = *(longlong *)(lVar6 + 0x70);
            uVar25 = *(uint *)(lVar6 + 100);
            puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar19 * 0x14);
            uVar5 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            lVar23 = *(longlong *)(lVar6 + 0x78);
            puVar3 = (undefined4 *)(lVar23 + (ulonglong)uVar25 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar5;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            *(undefined4 *)(lVar23 + (ulonglong)uVar25 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar19 * 0x14);
            goto LAB_140385298;
          }
        }
        if (*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) {
          lVar21 = *(longlong *)(param_3 + 0xa8);
          lVar23 = *param_1;
          uVar19 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14
                            );
          if (lVar21 != 0) {
            uVar24 = *(ushort *)(lVar21 + (ulonglong)(uVar19 & 0xff) * 2);
            local_e8 = CONCAT22(local_e8._2_2_,0xffff);
            if ((uVar24 != 0xffff) && (((uVar24 ^ uVar19) & 0xffffff00) == 0)) {
              uVar27 = (ulonglong)(uVar24 & 0xff);
              goto LAB_1403853a7;
            }
          }
          if (uVar19 == 0xffff) {
            uVar27 = 2;
            goto LAB_1403853a7;
          }
          pbVar15 = (byte *)FUN_1403cf3f0((ulonglong)*(byte *)(lVar23 + 7) +
                                          ((ulonglong)*(byte *)(lVar23 + 6) +
                                          (ulonglong)
                                          CONCAT11(*(undefined1 *)(lVar23 + 4),
                                                   *(undefined1 *)(lVar23 + 5)) * 0x100) * 0x100 +
                                          lVar23,uVar19,(int)param_1[1]);
          if (pbVar15 == (byte *)0x0) {
            uVar24 = 1;
          }
          else {
            uVar24 = (ushort)*pbVar15 * 0x100 + (ushort)pbVar15[1];
          }
          uVar27 = (ulonglong)uVar24;
          local_e4 = (uint)uVar24;
          if (((lVar21 != 0) && ((uVar19 & 0xffff0000) == 0)) && (uVar24 < 0x100)) {
            *(ushort *)(lVar21 + (ulonglong)(uVar19 & 0xff) * 2) = (ushort)uVar19 & 0xff00 | uVar24;
          }
        }
        else {
          uVar27 = 0;
LAB_1403853a7:
          local_e4 = (uint)uVar27;
        }
      } while ((int)uVar27 == (int)uVar18);
      if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) {
        return;
      }
      puVar22 = local_a8;
      iVar28 = local_d8;
      if (*(char *)(lVar6 + 0x58) == '\0') {
        return;
      }
    }
    if (*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) {
      uVar25 = *(uint *)(*(longlong *)(lVar6 + 0x70) + 8 + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14
                        );
      uVar19 = puVar22[1];
      while (uVar25 < uVar19) {
        uVar19 = puVar22[-2];
        puVar22 = puVar22 + -3;
      }
      uVar19 = puVar22[2];
      while (uVar19 < uVar25) {
        uVar19 = puVar22[5];
        puVar22 = puVar22 + 3;
      }
      local_a8 = puVar22;
    }
    if ((*puVar22 & *(uint *)(param_3 + 0x88)) == 0) {
      if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) {
        return;
      }
      iVar29 = 0;
      local_d8 = 0;
      if (*(char *)(lVar6 + 0x59) == '\0') goto LAB_1403857db;
      if (*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) {
        bVar31 = *(int *)(lVar6 + 100) == *(int *)(lVar6 + 0x5c);
LAB_140385799:
        iVar29 = local_d8;
        if (!bVar31) goto LAB_14038579b;
      }
      else {
LAB_14038579b:
        iVar29 = local_d8;
        cVar12 = FUN_1403bf1a0(lVar6,*(int *)(lVar6 + 100) + 1);
        if (cVar12 == '\0') goto LAB_1403857de;
        uVar19 = *(uint *)(lVar6 + 0x5c);
        lVar21 = *(longlong *)(lVar6 + 0x70);
        uVar25 = *(uint *)(lVar6 + 100);
        puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar19 * 0x14);
        uVar5 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        lVar23 = *(longlong *)(lVar6 + 0x78);
        puVar3 = (undefined4 *)(lVar23 + (ulonglong)uVar25 * 0x14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        *(undefined4 *)(lVar23 + (ulonglong)uVar25 * 0x14 + 0x10) =
             *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar19 * 0x14);
      }
      *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
LAB_1403857db:
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
    }
    else {
LAB_140385468:
      if ((local_a0[3] & 0xf) == 0) {
        if ((iVar28 != 0) && (((local_a0[2] & 0x40) == 0 || (iVar29 != 0)))) {
          if ((uint)pbVar15[1] * 0x10000 + (uint)pbVar15[2] * 0x100 + (uint)*pbVar15 * 0x1000000 +
              (uint)pbVar15[3] <= uVar17) {
            uVar27 = 1;
          }
          bVar4 = pbVar15[0xf];
          lVar21 = ((ulonglong)pbVar15[0xe] +
                   ((ulonglong)CONCAT11(pbVar15[0xc],pbVar15[0xd]) * 0x40 +
                   (ulonglong)
                   pbVar15[(((ulonglong)CONCAT11(pbVar15[8],pbVar15[9]) * 0x100 +
                            (ulonglong)pbVar15[10]) * 0x80 + uVar27) * 2 + (ulonglong)pbVar15[0xb]])
                   * 4) * 0x40 +
                   (ulonglong)
                   (pbVar15 +
                   (((ulonglong)CONCAT11(pbVar15[8],pbVar15[9]) * 0x100 + (ulonglong)pbVar15[10]) *
                    0x80 + uVar27) * 2 + (ulonglong)pbVar15[0xb])[1];
          uVar19 = (uint)pbVar15[lVar21 * 4 + (ulonglong)bVar4 + 3] +
                   (uint)pbVar15[lVar21 * 4 + (ulonglong)bVar4 + 2] * 0x100;
          if ((((uVar19 & 0xf) != 0) ||
              (iVar29 != (uint)(pbVar15 + lVar21 * 4 + (ulonglong)bVar4)[1] +
                         (uint)pbVar15[lVar21 * 4 + (ulonglong)bVar4] * 0x100)) ||
             ((local_a0[2] & 0x40) << 8 != (uVar19 & 0x4000))) goto LAB_140385616;
        }
        iVar20 = (uint)pbVar15[1] * 0x10000 + (uint)pbVar15[2] * 0x100 + (uint)*pbVar15 * 0x1000000
                 + (uint)pbVar15[3];
        if ((pbVar15[(((ulonglong)pbVar15[0xe] +
                      ((ulonglong)CONCAT11(pbVar15[0xc],pbVar15[0xd]) * 0x40 +
                      (ulonglong)
                      pbVar15[(((ulonglong)CONCAT11(pbVar15[8],pbVar15[9]) * 0x100 +
                               (ulonglong)pbVar15[10]) * 0x80 +
                              (ulonglong)((uint)(iVar20 == 0) + iVar20 * iVar28)) * 2 +
                              (ulonglong)pbVar15[0xb]]) * 4) * 0x40 +
                     (ulonglong)
                     (pbVar15 +
                     (((ulonglong)CONCAT11(pbVar15[8],pbVar15[9]) * 0x100 + (ulonglong)pbVar15[10])
                      * 0x80 + (ulonglong)((uint)(iVar20 == 0) + iVar20 * iVar28)) * 2 +
                     (ulonglong)pbVar15[0xb])[1]) * 4 + (ulonglong)pbVar15[0xf] + 3] & 0xf) != 0)
        goto LAB_140385616;
      }
      else {
LAB_140385616:
        cVar12 = *(char *)(lVar6 + 0x59);
        piVar16 = (int *)(lVar6 + 100);
        if (cVar12 == '\0') {
          piVar16 = (int *)(lVar6 + 0x5c);
        }
        if (*piVar16 != 0) {
          uVar19 = *(uint *)(lVar6 + 0x60);
          uVar25 = *(uint *)(lVar6 + 0x5c);
          if (uVar25 < uVar19) {
            uVar17 = uVar25;
            if (cVar12 != '\0') {
              uVar17 = *(uint *)(lVar6 + 100);
            }
            iVar28 = uVar17 - 1;
            uVar17 = uVar25 + 1;
            if ((uVar17 == 0xffffffff) || (param_3 = local_e0, (uVar25 - iVar28) + 1 < 0x100)) {
              uVar7 = *(undefined8 *)(lVar6 + 0x70);
              local_f8 = 0xffffffff;
              if (uVar17 <= uVar19) {
                uVar19 = uVar17;
              }
              uVar27 = (ulonglong)uVar19;
              if (cVar12 == '\0') {
                local_f8 = FUN_1403a1a20(lVar6,uVar7,iVar28,uVar27);
                local_f0 = 3;
                FUN_1403a1bc0(lVar6,uVar7,iVar28,uVar19);
                param_3 = local_e0;
              }
              else {
                local_f8 = FUN_1403a1a20(lVar6,uVar7,uVar25,uVar27);
                iVar20 = FUN_1403a1a20(lVar6,*(undefined8 *)(lVar6 + 0x78),iVar28,
                                       *(undefined4 *)(lVar6 + 100));
                local_f0 = 3;
                local_f8 = iVar20;
                FUN_1403a1bc0(lVar6,*(undefined8 *)(lVar6 + 0x78),iVar28,
                              *(undefined4 *)(lVar6 + 100));
                uVar25 = *(uint *)(lVar6 + 0x5c);
                uVar18 = (ulonglong)uVar25;
                param_3 = local_e0;
                param_1 = local_d0;
                if (uVar25 != uVar19) {
                  lVar21 = *(longlong *)(lVar6 + 0x70);
                  piVar16 = (int *)(lVar6 + 0xe0);
                  *piVar16 = *piVar16 + (uVar25 - uVar19);
                  if (*piVar16 < 0) {
                    *(undefined1 *)(lVar6 + 0x58) = 0;
                  }
                  uVar14 = uVar18;
                  if (*(int *)(lVar6 + 0x1c) == 2) {
joined_r0x000140385865:
                    while (uVar25 < uVar19) {
                      if (iVar20 != *(int *)(lVar21 + 8 + uVar18 * 0x14)) {
                        puVar22 = (uint *)(lVar21 + 4 + uVar18 * 0x14);
                        *puVar22 = *puVar22 | 3;
                      }
                      uVar25 = (int)uVar14 + 1;
                      uVar18 = uVar18 + 1;
                      uVar14 = (ulonglong)uVar25;
                    }
                  }
                  else {
                    iVar28 = *(int *)(lVar21 + 8 + uVar18 * 0x14);
                    if (iVar20 == iVar28) {
                      while (uVar25 < uVar19) {
                        uVar19 = (int)uVar27 - 1;
                        uVar27 = (ulonglong)uVar19;
                        if (*(int *)(lVar21 + 8 + uVar27 * 0x14) == iVar28) break;
                        puVar22 = (uint *)(lVar21 + 4 + uVar27 * 0x14);
                        *puVar22 = *puVar22 | 3;
                      }
                    }
                    else {
                      iVar28 = *(int *)(lVar21 + 8 + (ulonglong)(uVar19 - 1) * 0x14);
                      if (iVar20 != iVar28) goto joined_r0x000140385865;
                      while ((uVar25 < uVar19 && (*(int *)(lVar21 + 8 + uVar18 * 0x14) != iVar28)))
                      {
                        puVar22 = (uint *)(lVar21 + 4 + uVar18 * 0x14);
                        *puVar22 = *puVar22 | 3;
                        uVar25 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar25;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar19 = local_e8;
      FUN_14040e7a0(param_2,lVar6,param_1,local_a0);
      if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) {
        return;
      }
      local_d8 = iVar29;
      if ((uVar19 == 0) ||
         (iVar28 = *(int *)(lVar6 + 0xe0), *(int *)(lVar6 + 0xe0) = iVar28 + -1, iVar28 < 1)) {
        if (*(char *)(lVar6 + 0x59) != '\0') {
          if (*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) {
            bVar31 = *(int *)(lVar6 + 100) == *(int *)(lVar6 + 0x5c);
            goto LAB_140385799;
          }
          goto LAB_14038579b;
        }
        goto LAB_1403857db;
      }
    }
LAB_1403857de:
    cVar12 = *(char *)(lVar6 + 0x58);
    puVar22 = local_a8;
  } while( true );
}

