// Function: FUN_14035c050
// Addr: 14035c050
// Size: 3273 bytes


void FUN_14035c050(undefined8 param_1,longlong param_2,longlong param_3)

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
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint local_res10 [2];
  longlong local_res18;
  uint local_res20 [2];
  undefined4 local_64;
  int local_60 [10];
  ulonglong uVar25;
  
  uVar7 = *(uint *)(param_2 + 0x60);
  *(byte *)(param_2 + 0xd0) = *(byte *)(param_2 + 0xd0) | 0x80;
  *(undefined2 *)(param_2 + 0x59) = 1;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  local_res18 = param_3;
  if (uVar7 != 0) {
    uVar21 = 0;
    uVar26 = 0;
    uVar19 = 0;
    local_res10[0] = 0;
    local_res20[0] = 0;
    do {
      if (*(char *)(param_2 + 0x58) == '\0') break;
      lVar18 = *(longlong *)(param_2 + 0x70);
      uVar27 = (uint)uVar19;
      iVar29 = *(int *)(lVar18 + uVar19 * 0x14);
      if (iVar29 - 0x302eU < 2) {
        if (((uint)uVar26 < uVar21) &&
           (uVar15 = *(uint *)(param_2 + 100), param_3 = local_res18, uVar21 == uVar15)) {
          if ((uVar27 == 0xffffffff) || (uVar27 - (uint)uVar26 < 0x100)) {
            uVar25 = (ulonglong)*(uint *)(param_2 + 0x60);
            if (uVar27 <= *(uint *)(param_2 + 0x60)) {
              uVar25 = uVar19;
            }
            uVar23 = (uint)uVar25;
            if (*(char *)(param_2 + 0x59) == '\0') {
              uVar14 = FUN_1403a1af0(param_2,lVar18,uVar26,uVar25,0xffffffff);
              FUN_1403a1c90(param_2,lVar18,uVar26,uVar25,uVar14,3);
            }
            else {
              if (uVar27 == uVar23) {
                uVar21 = 0xffffffff;
              }
              else if (*(int *)(param_2 + 0x1c) == 2) {
                uVar21 = 0xffffffff;
                if (uVar27 < uVar23) {
                  uVar27 = 0xffffffff;
                  do {
                    uVar21 = *(uint *)(lVar18 + 8 + uVar19 * 0x14);
                    if (uVar27 <= uVar21) {
                      uVar21 = uVar27;
                    }
                    uVar20 = (int)uVar19 + 1;
                    uVar19 = (ulonglong)uVar20;
                    uVar27 = uVar21;
                  } while (uVar20 < uVar23);
                }
              }
              else {
                uVar26 = (ulonglong)(uVar23 - 1);
                if (*(uint *)(lVar18 + uVar19 * 0x14 + 8) <=
                    *(uint *)(lVar18 + 8 + (ulonglong)(uVar23 - 1) * 0x14)) {
                  uVar26 = uVar19;
                }
                uVar21 = *(uint *)(lVar18 + 8 + uVar26 * 0x14);
                if (uVar21 == 0xffffffff) {
                  uVar21 = 0xffffffff;
                }
              }
              iVar13 = FUN_1403a1af0(param_2,*(undefined8 *)(param_2 + 0x78),local_res10[0],uVar15,
                                     uVar21);
              FUN_1403a1c90(param_2,*(undefined8 *)(param_2 + 0x78),local_res10[0],uVar15,iVar13,3);
              uVar21 = *(uint *)(param_2 + 0x5c);
              uVar19 = (ulonglong)uVar21;
              if (uVar21 != uVar23) {
                lVar18 = *(longlong *)(param_2 + 0x70);
                piVar1 = (int *)(param_2 + 0xe0);
                *piVar1 = *piVar1 + (uVar21 - uVar23);
                if (*piVar1 < 0) {
                  *(undefined1 *)(param_2 + 0x58) = 0;
                }
                uVar26 = uVar19;
                if (*(int *)(param_2 + 0x1c) == 2) {
joined_r0x00014035c3a2:
                  while (uVar21 < uVar23) {
                    if (iVar13 != *(int *)(lVar18 + 8 + uVar19 * 0x14)) {
                      puVar6 = (uint *)(lVar18 + 4 + uVar19 * 0x14);
                      *puVar6 = *puVar6 | 3;
                    }
                    uVar21 = (int)uVar26 + 1;
                    uVar19 = uVar19 + 1;
                    uVar26 = (ulonglong)uVar21;
                  }
                }
                else {
                  iVar16 = *(int *)(lVar18 + 8 + uVar19 * 0x14);
                  if (iVar13 == iVar16) {
                    while (uVar21 < uVar23) {
                      uVar23 = (int)uVar25 - 1;
                      uVar25 = (ulonglong)uVar23;
                      if (*(int *)(lVar18 + 8 + uVar25 * 0x14) == iVar16) break;
                      puVar6 = (uint *)(lVar18 + 4 + uVar25 * 0x14);
                      *puVar6 = *puVar6 | 3;
                    }
                  }
                  else {
                    iVar16 = *(int *)(lVar18 + 8 + (ulonglong)(uVar23 - 1) * 0x14);
                    if (iVar13 != iVar16) goto joined_r0x00014035c3a2;
                    while ((uVar21 < uVar23 && (*(int *)(lVar18 + 8 + uVar19 * 0x14) != iVar16))) {
                      puVar6 = (uint *)(lVar18 + 4 + uVar19 * 0x14);
                      *puVar6 = *puVar6 | 3;
                      uVar21 = (int)uVar19 + 1;
                      uVar19 = (ulonglong)uVar21;
                    }
                  }
                }
              }
              uVar26 = (ulonglong)local_res10[0];
              uVar21 = local_res20[0];
            }
          }
          if (*(char *)(param_2 + 0x59) != '\0') {
            if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
               (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
              cVar12 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + 1);
              if (cVar12 == '\0') break;
              uVar27 = *(uint *)(param_2 + 0x5c);
              lVar18 = *(longlong *)(param_2 + 0x70);
              uVar15 = *(uint *)(param_2 + 100);
              puVar2 = (undefined4 *)(lVar18 + (ulonglong)uVar27 * 0x14);
              uVar14 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              lVar8 = *(longlong *)(param_2 + 0x78);
              puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar15 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar14;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined4 *)(lVar8 + (ulonglong)uVar15 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar18 + 0x10 + (ulonglong)uVar27 * 0x14);
            }
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
          }
          param_3 = local_res18;
          *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
          cVar12 = FUN_1403e6c60(local_res18,iVar29);
          if (cVar12 == '\0') {
            iVar29 = (int)uVar26;
            if ((1 < (uVar21 + 1) - iVar29) && (*(uint *)(param_2 + 0x1c) < 2)) {
              FUN_1403ec4c0(param_2,uVar26);
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(*(longlong *)(param_2 + 0x78) + (ulonglong)(iVar29 + 1) * 0x14,
                          *(longlong *)(param_2 + 0x78) + uVar26 * 0x14,
                          (ulonglong)(uVar21 - iVar29) * 0x14);
          }
        }
        else {
          if ((*(byte *)(param_2 + 0x18) & 0x10) == 0) {
            local_res10[0] = 0;
            lVar18 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
            uVar17 = 0;
            if (lVar18 != 0) {
              uVar17 = *(undefined8 *)(lVar18 + 0x10);
            }
            iVar13 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                               (param_3,*(undefined8 *)(param_3 + 0x98),0x25cc,local_res10,uVar17);
            if (iVar13 != 0) {
              cVar12 = FUN_1403e6c60(param_3,iVar29);
              if (cVar12 == '\0') {
                iVar13 = 0x25cc;
                iVar16 = iVar29;
              }
              else {
                iVar16 = 0x25cc;
                iVar13 = iVar29;
              }
              cVar12 = func_0x0001403eb040(param_2,1,2);
              if (cVar12 == '\0') goto LAB_14035c583;
              uVar21 = *(uint *)(param_2 + 0x5c);
              if (uVar21 < *(uint *)(param_2 + 0x60)) {
                lVar18 = *(longlong *)(param_2 + 0x70);
              }
              else {
                uVar21 = *(int *)(param_2 + 100) - 1;
                if (*(int *)(param_2 + 100) == 0) {
                  uVar21 = 0;
                }
                lVar18 = *(longlong *)(param_2 + 0x78);
              }
              puVar4 = (undefined8 *)(lVar18 + (ulonglong)uVar21 * 0x14);
              uVar17 = puVar4[1];
              piVar1 = (int *)(lVar18 + (ulonglong)uVar21 * 0x14);
              uVar21 = *(uint *)(param_2 + 100);
              lVar18 = *(longlong *)(param_2 + 0x78);
              puVar5 = (undefined8 *)(lVar18 + (ulonglong)uVar21 * 0x14);
              *puVar5 = *puVar4;
              puVar5[1] = uVar17;
              piVar22 = (int *)(lVar18 + (ulonglong)uVar21 * 0x14);
              piVar22[4] = piVar1[4];
              *piVar22 = iVar16;
              iVar29 = piVar1[1];
              iVar16 = piVar1[2];
              iVar28 = piVar1[3];
              piVar22[5] = *piVar1;
              piVar22[6] = iVar29;
              piVar22[7] = iVar16;
              piVar22[8] = iVar28;
              piVar22[9] = piVar1[4];
              piVar22[5] = iVar13;
              *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 2;
              uVar21 = *(uint *)(param_2 + 100);
              uVar26 = (ulonglong)uVar21;
              local_res10[0] = uVar21;
              local_res20[0] = uVar21;
              goto UNWIND_INFO_14035cd3b_ExceptionHandler_1;
            }
          }
          if (*(char *)(param_2 + 0x59) == '\0') {
            iVar29 = *(int *)(param_2 + 0x5c);
          }
          else {
            if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
               (iVar29 = *(int *)(param_2 + 0x5c), *(int *)(param_2 + 100) != iVar29)) {
              cVar12 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + 1);
              if (cVar12 == '\0') goto LAB_14035c583;
              uVar21 = *(uint *)(param_2 + 0x5c);
              lVar18 = *(longlong *)(param_2 + 0x70);
              uVar27 = *(uint *)(param_2 + 100);
              puVar2 = (undefined4 *)(lVar18 + (ulonglong)uVar21 * 0x14);
              uVar14 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              lVar8 = *(longlong *)(param_2 + 0x78);
              puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar27 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar14;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined4 *)(lVar8 + (ulonglong)uVar27 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar18 + 0x10 + (ulonglong)uVar21 * 0x14);
              iVar29 = *(int *)(param_2 + 0x5c);
            }
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
          }
          *(int *)(param_2 + 0x5c) = iVar29 + 1;
        }
