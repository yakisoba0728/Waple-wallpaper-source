// Function: FUN_14035bf80
// Addr: 14035bf80
// Size: 3609 bytes


void FUN_14035bf80(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint local_res10 [2];
  longlong local_res18;
  uint local_res20 [2];
  undefined4 local_64;
  int local_60 [10];
  ulonglong uVar26;
  
  uVar7 = *(uint *)(param_2 + 0x60);
  *(byte *)(param_2 + 0xd0) = *(byte *)(param_2 + 0xd0) | 0x80;
  *(undefined2 *)(param_2 + 0x59) = 1;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  local_res18 = param_3;
  if (uVar7 != 0) {
    uVar22 = 0;
    uVar27 = 0;
    uVar20 = 0;
    local_res10[0] = 0;
    local_res20[0] = 0;
    do {
      if (*(char *)(param_2 + 0x58) == '\0') break;
      lVar19 = *(longlong *)(param_2 + 0x70);
      uVar28 = (uint)uVar20;
      iVar30 = *(int *)(lVar19 + uVar20 * 0x14);
      if (iVar30 - 0x302eU < 2) {
        if (((uint)uVar27 < uVar22) &&
           (uVar16 = *(uint *)(param_2 + 100), param_3 = local_res18, uVar22 == uVar16)) {
          if ((uVar28 == 0xffffffff) || (uVar28 - (uint)uVar27 < 0x100)) {
            uVar26 = (ulonglong)*(uint *)(param_2 + 0x60);
            if (uVar28 <= *(uint *)(param_2 + 0x60)) {
              uVar26 = uVar20;
            }
            uVar24 = (uint)uVar26;
            if (*(char *)(param_2 + 0x59) == '\0') {
              uVar15 = FUN_1403a1a20(param_2,lVar19,uVar27,uVar26,0xffffffff);
              FUN_1403a1bc0(param_2,lVar19,uVar27,uVar26,uVar15,3);
            }
            else {
              if (uVar28 == uVar24) {
                uVar22 = 0xffffffff;
              }
              else if (*(int *)(param_2 + 0x1c) == 2) {
                uVar22 = 0xffffffff;
                if (uVar28 < uVar24) {
                  uVar28 = 0xffffffff;
                  do {
                    uVar22 = *(uint *)(lVar19 + 8 + uVar20 * 0x14);
                    if (uVar28 <= uVar22) {
                      uVar22 = uVar28;
                    }
                    uVar21 = (int)uVar20 + 1;
                    uVar20 = (ulonglong)uVar21;
                    uVar28 = uVar22;
                  } while (uVar21 < uVar24);
                }
              }
              else {
                uVar27 = (ulonglong)(uVar24 - 1);
                if (*(uint *)(lVar19 + uVar20 * 0x14 + 8) <=
                    *(uint *)(lVar19 + 8 + (ulonglong)(uVar24 - 1) * 0x14)) {
                  uVar27 = uVar20;
                }
                uVar22 = *(uint *)(lVar19 + 8 + uVar27 * 0x14);
                if (uVar22 == 0xffffffff) {
                  uVar22 = 0xffffffff;
                }
              }
              iVar14 = FUN_1403a1a20(param_2,*(undefined8 *)(param_2 + 0x78),local_res10[0],uVar16,
                                     uVar22);
              FUN_1403a1bc0(param_2,*(undefined8 *)(param_2 + 0x78),local_res10[0],uVar16,iVar14,3);
              uVar22 = *(uint *)(param_2 + 0x5c);
              uVar20 = (ulonglong)uVar22;
              if (uVar22 != uVar24) {
                lVar19 = *(longlong *)(param_2 + 0x70);
                piVar1 = (int *)(param_2 + 0xe0);
                *piVar1 = *piVar1 + (uVar22 - uVar24);
                if (*piVar1 < 0) {
                  *(undefined1 *)(param_2 + 0x58) = 0;
                }
                uVar27 = uVar20;
                if (*(int *)(param_2 + 0x1c) == 2) {
joined_r0x00014035c2d2:
                  while (uVar22 < uVar24) {
                    if (iVar14 != *(int *)(lVar19 + 8 + uVar20 * 0x14)) {
                      puVar6 = (uint *)(lVar19 + 4 + uVar20 * 0x14);
                      *puVar6 = *puVar6 | 3;
                    }
                    uVar22 = (int)uVar27 + 1;
                    uVar20 = uVar20 + 1;
                    uVar27 = (ulonglong)uVar22;
                  }
                }
                else {
                  iVar17 = *(int *)(lVar19 + 8 + uVar20 * 0x14);
                  if (iVar14 == iVar17) {
                    while (uVar22 < uVar24) {
                      uVar24 = (int)uVar26 - 1;
                      uVar26 = (ulonglong)uVar24;
                      if (*(int *)(lVar19 + 8 + uVar26 * 0x14) == iVar17) break;
                      puVar6 = (uint *)(lVar19 + 4 + uVar26 * 0x14);
                      *puVar6 = *puVar6 | 3;
                    }
                  }
                  else {
                    iVar17 = *(int *)(lVar19 + 8 + (ulonglong)(uVar24 - 1) * 0x14);
                    if (iVar14 != iVar17) goto joined_r0x00014035c2d2;
                    while ((uVar22 < uVar24 && (*(int *)(lVar19 + 8 + uVar20 * 0x14) != iVar17))) {
                      puVar6 = (uint *)(lVar19 + 4 + uVar20 * 0x14);
                      *puVar6 = *puVar6 | 3;
                      uVar22 = (int)uVar20 + 1;
                      uVar20 = (ulonglong)uVar22;
                    }
                  }
                }
              }
              uVar27 = (ulonglong)local_res10[0];
              uVar22 = local_res20[0];
            }
          }
          if (*(char *)(param_2 + 0x59) != '\0') {
            if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
               (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
              cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
              if (cVar13 == '\0') break;
              uVar28 = *(uint *)(param_2 + 0x5c);
              lVar19 = *(longlong *)(param_2 + 0x70);
              uVar16 = *(uint *)(param_2 + 100);
              puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar28 * 0x14);
              uVar15 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              lVar8 = *(longlong *)(param_2 + 0x78);
              puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar16 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar15;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined4 *)(lVar8 + (ulonglong)uVar16 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar28 * 0x14);
            }
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
          }
          param_3 = local_res18;
          *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
          cVar13 = FUN_1403e6b90(local_res18,iVar30);
          if (cVar13 == '\0') {
            iVar30 = (int)uVar27;
            if ((1 < (uVar22 + 1) - iVar30) && (*(uint *)(param_2 + 0x1c) < 2)) {
              FUN_1403ec3f0(param_2,uVar27);
            }
            lVar19 = *(longlong *)(param_2 + 0x78);
            puVar4 = (undefined8 *)(lVar19 + (ulonglong)uVar22 * 0x14);
            uVar18 = *puVar4;
            uVar12 = puVar4[1];
            uVar15 = *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar22 * 0x14);
            puVar4 = (undefined8 *)(lVar19 + uVar27 * 0x14);
            FUN_1404210f0(lVar19 + (ulonglong)(iVar30 + 1) * 0x14,puVar4,
                          (ulonglong)(uVar22 - iVar30) * 0x14);
            *puVar4 = uVar18;
            puVar4[1] = uVar12;
            *(undefined4 *)(puVar4 + 2) = uVar15;
            uVar22 = *(uint *)(param_2 + 100);
            uVar27 = (ulonglong)uVar22;
            local_res10[0] = uVar22;
            local_res20[0] = uVar22;
            goto LAB_14035ccf8;
          }
        }
        else {
          if ((*(byte *)(param_2 + 0x18) & 0x10) == 0) {
            local_res10[0] = 0;
            lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
            uVar18 = 0;
            if (lVar19 != 0) {
              uVar18 = *(undefined8 *)(lVar19 + 0x10);
            }
            iVar14 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                               (param_3,*(undefined8 *)(param_3 + 0x98),0x25cc,local_res10,uVar18);
            if (iVar14 != 0) {
              cVar13 = FUN_1403e6b90(param_3,iVar30);
              if (cVar13 == '\0') {
                iVar14 = 0x25cc;
                iVar17 = iVar30;
              }
              else {
                iVar17 = 0x25cc;
                iVar14 = iVar30;
              }
              cVar13 = FUN_1403eaf70(param_2,1,2);
              if (cVar13 == '\0') goto LAB_14035c4b3;
              uVar22 = *(uint *)(param_2 + 0x5c);
              if (uVar22 < *(uint *)(param_2 + 0x60)) {
                lVar19 = *(longlong *)(param_2 + 0x70);
              }
              else {
                uVar22 = *(int *)(param_2 + 100) - 1;
                if (*(int *)(param_2 + 100) == 0) {
                  uVar22 = 0;
                }
                lVar19 = *(longlong *)(param_2 + 0x78);
              }
              puVar4 = (undefined8 *)(lVar19 + (ulonglong)uVar22 * 0x14);
              uVar18 = puVar4[1];
              piVar1 = (int *)(lVar19 + (ulonglong)uVar22 * 0x14);
              uVar22 = *(uint *)(param_2 + 100);
              lVar19 = *(longlong *)(param_2 + 0x78);
              puVar5 = (undefined8 *)(lVar19 + (ulonglong)uVar22 * 0x14);
              *puVar5 = *puVar4;
              puVar5[1] = uVar18;
              piVar23 = (int *)(lVar19 + (ulonglong)uVar22 * 0x14);
              piVar23[4] = piVar1[4];
              *piVar23 = iVar17;
              iVar30 = piVar1[1];
              iVar17 = piVar1[2];
              iVar29 = piVar1[3];
              piVar23[5] = *piVar1;
              piVar23[6] = iVar30;
              piVar23[7] = iVar17;
              piVar23[8] = iVar29;
              piVar23[9] = piVar1[4];
              piVar23[5] = iVar14;
              *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 2;
              uVar22 = *(uint *)(param_2 + 100);
              uVar27 = (ulonglong)uVar22;
              local_res10[0] = uVar22;
              local_res20[0] = uVar22;
              goto LAB_14035ccf8;
            }
          }
          if (*(char *)(param_2 + 0x59) == '\0') {
            iVar30 = *(int *)(param_2 + 0x5c);
          }
          else {
            if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
               (iVar30 = *(int *)(param_2 + 0x5c), *(int *)(param_2 + 100) != iVar30)) {
              cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
              if (cVar13 == '\0') goto LAB_14035c4b3;
              uVar22 = *(uint *)(param_2 + 0x5c);
              lVar19 = *(longlong *)(param_2 + 0x70);
              uVar28 = *(uint *)(param_2 + 100);
              puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar22 * 0x14);
              uVar15 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              lVar8 = *(longlong *)(param_2 + 0x78);
              puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar28 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar15;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined4 *)(lVar8 + (ulonglong)uVar28 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar22 * 0x14);
              iVar30 = *(int *)(param_2 + 0x5c);
            }
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
          }
          *(int *)(param_2 + 0x5c) = iVar30 + 1;
        }
