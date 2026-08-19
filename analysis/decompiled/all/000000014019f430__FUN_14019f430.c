// Function: FUN_14019f430
// Addr: 14019f430
// Size: 2111 bytes


void FUN_14019f430(byte *param_1,byte *param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  byte *pbVar25;
  bool bVar26;
  bool bVar27;
  byte *local_res8;
  byte *local_res10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar14 = (longlong)param_2 - (longlong)param_1;
  pbVar25 = param_2;
  local_res8 = param_1;
  do {
    if (lVar14 < 0x318) {
      if ((param_1 != pbVar25) && (pbVar18 = param_1 + 0x18, pbVar16 = pbVar18, pbVar18 != pbVar25))
      {
        do {
          bVar3 = *pbVar16;
          uVar5 = *(undefined2 *)(pbVar16 + 1);
          bVar4 = pbVar16[3];
          uVar6 = *(uint *)(pbVar16 + 4);
          fVar1 = *(float *)(pbVar16 + 8);
          uVar2 = *(undefined8 *)(pbVar16 + 0xc);
          uVar7 = *(undefined4 *)(pbVar16 + 0x14);
          bVar26 = bVar3 < *param_1;
          if (bVar3 == *param_1) {
            bVar27 = uVar6 < *(uint *)(param_1 + 4);
            bVar26 = false;
            if (uVar6 == *(uint *)(param_1 + 4)) {
              bVar26 = *(float *)(param_1 + 8) == fVar1;
              bVar27 = *(float *)(param_1 + 8) < fVar1;
            }
            bVar26 = !bVar27 && !bVar26;
          }
          pbVar25 = pbVar16;
          if (bVar26) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(pbVar18,param_1,(longlong)pbVar16 - (longlong)param_1);
          }
          while( true ) {
            bVar26 = bVar3 < pbVar25[-0x18];
            if (bVar3 == pbVar25[-0x18]) {
              bVar27 = uVar6 < *(uint *)(pbVar25 + -0x14);
              bVar26 = false;
              if (uVar6 == *(uint *)(pbVar25 + -0x14)) {
                bVar26 = *(float *)(pbVar25 + -0x10) == fVar1;
                bVar27 = *(float *)(pbVar25 + -0x10) < fVar1;
              }
              bVar26 = !bVar27 && !bVar26;
            }
            if (!bVar26) break;
            *(undefined4 *)pbVar25 = *(undefined4 *)(pbVar25 + -0x18);
            *(undefined4 *)(pbVar25 + 4) = *(undefined4 *)(pbVar25 + -0x14);
            *(undefined4 *)(pbVar25 + 8) = *(undefined4 *)(pbVar25 + -0x10);
            *(undefined4 *)(pbVar25 + 0xc) = *(undefined4 *)(pbVar25 + -0xc);
            *(undefined8 *)(pbVar25 + 0x10) = *(undefined8 *)(pbVar25 + -8);
            pbVar25 = pbVar25 + -0x18;
          }
          *(undefined2 *)(pbVar25 + 1) = uVar5;
          *(undefined8 *)(pbVar25 + 0xc) = uVar2;
          pbVar25[3] = bVar4;
          *(undefined4 *)(pbVar25 + 0x14) = uVar7;
          *(float *)(pbVar25 + 8) = fVar1;
          *pbVar25 = bVar3;
          *(uint *)(pbVar25 + 4) = uVar6;
          pbVar16 = pbVar16 + 0x18;
        } while (pbVar16 != param_2);
      }
      return;
    }
    lVar14 = ((longlong)pbVar25 - (longlong)param_1) / 6 +
             ((longlong)pbVar25 - (longlong)param_1 >> 0x3f);
    uVar24 = (lVar14 >> 2) - (lVar14 >> 0x3f);
    lVar14 = (longlong)uVar24 >> 1;
    if (param_3 < 1) {
      if (0 < lVar14) {
        lVar22 = (longlong)(uVar24 - 1) >> 1;
        lVar21 = lVar14 * 0x18;
        do {
          bVar3 = param_1[lVar21 + -0x18];
          lVar14 = lVar14 + -1;
          uVar5 = *(undefined2 *)(param_1 + lVar21 + -0x17);
          bVar4 = param_1[lVar21 + -0x15];
          uVar7 = *(undefined4 *)(local_res8 + lVar21 + -4);
          uVar6 = *(uint *)(local_res8 + lVar21 + -0x14);
          fVar1 = *(float *)(local_res8 + lVar21 + -0x10);
          uVar2 = *(undefined8 *)(local_res8 + lVar21 + -0xc);
          lVar23 = lVar14;
          while (lVar23 < lVar22) {
            bVar26 = local_res8[lVar23 * 0x30 + 0x30] < local_res8[lVar23 * 0x30 + 0x18];
            if (local_res8[lVar23 * 0x30 + 0x30] == local_res8[lVar23 * 0x30 + 0x18]) {
              bVar27 = *(uint *)(local_res8 + lVar23 * 0x30 + 0x34) <
                       *(uint *)(local_res8 + lVar23 * 0x30 + 0x1c);
              bVar26 = false;
              if (*(uint *)(local_res8 + lVar23 * 0x30 + 0x34) ==
                  *(uint *)(local_res8 + lVar23 * 0x30 + 0x1c)) {
                bVar26 = *(float *)(local_res8 + lVar23 * 0x30 + 0x20) ==
                         *(float *)(local_res8 + lVar23 * 0x30 + 0x38);
                bVar27 = *(float *)(local_res8 + lVar23 * 0x30 + 0x20) <
                         *(float *)(local_res8 + lVar23 * 0x30 + 0x38);
              }
              bVar26 = !bVar27 && !bVar26;
            }
            lVar17 = (ulonglong)(bVar26 ^ 1) + (lVar23 * 2 | 1U);
            uVar10 = *(undefined8 *)(local_res8 + lVar17 * 0x18 + 8);
            *(undefined8 *)(local_res8 + lVar23 * 0x18) =
                 *(undefined8 *)(local_res8 + lVar17 * 0x18);
            *(undefined8 *)(local_res8 + lVar23 * 0x18 + 8) = uVar10;
            *(undefined8 *)(local_res8 + lVar23 * 0x18 + 0x10) =
                 *(undefined8 *)(local_res8 + lVar17 * 0x18 + 0x10);
            lVar23 = lVar17;
          }
          if ((lVar23 == lVar22) && ((uVar24 & 1) == 0)) {
            uVar10 = *(undefined8 *)(local_res8 + uVar24 * 0x18 + -0x18 + 8);
            *(undefined8 *)(local_res8 + lVar23 * 0x18) =
                 *(undefined8 *)(local_res8 + uVar24 * 0x18 + -0x18);
            *(undefined8 *)(local_res8 + lVar23 * 0x18 + 8) = uVar10;
            *(undefined8 *)(local_res8 + lVar23 * 0x18 + 0x10) =
                 *(undefined8 *)(local_res8 + uVar24 * 0x18 + -8);
            lVar23 = uVar24 - 1;
          }
          while (lVar14 < lVar23) {
            lVar17 = lVar23 + -1 >> 1;
            bVar26 = local_res8[lVar17 * 0x18] < bVar3;
            if (local_res8[lVar17 * 0x18] == bVar3) {
              bVar27 = *(uint *)(local_res8 + lVar17 * 0x18 + 4) < uVar6;
              bVar26 = false;
              if (*(uint *)(local_res8 + lVar17 * 0x18 + 4) == uVar6) {
                bVar26 = fVar1 == *(float *)(local_res8 + lVar17 * 0x18 + 8);
                bVar27 = fVar1 < *(float *)(local_res8 + lVar17 * 0x18 + 8);
              }
              bVar26 = !bVar27 && !bVar26;
            }
            if (!bVar26) break;
            uVar10 = *(undefined8 *)(local_res8 + lVar17 * 0x18 + 8);
            *(undefined8 *)(local_res8 + lVar23 * 0x18) =
                 *(undefined8 *)(local_res8 + lVar17 * 0x18);
            *(undefined8 *)(local_res8 + lVar23 * 0x18 + 8) = uVar10;
            *(undefined8 *)(local_res8 + lVar23 * 0x18 + 0x10) =
                 *(undefined8 *)(local_res8 + lVar17 * 0x18 + 0x10);
            lVar23 = lVar17;
          }
          *(undefined2 *)(local_res8 + lVar23 * 0x18 + 1) = uVar5;
          local_res8[lVar23 * 0x18 + 3] = bVar4;
          local_res8[lVar23 * 0x18] = bVar3;
          *(undefined8 *)(local_res8 + lVar23 * 0x18 + 0xc) = uVar2;
          *(undefined4 *)(local_res8 + lVar23 * 0x18 + 0x14) = uVar7;
          *(float *)(local_res8 + lVar23 * 0x18 + 8) = fVar1;
          *(uint *)(local_res8 + lVar23 * 0x18 + 4) = uVar6;
          lVar21 = lVar21 + -0x18;
          param_1 = local_res8;
          pbVar25 = param_2;
        } while (0 < lVar14);
      }
      if ((longlong)uVar24 < 2) {
        return;
      }
      do {
        if (1 < ((longlong)pbVar25 - (longlong)param_1 >> 3) * -0x5555555555555555) {
          uStack_70 = *(undefined8 *)(pbVar25 + -0x18);
          uStack_68 = *(undefined8 *)(pbVar25 + -0x10);
          uStack_60 = *(undefined8 *)(pbVar25 + -8);
          uVar7 = *(undefined4 *)(param_1 + 4);
          uVar8 = *(undefined4 *)(param_1 + 8);
          uVar9 = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 *)(pbVar25 + -0x18) = *(undefined4 *)param_1;
          *(undefined4 *)(pbVar25 + -0x14) = uVar7;
          *(undefined4 *)(pbVar25 + -0x10) = uVar8;
          *(undefined4 *)(pbVar25 + -0xc) = uVar9;
          *(undefined8 *)(pbVar25 + -8) = *(undefined8 *)(param_1 + 0x10);
          func_0x0001401a2ab0(param_1,0,
                              ((longlong)(pbVar25 + -0x18) - (longlong)param_1 >> 3) *
                              -0x5555555555555555,&uStack_70,param_4);
        }
        pbVar25 = pbVar25 + -0x18;
      } while (0x2f < (longlong)pbVar25 - (longlong)param_1);
      return;
    }
    lVar21 = ((longlong)(pbVar25 + (-0x18 - (longlong)param_1)) >> 3) * -0x5555555555555555;
    pbVar18 = param_1 + lVar14 * 0x18;
    if (lVar21 < 0x29) {
      pbVar16 = pbVar25 + -0x18;
      pbVar15 = param_1;
    }
    else {
      lVar22 = lVar21 + 1 >> 3;
      lVar21 = lVar22 * 0x18;
      lVar23 = lVar22 * 0x30;
      pbVar15 = param_1 + lVar21;
      FUN_1401a32e0(param_1,pbVar15,param_1 + lVar23);
      FUN_1401a32e0((longlong)pbVar18 - lVar21,pbVar18,param_1 + (lVar22 + lVar14) * 0x18);
      pbVar16 = pbVar25 + (-0x18 - lVar21);
      FUN_1401a32e0(pbVar25 + (-0x18 - lVar23),pbVar16,pbVar25 + -0x18);
    }
    FUN_1401a32e0(pbVar15,pbVar18,pbVar16);
    pbVar16 = pbVar18 + 0x18;
    if (param_1 < pbVar18) {
      while( true ) {
        bVar3 = pbVar18[-0x18];
        pbVar15 = pbVar18 + -0x18;
        bVar4 = *pbVar18;
        bVar26 = bVar3 < bVar4;
        if (bVar3 == bVar4) {
          bVar27 = *(uint *)(pbVar18 + -0x14) < *(uint *)(pbVar18 + 4);
          bVar26 = false;
          if (*(uint *)(pbVar18 + -0x14) == *(uint *)(pbVar18 + 4)) {
            bVar26 = *(float *)(pbVar18 + 8) == *(float *)(pbVar18 + -0x10);
            bVar27 = *(float *)(pbVar18 + 8) < *(float *)(pbVar18 + -0x10);
          }
          bVar26 = !bVar27 && !bVar26;
        }
        if (bVar26) break;
        bVar26 = bVar4 < bVar3;
        if (bVar4 == bVar3) {
          bVar27 = *(uint *)(pbVar18 + 4) < *(uint *)(pbVar18 + -0x14);
          bVar26 = false;
          if (*(uint *)(pbVar18 + 4) == *(uint *)(pbVar18 + -0x14)) {
            bVar26 = *(float *)(pbVar18 + -0x10) == *(float *)(pbVar18 + 8);
            bVar27 = *(float *)(pbVar18 + -0x10) < *(float *)(pbVar18 + 8);
          }
          bVar26 = !bVar27 && !bVar26;
        }
        if ((bVar26) || (pbVar18 = pbVar15, pbVar15 <= param_1)) break;
      }
    }
    pbVar20 = pbVar16;
    pbVar15 = pbVar18;
    if (pbVar16 < pbVar25) {
      bVar3 = *pbVar18;
      while( true ) {
        bVar4 = *pbVar16;
        bVar26 = bVar4 < bVar3;
        if (bVar4 == bVar3) {
          bVar27 = *(uint *)(pbVar16 + 4) < *(uint *)(pbVar18 + 4);
          bVar26 = false;
          if (*(uint *)(pbVar16 + 4) == *(uint *)(pbVar18 + 4)) {
            bVar26 = *(float *)(pbVar18 + 8) == *(float *)(pbVar16 + 8);
            bVar27 = *(float *)(pbVar18 + 8) < *(float *)(pbVar16 + 8);
          }
          bVar26 = !bVar27 && !bVar26;
        }
        pbVar20 = pbVar16;
        if (bVar26) break;
        bVar26 = bVar3 < bVar4;
        if (bVar3 == bVar4) {
          bVar27 = *(uint *)(pbVar18 + 4) < *(uint *)(pbVar16 + 4);
          bVar26 = false;
          if (*(uint *)(pbVar18 + 4) == *(uint *)(pbVar16 + 4)) {
            bVar26 = *(float *)(pbVar16 + 8) == *(float *)(pbVar18 + 8);
            bVar27 = *(float *)(pbVar16 + 8) < *(float *)(pbVar18 + 8);
          }
          bVar26 = !bVar27 && !bVar26;
        }
        if ((bVar26) || (pbVar16 = pbVar16 + 0x18, pbVar20 = pbVar16, pbVar25 <= pbVar16)) break;
      }
    }
