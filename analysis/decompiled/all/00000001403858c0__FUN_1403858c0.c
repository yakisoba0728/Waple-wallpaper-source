// Function: FUN_1403858c0
// Addr: 1403858c0
// Size: 2939 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403858c0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  byte bVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  uint uVar27;
  int iVar28;
  ushort uVar29;
  ulonglong uVar30;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined4 local_f0;
  uint local_e8;
  uint local_e4;
  longlong *local_e0;
  int local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  uint local_b8;
  uint local_b4;
  uint *local_b0;
  byte *local_a8;
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_118;
  lVar21 = *(longlong *)(param_3 + 0x80);
  uVar19 = 0;
  lVar8 = *(longlong *)(param_3 + 0x20);
  local_c0 = param_3;
  local_d8 = 0;
  if ((lVar21 == 0) || (*(uint *)(lVar21 + 4) < 2)) {
    local_b0 = (uint *)0x0;
  }
  else {
    local_b0 = *(uint **)(lVar21 + 8);
  }
  pbVar26 = (byte *)*param_1;
  bVar6 = pbVar26[((ulonglong)
                   pbVar26[(ulonglong)pbVar26[4] * 0x100 +
                           (ulonglong)((uint)pbVar26[1] + (uint)*pbVar26 * 0x100 == 0) +
                           (ulonglong)pbVar26[5]] + (ulonglong)pbVar26[6] * 0x40) * 4 +
                  (ulonglong)pbVar26[7] + 3];
  *(undefined4 *)(lVar8 + 0x5c) = 0;
  local_b4 = bVar6 & 0xf;
  cVar15 = *(char *)(lVar8 + 0x58);
  local_e0 = param_1;
  do {
    if (cVar15 == '\0') {
      return;
    }
    if (*(uint *)(lVar8 + 0x5c) < *(uint *)(lVar8 + 0x60)) {
      lVar21 = *(longlong *)(param_3 + 0xa8);
      lVar23 = *param_1;
      uVar24 = *(uint *)(*(longlong *)(lVar8 + 0x70) + (ulonglong)*(uint *)(lVar8 + 0x5c) * 0x14);
      if (lVar21 != 0) {
        uVar29 = *(ushort *)(lVar21 + (ulonglong)(uVar24 & 0xff) * 2);
        if ((uVar29 != 0xffff) && (((uVar24 ^ uVar29) & 0xffffff00) == 0)) {
          uVar22 = (ulonglong)uVar29 & 0xff;
          goto LAB_140385a90;
        }
      }
      if (uVar24 == 0xffff) {
        uVar22 = 2;
      }
      else {
        pbVar26 = (byte *)((ulonglong)*(byte *)(lVar23 + 3) +
                          (ulonglong)*(byte *)(lVar23 + 2) * 0x100 + lVar23);
        uVar27 = (uVar24 - pbVar26[1]) + (uint)*pbVar26 * -0x100;
        if (uVar27 < (uint)pbVar26[2] * 0x100 + (uint)pbVar26[3]) {
          uVar22 = (ulonglong)pbVar26[(ulonglong)uVar27 + 4];
          uVar29 = (ushort)pbVar26[(ulonglong)uVar27 + 4];
        }
        else {
          uVar22 = 1;
          uVar29 = 1;
        }
        if ((lVar21 != 0) && ((uVar24 & 0xffff0000) == 0)) {
          *(ushort *)(lVar21 + (ulonglong)(uVar24 & 0xff) * 2) = (ushort)uVar24 & 0xff00 | uVar29;
        }
      }
    }
    else {
      uVar22 = 0;
    }
LAB_140385a90:
    while( true ) {
      pbVar26 = (byte *)*param_1;
      local_e4 = (uint)uVar22;
      uVar27 = (uint)pbVar26[1] + (uint)*pbVar26 * 0x100;
      uVar24 = local_e4;
      if (uVar27 <= local_e4) {
        uVar24 = 1;
      }
      lVar21 = (ulonglong)
               pbVar26[(ulonglong)pbVar26[5] +
                       (ulonglong)(uVar24 + uVar27 * uVar19) + (ulonglong)pbVar26[4] * 0x100] +
               (ulonglong)pbVar26[6] * 0x40;
      local_a8 = pbVar26 + lVar21 * 4 + (ulonglong)pbVar26[7];
      iVar16 = (int)((((uint)pbVar26[lVar21 * 4 + (ulonglong)pbVar26[7]] - (uint)pbVar26[4]) * 0x100
                     + (uint)local_a8[1]) - (uint)pbVar26[5]) / (int)uVar27;
      uVar24 = (uint)local_a8[3] + (uint)local_a8[2] * 0x100;
      local_e8 = uVar24 & 0x4000;
      if (local_b0 != (uint *)0x0) break;
      if ((((uVar19 != 0) || (iVar16 != 0)) || (local_b4 != 0)) ||
         (((uVar24 & 0xf) != 0 || (local_e8 != 0)))) goto LAB_14038605e;
      local_e8 = 0;
      uVar30 = uVar22;
      do {
        uVar19 = (uint)local_a8[2] * 0x100 + (uint)local_a8[3];
        if (uVar19 >> 0xf != 0) {
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar8 + 0x5c);
        }
        if ((uVar19 >> 0xd & 1) != 0) {
          uVar27 = *(int *)(lVar8 + 0x5c) + 1;
          uVar24 = *(uint *)(lVar8 + 0x60);
          if (uVar27 <= *(uint *)(lVar8 + 0x60)) {
            uVar24 = uVar27;
          }
          *(uint *)(param_2 + 0x14) = uVar24;
        }
        if ((uVar19 & 0xf) != 0) {
          uVar24 = *(uint *)(param_2 + 0x10);
          if (uVar24 < *(uint *)(param_2 + 0x14)) {
            local_d0 = 0x11011000;
            local_cc = 0x3023020;
            local_c8 = 0x31211312;
            local_c4 = 0x33233222;
            bVar6 = *(byte *)((longlong)&local_d0 + (ulonglong)(uVar19 & 0xf));
            local_e8 = (uint)(bVar6 >> 4);
            uVar19 = local_e8;
            if (1 < local_e8) {
              uVar19 = 2;
            }
            local_b8 = bVar6 & 0xf;
            uVar27 = local_b8;
            if (1 < local_b8) {
              uVar27 = 2;
            }
            uVar25 = *(uint *)(param_2 + 0x14) - uVar24;
            param_3 = local_c0;
            if ((uVar27 + uVar19 <= uVar25) && (uVar25 < 0x41)) {
              uVar17 = *(int *)(lVar8 + 0x5c) + 1;
              uVar25 = *(uint *)(lVar8 + 0x60);
              if (uVar17 <= *(uint *)(lVar8 + 0x60)) {
                uVar25 = uVar17;
              }
              if (1 < uVar25 - uVar24) {
                if (*(uint *)(lVar8 + 0x1c) < 2) {
                  FUN_1403ec280(lVar8,uVar24);
                }
                else {
                  FUN_14040eef0();
                }
              }
              if (1 < (uint)(*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10))) {
                if (*(uint *)(lVar8 + 0x1c) < 2) {
                  FUN_1403ec280(lVar8);
                }
                else {
                  FUN_14040eef0();
                }
              }
              lVar21 = *(longlong *)(lVar8 + 0x70);
              if (uVar19 * 0x14 != 0) {
                FUN_1404210f0(local_98,lVar21 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x14);
              }
              lVar23 = (ulonglong)uVar27 * 0x14;
              if (lVar23 != 0) {
                FUN_1404210f0(local_70,lVar21 + ((ulonglong)*(uint *)(param_2 + 0x14) -
                                                (ulonglong)uVar27) * 0x14,lVar23);
              }
              if (uVar19 != uVar27) {
                uVar24 = *(uint *)(param_2 + 0x10);
                FUN_1404210f0(lVar21 + ((ulonglong)uVar27 + (ulonglong)uVar24) * 0x14,
                              lVar21 + ((ulonglong)uVar19 + (ulonglong)uVar24) * 0x14,
                              (ulonglong)(((*(int *)(param_2 + 0x14) - uVar27) - uVar19) - uVar24) *
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
                uVar22 = (ulonglong)(*(int *)(param_2 + 0x14) - 1);
                puVar1 = (undefined8 *)(lVar21 + uVar22 * 0x14);
                uVar9 = *puVar1;
                uVar13 = puVar1[1];
                uVar7 = *(undefined4 *)(lVar21 + 0x10 + uVar22 * 0x14);
                puVar2 = (undefined4 *)(lVar21 + uVar22 * 0x14);
                uVar22 = (ulonglong)(*(int *)(param_2 + 0x14) - 2);
                puVar3 = (undefined4 *)(lVar21 + uVar22 * 0x14);
                uVar10 = puVar3[1];
                uVar11 = puVar3[2];
                uVar12 = puVar3[3];
                *puVar2 = *puVar3;
                puVar2[1] = uVar10;
                puVar2[2] = uVar11;
                puVar2[3] = uVar12;
                puVar2[4] = *(undefined4 *)(lVar21 + 0x10 + uVar22 * 0x14);
                uVar22 = (ulonglong)(*(int *)(param_2 + 0x14) - 2);
                puVar1 = (undefined8 *)(lVar21 + uVar22 * 0x14);
                *puVar1 = uVar9;
                puVar1[1] = uVar13;
                *(undefined4 *)(lVar21 + 0x10 + uVar22 * 0x14) = uVar7;
              }
              if (local_b8 == 3) {
                uVar22 = (ulonglong)*(uint *)(param_2 + 0x10);
                puVar1 = (undefined8 *)(lVar21 + uVar22 * 0x14);
                uVar9 = *puVar1;
                uVar13 = puVar1[1];
                uVar7 = *(undefined4 *)(lVar21 + 0x10 + uVar22 * 0x14);
                puVar2 = (undefined4 *)(lVar21 + uVar22 * 0x14);
                uVar22 = (ulonglong)(*(uint *)(param_2 + 0x10) + 1);
                puVar3 = (undefined4 *)(lVar21 + uVar22 * 0x14);
                uVar10 = puVar3[1];
                uVar11 = puVar3[2];
                uVar12 = puVar3[3];
                *puVar2 = *puVar3;
                puVar2[1] = uVar10;
                puVar2[2] = uVar11;
                puVar2[3] = uVar12;
                puVar2[4] = *(undefined4 *)(lVar21 + 0x10 + uVar22 * 0x14);
                uVar22 = (ulonglong)(*(int *)(param_2 + 0x10) + 1);
                puVar1 = (undefined8 *)(lVar21 + uVar22 * 0x14);
                *puVar1 = uVar9;
                puVar1[1] = uVar13;
                *(undefined4 *)(lVar21 + 0x10 + uVar22 * 0x14) = uVar7;
              }
              uVar22 = (ulonglong)local_e4;
              param_3 = local_c0;
              param_1 = local_e0;
            }
          }
        }
        if ((*(int *)(lVar8 + 0x5c) == *(int *)(lVar8 + 0x60)) || (*(char *)(lVar8 + 0x58) == '\0'))
        break;
        if (*(char *)(lVar8 + 0x59) == '\0') {
LAB_140385e81:
          *(int *)(lVar8 + 0x5c) = *(int *)(lVar8 + 0x5c) + 1;
        }
        else {
          if ((*(longlong *)(lVar8 + 0x78) == *(longlong *)(lVar8 + 0x70)) &&
             (*(int *)(lVar8 + 100) == *(int *)(lVar8 + 0x5c))) {
LAB_140385e7e:
            *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
            goto LAB_140385e81;
          }
          cVar15 = FUN_1403bf1a0(lVar8,*(int *)(lVar8 + 100) + 1);
          if (cVar15 != '\0') {
            uVar19 = *(uint *)(lVar8 + 0x5c);
            lVar21 = *(longlong *)(lVar8 + 0x70);
            uVar24 = *(uint *)(lVar8 + 100);
            puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar19 * 0x14);
            uVar7 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            lVar23 = *(longlong *)(lVar8 + 0x78);
            puVar3 = (undefined4 *)(lVar23 + (ulonglong)uVar24 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar7;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            *(undefined4 *)(lVar23 + (ulonglong)uVar24 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar19 * 0x14);
            goto LAB_140385e7e;
          }
        }
        if (*(uint *)(lVar8 + 0x5c) < *(uint *)(lVar8 + 0x60)) {
          lVar21 = *(longlong *)(param_3 + 0xa8);
          lVar23 = *param_1;
          uVar19 = *(uint *)(*(longlong *)(lVar8 + 0x70) + (ulonglong)*(uint *)(lVar8 + 0x5c) * 0x14
                            );
          if (lVar21 != 0) {
            uVar29 = *(ushort *)(lVar21 + (ulonglong)(uVar19 & 0xff) * 2);
            local_e8 = CONCAT22(local_e8._2_2_,0xffff);
            if ((uVar29 != 0xffff) && (((uVar29 ^ uVar19) & 0xffffff00) == 0)) {
              uVar30 = (ulonglong)(uVar29 & 0xff);
              goto LAB_140385f71;
            }
          }
          if (uVar19 == 0xffff) {
            uVar30 = 2;
          }
          else {
            pbVar26 = (byte *)(lVar23 + (ulonglong)*(byte *)(lVar23 + 2) * 0x100 +
                              (ulonglong)*(byte *)(lVar23 + 3));
            uVar24 = (uVar19 - pbVar26[1]) + (uint)*pbVar26 * -0x100;
            if (uVar24 < (uint)pbVar26[2] * 0x100 + (uint)pbVar26[3]) {
              uVar30 = (ulonglong)pbVar26[(ulonglong)uVar24 + 4];
            }
            else {
              uVar30 = 1;
            }
            if ((lVar21 != 0) && ((uVar19 & 0xffff0000) == 0)) {
              *(ushort *)(lVar21 + (ulonglong)(uVar19 & 0xff) * 2) =
                   (ushort)uVar19 & 0xff00 | (ushort)uVar30;
            }
          }
        }
        else {
          uVar30 = 0;
        }
LAB_140385f71:
      } while ((int)uVar30 == (int)uVar22);
      if (*(int *)(lVar8 + 0x5c) == *(int *)(lVar8 + 0x60)) {
        return;
      }
      uVar22 = uVar30;
      uVar19 = local_d8;
      if (*(char *)(lVar8 + 0x58) == '\0') {
        return;
      }
    }
    if (*(uint *)(lVar8 + 0x5c) < *(uint *)(lVar8 + 0x60)) {
      uVar27 = *(uint *)(*(longlong *)(lVar8 + 0x70) + 8 + (ulonglong)*(uint *)(lVar8 + 0x5c) * 0x14
                        );
      uVar24 = local_b0[1];
      while (uVar27 < uVar24) {
        uVar24 = local_b0[-2];
        local_b0 = local_b0 + -3;
      }
      uVar24 = local_b0[2];
      while (uVar24 < uVar27) {
        uVar24 = local_b0[5];
        local_b0 = local_b0 + 3;
      }
    }
    if ((*local_b0 & *(uint *)(param_3 + 0x88)) == 0) {
      if (*(int *)(lVar8 + 0x5c) == *(int *)(lVar8 + 0x60)) {
        return;
      }
      local_d8 = 0;
      if (*(char *)(lVar8 + 0x59) == '\0') {
LAB_140386056:
        *(int *)(lVar8 + 0x5c) = *(int *)(lVar8 + 0x5c) + 1;
        uVar19 = 0;
      }
      else {
        if ((*(longlong *)(lVar8 + 0x78) == *(longlong *)(lVar8 + 0x70)) &&
           (*(int *)(lVar8 + 100) == *(int *)(lVar8 + 0x5c))) {
LAB_140386053:
          *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
          goto LAB_140386056;
        }
        local_e4 = iVar16;
        cVar15 = FUN_1403bf1a0(lVar8,*(int *)(lVar8 + 100) + 1);
        uVar19 = 0;
        if (cVar15 != '\0') {
          uVar19 = *(uint *)(lVar8 + 0x5c);
          lVar21 = *(longlong *)(lVar8 + 0x70);
          uVar24 = *(uint *)(lVar8 + 100);
          puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar19 * 0x14);
          uVar7 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          lVar23 = *(longlong *)(lVar8 + 0x78);
          puVar3 = (undefined4 *)(lVar23 + (ulonglong)uVar24 * 0x14);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          *(undefined4 *)(lVar23 + (ulonglong)uVar24 * 0x14 + 0x10) =
               *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar19 * 0x14);
          goto LAB_140386053;
        }
      }
    }
    else {
LAB_14038605e:
      if ((local_a8[3] & 0xf) == 0) {
        iVar28 = uVar19;
        if ((uVar19 != 0) && (((local_a8[2] & 0x40) == 0 || (iVar16 != 0)))) {
          pbVar26 = (byte *)*param_1;
          if ((uint)*pbVar26 * 0x100 + (uint)pbVar26[1] <= local_e4) {
            uVar22 = 1;
          }
          lVar21 = (ulonglong)
                   pbVar26[uVar22 + (ulonglong)pbVar26[4] * 0x100 + (ulonglong)pbVar26[5]] +
                   (ulonglong)pbVar26[6] * 0x40;
          pbVar4 = pbVar26 + lVar21 * 4 + (ulonglong)pbVar26[7];
          uVar19 = (uint)pbVar26[lVar21 * 4 + (ulonglong)pbVar26[7] + 2] * 0x100 + (uint)pbVar4[3];
          param_1 = local_e0;
          if ((((uVar19 & 0xf) != 0) ||
              (iVar16 != (int)(((uint)*pbVar4 * 0x100 + (uint)pbVar26[4] * -0x100 + (uint)pbVar4[1])
                              - (uint)pbVar26[5]) / (int)(uint)CONCAT11(*pbVar26,pbVar26[1]))) ||
             (iVar28 = local_d8, (local_a8[2] & 0x40) << 8 != (uVar19 & 0x4000)))
          goto LAB_14038619a;
        }
        pbVar26 = (byte *)*param_1;
        iVar20 = (uint)pbVar26[1] + (uint)*pbVar26 * 0x100;
        uVar19 = iVar16;
        local_e4 = iVar16;
        if ((pbVar26[((ulonglong)
                      pbVar26[(ulonglong)pbVar26[4] * 0x100 +
                              (ulonglong)(iVar20 * iVar28 + (uint)(iVar20 == 0)) +
                              (ulonglong)pbVar26[5]] + (ulonglong)pbVar26[6] * 0x40) * 4 +
                     (ulonglong)pbVar26[7] + 3] & 0xf) != 0) goto LAB_14038619a;
      }
      else {
LAB_14038619a:
        cVar15 = *(char *)(lVar8 + 0x59);
        piVar18 = (int *)(lVar8 + 100);
        if (cVar15 == '\0') {
          piVar18 = (int *)(lVar8 + 0x5c);
        }
        uVar19 = iVar16;
        local_e4 = iVar16;
        if (*piVar18 != 0) {
          uVar24 = *(uint *)(lVar8 + 0x60);
          uVar27 = *(uint *)(lVar8 + 0x5c);
          if (uVar27 < uVar24) {
            uVar19 = uVar27;
            if (cVar15 != '\0') {
              uVar19 = *(uint *)(lVar8 + 100);
            }
            iVar28 = uVar19 - 1;
            uVar25 = uVar27 + 1;
            if ((uVar25 == 0xffffffff) || (uVar19 = iVar16, (uVar27 - iVar28) + 1 < 0x100)) {
              uVar9 = *(undefined8 *)(lVar8 + 0x70);
              local_f8 = 0xffffffff;
              if (uVar25 <= uVar24) {
                uVar24 = uVar25;
              }
              uVar22 = (ulonglong)uVar24;
              if (cVar15 == '\0') {
                local_f8 = FUN_1403a1a20(lVar8,uVar9,iVar28,uVar24);
                local_f0 = 3;
                FUN_1403a1bc0(lVar8,uVar9,iVar28,uVar24);
                uVar19 = iVar16;
              }
              else {
                local_f8 = FUN_1403a1a20(lVar8,uVar9,uVar27,uVar24);
                iVar16 = FUN_1403a1a20(lVar8,*(undefined8 *)(lVar8 + 0x78),iVar28,
                                       *(undefined4 *)(lVar8 + 100));
                local_f0 = 3;
                local_f8 = iVar16;
                FUN_1403a1bc0(lVar8,*(undefined8 *)(lVar8 + 0x78),iVar28,
                              *(undefined4 *)(lVar8 + 100));
                uVar27 = *(uint *)(lVar8 + 0x5c);
                uVar30 = (ulonglong)uVar27;
                param_1 = local_e0;
                uVar19 = local_e4;
                if (uVar27 != uVar24) {
                  lVar21 = *(longlong *)(lVar8 + 0x70);
                  piVar18 = (int *)(lVar8 + 0xe0);
                  *piVar18 = *piVar18 + (uVar27 - uVar24);
                  if (*piVar18 < 0) {
                    *(undefined1 *)(lVar8 + 0x58) = 0;
                  }
                  uVar14 = uVar30;
                  if (*(int *)(lVar8 + 0x1c) == 2) {
joined_r0x0001403863e9:
                    while (uVar27 < uVar24) {
                      if (iVar16 != *(int *)(lVar21 + 8 + uVar30 * 0x14)) {
                        puVar5 = (uint *)(lVar21 + 4 + uVar30 * 0x14);
                        *puVar5 = *puVar5 | 3;
                      }
                      uVar27 = (int)uVar14 + 1;
                      uVar30 = uVar30 + 1;
                      uVar14 = (ulonglong)uVar27;
                    }
                  }
                  else {
                    iVar28 = *(int *)(lVar21 + 8 + uVar30 * 0x14);
                    if (iVar16 == iVar28) {
                      while (uVar27 < uVar24) {
                        uVar24 = (int)uVar22 - 1;
                        uVar22 = (ulonglong)uVar24;
                        if (*(int *)(lVar21 + 8 + uVar22 * 0x14) == iVar28) break;
                        puVar5 = (uint *)(lVar21 + 4 + uVar22 * 0x14);
                        *puVar5 = *puVar5 | 3;
                      }
                    }
                    else {
                      iVar28 = *(int *)(lVar21 + 8 + (ulonglong)(uVar24 - 1) * 0x14);
                      if (iVar16 != iVar28) goto joined_r0x0001403863e9;
                      while ((uVar27 < uVar24 && (*(int *)(lVar21 + 8 + uVar30 * 0x14) != iVar28)))
                      {
                        puVar5 = (uint *)(lVar21 + 4 + uVar30 * 0x14);
                        *puVar5 = *puVar5 | 3;
                        uVar27 = (int)uVar30 + 1;
                        uVar30 = (ulonglong)uVar27;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar24 = local_e8;
      FUN_14040e7a0(param_2,lVar8,param_1,local_a8);
      if (*(int *)(lVar8 + 0x5c) == *(int *)(lVar8 + 0x60)) {
        return;
      }
      local_d8 = uVar19;
      if ((uVar24 == 0) ||
         (iVar16 = *(int *)(lVar8 + 0xe0), *(int *)(lVar8 + 0xe0) = iVar16 + -1, param_3 = local_c0,
         iVar16 < 1)) {
        if (*(char *)(lVar8 + 0x59) != '\0') {
          if ((*(longlong *)(lVar8 + 0x78) != *(longlong *)(lVar8 + 0x70)) ||
             (*(int *)(lVar8 + 100) != *(int *)(lVar8 + 0x5c))) {
            cVar15 = FUN_1403bf1a0(lVar8,*(int *)(lVar8 + 100) + 1);
            param_3 = local_c0;
            if (cVar15 == '\0') goto LAB_140386362;
            uVar24 = *(uint *)(lVar8 + 0x5c);
            lVar21 = *(longlong *)(lVar8 + 0x70);
            uVar27 = *(uint *)(lVar8 + 100);
            puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar24 * 0x14);
            uVar7 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            lVar23 = *(longlong *)(lVar8 + 0x78);
            puVar3 = (undefined4 *)(lVar23 + (ulonglong)uVar27 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar7;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            *(undefined4 *)(lVar23 + (ulonglong)uVar27 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar24 * 0x14);
          }
          *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
        }
        *(int *)(lVar8 + 0x5c) = *(int *)(lVar8 + 0x5c) + 1;
        param_3 = local_c0;
      }
    }
LAB_140386362:
    cVar15 = *(char *)(lVar8 + 0x58);
  } while( true );
}

