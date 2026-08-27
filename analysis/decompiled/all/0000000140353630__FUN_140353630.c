// Function: FUN_140353630
// Addr: 140353630
// Size: 3621 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140353630(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  short *psVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  byte bVar22;
  undefined1 uVar23;
  int iVar24;
  int iVar25;
  ulonglong *puVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  int *piVar31;
  uint *puVar32;
  char cVar33;
  undefined2 uVar34;
  int iVar35;
  ulonglong uVar36;
  byte bVar37;
  int iVar38;
  uint uVar39;
  char cVar40;
  uint uVar41;
  longlong lVar42;
  uint local_res8;
  int local_res18 [2];
  longlong *local_res20;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  int local_b4;
  uint *local_b0;
  uint *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined1 local_83 [2];
  undefined1 uStack_81;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  
  if (param_1 == (longlong *)0x0) {
    return 6;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  psVar3 = (short *)param_2[1];
  if (psVar3 == (short *)0x0) {
    return 0x14;
  }
  if ((psVar3[1] == 0) || (*psVar3 == 0)) {
    return 0;
  }
  if (*(longlong *)(psVar3 + 0xc) == 0) {
    return 0x14;
  }
  if (*(longlong *)(psVar3 + 4) == 0) {
    return 0x14;
  }
  if (0x1e < *(int *)(param_2 + 10) - 2U) {
    return 6;
  }
  lVar42 = *param_1;
  if (lVar42 == 0) {
    return 0x20;
  }
  uVar29 = 0;
  local_58 = (longlong *)0x0;
  local_c0 = FUN_1402f3120(psVar3);
  cVar1 = *(char *)((longlong)param_2 + 0x54);
  cVar40 = *(char *)((longlong)param_2 + 0x55);
  local_res18[0] = 0;
  plVar17 = (longlong *)FUN_1402f7fa0(lVar42,0x10,local_res18);
  uVar8 = _UNK_140451b2c;
  uVar6 = _UNK_140451b28;
  uVar5 = _UNK_140451b24;
  if (local_res18[0] != 0) {
    return local_res18[0];
  }
  *(undefined4 *)plVar17 = _DAT_140451b20;
  *(undefined4 *)((longlong)plVar17 + 4) = uVar5;
  *(undefined4 *)(plVar17 + 1) = uVar6;
  *(undefined4 *)((longlong)plVar17 + 0xc) = uVar8;
  *plVar17 = lVar42;
  if (plVar17 == (longlong *)0x0) {
    return 6;
  }
  local_58 = plVar17;
  iVar10 = FUN_1402f27a0(psVar3,&PTR_FUN_140451b40,plVar17);
  if (iVar10 != 0) {
    return iVar10;
  }
  puVar32 = (uint *)*param_2;
  local_b4 = *(int *)(param_2 + 10);
  iVar10 = 0;
  local_b0 = puVar32;
  if (*(char *)((longlong)param_2 + 0x56) != '\0') {
    local_res18[0] = 0;
    if (puVar32 == (uint *)0x0) {
      return 6;
    }
    lVar42 = *plVar17;
    if (lVar42 == 0) {
      return 6;
    }
    local_bc = puVar32[1];
    puVar26 = (ulonglong *)(plVar17 + 1);
    local_b8 = *puVar32;
    uVar36 = uVar29;
    for (uVar28 = *puVar26; iVar15 = (int)uVar36, uVar28 != 0;
        uVar28 = *(ulonglong *)(uVar28 + 0x10)) {
      uVar36 = (ulonglong)(iVar15 + 1);
    }
    local_d8 = puVar26;
    local_a0 = lVar42;
    local_78 = lVar42;
    puVar18 = (undefined4 *)FUN_1402f80b0(lVar42,0x28,0,uVar36,0,local_res18);
    local_c8 = puVar18;
    if (local_res18[0] == 0) {
      lVar19 = FUN_1402f80b0(lVar42,4,0,uVar36,0,local_res18);
      if (local_res18[0] == 0) {
        local_98 = 0;
        local_d0 = *local_d8;
        local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffff00000000);
        if (0 < iVar15) {
          uVar34 = local_78._6_2_;
          uVar28 = uVar29;
          do {
            puVar32 = puVar18 + uVar28 * 10;
            local_a8 = puVar32;
            FUN_1402fb290(puVar32);
            puVar32[1] = local_b0[1];
            *puVar32 = *local_b0;
            puVar32[2] = local_b0[2];
            *(short *)(puVar32 + 6) = (short)local_b0[6];
            *(undefined1 *)((longlong)puVar32 + 0x1a) = *(undefined1 *)((longlong)local_b0 + 0x1a);
            uVar20 = FUN_1402f80b0(local_a0,local_b0[2],0,*local_b0,0,local_res18);
            *(undefined8 *)(puVar32 + 4) = uVar20;
            if (local_res18[0] != 0) goto LAB_140353bbf;
            iVar30 = iVar10;
            if ((local_d0 == 0) ||
               (piVar31 = *(int **)(local_d0 + 8), uVar36 = uVar29, piVar31 == (int *)0x0)) {
LAB_1403539f8:
              piVar31 = (int *)(uVar28 * 4 + lVar19);
              *piVar31 = 0;
            }
            else {
              do {
                iVar11 = piVar31[8];
                iVar38 = (int)uVar36;
                if (iVar11 == 1) {
                  iVar11 = (piVar31[2] - *piVar31) * (piVar31[3] + piVar31[1]);
                  uVar36 = (ulonglong)
                           (uint)(iVar38 + ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fU)) >> 6));
                }
                else if (iVar11 == 2) {
                  iVar11 = (piVar31[3] + piVar31[5]) * (piVar31[2] - piVar31[4]);
                  if (iVar11 < 0) {
                    iVar11 = iVar11 + 0x3f;
                  }
                  iVar12 = (piVar31[1] + piVar31[5]) * (piVar31[4] - *piVar31);
                  uVar36 = (ulonglong)
                           (uint)(iVar38 + ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fU)) >> 6) +
                                 (iVar11 >> 6));
                }
                else {
                  if (iVar11 != 3) {
                    uVar28 = (ulonglong)local_res20 & 0xffffffff;
                    goto LAB_1403539f8;
                  }
                  iVar11 = (piVar31[3] + piVar31[7]) * (piVar31[2] - piVar31[6]);
                  iVar12 = (piVar31[4] - *piVar31) * (piVar31[1] + piVar31[5]);
                  iVar13 = (piVar31[7] + piVar31[5]) * (piVar31[6] - piVar31[4]);
                  uVar36 = (ulonglong)
                           (uint)(iVar38 + ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fU)) >> 6) +
                                 ((int)((iVar11 >> 0x1f & 0x3fU) + iVar11) >> 6) +
                                 ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fU)) >> 6));
                }
                piVar31 = *(int **)(piVar31 + 10);
              } while (piVar31 != (int *)0x0);
              piVar31 = (int *)(((ulonglong)local_res20 & 0xffffffff) * 4 + lVar19);
              if ((int)uVar36 < 1) {
                *piVar31 = 2;
                if (local_c0 == 0) {
                  iVar30 = 1;
                }
              }
              else {
                *piVar31 = 1;
                if (local_c0 == 1) {
                  iVar30 = 1;
                }
              }
            }
            uVar28 = *(ulonglong *)(local_d0 + 0x10);
            puVar26 = (ulonglong *)(local_d0 + 0x10);
            local_70 = local_d0;
            *puVar26 = 0;
            _local_83 = CONCAT21(uVar34,cVar40);
            local_d0 = uVar28;
            iVar11 = FUN_1403568a0(&local_78);
            if (iVar11 == 0) {
              local_e8._0_5_ = (uint5)local_c0;
              local_e8 = CONCAT17(uStack_81,CONCAT25(local_83,(uint5)local_e8));
              local_e0 = iVar30;
              iVar11 = FUN_140355b00(&local_e8,&local_78,local_b4,local_a8);
            }
            uVar28 = local_98;
            local_res18[0] = iVar11;
            if (iVar11 != 0) goto LAB_140353bbf;
            *puVar26 = local_d0;
            local_98 = local_70;
            *(ulonglong *)(local_70 + 0x10) = uVar28;
            if (local_c0 == 1) {
              if (*piVar31 == 1) {
                *piVar31 = 2;
              }
              else if (*piVar31 == 2) {
                *piVar31 = 1;
              }
            }
            local_d0 = *puVar26;
            uVar14 = (uint)local_res20 + 1;
            uVar28 = (ulonglong)uVar14;
            local_res20 = (longlong *)CONCAT44(local_res20._4_4_,uVar14);
            puVar32 = local_b0;
            puVar18 = local_c8;
          } while ((int)uVar14 < iVar15);
        }
        *local_d8 = local_98;
        local_a8 = *(uint **)(puVar32 + 4);
        local_res8 = 0;
        uVar28 = uVar29;
        if (0 < (int)local_b8) {
          do {
            uVar14 = (uint)uVar28;
            if (0 < (int)local_bc) {
              iVar10 = (uint)uVar28 * local_bc;
              local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar10);
              uVar28 = uVar29;
              do {
                bVar22 = 0;
                iVar30 = iVar10 + (int)uVar28;
                bVar37 = 0xff;
                uVar36 = uVar29;
                if (0 < iVar15) {
                  do {
                    bVar2 = *(byte *)((longlong)iVar30 + *(longlong *)(puVar18 + uVar36 * 10 + 4));
                    if (*(int *)(lVar19 + uVar36 * 4) == 1) {
                      if (bVar22 <= bVar2) {
                        bVar22 = bVar2;
                      }
                    }
                    else if (bVar2 <= bVar37) {
                      bVar37 = bVar2;
                    }
                    uVar14 = (int)uVar36 + 1;
                    uVar36 = (ulonglong)uVar14;
                  } while ((int)uVar14 < iVar15);
                }
                if (bVar37 <= bVar22) {
                  bVar22 = bVar37;
                }
                *(byte *)((longlong)iVar30 + (longlong)local_a8) = bVar22;
                if (cVar1 != '\0') {
                  *(byte *)((longlong)iVar30 + (longlong)local_a8) = ~bVar22;
                }
                uVar41 = (int)uVar28 + 1;
                uVar28 = (ulonglong)uVar41;
                uVar14 = local_res8;
              } while ((int)uVar41 < (int)local_bc);
            }
            local_res8 = uVar14 + 1;
            uVar28 = (ulonglong)local_res8;
          } while ((int)local_res8 < (int)local_b8);
        }
      }