LAB_14019f614:
    pbVar19 = pbVar16;
    if (pbVar16 < pbVar25) {
      if ((byte *)0x5f < pbVar25 + (0x17 - (longlong)pbVar16)) {
        do {
          bVar3 = *pbVar16;
          bVar4 = *pbVar18;
          bVar26 = bVar4 < bVar3;
          if (bVar4 == bVar3) {
            bVar27 = *(uint *)(pbVar18 + 4) < *(uint *)(pbVar16 + 4);
            bVar26 = false;
            if (*(uint *)(pbVar18 + 4) == *(uint *)(pbVar16 + 4)) {
              bVar26 = *(float *)(pbVar16 + 8) == *(float *)(pbVar18 + 8);
              bVar27 = *(float *)(pbVar16 + 8) < *(float *)(pbVar18 + 8);
            }
            bVar26 = !bVar27 && !bVar26;
          }
          if (!bVar26) {
            bVar26 = bVar3 < bVar4;
            if (bVar3 == bVar4) {
              bVar27 = *(uint *)(pbVar16 + 4) < *(uint *)(pbVar18 + 4);
              bVar26 = false;
              if (*(uint *)(pbVar16 + 4) == *(uint *)(pbVar18 + 4)) {
                bVar26 = *(float *)(pbVar18 + 8) == *(float *)(pbVar16 + 8);
                bVar27 = *(float *)(pbVar18 + 8) < *(float *)(pbVar16 + 8);
              }
              bVar26 = !bVar27 && !bVar26;
            }
            pbVar19 = pbVar16;
            if (bVar26) goto joined_r0x00014019f8d9;
            if (pbVar20 != pbVar16) {
              uVar7 = *(undefined4 *)(pbVar16 + 4);
              uVar8 = *(undefined4 *)(pbVar16 + 8);
              uVar9 = *(undefined4 *)(pbVar16 + 0xc);
              uVar10 = *(undefined8 *)pbVar20;
              uVar11 = *(undefined8 *)(pbVar20 + 8);
              uVar2 = *(undefined8 *)(pbVar20 + 0x10);
              *(undefined4 *)pbVar20 = *(undefined4 *)pbVar16;
              *(undefined4 *)(pbVar20 + 4) = uVar7;
              *(undefined4 *)(pbVar20 + 8) = uVar8;
              *(undefined4 *)(pbVar20 + 0xc) = uVar9;
              *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar16 + 0x10);
              *(undefined8 *)pbVar16 = uVar10;
              *(undefined8 *)(pbVar16 + 8) = uVar11;
              *(undefined8 *)(pbVar16 + 0x10) = uVar2;
            }
            pbVar20 = pbVar20 + 0x18;
          }
          bVar3 = pbVar16[0x18];
          pbVar19 = pbVar16 + 0x18;
          bVar4 = *pbVar18;
          bVar26 = bVar4 < bVar3;
          if (bVar4 == bVar3) {
            bVar27 = *(uint *)(pbVar18 + 4) < *(uint *)(pbVar16 + 0x1c);
            bVar26 = false;
            if (*(uint *)(pbVar18 + 4) == *(uint *)(pbVar16 + 0x1c)) {
              bVar26 = *(float *)(pbVar16 + 0x20) == *(float *)(pbVar18 + 8);
              bVar27 = *(float *)(pbVar16 + 0x20) < *(float *)(pbVar18 + 8);
            }
            bVar26 = !bVar27 && !bVar26;
          }
          if (!bVar26) {
            bVar26 = bVar3 < bVar4;
            if (bVar3 == bVar4) {
              bVar27 = *(uint *)(pbVar16 + 0x1c) < *(uint *)(pbVar18 + 4);
              bVar26 = false;
              if (*(uint *)(pbVar16 + 0x1c) == *(uint *)(pbVar18 + 4)) {
                bVar26 = *(float *)(pbVar18 + 8) == *(float *)(pbVar16 + 0x20);
                bVar27 = *(float *)(pbVar18 + 8) < *(float *)(pbVar16 + 0x20);
              }
              bVar26 = !bVar27 && !bVar26;
            }
            if (bVar26) goto joined_r0x00014019f8d9;
            if (pbVar20 != pbVar19) {
              uVar7 = *(undefined4 *)(pbVar16 + 0x1c);
              uVar8 = *(undefined4 *)(pbVar16 + 0x20);
              uVar9 = *(undefined4 *)(pbVar16 + 0x24);
              uVar10 = *(undefined8 *)pbVar20;
              uVar11 = *(undefined8 *)(pbVar20 + 8);
              uVar2 = *(undefined8 *)(pbVar20 + 0x10);
              *(undefined4 *)pbVar20 = *(undefined4 *)pbVar19;
              *(undefined4 *)(pbVar20 + 4) = uVar7;
              *(undefined4 *)(pbVar20 + 8) = uVar8;
              *(undefined4 *)(pbVar20 + 0xc) = uVar9;
              *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar16 + 0x28);
              *(undefined8 *)pbVar19 = uVar10;
              *(undefined8 *)(pbVar16 + 0x20) = uVar11;
              *(undefined8 *)(pbVar16 + 0x28) = uVar2;
            }
            pbVar20 = pbVar20 + 0x18;
          }
          bVar3 = pbVar16[0x30];
          pbVar19 = pbVar16 + 0x30;
          bVar4 = *pbVar18;
          bVar26 = bVar4 < bVar3;
          if (bVar4 == bVar3) {
            bVar27 = *(uint *)(pbVar18 + 4) < *(uint *)(pbVar16 + 0x34);
            bVar26 = false;
            if (*(uint *)(pbVar18 + 4) == *(uint *)(pbVar16 + 0x34)) {
              bVar26 = *(float *)(pbVar16 + 0x38) == *(float *)(pbVar18 + 8);
              bVar27 = *(float *)(pbVar16 + 0x38) < *(float *)(pbVar18 + 8);
            }
            bVar26 = !bVar27 && !bVar26;
          }
          if (!bVar26) {
            bVar26 = bVar3 < bVar4;
            if (bVar3 == bVar4) {
              bVar27 = *(uint *)(pbVar16 + 0x34) < *(uint *)(pbVar18 + 4);
              bVar26 = false;
              if (*(uint *)(pbVar16 + 0x34) == *(uint *)(pbVar18 + 4)) {
                bVar26 = *(float *)(pbVar18 + 8) == *(float *)(pbVar16 + 0x38);
                bVar27 = *(float *)(pbVar18 + 8) < *(float *)(pbVar16 + 0x38);
              }
              bVar26 = !bVar27 && !bVar26;
            }
            if (bVar26) goto joined_r0x00014019f8d9;
            if (pbVar20 != pbVar19) {
              uVar7 = *(undefined4 *)(pbVar16 + 0x34);
              uVar8 = *(undefined4 *)(pbVar16 + 0x38);
              uVar9 = *(undefined4 *)(pbVar16 + 0x3c);
              uVar10 = *(undefined8 *)pbVar20;
              uVar11 = *(undefined8 *)(pbVar20 + 8);
              uVar2 = *(undefined8 *)(pbVar20 + 0x10);
              *(undefined4 *)pbVar20 = *(undefined4 *)pbVar19;
              *(undefined4 *)(pbVar20 + 4) = uVar7;
              *(undefined4 *)(pbVar20 + 8) = uVar8;
              *(undefined4 *)(pbVar20 + 0xc) = uVar9;
              *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar16 + 0x40);
              *(undefined8 *)pbVar19 = uVar10;
              *(undefined8 *)(pbVar16 + 0x38) = uVar11;
              *(undefined8 *)(pbVar16 + 0x40) = uVar2;
            }
            pbVar20 = pbVar20 + 0x18;
          }
          bVar3 = pbVar16[0x48];
          pbVar19 = pbVar16 + 0x48;
          bVar4 = *pbVar18;
          bVar26 = bVar4 < bVar3;
          if (bVar4 == bVar3) {
            bVar27 = *(uint *)(pbVar18 + 4) < *(uint *)(pbVar16 + 0x4c);
            bVar26 = false;
            if (*(uint *)(pbVar18 + 4) == *(uint *)(pbVar16 + 0x4c)) {
              bVar26 = *(float *)(pbVar16 + 0x50) == *(float *)(pbVar18 + 8);
              bVar27 = *(float *)(pbVar16 + 0x50) < *(float *)(pbVar18 + 8);
            }
            bVar26 = !bVar27 && !bVar26;
          }
          if (!bVar26) {
            bVar26 = bVar3 < bVar4;
            if (bVar3 == bVar4) {
              bVar27 = *(uint *)(pbVar16 + 0x4c) < *(uint *)(pbVar18 + 4);
              bVar26 = false;
              if (*(uint *)(pbVar16 + 0x4c) == *(uint *)(pbVar18 + 4)) {
                bVar26 = *(float *)(pbVar18 + 8) == *(float *)(pbVar16 + 0x50);
                bVar27 = *(float *)(pbVar18 + 8) < *(float *)(pbVar16 + 0x50);
              }
              bVar26 = !bVar27 && !bVar26;
            }
            if (bVar26) goto joined_r0x00014019f8d9;
            if (pbVar20 != pbVar19) {
              uVar7 = *(undefined4 *)(pbVar16 + 0x4c);
              uVar8 = *(undefined4 *)(pbVar16 + 0x50);
              uVar9 = *(undefined4 *)(pbVar16 + 0x54);
              uVar10 = *(undefined8 *)pbVar20;
              uVar11 = *(undefined8 *)(pbVar20 + 8);
              uVar2 = *(undefined8 *)(pbVar20 + 0x10);
              *(undefined4 *)pbVar20 = *(undefined4 *)pbVar19;
              *(undefined4 *)(pbVar20 + 4) = uVar7;
              *(undefined4 *)(pbVar20 + 8) = uVar8;
              *(undefined4 *)(pbVar20 + 0xc) = uVar9;
              *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar16 + 0x58);
              *(undefined8 *)pbVar19 = uVar10;
              *(undefined8 *)(pbVar16 + 0x50) = uVar11;
              *(undefined8 *)(pbVar16 + 0x58) = uVar2;
            }
            pbVar20 = pbVar20 + 0x18;
          }
          pbVar16 = pbVar16 + 0x60;
        } while (pbVar16 < pbVar25 + -0x48);
      }
      for (; pbVar19 = pbVar16, pbVar16 < pbVar25; pbVar16 = pbVar16 + 0x18) {
        bVar3 = *pbVar16;
        bVar4 = *pbVar18;
        bVar26 = bVar4 < bVar3;
        if (bVar4 == bVar3) {
          bVar27 = *(uint *)(pbVar18 + 4) < *(uint *)(pbVar16 + 4);
          bVar26 = false;
          if (*(uint *)(pbVar18 + 4) == *(uint *)(pbVar16 + 4)) {
            bVar26 = *(float *)(pbVar16 + 8) == *(float *)(pbVar18 + 8);
            bVar27 = *(float *)(pbVar16 + 8) < *(float *)(pbVar18 + 8);
          }
          bVar26 = !bVar27 && !bVar26;
        }
        if (!bVar26) {
          bVar26 = bVar3 < bVar4;
          if (bVar3 == bVar4) {
            bVar27 = *(uint *)(pbVar16 + 4) < *(uint *)(pbVar18 + 4);
            bVar26 = false;
            if (*(uint *)(pbVar16 + 4) == *(uint *)(pbVar18 + 4)) {
              bVar26 = *(float *)(pbVar18 + 8) == *(float *)(pbVar16 + 8);
              bVar27 = *(float *)(pbVar18 + 8) < *(float *)(pbVar16 + 8);
            }
            bVar26 = !bVar27 && !bVar26;
          }
          if (bVar26) break;
          if (pbVar20 != pbVar16) {
            uVar7 = *(undefined4 *)(pbVar16 + 4);
            uVar8 = *(undefined4 *)(pbVar16 + 8);
            uVar9 = *(undefined4 *)(pbVar16 + 0xc);
            uVar10 = *(undefined8 *)pbVar20;
            uVar11 = *(undefined8 *)(pbVar20 + 8);
            uVar2 = *(undefined8 *)(pbVar20 + 0x10);
            *(undefined4 *)pbVar20 = *(undefined4 *)pbVar16;
            *(undefined4 *)(pbVar20 + 4) = uVar7;
            *(undefined4 *)(pbVar20 + 8) = uVar8;
            *(undefined4 *)(pbVar20 + 0xc) = uVar9;
            *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar16 + 0x10);
            *(undefined8 *)pbVar16 = uVar10;
            *(undefined8 *)(pbVar16 + 8) = uVar11;
            *(undefined8 *)(pbVar16 + 0x10) = uVar2;
          }
          pbVar20 = pbVar20 + 0x18;
        }
      }
    }