LAB_14035c583:
        uVar21 = *(uint *)(param_2 + 100);
        uVar26 = (ulonglong)uVar21;
        local_res10[0] = uVar21;
        local_res20[0] = uVar21;
      }
      else {
        local_res10[0] = *(uint *)(param_2 + 100);
        uVar26 = (ulonglong)local_res10[0];
        if (((iVar29 - 0x1100U < 0x60) || (iVar29 - 0xa960U < 0x1d)) && (uVar27 + 1 < uVar7)) {
          iVar13 = *(int *)(lVar18 + (ulonglong)(uVar27 + 1) * 0x14);
          if ((0x47 < iVar13 - 0x1160U) && (uVar21 = local_res20[0], 0x16 < iVar13 - 0xd7b0U)) {
UNWIND_INFO_14035cd3b_UnwindCodes_17__UnwindOpCode:
            if (*(char *)(param_2 + 0x59) == '\0') {
              iVar29 = *(int *)(param_2 + 0x5c);
            }
            else {
              if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
                 (iVar29 = *(int *)(param_2 + 0x5c), *(int *)(param_2 + 100) != iVar29)) {
                cVar12 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + 1);
                if (cVar12 == '\0') goto UNWIND_INFO_14035cd3b_ExceptionHandler_1;
                uVar27 = *(uint *)(param_2 + 0x5c);
                lVar18 = *(longlong *)(param_2 + 0x70);
                uVar15 = *(uint *)(param_2 + 100);
                puVar2 = (undefined4 *)(lVar18 + (ulonglong)uVar27 * 0x14);
                uVar14 = puVar2[1];
                uVar9 = puVar2[2];
                uVar10 = puVar2[3];
                lVar8 = *(longlong *)(param_2 + 0x78);
                puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar15 * 0x14);
                *puVar3 = *puVar2;
                puVar3[1] = uVar14;
                puVar3[2] = uVar9;
                puVar3[3] = uVar10;
                *(undefined4 *)(lVar8 + (ulonglong)uVar15 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar18 + 0x10 + (ulonglong)uVar27 * 0x14);
                iVar29 = *(int *)(param_2 + 0x5c);
              }
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
            }
            *(int *)(param_2 + 0x5c) = iVar29 + 1;
            goto UNWIND_INFO_14035cd3b_ExceptionHandler_1;
          }
          iVar16 = 0;
          iVar28 = 0;
          if (uVar27 + 2 < uVar7) {
            iVar16 = *(int *)(lVar18 + (ulonglong)(uVar27 + 2) * 0x14);
            if ((iVar16 - 0x11a8U < 0x58) || (iVar16 - 0xd7cbU < 0x31)) {
              iVar28 = iVar16 + -0x11a7;
            }
            else {
              iVar16 = 0;
            }
          }
          iVar24 = (iVar16 != 0) + 2;
          func_0x00014040efc0(param_2,uVar19,iVar24 + uVar27);
          if (((iVar29 - 0x1100U < 0x13) && (iVar13 - 0x1161U < 0x15)) &&
             ((iVar16 == 0 || (iVar16 - 0x11a8U < 0x1b)))) {
            local_res20[0] = (iVar29 * 0x15 + iVar13) * 0x1c + -0x28469c + iVar28;
            cVar12 = FUN_1403d0e60(param_3);
            if (cVar12 != '\0') {
              FUN_14038b870(param_2,iVar24,1,local_res20);
              uVar26 = (ulonglong)local_res10[0];
              uVar21 = local_res10[0] + 1;
              local_res20[0] = uVar21;
              goto UNWIND_INFO_14035cd3b_ExceptionHandler_1;
            }
          }
          *(undefined1 *)
           (*(longlong *)(param_2 + 0x70) + 0x13 + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) = 1;
          if (*(char *)(param_2 + 0x59) == '\0') {
            iVar29 = *(int *)(param_2 + 0x5c);
LAB_14035c72d:
            *(int *)(param_2 + 0x5c) = iVar29 + 1;
          }
          else {
            if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
               (iVar29 = *(int *)(param_2 + 0x5c), *(int *)(param_2 + 100) == iVar29)) {
LAB_14035c725:
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              goto LAB_14035c72d;
            }
            cVar12 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar12 != '\0') {
              uVar21 = *(uint *)(param_2 + 0x5c);
              lVar18 = *(longlong *)(param_2 + 0x70);
              uVar27 = *(uint *)(param_2 + 100);
              puVar2 = (undefined4 *)(lVar18 + (ulonglong)uVar21 * 0x14);
              uVar14 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              lVar8 = *(longlong *)(param_2 + 0x78);
              puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar27 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar14;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined4 *)(lVar8 + (ulonglong)uVar27 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar18 + 0x10 + (ulonglong)uVar21 * 0x14);
              iVar29 = *(int *)(param_2 + 0x5c);
              goto LAB_14035c725;
            }
          }
          *(undefined1 *)
           (*(longlong *)(param_2 + 0x70) + 0x13 + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) = 2;
          if (*(char *)(param_2 + 0x59) == '\0') {
LAB_14035c79b:
            *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
          }
          else {
            if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
               (*(int *)(param_2 + 100) == *(int *)(param_2 + 0x5c))) {
LAB_14035c798:
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              goto LAB_14035c79b;
            }
            cVar12 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar12 != '\0') {
              uVar21 = *(uint *)(param_2 + 0x5c);
              lVar18 = *(longlong *)(param_2 + 0x70);
              uVar27 = *(uint *)(param_2 + 100);
              puVar2 = (undefined4 *)(lVar18 + (ulonglong)uVar21 * 0x14);
              uVar14 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              lVar8 = *(longlong *)(param_2 + 0x78);
              puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar27 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar14;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined4 *)(lVar8 + (ulonglong)uVar27 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar18 + 0x10 + (ulonglong)uVar21 * 0x14);
              goto LAB_14035c798;
            }
          }
          if (iVar16 == 0) {
            uVar21 = local_res10[0] + 2;
          }
          else {
            *(undefined1 *)
             (*(longlong *)(param_2 + 0x70) + 0x13 + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) =
                 3;
            if (*(char *)(param_2 + 0x59) == '\0') {
LAB_14035c80a:
              *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
            }
            else {
              if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
                 (*(int *)(param_2 + 100) == *(int *)(param_2 + 0x5c))) {
LAB_14035c807:
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
                goto LAB_14035c80a;
              }
              cVar12 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + 1);
              if (cVar12 != '\0') {
                uVar21 = *(uint *)(param_2 + 0x5c);
                lVar18 = *(longlong *)(param_2 + 0x70);
                uVar27 = *(uint *)(param_2 + 100);
                puVar2 = (undefined4 *)(lVar18 + (ulonglong)uVar21 * 0x14);
                uVar14 = puVar2[1];
                uVar9 = puVar2[2];
                uVar10 = puVar2[3];
                lVar8 = *(longlong *)(param_2 + 0x78);
                puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar27 * 0x14);
                *puVar3 = *puVar2;
                puVar3[1] = uVar14;
                puVar3[2] = uVar9;
                puVar3[3] = uVar10;
                *(undefined4 *)(lVar8 + (ulonglong)uVar27 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar18 + 0x10 + (ulonglong)uVar21 * 0x14);
                goto LAB_14035c807;
              }
            }
            uVar21 = local_res10[0] + 3;
          }
          uVar26 = (ulonglong)local_res10[0];
          local_res20[0] = uVar21;
          if (*(char *)(param_2 + 0x58) == '\0') break;
          if (uVar21 - local_res10[0] < 2) goto UNWIND_INFO_14035cd3b_ExceptionHandler_1;
        }
        else {
          uVar27 = iVar29 - 0xac00;
          if (0x2ba3 < uVar27) goto UNWIND_INFO_14035cd3b_UnwindCodes_17__UnwindOpCode;
          local_64 = 0;
          lVar18 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
          uVar17 = 0;
          if (lVar18 != 0) {
            uVar17 = *(undefined8 *)(lVar18 + 0x10);
          }
          iVar13 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                             (param_3,*(undefined8 *)(param_3 + 0x98),iVar29,&local_64,uVar17);
          uVar21 = (uVar27 % 0x24c) % 0x1c;
          if (((uVar21 == 0) && (uVar15 = *(int *)(param_2 + 0x5c) + 1, uVar15 < uVar7)) &&
             (iVar16 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar15 * 0x14),
             iVar16 - 0x11a8U < 0x1b)) {
            local_64 = 0;
            iVar29 = iVar16 + -0x11a7 + iVar29;
            lVar18 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
            uVar17 = 0;
            if (lVar18 != 0) {
              uVar17 = *(undefined8 *)(lVar18 + 0x10);
            }
            iVar16 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                               (param_3,*(undefined8 *)(param_3 + 0x98),iVar29,&local_64,uVar17);
            if (iVar16 != 0) {
              cVar12 = func_0x0001403eb040(param_2,2,1);
              if (cVar12 != '\0') {
                uVar21 = *(uint *)(param_2 + 0x5c);
                uVar19 = (ulonglong)uVar21;
                uVar27 = *(uint *)(param_2 + 0x1c);
                if (uVar27 < 2) {
                  FUN_1403ec350(param_2,uVar19);
                }
                else {
                  uVar15 = *(uint *)(param_2 + 0x60);
                  if (uVar21 + 2 <= *(uint *)(param_2 + 0x60)) {
                    uVar15 = uVar21 + 2;
                  }
                  uVar26 = (ulonglong)uVar15;
                  if (1 < uVar15 - uVar21) {
                    lVar18 = *(longlong *)(param_2 + 0x70);
                    iVar13 = FUN_1403a1af0(param_2,lVar18,uVar21,uVar26,0xffffffff);
                    if (uVar21 != uVar15) {
                      piVar1 = (int *)(param_2 + 0xe0);
                      *piVar1 = *piVar1 + (uVar21 - uVar15);
                      if (*piVar1 < 0) {
                        *(undefined1 *)(param_2 + 0x58) = 0;
                      }
                      uVar25 = uVar19;
                      if (uVar27 == 2) {
joined_r0x00014035ca49:
                        while (uVar21 < uVar15) {
                          if (iVar13 != *(int *)(lVar18 + 8 + uVar19 * 0x14)) {
                            puVar6 = (uint *)(lVar18 + 4 + uVar19 * 0x14);
                            *puVar6 = *puVar6 | 3;
                          }
                          uVar21 = (int)uVar25 + 1;
                          uVar19 = uVar19 + 1;
                          uVar25 = (ulonglong)uVar21;
                        }
                      }
                      else {
                        iVar16 = *(int *)(lVar18 + 8 + uVar19 * 0x14);
                        if (iVar13 == iVar16) {
                          while (uVar21 < uVar15) {
                            uVar15 = (int)uVar26 - 1;
                            uVar26 = (ulonglong)uVar15;
                            if (*(int *)(lVar18 + 8 + uVar26 * 0x14) == iVar16) break;
                            puVar6 = (uint *)(lVar18 + 4 + uVar26 * 0x14);
                            *puVar6 = *puVar6 | 3;
                          }
                        }
                        else {
                          iVar16 = *(int *)(lVar18 + 8 + (ulonglong)(uVar15 - 1) * 0x14);
                          if (iVar13 != iVar16) goto joined_r0x00014035ca49;
                          while ((uVar21 < uVar15 &&
                                 (*(int *)(lVar18 + 8 + uVar19 * 0x14) != iVar16))) {
                            puVar6 = (uint *)(lVar18 + 4 + uVar19 * 0x14);
                            *puVar6 = *puVar6 | 3;
                            uVar21 = (int)uVar19 + 1;
                            uVar19 = (ulonglong)uVar21;
                          }
                        }
                      }
                    }
                  }
                }
                uVar21 = *(uint *)(param_2 + 0x5c);
                if (uVar21 < *(uint *)(param_2 + 0x60)) {
                  lVar18 = *(longlong *)(param_2 + 0x70);
                }
                else {
                  uVar21 = *(int *)(param_2 + 100) - 1;
                  if (*(int *)(param_2 + 100) == 0) {
                    uVar21 = 0;
                  }
                  lVar18 = *(longlong *)(param_2 + 0x78);
                }
                puVar2 = (undefined4 *)(lVar18 + (ulonglong)uVar21 * 0x14);
                uVar14 = puVar2[1];
                uVar9 = puVar2[2];
                uVar10 = puVar2[3];
                uVar27 = *(uint *)(param_2 + 100);
                lVar8 = *(longlong *)(param_2 + 0x78);
                puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar27 * 0x14);
                *puVar3 = *puVar2;
                puVar3[1] = uVar14;
                puVar3[2] = uVar9;
                puVar3[3] = uVar10;
                piVar1 = (int *)(lVar8 + (ulonglong)uVar27 * 0x14);
                piVar1[4] = *(int *)(lVar18 + (ulonglong)uVar21 * 0x14 + 0x10);
                *piVar1 = iVar29;
                *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 2;
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              }
              uVar26 = (ulonglong)local_res10[0];
              uVar21 = local_res10[0] + 1;
              local_res20[0] = uVar21;
              goto UNWIND_INFO_14035cd3b_ExceptionHandler_1;
            }
            func_0x00014040efc0(param_2,*(int *)(param_2 + 0x5c),*(int *)(param_2 + 0x5c) + 2);
            uVar26 = (ulonglong)local_res10[0];
          }
          iVar29 = (int)uVar26;
          if ((iVar13 != 0) &&
             (((uVar21 != 0 || (uVar15 = *(int *)(param_2 + 0x5c) + 1, uVar7 <= uVar15)) ||
              ((iVar16 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar15 * 0x14),
               0x57 < iVar16 - 0x11a8U && (0x30 < iVar16 - 0xd7cbU)))))) {
UNWIND_INFO_14035cd3b_UnwindCodes_7__UnwindOpCode:
            local_res20[0] = iVar29 + 1;
            uVar21 = local_res20[0];
            goto UNWIND_INFO_14035cd3b_UnwindCodes_17__UnwindOpCode;
          }
          local_60[0] = uVar27 / 0x24c + 0x1100;
          iVar16 = (uVar27 % 0x24c) / 0x1c + 0x1161;
          local_64 = 0;
          lVar18 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
          uVar17 = 0;
          if (lVar18 != 0) {
            uVar17 = *(undefined8 *)(lVar18 + 0x10);
          }
          local_60[1] = iVar16;
          local_60[2] = uVar21 + 0x11a7;
          iVar28 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                             (param_3,*(undefined8 *)(param_3 + 0x98),local_60[0],&local_64,uVar17);
          if (iVar28 == 0) {
LAB_14035cd09:
            if (uVar21 == 0) {
              iVar16 = *(int *)(param_2 + 0x5c);
              if ((iVar16 + 1U < uVar7) &&
                 ((iVar28 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)(iVar16 + 1U) * 0x14
                                    ), iVar28 - 0x11a8U < 0x58 || (iVar28 - 0xd7cbU < 0x31)))) {
                func_0x00014040efc0(param_2,iVar16,iVar16 + 2);
              }
            }