LAB_140353bbf:
      lVar42 = local_a0;
      puVar26 = local_d8;
      if (lVar19 != 0) {
        FUN_1402f7f90(local_a0,lVar19);
        puVar26 = local_d8;
      }
    }
    puVar18 = local_c8;
    iVar30 = local_res18[0];
    if (local_c8 != (undefined4 *)0x0) {
      if (iVar15 == 0) {
        local_res18[0] = 0x61;
        iVar30 = 0x61;
      }
      else {
        if (0 < iVar15) {
          do {
            FUN_1402f7f90(lVar42,*(undefined8 *)(puVar18 + uVar29 * 10 + 4));
            uVar14 = (int)uVar29 + 1;
            *(undefined8 *)(puVar18 + uVar29 * 10 + 4) = 0;
            uVar29 = (ulonglong)uVar14;
          } while ((int)uVar14 < iVar15);
        }
        FUN_1402f7f90(lVar42,puVar18);
        iVar30 = local_res18[0];
      }
    }
    goto LAB_1403543cd;
  }
  lVar42 = *plVar17;
  if (lVar42 == 0) {
    puVar26 = (ulonglong *)(plVar17 + 1);
LAB_1403543c2:
    iVar30 = 6;
    goto LAB_1403543cd;
  }
  local_d0 = plVar17[1];
  local_c8 = (undefined4 *)0x0;
  iVar15 = local_b4;
  puVar26 = (ulonglong *)(plVar17 + 1);
  while (local_b4 = iVar15, local_d0 != 0) {
    plVar17 = *(longlong **)(local_d0 + 8);
    local_a8 = (uint *)(local_d0 + 8);
    local_res20 = (longlong *)0x0;
    uVar28 = local_d0;
    local_b0 = puVar32;
    for (; local_d8 = puVar26, local_d0 = uVar28, plVar17 != (longlong *)0x0;
        plVar17 = (longlong *)plVar17[5]) {
      iVar15 = (int)plVar17[4];
      if (iVar15 == 1) {
        local_res18[0] = 0;
        plVar21 = (longlong *)FUN_1402f7fa0(lVar42,0x30,local_res18);
        lVar7 = _UNK_140451af0;
        lVar4 = _DAT_140451ae8;
        lVar19 = _UNK_140451ae0;
        puVar26 = local_d8;
        iVar30 = local_res18[0];
        if (local_res18[0] != 0) goto LAB_1403543cd;
        *plVar21 = _DAT_140451ad8;
        plVar21[1] = lVar19;
        uVar9 = _UNK_140451b04;
        uVar8 = _UNK_140451b00;
        uVar6 = _UNK_140451afc;
        uVar5 = _DAT_140451af8;
        plVar21[2] = lVar4;
        plVar21[3] = lVar7;
        *(undefined4 *)(plVar21 + 4) = uVar5;
        *(undefined4 *)((longlong)plVar21 + 0x24) = uVar6;
        *(undefined4 *)(plVar21 + 5) = uVar8;
        *(undefined4 *)((longlong)plVar21 + 0x2c) = uVar9;
        lVar19 = plVar17[1];
        *plVar21 = *plVar17;
        plVar21[1] = lVar19;
        lVar19 = plVar17[3];
        plVar21[2] = plVar17[2];
        plVar21[3] = lVar19;
        uVar5 = *(undefined4 *)((longlong)plVar17 + 0x24);
        lVar19 = plVar17[5];
        uVar6 = *(undefined4 *)((longlong)plVar17 + 0x2c);
        *(int *)(plVar21 + 4) = (int)plVar17[4];
        *(undefined4 *)((longlong)plVar21 + 0x24) = uVar5;
        *(int *)(plVar21 + 5) = (int)lVar19;
        *(undefined4 *)((longlong)plVar21 + 0x2c) = uVar6;
        plVar21[5] = (longlong)local_res20;
        local_res20 = plVar21;
      }
      else {
        if (iVar15 == 2) {
          local_68 = plVar17[1];
          local_78 = *plVar17;
          local_70 = plVar17[2];
          iVar15 = (int)(local_70 >> 0x20);
          uVar14 = (int)local_68 + (int)local_70 * -2 + (int)local_78;
          iVar30 = 1;
          if ((int)uVar14 < 0) {
            uVar14 = ((int)local_70 * 2 - (int)local_68) - (int)local_78;
          }
          iVar38 = (int)((ulonglong)local_78 >> 0x20);
          iVar11 = (int)((ulonglong)local_68 >> 0x20);
          uVar41 = iVar38 + iVar15 * -2 + iVar11;
          if ((int)uVar41 < 0) {
            uVar41 = (iVar15 * 2 - iVar38) - iVar11;
          }
          if ((int)uVar14 < (int)uVar41) {
            uVar14 = uVar41;
          }
          uVar28 = (ulonglong)uVar14;
          if (8 < (int)uVar14) {
            do {
              uVar28 = uVar28 >> 2;
              iVar30 = iVar30 * 2;
            } while (8 < (uint)uVar28);
          }
          iVar30 = FUN_140356450(lVar42,&local_78,iVar30,&local_res20);
        }
        else {
          if (iVar15 != 3) goto LAB_1403543c2;
          local_78 = *plVar17;
          local_70 = plVar17[2];
          local_68 = plVar17[3];
          local_60 = plVar17[1];
          iVar30 = FUN_140356630(lVar42,&local_78,0x20,&local_res20);
        }
        puVar26 = local_d8;
        if (iVar30 != 0) goto LAB_1403543cd;
      }
      puVar26 = local_d8;
      uVar28 = local_d0;
    }
    local_res18[0] = 0;
    puVar18 = (undefined4 *)FUN_1402f7fa0(lVar42,0x18,local_res18);
    uVar20 = DAT_140451b18;
    uVar8 = _UNK_140451b14;
    uVar6 = _UNK_140451b10;
    uVar5 = _UNK_140451b0c;
    puVar26 = local_d8;
    iVar30 = local_res18[0];
    if (local_res18[0] != 0) goto LAB_1403543cd;
    *puVar18 = _DAT_140451b08;
    puVar18[1] = uVar5;
    puVar18[2] = uVar6;
    puVar18[3] = uVar8;
    *(undefined8 *)(puVar18 + 4) = uVar20;
    *(undefined4 **)(puVar18 + 4) = local_c8;
    *(longlong **)(puVar18 + 2) = local_res20;
    local_res20 = (longlong *)0x0;
    local_d0 = *(ulonglong *)(uVar28 + 0x10);
    puVar32 = local_b0;
    iVar15 = local_b4;
    local_c8 = puVar18;
    if (uVar28 != 0) {
      lVar19 = *(longlong *)local_a8;
      while (lVar19 != 0) {
        lVar4 = *(longlong *)(lVar19 + 0x28);
        FUN_1402f7f90(lVar42,lVar19);
        lVar19 = lVar4;
      }
      FUN_1402f7f90(lVar42,uVar28);
      puVar32 = local_b0;
      iVar15 = local_b4;
      puVar26 = local_d8;
    }
  }
  *puVar26 = (ulonglong)local_c8;
  local_res18[0] = 0;
  local_b0 = (uint *)0x0;
  uVar28 = uVar29;
  local_d8 = puVar26;
  if (((puVar32 == (uint *)0x0) || (0x1e < iVar15 - 2U)) ||
     (local_b0 = (uint *)*local_58, local_b0 == (uint *)0x0)) {
    local_res18[0] = 6;
  }
  else if ((uint)(0x7fffffff / (ulonglong)puVar32[1]) < *puVar32) {
    local_res18[0] = 10;
  }
  else {
    local_d0 = FUN_1402f80b0(local_b0,0xc,0,puVar32[1] * *puVar32,0,local_res18);
    uVar28 = local_d0;
    if (local_res18[0] == 0) {
      uVar14 = puVar32[1];
      if (uVar14 != 0) {
        uVar41 = *puVar32;
        local_res20 = (longlong *)CONCAT44(local_res20._4_4_,uVar41);
        if (uVar41 != 0) {
          local_a8 = *(uint **)(puVar32 + 4);
          local_bc = iVar15 << 0x10;
          uVar34 = DAT_140451b39;
          uVar23 = DAT_140451b3b;
          for (local_98 = *local_d8; local_98 != 0; local_98 = *(ulonglong *)(local_98 + 0x10)) {
            for (piVar31 = *(int **)(local_98 + 8); piVar31 != (int *)0x0;
                piVar31 = *(int **)(piVar31 + 10)) {
              iVar15 = piVar31[8];
              iVar30 = *piVar31;
              iVar11 = piVar31[1];
              iVar38 = piVar31[4];
              iVar12 = piVar31[5];
              iVar35 = iVar30;
              iVar13 = iVar30;
              iVar27 = iVar11;
              iVar24 = iVar11;
              if (iVar15 == 1) {
LAB_140354045:
                iVar15 = piVar31[2];
                iVar30 = piVar31[3];
                if (iVar15 < iVar35) {
                  iVar35 = iVar15;
                }
                if (iVar13 < iVar15) {
                  iVar13 = iVar15;
                }
                if (iVar30 < iVar27) {
                  iVar27 = iVar30;
                }
                uVar41 = (uint)local_res20;
                if (iVar24 < iVar30) {
                  iVar24 = iVar30;
                }
              }
              else {
                iVar13 = iVar38;
                iVar24 = iVar12;
                if (iVar15 == 2) {
LAB_14035400e:
                  iVar27 = iVar24;
                  iVar24 = iVar12;
LAB_140354011:
                  iVar35 = iVar38;
                  if (iVar30 < iVar38) {
                    iVar35 = iVar30;
                  }
                  if (iVar13 < iVar30) {
                    iVar13 = iVar30;
                  }
                  if (iVar11 < iVar27) {
                    iVar27 = iVar11;
                  }
                  if (iVar24 < iVar11) {
                    iVar24 = iVar11;
                  }
                  goto LAB_140354045;
                }
                iVar27 = iVar10;
                iVar24 = iVar10;
                iVar35 = iVar10;
                iVar13 = iVar10;
                if (iVar15 == 3) {
                  iVar13 = piVar31[6];
                  iVar24 = piVar31[7];
                  iVar15 = iVar38;
                  if ((iVar13 <= iVar38) && (iVar15 = iVar13, iVar13 < iVar38)) {
                    iVar13 = iVar38;
                  }
                  iVar38 = iVar15;
                  iVar27 = iVar12;
                  if ((iVar24 <= iVar12) && (iVar27 = iVar24, iVar24 < iVar12)) goto LAB_14035400e;
                  goto LAB_140354011;
                }
              }
              iVar15 = iVar24 + 0x3f;
              iVar30 = ((int)((iVar27 + -0x3f >> 0x1f & 0x3fU) + iVar27 + -0x3f) >> 6) - local_b4;
              if (iVar15 < 0) {
                iVar15 = iVar24 + 0x7e;
              }
              uVar16 = (iVar15 >> 6) + local_b4;
              local_b8 = uVar16;
              if (iVar30 < (int)uVar16) {
                iVar15 = ((int)((iVar35 + -0x3f >> 0x1f & 0x3fU) + iVar35 + -0x3f) >> 6) - local_b4;
                uVar28 = (ulonglong)local_a0 >> 0x20;
                local_a0 = CONCAT44((int)uVar28,iVar15);
                iVar11 = ((int)((iVar13 + 0x3f >> 0x1f & 0x3fU) + iVar13 + 0x3f) >> 6) + local_b4;
                do {
                  if (iVar15 < iVar11) {
                    do {
                      local_c8 = (undefined4 *)0x0;
                      local_e8 = 0x7fffffff;
                      local_e0 = (uint)CONCAT12(uVar23,uVar34) << 8;
                      if ((((-1 < iVar15) && (iVar15 < (int)uVar14)) && (-1 < iVar30)) &&
                         (iVar30 < (int)uVar41)) {
                        iVar38 = piVar31[8];
                        local_c8 = (undefined4 *)CONCAT44(iVar30 * 0x40 + 0x20,iVar15 * 0x40 + 0x20)
                        ;
                        if (iVar38 == 1) {
                          FUN_1403558c0(piVar31,local_c8,&local_e8);
                        }
                        else if (iVar38 == 2) {
                          FUN_140354d90(piVar31,local_c8,&local_e8);
                        }
                        else {
                          if (iVar38 != 3) {
                            local_res18[0] = 6;
                            uVar28 = local_d0;
                            puVar26 = local_d8;
                            goto LAB_1403542ff;
                          }
                          FUN_140355280(piVar31,local_c8,&local_e8);
                        }
                        local_res18[0] = 0;
                        cVar33 = (char)local_e0;
                        if (local_c0 == 1) {
                          cVar33 = -(char)local_e0;
                          local_e0 = CONCAT31(local_e0._1_3_,cVar33);
                        }
                        uVar23 = DAT_140451b3b;
                        uVar34 = DAT_140451b39;
                        if ((int)local_e8 <= (int)local_bc) {
                          iVar38 = iVar30;
                          if (cVar40 == '\0') {
                            iVar38 = (uVar41 - iVar30) + -1;
                          }
                          uVar28 = (ulonglong)(iVar38 * uVar14 + iVar15);
                          plVar17 = (longlong *)(local_d0 + uVar28 * 0xc);
                          if (*(char *)(local_d0 + 8 + uVar28 * 0xc) == '\0') {
LAB_140354240:
                            *plVar17 = local_e8;
                            *(int *)(plVar17 + 1) = local_e0;
                            uVar23 = DAT_140451b3b;
                            uVar34 = DAT_140451b39;
                          }
                          else {
                            iVar38 = (int)*plVar17;
                            iVar12 = iVar38 - (int)local_e8;
                            if (iVar12 < 0) {
                              iVar12 = (int)local_e8 - iVar38;
                            }
                            if (iVar12 < 0x21) {
                              iVar12 = *(int *)((longlong)plVar17 + 4);
                              iVar13 = -iVar12;
                              if (-iVar12 < 0) {
                                iVar13 = iVar12;
                              }
                              local_80 = CONCAT13(local_e0._3_1_,CONCAT21(local_e0._1_2_,cVar33));
                              iVar24 = local_e8._4_4_;
                              if (local_e8 < 0) {
                                iVar24 = -local_e8._4_4_;
                              }
                              iVar27 = (int)local_e8;
                              iVar35 = local_e8._4_4_;
                              iVar25 = local_80;
                              if (iVar24 < iVar13) {
                                iVar27 = iVar38;
                                iVar35 = iVar12;
                                iVar25 = (int)plVar17[1];
                              }
                              local_78 = CONCAT44(iVar35,iVar27);
                              *plVar17 = local_78;
                              *(int *)(plVar17 + 1) = iVar25;
                              uVar23 = DAT_140451b3b;
                              uVar34 = DAT_140451b39;
                            }
                            else if ((int)local_e8 < iVar38) goto LAB_140354240;
                          }
                        }
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < iVar11);
                    uVar16 = local_b8;
                    iVar15 = (int)local_a0;
                  }
                  iVar30 = iVar30 + 1;
                } while (iVar30 < (int)uVar16);
              }
            }
          }
          local_res8 = 0;
          uVar28 = local_d0;
          puVar26 = local_d8;
          if (0 < (int)uVar41) {
            do {
              uVar16 = local_bc;
              uVar28 = local_d0;
              iVar10 = 0;
              uVar39 = (uint)uVar29;
              if (0 < (int)uVar14) {
                cVar40 = -1;
                do {
                  uVar41 = (uint)uVar29 * uVar14 + iVar10;
                  puVar32 = (uint *)(uVar28 + (ulonglong)uVar41 * 0xc);
                  cVar33 = *(char *)(uVar28 + 8 + (ulonglong)uVar41 * 0xc);
                  if (cVar33 == '\0') {
                    *puVar32 = uVar16;
                    cVar33 = cVar40;
                  }
                  uVar39 = *puVar32;
                  if ((int)uVar16 < (int)*puVar32) {
                    uVar39 = uVar16;
                  }
                  iVar15 = -(int)cVar33;
                  if (cVar1 == '\0') {
                    iVar15 = (int)cVar33;
                  }
                  *puVar32 = iVar15 * uVar39;
                  iVar30 = FUN_1402efa10(iVar15 * uVar39,uVar16);
                  iVar15 = -iVar30;
                  if (-iVar30 < 0) {
                    iVar15 = iVar30;
                  }
                  iVar15 = iVar15 >> 9;
                  if (iVar30 < 1) {
                    if ((iVar30 < 0) && (0x80 < iVar15)) {
                      iVar15 = 0x80;
                    }
                  }
                  else if (0x7f < iVar15) {
                    iVar15 = 0x7f;
                  }
                  cVar40 = -(char)iVar15;
                  if (-1 < iVar30) {
                    cVar40 = (char)iVar15;
                  }
                  iVar10 = iVar10 + 1;
                  *(char *)((longlong)local_a8 + (ulonglong)uVar41) = cVar40 + -0x80;
                  cVar40 = cVar33;
                } while (iVar10 < (int)uVar14);
                uVar41 = (uint)local_res20;
                uVar39 = local_res8;
              }
              local_res8 = uVar39 + 1;
              uVar29 = (ulonglong)local_res8;
              uVar28 = local_d0;
              puVar26 = local_d8;
            } while ((int)local_res8 < (int)uVar41);
          }
          goto LAB_1403542ff;
        }
      }
      local_res18[0] = 0x13;
      puVar26 = local_d8;
    }
  }
LAB_1403542ff:
  FUN_1402f7f90(local_b0,uVar28);
  iVar30 = local_res18[0];
LAB_1403543cd:
  plVar17 = local_58;
  if (iVar30 != 0) {
    return iVar30;
  }
  lVar42 = *local_58;
  if (lVar42 != 0) {
    uVar29 = *puVar26;
    while (uVar29 != 0) {
      uVar28 = *(ulonglong *)(uVar29 + 0x10);
      lVar19 = *(longlong *)(uVar29 + 8);
      while (lVar19 != 0) {
        lVar4 = *(longlong *)(lVar19 + 0x28);
        FUN_1402f7f90(lVar42,lVar19);
        lVar19 = lVar4;
      }
      FUN_1402f7f90(lVar42,uVar29);
      uVar29 = uVar28;
    }
    FUN_1402f7f90(lVar42,plVar17);
    return 0;
  }
  return 0;
}