joined_r0x00014019f8d9:
    pbVar16 = pbVar19;
    pbVar13 = pbVar15;
    if (param_1 < pbVar13) {
      bVar3 = pbVar13[-0x18];
      pbVar15 = pbVar13 + -0x18;
      bVar4 = *pbVar18;
      bVar26 = bVar3 < bVar4;
      if (bVar3 == bVar4) {
        bVar27 = *(uint *)(pbVar13 + -0x14) < *(uint *)(pbVar18 + 4);
        bVar26 = false;
        if (*(uint *)(pbVar13 + -0x14) == *(uint *)(pbVar18 + 4)) {
          bVar26 = *(float *)(pbVar18 + 8) == *(float *)(pbVar13 + -0x10);
          bVar27 = *(float *)(pbVar18 + 8) < *(float *)(pbVar13 + -0x10);
        }
        bVar26 = !bVar27 && !bVar26;
      }
      pbVar19 = pbVar16;
      if (!bVar26) {
        bVar26 = bVar4 < bVar3;
        if (bVar4 == bVar3) {
          bVar27 = *(uint *)(pbVar18 + 4) < *(uint *)(pbVar13 + -0x14);
          bVar26 = false;
          if (*(uint *)(pbVar18 + 4) == *(uint *)(pbVar13 + -0x14)) {
            bVar26 = *(float *)(pbVar13 + -0x10) == *(float *)(pbVar18 + 8);
            bVar27 = *(float *)(pbVar13 + -0x10) < *(float *)(pbVar18 + 8);
          }
          bVar26 = !bVar27 && !bVar26;
        }
        if (bVar26) goto LAB_14019f974;
        if (pbVar13 != pbVar18) {
          uVar7 = *(undefined4 *)(pbVar13 + -0x14);
          uVar8 = *(undefined4 *)(pbVar13 + -0x10);
          uVar9 = *(undefined4 *)(pbVar13 + -0xc);
          uVar10 = *(undefined8 *)(pbVar18 + -0x18);
          uVar11 = *(undefined8 *)(pbVar18 + -0x10);
          uVar2 = *(undefined8 *)(pbVar18 + -8);
          *(undefined4 *)(pbVar18 + -0x18) = *(undefined4 *)pbVar15;
          *(undefined4 *)(pbVar18 + -0x14) = uVar7;
          *(undefined4 *)(pbVar18 + -0x10) = uVar8;
          *(undefined4 *)(pbVar18 + -0xc) = uVar9;
          *(undefined8 *)(pbVar18 + -8) = *(undefined8 *)(pbVar13 + -8);
          *(undefined8 *)pbVar15 = uVar10;
          *(undefined8 *)(pbVar13 + -0x10) = uVar11;
          *(undefined8 *)(pbVar13 + -8) = uVar2;
        }
        pbVar18 = pbVar18 + -0x18;
      }
      goto joined_r0x00014019f8d9;
    }