UNWIND_INFO_14035cd3b_UnwindCodes_5__OffsetInProlog:
            uVar21 = local_res20[0];
            if (iVar13 == 0) goto UNWIND_INFO_14035cd3b_UnwindCodes_17__UnwindOpCode;
            goto UNWIND_INFO_14035cd3b_UnwindCodes_7__UnwindOpCode;
          }
          local_64 = 0;
          lVar18 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
          uVar17 = 0;
          if (lVar18 != 0) {
            uVar17 = *(undefined8 *)(lVar18 + 0x10);
          }
          iVar16 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                             (param_3,*(undefined8 *)(param_3 + 0x98),iVar16,&local_64,uVar17);
          if (iVar16 == 0) goto LAB_14035cd09;
          if (uVar21 != 0) {
            local_64 = 0;
            lVar18 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
            uVar17 = 0;
            if (lVar18 != 0) {
              uVar17 = *(undefined8 *)(lVar18 + 0x10);
            }
            iVar16 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                               (param_3,*(undefined8 *)(param_3 + 0x98),uVar21 + 0x11a7,&local_64,
                                uVar17);
            if (iVar16 != 0) goto LAB_14035cc1b;
            goto UNWIND_INFO_14035cd3b_UnwindCodes_5__OffsetInProlog;
          }
