// Function: FUN_140326800
// Addr: 140326800
// Size: 1566 bytes


ulonglong FUN_140326800(undefined8 *param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 *puVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  byte *pbVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  uint *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  uint local_res18 [2];
  
  uVar16 = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar16;
  *(uint *)(param_1 + 1) = param_3;
  param_1[0x19] = param_1 + 0x18;
  param_1[0x18] = 0;
  uVar14 = FUN_1402f5c50(param_2,param_3);
  local_res18[0] = (uint)uVar14;
  if (local_res18[0] != 0) {
    return uVar14;
  }
  uVar14 = FUN_1402f4fe0(param_2,param_4 & 0xffffffff);
  if ((int)uVar14 != 0) {
    return uVar14;
  }
  param_1[0x1b] = *(undefined8 *)(param_2 + 0x38);
  puVar9 = *(undefined1 **)(param_2 + 0x38);
  pbVar18 = puVar9 + (param_4 & 0xffffffff);
  if (puVar9 + 0xf <= pbVar18) {
    *(uint *)((longlong)param_1 + 0xc) = (uint)CONCAT11(*puVar9,puVar9[1]);
    uVar3 = puVar9[3];
    uVar4 = puVar9[2];
    *(uint *)(param_1 + 2) = (uint)CONCAT11(uVar4,uVar3);
    uVar5 = puVar9[5];
    uVar6 = puVar9[4];
    *(uint *)((longlong)param_1 + 0x14) = (uint)CONCAT11(uVar6,uVar5);
    *(uint *)(param_1 + 3) = (int)(short)((ushort)(byte)puVar9[6] << 8) | (uint)(byte)puVar9[7];
    *(uint *)((longlong)param_1 + 0x1c) =
         (int)(short)((ushort)(byte)puVar9[8] << 8) | (uint)(byte)puVar9[9];
    *(uint *)(param_1 + 4) = (int)(short)((ushort)(byte)puVar9[10] << 8) | (uint)(byte)puVar9[0xb];
    *(uint *)((longlong)param_1 + 0x24) =
         (int)(short)((ushort)(byte)puVar9[0xc] << 8) | (uint)(byte)puVar9[0xd];
    bVar7 = puVar9[0xe];
    *(uint *)(param_1 + 5) = (uint)bVar7;
    if ((CONCAT11(uVar4,uVar3) != 0) && (CONCAT11(uVar6,uVar5) != 0)) {
      if ((bVar7 & 4) == 0) {
        pbVar21 = puVar9 + 0x11;
        if (pbVar18 < pbVar21) goto LAB_140326dc3;
        *(uint *)((longlong)param_1 + 0x2c) =
             (int)(short)((ushort)(byte)puVar9[0xf] << 8) | (uint)(byte)puVar9[0x10];
      }
      else {
        pbVar21 = puVar9 + 0xf;
      }
      local_res18[0] = 0;
      if ((char)bVar7 < '\0') {
        pbVar23 = pbVar21 + 1;
        if (pbVar18 < pbVar23) goto LAB_140326dc3;
        bVar8 = *pbVar21;
        uVar22 = (uint)bVar8;
        uVar20 = 0;
        pbVar21 = pbVar23;
        if (bVar8 != 0) {
          local_res18[0] = 0;
          do {
            if (pbVar18 < pbVar23 + 2) goto LAB_140326dc3;
            pbVar1 = pbVar23 + 1;
            pbVar21 = pbVar23 + 2;
            pbVar23 = pbVar21 + *pbVar23;
            if (pbVar18 < pbVar23) goto LAB_140326dc3;
            puVar24 = &DAT_14043f330;
            do {
              if (*puVar24 == (uint)*pbVar1) {
                uVar20 = (**(code **)(puVar24 + 2))(pbVar21,pbVar23);
                if (uVar20 != 0) goto LAB_140326a02;
                break;
              }
              puVar2 = puVar24 + 6;
              puVar24 = puVar24 + 4;
            } while (*(longlong *)puVar2 != 0);
            uVar22 = uVar22 - 1;
            pbVar21 = pbVar23;
          } while (uVar22 != 0);
        }
LAB_140326a02:
        local_res18[0] = uVar20;
        if (uVar20 != 0) goto LAB_140326dce;
      }
      pbVar23 = pbVar21 + 3;
      if (pbVar23 <= pbVar18) {
        uVar20 = (uint)CONCAT21(CONCAT11(*pbVar21,pbVar21[1]),pbVar21[2]);
        pbVar21 = pbVar23;
        if (uVar20 != 0) {
          pbVar21 = pbVar23 + uVar20;
          if (pbVar18 < pbVar21) goto LAB_140326dc3;
          while (pbVar23 + 4 <= pbVar21) {
            pbVar1 = pbVar23 + 2;
            uVar22 = (uint)CONCAT11(*pbVar23,pbVar23[1]);
            if ((uVar22 < 4) || (uVar20 < uVar22)) break;
            sVar10 = CONCAT11(*pbVar1,pbVar23[3]);
            if (sVar10 == 1) {
              puVar26 = param_1 + 0xd;
LAB_140326afe:
              uVar14 = FUN_1403253e0(pbVar23 + 4,uVar22 - 4,uVar16,puVar26);
              local_res18[0] = (uint)uVar14;
              if (local_res18[0] != 0) {
                return uVar14;
              }
            }
            else if (sVar10 == 2) {
              if (pbVar23 + 0x24 <= pbVar1 + ((ulonglong)uVar22 - 2)) {
                *(uint *)(param_1 + 6) =
                     (int)(short)((ushort)pbVar23[0xe] << 8) | (uint)pbVar23[0xf];
                *(uint *)((longlong)param_1 + 0x34) =
                     (int)(short)((ushort)pbVar23[0x10] << 8) | (uint)pbVar23[0x11];
                *(uint *)(param_1 + 7) =
                     (int)(short)((ushort)pbVar23[0x12] << 8) | (uint)pbVar23[0x13];
              }
            }
            else if (sVar10 == 3) {
              puVar26 = param_1 + 0xe;
              goto LAB_140326afe;
            }
            uVar20 = uVar20 - uVar22;
            pbVar23 = pbVar1 + ((ulonglong)uVar22 - 2);
            if (uVar20 == 0) break;
          }
        }
        pbVar23 = pbVar21 + 1;
        if (pbVar23 <= pbVar18) {
          bVar8 = *pbVar21;
          *(uint *)(param_1 + 0x11) = (uint)bVar8;
          if (pbVar23 + ((uint)bVar8 + (uint)bVar8) <= pbVar18) {
            uVar15 = FUN_1402f7ff0(uVar16,4,0,(uint)bVar8,0,local_res18);
            param_1[0x12] = uVar15;
            if (local_res18[0] != 0) goto LAB_140326dce;
            uVar14 = 0;
            pbVar21 = pbVar23;
            if (bVar8 != 0) {
              do {
                pbVar23 = pbVar21 + 2;
                *(uint *)(param_1[0x12] + uVar14 * 4) =
                     (int)(short)((ushort)*pbVar21 << 8) | (uint)pbVar21[1];
                uVar20 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar20;
                pbVar21 = pbVar23;
              } while (uVar20 < bVar8);
            }
            if (pbVar23 + 8 <= pbVar18) {
              *(uint *)(param_1 + 0x13) = (uint)*pbVar23;
              *(uint *)((longlong)param_1 + 0x9c) = (uint)pbVar23[1];
              *(uint *)(param_1 + 10) = (uint)CONCAT11(pbVar23[2],pbVar23[3]);
              pbVar21 = pbVar23 + 8;
              *(uint *)(param_1 + 8) = (uint)CONCAT11(pbVar23[4],pbVar23[5]);
              uVar11 = CONCAT11(pbVar23[6],pbVar23[7]);
              uVar20 = (uint)uVar11;
              *(uint *)(param_1 + 0x14) = uVar20;
              param_1[0x15] = pbVar21 + ((ulonglong)param_3 - *(longlong *)(param_2 + 0x38));
              if (uVar11 != 0) {
                uVar22 = (uint)((bVar7 & 2) != 0);
                iVar19 = uVar22 + 6;
                if ((bVar7 & 4) == 0) {
                  iVar19 = uVar22 + 4;
                }
                iVar12 = iVar19 + 1;
                if ((bVar7 & 8) == 0) {
                  iVar12 = iVar19;
                }
                iVar19 = iVar12 + 1;
                if ((bVar7 & 0x10) == 0) {
                  iVar19 = iVar12;
                }
                iVar12 = iVar19 + 1;
                if ((bVar7 & 0x20) == 0) {
                  iVar12 = iVar19;
                }
                if (pbVar21 + iVar12 * uVar20 <= pbVar18) {
                  uVar16 = FUN_1402f7ff0(uVar16,0x10,0,uVar20,0,local_res18);
                  param_1[0x16] = uVar16;
                  if ((local_res18[0] == 0) && (uVar14 = 0, uVar11 != 0)) {
                    do {
                      puVar24 = (uint *)(uVar14 * 0x10 + param_1[0x16]);
                      uVar22 = (uint)*pbVar21;
                      if ((bVar7 & 2) == 0) {
                        lVar17 = 1;
                      }
                      else {
                        uVar22 = (uint)CONCAT11(*pbVar21,pbVar21[1]);
                        lVar17 = 2;
                      }
                      pbVar21 = pbVar21 + lVar17;
                      *puVar24 = uVar22;
                      if ((bVar7 & 4) == 0) {
                        uVar22 = *(uint *)((longlong)param_1 + 0x2c);
                      }
                      else {
                        uVar22 = (int)(short)((ushort)*pbVar21 << 8) | (uint)pbVar21[1];
                        pbVar21 = pbVar21 + 2;
                      }
                      puVar24[1] = uVar22;
                      pbVar18 = pbVar21 + 1;
                      if ((bVar7 & 8) == 0) {
                        pbVar18 = pbVar21;
                      }
                      uVar22 = (uint)*pbVar18;
                      if ((bVar7 & 0x10) == 0) {
                        lVar27 = 4;
                        lVar17 = 3;
                      }
                      else {
                        lVar27 = 5;
                        uVar22 = (uint)CONCAT11(*pbVar18,pbVar18[1]);
                        lVar17 = 4;
                      }
                      puVar24[2] = uVar22;
                      if ((bVar7 & 0x20) == 0) {
                        uVar22 = (uint)pbVar18[lVar17 + -2];
                      }
                      else {
                        uVar22 = (uint)CONCAT11(pbVar18[lVar27 + -3],pbVar18[lVar27 + -2]);
                        lVar17 = lVar27;
                      }
                      pbVar21 = pbVar18 + lVar17;
                      uVar25 = (int)uVar14 + 1;
                      uVar14 = (ulonglong)uVar25;
                      puVar24[3] = uVar22 << 8 | (uint)pbVar21[-1];
                    } while (uVar25 < uVar20);
                  }
                  goto LAB_140326dce;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_140326dc3:
  local_res18[0] = 8;
LAB_140326dce:
  FUN_1402f5100(param_2);
  uVar13 = FUN_1402f54a0(param_2);
  *(undefined4 *)(param_1 + 0x1a) = uVar13;
  param_1[0x1b] = 0;
  return (ulonglong)local_res18[0];
}

