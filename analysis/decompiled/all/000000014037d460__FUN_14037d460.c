// Function: FUN_14037d460
// Addr: 14037d460
// Size: 3051 bytes


void FUN_14037d460(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  bool bVar12;
  char cVar13;
  undefined4 uVar14;
  char *pcVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ushort uVar22;
  ulonglong uVar23;
  byte *pbVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  char local_res20;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar29;
  int local_54;
  uint *local_50;
  
  lVar21 = *(longlong *)(param_3 + 0x80);
  lVar9 = *(longlong *)(param_3 + 0x20);
  local_54 = 0;
  if ((lVar21 == 0) || (*(uint *)(lVar21 + 4) < 2)) {
    local_50 = (uint *)0x0;
  }
  else {
    local_50 = *(uint **)(lVar21 + 8);
  }
  pbVar24 = (byte *)*param_1;
  lVar20 = (ulonglong)
           pbVar24[(ulonglong)pbVar24[4] * 0x100 +
                   (ulonglong)((uint)pbVar24[1] + (uint)*pbVar24 * 0x100 == 0) +
                   (ulonglong)pbVar24[5]] + (ulonglong)pbVar24[6] * 0x20;
  lVar21 = lVar20 * 8 + (ulonglong)pbVar24[7];
  if (((uint)pbVar24[lVar21 + 4] * 0x100 + (uint)pbVar24[lVar20 * 8 + (ulonglong)pbVar24[7] + 5] !=
       0xffff) ||
     (local_res20 = '\x01', (uint)pbVar24[lVar21 + 7] + (uint)pbVar24[lVar21 + 6] * 0x100 != 0xffff)
     ) {
    local_res20 = '\0';
  }
  *(undefined4 *)(lVar9 + 0x5c) = 0;
  cVar13 = *(char *)(lVar9 + 0x58);
  iVar28 = local_54;
  do {
    if (cVar13 == '\0') {
      return;
    }
    if (*(uint *)(lVar9 + 0x5c) < *(uint *)(lVar9 + 0x60)) {
      lVar21 = *(longlong *)(param_3 + 0xa8);
      lVar20 = *param_1;
      uVar17 = *(uint *)(*(longlong *)(lVar9 + 0x70) + (ulonglong)*(uint *)(lVar9 + 0x5c) * 0x14);
      if (lVar21 != 0) {
        uVar22 = *(ushort *)(lVar21 + (ulonglong)(uVar17 & 0xff) * 2);
        if ((uVar22 != 0xffff) && (((uVar17 ^ uVar22) & 0xffffff00) == 0)) {
          uVar23 = (ulonglong)uVar22 & 0xff;
          goto LAB_14037d650;
        }
      }
      if (uVar17 == 0xffff) {
        uVar23 = 2;
      }
      else {
        pbVar24 = (byte *)((ulonglong)*(byte *)(lVar20 + 3) +
                          (ulonglong)*(byte *)(lVar20 + 2) * 0x100 + lVar20);
        uVar19 = (uVar17 - pbVar24[1]) + (uint)*pbVar24 * -0x100;
        if (uVar19 < (uint)pbVar24[3] + (uint)pbVar24[2] * 0x100) {
          uVar23 = (ulonglong)pbVar24[(ulonglong)uVar19 + 4];
          uVar22 = (ushort)pbVar24[(ulonglong)uVar19 + 4];
        }
        else {
          uVar23 = 1;
          uVar22 = 1;
        }
        if ((lVar21 != 0) && ((uVar17 & 0xffff0000) == 0)) {
          *(ushort *)(lVar21 + (ulonglong)(uVar17 & 0xff) * 2) = (ushort)uVar17 & 0xff00 | uVar22;
        }
      }
    }
    else {
      uVar23 = 0;
    }
LAB_14037d650:
    while( true ) {
      uVar29 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
      pbVar24 = (byte *)*param_1;
      uVar19 = (uint)uVar23;
      uVar26 = (uint)pbVar24[1] + (uint)*pbVar24 * 0x100;
      uVar17 = uVar19;
      if (uVar26 <= uVar19) {
        uVar17 = 1;
      }
      bVar6 = pbVar24[7];
      lVar21 = (ulonglong)
               pbVar24[(ulonglong)pbVar24[5] +
                       (ulonglong)(uVar17 + uVar26 * iVar28) + (ulonglong)pbVar24[4] * 0x100] +
               (ulonglong)pbVar24[6] * 0x20;
      bVar7 = pbVar24[lVar21 * 8 + (ulonglong)bVar6 + 2];
      pbVar1 = pbVar24 + lVar21 * 8 + (ulonglong)bVar6;
      lVar21 = (longlong)
               (int)((((uint)pbVar24[lVar21 * 8 + (ulonglong)bVar6] - (uint)pbVar24[4]) * 0x100 +
                     (uint)pbVar24[lVar21 * 8 + (ulonglong)bVar6 + 1]) - (uint)pbVar24[5]) /
               (longlong)(int)uVar26;
      local_54 = (int)lVar21;
      if (((uint)pbVar1[4] * 0x100 + (uint)pbVar1[5] == 0xffff) &&
         ((uint)pbVar1[6] * 0x100 + (uint)pbVar1[7] == 0xffff)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (local_50 != (uint *)0x0) break;
      if ((((iVar28 != 0) || (local_54 != 0)) || (local_res20 == (char)lVar21)) ||
         ((bVar12 || ((bVar7 & 0x40) != 0)))) goto LAB_14037dc1b;
      do {
        if ((*(int *)(lVar9 + 0x5c) != *(int *)(lVar9 + 0x60)) || (param_2[0x18] != '\0')) {
          uVar26 = (*(int *)(*(longlong *)(lVar9 + 0x70) +
                            (ulonglong)*(uint *)(param_2 + 0x1c) * 0x14) + (uint)pbVar1[4] * 0x100 +
                   (uint)pbVar1[5]) * 2;
          iVar18 = (int)*(longlong *)(param_2 + 0x20);
          uVar17 = (*(int *)(param_2 + 0x10) - iVar18) + uVar26 >> 1;
          if (uVar26 < (uint)(iVar18 - *(int *)(param_2 + 0x10))) {
            uVar17 = 0x3fffffff;
          }
          pcVar15 = "OUT-OF-RANGE";
          pbVar2 = (byte *)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar17 * 2);
          lVar21 = *(longlong *)(param_2 + 8);
          pbVar24 = pbVar2 + 2;
          uVar27 = (ulonglong)*(uint *)(lVar21 + 0x40);
          uVar25 = (longlong)pbVar24 - *(longlong *)(lVar21 + 0x30);
          if (uVar25 <= uVar27) {
            pcVar15 = "OK";
          }
          FUN_1402fc370("SANITIZE",pbVar24,0,1,*(int *)(lVar21 + 0x28) + 1,0,
                        "check_point [%p] in [%p..%p] -> %s",pbVar24,*(longlong *)(lVar21 + 0x30),
                        *(undefined8 *)(lVar21 + 0x38),pcVar15);
          if ((uVar25 <= uVar27) && ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0)) {
            uVar26 = *(int *)(lVar9 + 0x5c) + 1;
            uVar17 = *(uint *)(lVar9 + 0x60);
            if (uVar26 <= *(uint *)(lVar9 + 0x60)) {
              uVar17 = uVar26;
            }
            FUN_14040eef0(lVar9,*(undefined4 *)(param_2 + 0x1c),uVar17);
            FUN_1403f7fb0(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x1c),
                          (uint)*pbVar2 * 0x100 + (uint)pbVar2[1]);
            *param_2 = 1;
          }
          uVar17 = *(int *)(lVar9 + 0x60) - 1;
          if (*(uint *)(lVar9 + 0x5c) <= uVar17) {
            uVar17 = *(uint *)(lVar9 + 0x5c);
          }
          iVar18 = (int)*(longlong *)(param_2 + 0x20);
          uVar8 = (*(int *)(*(longlong *)(lVar9 + 0x70) + (ulonglong)uVar17 * 0x14) +
                   (uint)pbVar1[6] * 0x100 + (uint)pbVar1[7]) * 2;
          uVar26 = (uVar8 - iVar18) + *(int *)(param_2 + 0x10) >> 1;
          if (uVar8 < (uint)(iVar18 - *(int *)(param_2 + 0x10))) {
            uVar26 = 0x3fffffff;
          }
          pcVar15 = "OUT-OF-RANGE";
          pbVar2 = (byte *)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar26 * 2);
          lVar21 = *(longlong *)(param_2 + 8);
          pbVar24 = pbVar2 + 2;
          uVar27 = (ulonglong)*(uint *)(lVar21 + 0x40);
          uVar25 = (longlong)pbVar24 - *(longlong *)(lVar21 + 0x30);
          if (uVar25 <= uVar27) {
            pcVar15 = "OK";
          }
          in_stack_ffffffffffffff70 = 0;
          FUN_1402fc370("SANITIZE",pbVar24,0,1,*(int *)(lVar21 + 0x28) + 1,0,
                        "check_point [%p] in [%p..%p] -> %s",pbVar24,*(longlong *)(lVar21 + 0x30),
                        *(undefined8 *)(lVar21 + 0x38),pcVar15);
          if (uVar25 <= uVar27) {
            if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
              FUN_1403f7fb0(*(undefined8 *)(param_2 + 8),uVar17,
                            (uint)*pbVar2 * 0x100 + (uint)pbVar2[1]);
              *param_2 = 1;
            }
          }
          if ((pbVar1[2] & 0x80) != 0) {
            param_2[0x18] = 1;
            *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar9 + 0x5c);
          }
        }
        iVar18 = *(int *)(lVar9 + 0x5c);
        if ((iVar18 == *(int *)(lVar9 + 0x60)) || (*(char *)(lVar9 + 0x58) == '\0')) break;
        if (*(char *)(lVar9 + 0x59) == '\0') {
LAB_14037da0d:
          *(int *)(lVar9 + 0x5c) = iVar18 + 1;
        }
        else {
          if ((*(longlong *)(lVar9 + 0x78) == *(longlong *)(lVar9 + 0x70)) &&
             (*(int *)(lVar9 + 100) == iVar18)) {
LAB_14037da0a:
            *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
            goto LAB_14037da0d;
          }
          cVar13 = FUN_1403bf1a0(lVar9,*(int *)(lVar9 + 100) + 1);
          if (cVar13 != '\0') {
            uVar17 = *(uint *)(lVar9 + 0x5c);
            lVar21 = *(longlong *)(lVar9 + 0x70);
            uVar26 = *(uint *)(lVar9 + 100);
            puVar3 = (undefined4 *)(lVar21 + (ulonglong)uVar17 * 0x14);
            uVar29 = puVar3[1];
            uVar14 = puVar3[2];
            uVar11 = puVar3[3];
            lVar20 = *(longlong *)(lVar9 + 0x78);
            puVar4 = (undefined4 *)(lVar20 + (ulonglong)uVar26 * 0x14);
            *puVar4 = *puVar3;
            puVar4[1] = uVar29;
            puVar4[2] = uVar14;
            puVar4[3] = uVar11;
            *(undefined4 *)(lVar20 + (ulonglong)uVar26 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar17 * 0x14);
            iVar18 = *(int *)(lVar9 + 0x5c);
            goto LAB_14037da0a;
          }
        }
        if (*(uint *)(lVar9 + 0x5c) < *(uint *)(lVar9 + 0x60)) {
          lVar21 = *(longlong *)(param_3 + 0xa8);
          uVar17 = *(uint *)(*(longlong *)(lVar9 + 0x70) + (ulonglong)*(uint *)(lVar9 + 0x5c) * 0x14
                            );
          lVar20 = *param_1;
          if (lVar21 != 0) {
            uVar22 = *(ushort *)(lVar21 + (ulonglong)(uVar17 & 0xff) * 2);
            if ((uVar22 != 0xffff) && (((uVar17 ^ uVar22) & 0xffffff00) == 0)) {
              uVar23 = (ulonglong)uVar22 & 0xff;
              goto LAB_14037db16;
            }
          }
          if (uVar17 == 0xffff) {
            uVar23 = 2;
          }
          else {
            pbVar24 = (byte *)((ulonglong)*(byte *)(lVar20 + 3) +
                              (ulonglong)*(byte *)(lVar20 + 2) * 0x100 + lVar20);
            uVar26 = (uVar17 + (uint)*pbVar24 * -0x100) - (uint)pbVar24[1];
            if (uVar26 < (uint)pbVar24[3] + (uint)pbVar24[2] * 0x100) {
              uVar23 = (ulonglong)pbVar24[(ulonglong)uVar26 + 4];
            }
            else {
              uVar23 = 1;
            }
            if ((lVar21 != 0) && ((uVar17 & 0xffff0000) == 0)) {
              *(ushort *)(lVar21 + (ulonglong)(uVar17 & 0xff) * 2) =
                   (ushort)uVar17 & 0xff00 | (ushort)uVar23;
            }
          }
        }
        else {
          uVar23 = 0;
        }