LAB_14019f974:
    if (pbVar13 != param_1) {
      pbVar15 = pbVar13 + -0x18;
      if (pbVar16 == pbVar25) {
        pbVar19 = pbVar18 + -0x18;
        if (pbVar18 != pbVar13) {
          uVar10 = *(undefined8 *)(pbVar18 + -0x10);
          uVar11 = *(undefined8 *)pbVar15;
          uVar12 = *(undefined8 *)(pbVar13 + -0x10);
          uVar2 = *(undefined8 *)(pbVar13 + -8);
          *(undefined8 *)pbVar15 = *(undefined8 *)pbVar19;
          *(undefined8 *)(pbVar13 + -0x10) = uVar10;
          *(undefined8 *)(pbVar13 + -8) = *(undefined8 *)(pbVar18 + -8);
          *(undefined8 *)pbVar19 = uVar11;
          *(undefined8 *)(pbVar18 + -0x10) = uVar12;
          *(undefined8 *)(pbVar18 + -8) = uVar2;
        }
        uVar7 = *(undefined4 *)(pbVar20 + -0x14);
        uVar8 = *(undefined4 *)(pbVar20 + -0x10);
        uVar9 = *(undefined4 *)(pbVar20 + -0xc);
        uVar10 = *(undefined8 *)pbVar19;
        uVar11 = *(undefined8 *)(pbVar18 + -0x10);
        uVar2 = *(undefined8 *)(pbVar18 + -8);
        *(undefined4 *)pbVar19 = *(undefined4 *)(pbVar20 + -0x18);
        *(undefined4 *)(pbVar18 + -0x14) = uVar7;
        *(undefined4 *)(pbVar18 + -0x10) = uVar8;
        *(undefined4 *)(pbVar18 + -0xc) = uVar9;
        *(undefined8 *)(pbVar18 + -8) = *(undefined8 *)(pbVar20 + -8);
        *(undefined8 *)(pbVar20 + -0x18) = uVar10;
        *(undefined8 *)(pbVar20 + -0x10) = uVar11;
        *(undefined8 *)(pbVar20 + -8) = uVar2;
        pbVar18 = pbVar19;
        pbVar20 = pbVar20 + -0x18;
      }
      else {
        uVar10 = *(undefined8 *)pbVar16;
        uVar11 = *(undefined8 *)(pbVar16 + 8);
        uVar2 = *(undefined8 *)(pbVar16 + 0x10);
        uVar7 = *(undefined4 *)(pbVar13 + -0x14);
        uVar8 = *(undefined4 *)(pbVar13 + -0x10);
        uVar9 = *(undefined4 *)(pbVar13 + -0xc);
        *(undefined4 *)pbVar16 = *(undefined4 *)pbVar15;
        *(undefined4 *)(pbVar16 + 4) = uVar7;
        *(undefined4 *)(pbVar16 + 8) = uVar8;
        *(undefined4 *)(pbVar16 + 0xc) = uVar9;
        *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(pbVar13 + -8);
        pbVar16 = pbVar16 + 0x18;
        *(undefined8 *)pbVar15 = uVar10;
        *(undefined8 *)(pbVar13 + -0x10) = uVar11;
        *(undefined8 *)(pbVar13 + -8) = uVar2;
      }
      goto LAB_14019f614;
    }
    if (pbVar16 != pbVar25) {
      if (pbVar20 != pbVar16) {
        uVar10 = *(undefined8 *)(pbVar20 + 8);
        uVar11 = *(undefined8 *)pbVar18;
        uVar12 = *(undefined8 *)(pbVar18 + 8);
        uVar2 = *(undefined8 *)(pbVar18 + 0x10);
        *(undefined8 *)pbVar18 = *(undefined8 *)pbVar20;
        *(undefined8 *)(pbVar18 + 8) = uVar10;
        *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar20 + 0x10);
        *(undefined8 *)pbVar20 = uVar11;
        *(undefined8 *)(pbVar20 + 8) = uVar12;
        *(undefined8 *)(pbVar20 + 0x10) = uVar2;
      }
      uVar7 = *(undefined4 *)(pbVar16 + 4);
      uVar8 = *(undefined4 *)(pbVar16 + 8);
      uVar9 = *(undefined4 *)(pbVar16 + 0xc);
      uVar10 = *(undefined8 *)pbVar18;
      uVar11 = *(undefined8 *)(pbVar18 + 8);
      uVar2 = *(undefined8 *)(pbVar18 + 0x10);
      *(undefined4 *)pbVar18 = *(undefined4 *)pbVar16;
      *(undefined4 *)(pbVar18 + 4) = uVar7;
      *(undefined4 *)(pbVar18 + 8) = uVar8;
      *(undefined4 *)(pbVar18 + 0xc) = uVar9;
      *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar16 + 0x10);
      *(undefined8 *)pbVar16 = uVar10;
      *(undefined8 *)(pbVar16 + 8) = uVar11;
      *(undefined8 *)(pbVar16 + 0x10) = uVar2;
      pbVar16 = pbVar16 + 0x18;
      pbVar18 = pbVar18 + 0x18;
      pbVar20 = pbVar20 + 0x18;
      pbVar15 = pbVar13;
      goto LAB_14019f614;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)pbVar18 - (longlong)param_1 >> 3) * -0x5555555555555555 <
        ((longlong)pbVar25 - (longlong)pbVar20 >> 3) * -0x5555555555555555) {
      FUN_14019f430(param_1,pbVar18,param_3,param_4);
      param_1 = pbVar20;
      pbVar18 = pbVar25;
      local_res8 = pbVar20;
      local_res10 = param_2;
    }
    else {
      FUN_14019f430(pbVar20,pbVar25,param_3,param_4);
      local_res10 = pbVar18;
    }
    lVar14 = (longlong)pbVar18 - (longlong)param_1;
    pbVar25 = pbVar18;
    param_2 = local_res10;
  } while( true );
}