LAB_14035c4b3:
        uVar22 = *(uint *)(param_2 + 100);
        uVar27 = (ulonglong)uVar22;
        local_res10[0] = uVar22;
        local_res20[0] = uVar22;
      }
      else {
        local_res10[0] = *(uint *)(param_2 + 100);
        uVar27 = (ulonglong)local_res10[0];
        if (((iVar30 - 0x1100U < 0x60) || (iVar30 - 0xa960U < 0x1d)) && (uVar28 + 1 < uVar7)) {
          iVar14 = *(int *)(lVar19 + (ulonglong)(uVar28 + 1) * 0x14);
          if ((0x47 < iVar14 - 0x1160U) && (uVar22 = local_res20[0], 0x16 < iVar14 - 0xd7b0U)) {
LAB_14035cc92:
            if (*(char *)(param_2 + 0x59) == '\0') {
              iVar30 = *(int *)(param_2 + 0x5c);
            }
            else {
              if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
                 (iVar30 = *(int *)(param_2 + 0x5c), *(int *)(param_2 + 100) != iVar30)) {
                cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
                if (cVar13 == '\0') goto LAB_14035ccf8;
                uVar28 = *(uint *)(param_2 + 0x5c);
                lVar19 = *(longlong *)(param_2 + 0x70);
                uVar16 = *(uint *)(param_2 + 100);
                puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar28 * 0x14);
                uVar15 = puVar2[1];
                uVar9 = puVar2[2];
                uVar10 = puVar2[3];
                lVar8 = *(longlong *)(param_2 + 0x78);
                puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar16 * 0x14);
                *puVar3 = *puVar2;
                puVar3[1] = uVar15;
                puVar3[2] = uVar9;
                puVar3[3] = uVar10;
                *(undefined4 *)(lVar8 + (ulonglong)uVar16 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar28 * 0x14);
                iVar30 = *(int *)(param_2 + 0x5c);
              }
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
            }
            *(int *)(param_2 + 0x5c) = iVar30 + 1;
            goto LAB_14035ccf8;
          }
          iVar17 = 0;
          iVar29 = 0;
          if (uVar28 + 2 < uVar7) {
            iVar17 = *(int *)(lVar19 + (ulonglong)(uVar28 + 2) * 0x14);
            if ((iVar17 - 0x11a8U < 0x58) || (iVar17 - 0xd7cbU < 0x31)) {
              iVar29 = iVar17 + -0x11a7;
            }
            else {
              iVar17 = 0;
            }
          }
          iVar25 = (iVar17 != 0) + 2;
          FUN_14040eef0(param_2,uVar20,iVar25 + uVar28);
          if (((iVar30 - 0x1100U < 0x13) && (iVar14 - 0x1161U < 0x15)) &&
             ((iVar17 == 0 || (iVar17 - 0x11a8U < 0x1b)))) {
            local_res20[0] = (iVar30 * 0x15 + iVar14) * 0x1c + -0x28469c + iVar29;
            cVar13 = FUN_1403d0d90(param_3);
            if (cVar13 != '\0') {
              FUN_14038b7a0(param_2,iVar25,1,local_res20);
              uVar27 = (ulonglong)local_res10[0];
              uVar22 = local_res10[0] + 1;
              local_res20[0] = uVar22;
              goto LAB_14035ccf8;
            }
          }
          *(undefined1 *)
           (*(longlong *)(param_2 + 0x70) + 0x13 + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) = 1;
          if (*(char *)(param_2 + 0x59) == '\0') {
            iVar30 = *(int *)(param_2 + 0x5c);
LAB_14035c65d:
            *(int *)(param_2 + 0x5c) = iVar30 + 1;
          }
          else {
            if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
               (iVar30 = *(int *)(param_2 + 0x5c), *(int *)(param_2 + 100) == iVar30)) {
LAB_14035c655:
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              goto LAB_14035c65d;
            }
            cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar13 != '\0') {
              uVar22 = *(uint *)(param_2 + 0x5c);
              lVar19 = *(longlong *)(param_2 + 0x70);
              uVar28 = *(uint *)(param_2 + 100);
              puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar22 * 0x14);
              uVar15 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              lVar8 = *(longlong *)(param_2 + 0x78);
              puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar28 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar15;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined4 *)(lVar8 + (ulonglong)uVar28 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar22 * 0x14);
              iVar30 = *(int *)(param_2 + 0x5c);
              goto LAB_14035c655;
            }
          }
          *(undefined1 *)
           (*(longlong *)(param_2 + 0x70) + 0x13 + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) = 2;
          if (*(char *)(param_2 + 0x59) == '\0') {
LAB_14035c6cb:
            *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
          }
          else {
            if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
               (*(int *)(param_2 + 100) == *(int *)(param_2 + 0x5c))) {
LAB_14035c6c8:
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              goto LAB_14035c6cb;
            }
            cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar13 != '\0') {
              uVar22 = *(uint *)(param_2 + 0x5c);
              lVar19 = *(longlong *)(param_2 + 0x70);
              uVar28 = *(uint *)(param_2 + 100);
              puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar22 * 0x14);
              uVar15 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              lVar8 = *(longlong *)(param_2 + 0x78);
              puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar28 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar15;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined4 *)(lVar8 + (ulonglong)uVar28 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar22 * 0x14);
              goto LAB_14035c6c8;
            }
          }
          if (iVar17 == 0) {
            uVar22 = local_res10[0] + 2;
          }
          else {
            *(undefined1 *)
             (*(longlong *)(param_2 + 0x70) + 0x13 + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) =
                 3;
            if (*(char *)(param_2 + 0x59) == '\0') {
LAB_14035c73a:
              *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
            }
            else {
              if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
                 (*(int *)(param_2 + 100) == *(int *)(param_2 + 0x5c))) {
LAB_14035c737:
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
                goto LAB_14035c73a;
              }
              cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
              if (cVar13 != '\0') {
                uVar22 = *(uint *)(param_2 + 0x5c);
                lVar19 = *(longlong *)(param_2 + 0x70);
                uVar28 = *(uint *)(param_2 + 100);
                puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar22 * 0x14);
                uVar15 = puVar2[1];
                uVar9 = puVar2[2];
                uVar10 = puVar2[3];
                lVar8 = *(longlong *)(param_2 + 0x78);
                puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar28 * 0x14);
                *puVar3 = *puVar2;
                puVar3[1] = uVar15;
                puVar3[2] = uVar9;
                puVar3[3] = uVar10;
                *(undefined4 *)(lVar8 + (ulonglong)uVar28 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar19 + 0x10 + (ulonglong)uVar22 * 0x14);
                goto LAB_14035c737;
              }
            }
            uVar22 = local_res10[0] + 3;
          }
          uVar27 = (ulonglong)local_res10[0];
          local_res20[0] = uVar22;
          if (*(char *)(param_2 + 0x58) == '\0') break;
          if (uVar22 - local_res10[0] < 2) goto LAB_14035ccf8;
        }
        else {
          uVar28 = iVar30 - 0xac00;
          if (0x2ba3 < uVar28) goto LAB_14035cc92;
          local_64 = 0;
          lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
          uVar18 = 0;
          if (lVar19 != 0) {
            uVar18 = *(undefined8 *)(lVar19 + 0x10);
          }
          iVar14 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                             (param_3,*(undefined8 *)(param_3 + 0x98),iVar30,&local_64,uVar18);
          uVar22 = (uVar28 % 0x24c) % 0x1c;
          if (((uVar22 == 0) && (uVar16 = *(int *)(param_2 + 0x5c) + 1, uVar16 < uVar7)) &&
             (iVar17 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar16 * 0x14),
             iVar17 - 0x11a8U < 0x1b)) {
            local_64 = 0;
            iVar30 = iVar17 + -0x11a7 + iVar30;
            lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
            uVar18 = 0;
            if (lVar19 != 0) {
              uVar18 = *(undefined8 *)(lVar19 + 0x10);
            }
            iVar17 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                               (param_3,*(undefined8 *)(param_3 + 0x98),iVar30,&local_64,uVar18);
            if (iVar17 != 0) {
              cVar13 = FUN_1403eaf70(param_2,2,1);
              if (cVar13 != '\0') {
                uVar22 = *(uint *)(param_2 + 0x5c);
                uVar20 = (ulonglong)uVar22;
                uVar28 = *(uint *)(param_2 + 0x1c);
                if (uVar28 < 2) {
                  FUN_1403ec280(param_2,uVar20);
                }
                else {
                  uVar16 = *(uint *)(param_2 + 0x60);
                  if (uVar22 + 2 <= *(uint *)(param_2 + 0x60)) {
                    uVar16 = uVar22 + 2;
                  }
                  uVar27 = (ulonglong)uVar16;
                  if (1 < uVar16 - uVar22) {
                    lVar19 = *(longlong *)(param_2 + 0x70);
                    iVar14 = FUN_1403a1a20(param_2,lVar19,uVar22,uVar27,0xffffffff);
                    if (uVar22 != uVar16) {
                      piVar1 = (int *)(param_2 + 0xe0);
                      *piVar1 = *piVar1 + (uVar22 - uVar16);
                      if (*piVar1 < 0) {
                        *(undefined1 *)(param_2 + 0x58) = 0;
                      }
                      uVar26 = uVar20;
                      if (uVar28 == 2) {
joined_r0x00014035c979:
                        while (uVar22 < uVar16) {
                          if (iVar14 != *(int *)(lVar19 + 8 + uVar20 * 0x14)) {
                            puVar6 = (uint *)(lVar19 + 4 + uVar20 * 0x14);
                            *puVar6 = *puVar6 | 3;
                          }
                          uVar22 = (int)uVar26 + 1;
                          uVar20 = uVar20 + 1;
                          uVar26 = (ulonglong)uVar22;
                        }
                      }
                      else {
                        iVar17 = *(int *)(lVar19 + 8 + uVar20 * 0x14);
                        if (iVar14 == iVar17) {
                          while (uVar22 < uVar16) {
                            uVar16 = (int)uVar27 - 1;
                            uVar27 = (ulonglong)uVar16;
                            if (*(int *)(lVar19 + 8 + uVar27 * 0x14) == iVar17) break;
                            puVar6 = (uint *)(lVar19 + 4 + uVar27 * 0x14);
                            *puVar6 = *puVar6 | 3;
                          }
                        }
                        else {
                          iVar17 = *(int *)(lVar19 + 8 + (ulonglong)(uVar16 - 1) * 0x14);
                          if (iVar14 != iVar17) goto joined_r0x00014035c979;
                          while ((uVar22 < uVar16 &&
                                 (*(int *)(lVar19 + 8 + uVar20 * 0x14) != iVar17))) {
                            puVar6 = (uint *)(lVar19 + 4 + uVar20 * 0x14);
                            *puVar6 = *puVar6 | 3;
                            uVar22 = (int)uVar20 + 1;
                            uVar20 = (ulonglong)uVar22;
                          }
                        }
                      }
                    }
                  }
                }
                uVar22 = *(uint *)(param_2 + 0x5c);
                if (uVar22 < *(uint *)(param_2 + 0x60)) {
                  lVar19 = *(longlong *)(param_2 + 0x70);
                }
                else {
                  uVar22 = *(int *)(param_2 + 100) - 1;
                  if (*(int *)(param_2 + 100) == 0) {
                    uVar22 = 0;
                  }
                  lVar19 = *(longlong *)(param_2 + 0x78);
                }
                puVar2 = (undefined4 *)(lVar19 + (ulonglong)uVar22 * 0x14);
                uVar15 = puVar2[1];
                uVar9 = puVar2[2];
                uVar10 = puVar2[3];
                uVar28 = *(uint *)(param_2 + 100);
                lVar8 = *(longlong *)(param_2 + 0x78);
                puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar28 * 0x14);
                *puVar3 = *puVar2;
                puVar3[1] = uVar15;
                puVar3[2] = uVar9;
                puVar3[3] = uVar10;
                piVar1 = (int *)(lVar8 + (ulonglong)uVar28 * 0x14);
                piVar1[4] = *(int *)(lVar19 + (ulonglong)uVar22 * 0x14 + 0x10);
                *piVar1 = iVar30;
                *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 2;
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              }
              uVar27 = (ulonglong)local_res10[0];
              uVar22 = local_res10[0] + 1;
              local_res20[0] = uVar22;
              goto LAB_14035ccf8;
            }
            FUN_14040eef0(param_2,*(int *)(param_2 + 0x5c),*(int *)(param_2 + 0x5c) + 2);
            uVar27 = (ulonglong)local_res10[0];
          }
          iVar30 = (int)uVar27;
          if ((iVar14 != 0) &&
             (((uVar22 != 0 || (uVar16 = *(int *)(param_2 + 0x5c) + 1, uVar7 <= uVar16)) ||
              ((iVar17 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar16 * 0x14),
               0x57 < iVar17 - 0x11a8U && (0x30 < iVar17 - 0xd7cbU)))))) {
LAB_14035cc7e:
            local_res20[0] = iVar30 + 1;
            uVar22 = local_res20[0];
            goto LAB_14035cc92;
          }
          local_60[0] = uVar28 / 0x24c + 0x1100;
          iVar17 = (uVar28 % 0x24c) / 0x1c + 0x1161;
          local_64 = 0;
          lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
          uVar18 = 0;
          if (lVar19 != 0) {
            uVar18 = *(undefined8 *)(lVar19 + 0x10);
          }
          local_60[1] = iVar17;
          local_60[2] = uVar22 + 0x11a7;
          iVar29 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                             (param_3,*(undefined8 *)(param_3 + 0x98),local_60[0],&local_64,uVar18);
          if (iVar29 == 0) {
LAB_14035cc39:
            if (uVar22 == 0) {
              iVar17 = *(int *)(param_2 + 0x5c);
              if ((iVar17 + 1U < uVar7) &&
                 ((iVar29 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)(iVar17 + 1U) * 0x14
                                    ), iVar29 - 0x11a8U < 0x58 || (iVar29 - 0xd7cbU < 0x31)))) {
                FUN_14040eef0(param_2,iVar17,iVar17 + 2);
              }
            }