LAB_14037db16:
      } while ((uint)uVar23 == uVar19);
      if (*(int *)(lVar9 + 0x5c) == *(int *)(lVar9 + 0x60)) {
        return;
      }
      if (*(char *)(lVar9 + 0x58) == '\0') {
        return;
      }
    }
    uVar17 = *(uint *)(lVar9 + 0x5c);
    if (uVar17 < *(uint *)(lVar9 + 0x60)) {
      uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x70) + 8 + (ulonglong)uVar17 * 0x14);
      uVar26 = local_50[1];
      while (uVar8 < uVar26) {
        uVar26 = local_50[-2];
        local_50 = local_50 + -3;
      }
      uVar26 = local_50[2];
      while (uVar26 < uVar8) {
        uVar26 = local_50[5];
        local_50 = local_50 + 3;
      }
    }
    if ((*local_50 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar17 == *(uint *)(lVar9 + 0x60)) {
        return;
      }
      local_54 = 0;
      if (*(char *)(lVar9 + 0x59) == '\0') {
LAB_14037dc0a:
        *(int *)(lVar9 + 0x5c) = *(int *)(lVar9 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(lVar9 + 0x78) == *(longlong *)(lVar9 + 0x70)) &&
           (*(uint *)(lVar9 + 100) == uVar17)) {
LAB_14037dc07:
          *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
          goto LAB_14037dc0a;
        }
        cVar13 = FUN_1403bf1a0(lVar9,*(int *)(lVar9 + 100) + 1);
        if (cVar13 != '\0') {
          uVar17 = *(uint *)(lVar9 + 0x5c);
          lVar21 = *(longlong *)(lVar9 + 0x70);
          uVar19 = *(uint *)(lVar9 + 100);
          puVar3 = (undefined4 *)(lVar21 + (ulonglong)uVar17 * 0x14);
          uVar29 = puVar3[1];
          uVar14 = puVar3[2];
          uVar11 = puVar3[3];
          lVar20 = *(longlong *)(lVar9 + 0x78);
          puVar4 = (undefined4 *)(lVar20 + (ulonglong)uVar19 * 0x14);
          *puVar4 = *puVar3;
          puVar4[1] = uVar29;
          puVar4[2] = uVar14;
          puVar4[3] = uVar11;
          *(undefined4 *)(lVar20 + (ulonglong)uVar19 * 0x14 + 0x10) =
               *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar17 * 0x14);
          goto LAB_14037dc07;
        }
      }
    }
    else {
LAB_14037dc1b:
      if (((uint)pbVar1[5] + (uint)pbVar1[4] * 0x100 == 0xffff) &&
         ((uint)pbVar1[6] * 0x100 + (uint)pbVar1[7] == 0xffff)) {
        if ((iVar28 != 0) && (((pbVar1[2] & 0x40) == 0 || (local_54 != 0)))) {
          pbVar24 = (byte *)*param_1;
          if ((uint)*pbVar24 * 0x100 + (uint)pbVar24[1] <= uVar19) {
            uVar23 = 1;
          }
          lVar21 = (ulonglong)
                   pbVar24[(ulonglong)pbVar24[5] + (ulonglong)pbVar24[4] * 0x100 + uVar23] +
                   (ulonglong)pbVar24[6] * 0x20;
          pbVar2 = pbVar24 + lVar21 * 8 + (ulonglong)pbVar24[7];
          if (((((uint)pbVar2[5] + (uint)pbVar24[lVar21 * 8 + (ulonglong)pbVar24[7] + 4] * 0x100 !=
                 0xffff) || ((uint)pbVar2[6] * 0x100 + (uint)pbVar2[7] != 0xffff)) ||
              (local_54 !=
               (int)(((uint)*pbVar2 * 0x100 + (uint)pbVar24[4] * -0x100 + (uint)pbVar2[1]) -
                    (uint)pbVar24[5]) / (int)(uint)CONCAT11(*pbVar24,pbVar24[1]))) ||
             (((pbVar1[2] ^ pbVar2[2]) & 0x40) != 0)) goto LAB_14037ddb5;
        }
        pbVar24 = (byte *)*param_1;
        iVar18 = (uint)pbVar24[1] + (uint)*pbVar24 * 0x100;
        bVar6 = pbVar24[7];
        lVar20 = (ulonglong)
                 pbVar24[(ulonglong)pbVar24[5] +
                         (ulonglong)(iVar18 * iVar28 + (uint)(iVar18 == 0)) +
                         (ulonglong)pbVar24[4] * 0x100] + (ulonglong)pbVar24[6] * 0x20;
        lVar21 = lVar20 * 8 + (ulonglong)bVar6;
        if (((uint)pbVar24[lVar20 * 8 + (ulonglong)bVar6 + 4] * 0x100 +
             (uint)pbVar24[lVar20 * 8 + (ulonglong)bVar6 + 5] != 0xffff) ||
           ((uint)pbVar24[lVar21 + 6] * 0x100 + (uint)pbVar24[lVar21 + 7] != 0xffff))
        goto LAB_14037ddb5;
      }
      else {
LAB_14037ddb5:
        cVar13 = *(char *)(lVar9 + 0x59);
        piVar16 = (int *)(lVar9 + 100);
        if (cVar13 == '\0') {
          piVar16 = (int *)(lVar9 + 0x5c);
        }
        if (*piVar16 != 0) {
          uVar17 = *(uint *)(lVar9 + 0x60);
          uVar19 = *(uint *)(lVar9 + 0x5c);
          if (uVar19 < uVar17) {
            uVar26 = uVar19;
            if (cVar13 != '\0') {
              uVar26 = *(uint *)(lVar9 + 100);
            }
            iVar28 = uVar26 - 1;
            uVar26 = uVar19 + 1;
            if ((uVar26 == 0xffffffff) || ((uVar19 - iVar28) + 1 < 0x100)) {
              uVar10 = *(undefined8 *)(lVar9 + 0x70);
              if (uVar26 <= uVar17) {
                uVar17 = uVar26;
              }
              uVar23 = (ulonglong)uVar17;
              if (cVar13 == '\0') {
                uVar14 = FUN_1403a1a20(lVar9,uVar10,iVar28,uVar17,0xffffffff);
                in_stack_ffffffffffffff70 = CONCAT44(uVar29,3);
                FUN_1403a1bc0(lVar9,uVar10,iVar28,uVar17,uVar14,in_stack_ffffffffffffff70);
              }
              else {
                uVar14 = FUN_1403a1a20(lVar9,uVar10,uVar19,uVar17,0xffffffff);
                iVar18 = FUN_1403a1a20(lVar9,*(undefined8 *)(lVar9 + 0x78),iVar28,
                                       *(undefined4 *)(lVar9 + 100),uVar14);
                in_stack_ffffffffffffff70 = CONCAT44(uVar29,3);
                FUN_1403a1bc0(lVar9,*(undefined8 *)(lVar9 + 0x78),iVar28,
                              *(undefined4 *)(lVar9 + 100),iVar18,in_stack_ffffffffffffff70);
                uVar19 = *(uint *)(lVar9 + 0x5c);
                uVar25 = (ulonglong)uVar19;
                if (uVar19 != uVar17) {
                  lVar21 = *(longlong *)(lVar9 + 0x70);
                  piVar16 = (int *)(lVar9 + 0xe0);
                  *piVar16 = *piVar16 + (uVar19 - uVar17);
                  if (*piVar16 < 0) {
                    *(undefined1 *)(lVar9 + 0x58) = 0;
                  }
                  uVar27 = uVar25;
                  if (*(int *)(lVar9 + 0x1c) == 2) {
joined_r0x00014037dff9:
                    while (uVar19 < uVar17) {
                      if (iVar18 != *(int *)(lVar21 + 8 + uVar25 * 0x14)) {
                        puVar5 = (uint *)(lVar21 + 4 + uVar25 * 0x14);
                        *puVar5 = *puVar5 | 3;
                      }
                      uVar19 = (int)uVar27 + 1;
                      uVar25 = uVar25 + 1;
                      uVar27 = (ulonglong)uVar19;
                    }
                  }
                  else {
                    iVar28 = *(int *)(lVar21 + 8 + uVar25 * 0x14);
                    if (iVar18 == iVar28) {
                      while (uVar19 < uVar17) {
                        uVar17 = (int)uVar23 - 1;
                        uVar23 = (ulonglong)uVar17;
                        if (*(int *)(lVar21 + 8 + uVar23 * 0x14) == iVar28) break;
                        puVar5 = (uint *)(lVar21 + 4 + uVar23 * 0x14);
                        *puVar5 = *puVar5 | 3;
                      }
                    }
                    else {
                      iVar28 = *(int *)(lVar21 + 8 + (ulonglong)(uVar17 - 1) * 0x14);
                      if (iVar18 != iVar28) goto joined_r0x00014037dff9;
                      while ((uVar19 < uVar17 && (*(int *)(lVar21 + 8 + uVar25 * 0x14) != iVar28)))
                      {
                        puVar5 = (uint *)(lVar21 + 4 + uVar25 * 0x14);
                        *puVar5 = *puVar5 | 3;
                        uVar19 = (int)uVar25 + 1;
                        uVar25 = (ulonglong)uVar19;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_14040d210(param_2,lVar9,param_1,pbVar1);
      if (*(int *)(lVar9 + 0x5c) == *(int *)(lVar9 + 0x60)) {
        return;
      }
      if (((bVar7 & 0x40) == 0) ||
         (iVar28 = *(int *)(lVar9 + 0xe0), *(int *)(lVar9 + 0xe0) = iVar28 + -1, iVar28 < 1)) {
        if (*(char *)(lVar9 + 0x59) != '\0') {
          if ((*(longlong *)(lVar9 + 0x78) != *(longlong *)(lVar9 + 0x70)) ||
             (*(int *)(lVar9 + 100) != *(int *)(lVar9 + 0x5c))) {
            cVar13 = FUN_1403bf1a0(lVar9,*(int *)(lVar9 + 100) + 1);
            if (cVar13 == '\0') goto LAB_14037df83;
            uVar17 = *(uint *)(lVar9 + 0x5c);
            lVar21 = *(longlong *)(lVar9 + 0x70);
            uVar19 = *(uint *)(lVar9 + 100);
            puVar3 = (undefined4 *)(lVar21 + (ulonglong)uVar17 * 0x14);
            uVar29 = puVar3[1];
            uVar14 = puVar3[2];
            uVar11 = puVar3[3];
            lVar20 = *(longlong *)(lVar9 + 0x78);
            puVar4 = (undefined4 *)(lVar20 + (ulonglong)uVar19 * 0x14);
            *puVar4 = *puVar3;
            puVar4[1] = uVar29;
            puVar4[2] = uVar14;
            puVar4[3] = uVar11;
            *(undefined4 *)(lVar20 + (ulonglong)uVar19 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar17 * 0x14);
          }
          *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
        }
        *(int *)(lVar9 + 0x5c) = *(int *)(lVar9 + 0x5c) + 1;
      }
    }
LAB_14037df83:
    cVar13 = *(char *)(lVar9 + 0x58);
    iVar28 = local_54;
  } while( true );
}