LAB_14035cc1b:
          uVar27 = (uVar21 != 0) + 2;
          cVar12 = func_0x0001403eb040(param_2,1);
          if (cVar12 != '\0') {
            uVar15 = *(uint *)(param_2 + 0x5c);
            if (uVar15 < *(uint *)(param_2 + 0x60)) {
              lVar18 = *(longlong *)(param_2 + 0x70);
            }
            else {
              uVar15 = *(int *)(param_2 + 100) - 1;
              if (*(int *)(param_2 + 100) == 0) {
                uVar15 = 0;
              }
              lVar18 = *(longlong *)(param_2 + 0x78);
            }
            piVar1 = (int *)(lVar18 + (ulonglong)uVar15 * 0x14);
            uVar19 = 0;
            piVar22 = (int *)(*(longlong *)(param_2 + 0x78) +
                             (ulonglong)*(uint *)(param_2 + 100) * 0x14);
            do {
              iVar28 = piVar1[1];
              iVar24 = piVar1[2];
              iVar11 = piVar1[3];
              iVar16 = local_60[uVar19];
              uVar15 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar15;
              *piVar22 = *piVar1;
              piVar22[1] = iVar28;
              piVar22[2] = iVar24;
              piVar22[3] = iVar11;
              piVar22[4] = piVar1[4];
              *piVar22 = iVar16;
              piVar22 = piVar22 + 5;
            } while (uVar15 < uVar27);
            *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + uVar27;
          }
          if ((iVar13 != 0) && (uVar21 == 0)) {
            FUN_1403ed0a0(param_2);
            uVar27 = 3;
          }
          if (*(char *)(param_2 + 0x58) == '\0') break;
          lVar18 = *(longlong *)(param_2 + 0x78);
          local_res20[0] = uVar27 + iVar29;
          *(undefined1 *)(lVar18 + 0x13 + uVar26 * 0x14) = 1;
          *(undefined1 *)(lVar18 + 0x13 + (ulonglong)(iVar29 + 1) * 0x14) = 2;
          if (iVar29 + 2U < local_res20[0]) {
            *(undefined1 *)(lVar18 + 0x13 + (ulonglong)(iVar29 + 2U) * 0x14) = 3;
          }
        }
        uVar21 = local_res20[0];
        if ((1 << ((byte)*(undefined4 *)(param_2 + 0x1c) & 0x1f) & 9U) != 0) {
          FUN_1403ec4c0(param_2,uVar26,local_res20[0]);
        }
      }
UNWIND_INFO_14035cd3b_ExceptionHandler_1:
      uVar19 = (ulonglong)*(uint *)(param_2 + 0x5c);
    } while (*(uint *)(param_2 + 0x5c) < uVar7);
  }
  if ((*(char *)(param_2 + 0x58) != '\0') &&
     (cVar12 = func_0x0001403ed130(param_2,*(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x5c)),
     cVar12 != '\0')) {
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