LAB_14035cc79:
            uVar22 = local_res20[0];
            if (iVar14 == 0) goto LAB_14035cc92;
            goto LAB_14035cc7e;
          }
          local_64 = 0;
          lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
          uVar18 = 0;
          if (lVar19 != 0) {
            uVar18 = *(undefined8 *)(lVar19 + 0x10);
          }
          iVar17 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                             (param_3,*(undefined8 *)(param_3 + 0x98),iVar17,&local_64,uVar18);
          if (iVar17 == 0) goto LAB_14035cc39;
          if (uVar22 != 0) {
            local_64 = 0;
            lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
            uVar18 = 0;
            if (lVar19 != 0) {
              uVar18 = *(undefined8 *)(lVar19 + 0x10);
            }
            iVar17 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                               (param_3,*(undefined8 *)(param_3 + 0x98),uVar22 + 0x11a7,&local_64,
                                uVar18);
            if (iVar17 != 0) goto LAB_14035cb4b;
            goto LAB_14035cc79;
          }
LAB_14035cb4b:
          uVar28 = (uVar22 != 0) + 2;
          cVar13 = FUN_1403eaf70(param_2,1);
          if (cVar13 != '\0') {
            uVar16 = *(uint *)(param_2 + 0x5c);
            if (uVar16 < *(uint *)(param_2 + 0x60)) {
              lVar19 = *(longlong *)(param_2 + 0x70);
            }
            else {
              uVar16 = *(int *)(param_2 + 100) - 1;
              if (*(int *)(param_2 + 100) == 0) {
                uVar16 = 0;
              }
              lVar19 = *(longlong *)(param_2 + 0x78);
            }
            piVar1 = (int *)(lVar19 + (ulonglong)uVar16 * 0x14);
            uVar20 = 0;
            piVar23 = (int *)(*(longlong *)(param_2 + 0x78) +
                             (ulonglong)*(uint *)(param_2 + 100) * 0x14);
            do {
              iVar29 = piVar1[1];
              iVar25 = piVar1[2];
              iVar11 = piVar1[3];
              iVar17 = local_60[uVar20];
              uVar16 = (int)uVar20 + 1;
              uVar20 = (ulonglong)uVar16;
              *piVar23 = *piVar1;
              piVar23[1] = iVar29;
              piVar23[2] = iVar25;
              piVar23[3] = iVar11;
              piVar23[4] = piVar1[4];
              *piVar23 = iVar17;
              piVar23 = piVar23 + 5;
            } while (uVar16 < uVar28);
            *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + uVar28;
          }
          if ((iVar14 != 0) && (uVar22 == 0)) {
            FUN_1403ecfd0(param_2);
            uVar28 = 3;
          }
          if (*(char *)(param_2 + 0x58) == '\0') break;
          lVar19 = *(longlong *)(param_2 + 0x78);
          local_res20[0] = uVar28 + iVar30;
          *(undefined1 *)(lVar19 + 0x13 + uVar27 * 0x14) = 1;
          *(undefined1 *)(lVar19 + 0x13 + (ulonglong)(iVar30 + 1) * 0x14) = 2;
          if (iVar30 + 2U < local_res20[0]) {
            *(undefined1 *)(lVar19 + 0x13 + (ulonglong)(iVar30 + 2U) * 0x14) = 3;
          }
        }
        uVar22 = local_res20[0];
        if ((1 << ((byte)*(undefined4 *)(param_2 + 0x1c) & 0x1f) & 9U) != 0) {
          FUN_1403ec3f0(param_2,uVar27,local_res20[0]);
        }
      }
LAB_14035ccf8:
      uVar20 = (ulonglong)*(uint *)(param_2 + 0x5c);
    } while (*(uint *)(param_2 + 0x5c) < uVar7);
  }
  if ((*(char *)(param_2 + 0x58) != '\0') &&
     (cVar13 = FUN_1403ed060(param_2,*(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x5c)),
     cVar13 != '\0')) {
    if (*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) {
      *(longlong *)(param_2 + 0x80) = *(longlong *)(param_2 + 0x70);
      *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x78);
    }
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 100);
  }
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_2 + 0x59) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  return;
}

