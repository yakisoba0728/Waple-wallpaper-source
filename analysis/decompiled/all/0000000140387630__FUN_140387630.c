// Function: FUN_140387630
// Addr: 140387630
// Size: 4561 bytes


ulonglong FUN_140387630(longlong *param_1,longlong param_2,undefined8 *param_3,uint *param_4,
                       longlong param_5,uint *param_6,longlong param_7,uint *param_8,char param_9,
                       char param_10,char param_11,undefined8 *param_12,undefined8 param_13,
                       uint param_14,uint *param_15)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  float *pfVar11;
  int *piVar12;
  undefined8 uVar13;
  float *pfVar14;
  uint uVar15;
  int iVar16;
  float *pfVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  undefined1 uVar24;
  int iVar25;
  ulonglong uVar26;
  byte *pbVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint local_168;
  uint local_164;
  uint local_160;
  uint *local_158;
  float *local_150;
  uint *local_148;
  byte *local_138;
  float *pfStack_130;
  ulonglong local_128;
  char *local_118;
  longlong *local_110;
  char *local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  longlong local_e0;
  uint local_d8;
  uint local_d4;
  byte *local_d0;
  undefined4 local_c8;
  byte *local_c0;
  uint *local_b8;
  undefined1 local_b0 [120];
  
  puVar10 = (undefined1 *)register0x00000020;
  if (0x40 < param_14) goto LAB_140387a17;
  local_d8 = 0;
  local_b8 = &local_d8;
  if (param_15 != (uint *)0x0) {
    local_b8 = param_15;
  }
  uVar15 = *local_b8;
  puVar10 = (undefined1 *)(ulonglong)uVar15;
  if (0x800 < uVar15) goto LAB_140387a17;
  *local_b8 = uVar15 + 1;
  if (param_7 != 0) {
    uVar15 = param_14;
    if (param_14 <= *(uint *)(param_7 + 0x24)) {
      uVar15 = *(uint *)(param_7 + 0x24);
    }
    *(uint *)(param_7 + 0x24) = uVar15;
  }
  puVar22 = param_12;
  if (param_12 == (undefined8 *)0xffffffffffffffff) {
    puVar22 = (undefined8 *)0x0;
  }
  if ((*(int *)(puVar22 + 2) == 0) && (*(char *)(param_2 + 0x78) != '\0')) {
    param_12[1] = *(undefined8 *)(param_2 + 0x80);
    *(undefined4 *)(param_12 + 2) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)((longlong)param_12 + 0x14) = 0;
  }
  iVar25 = *(int *)((longlong)param_1 + 0x24);
  if (iVar25 == 1) {
    local_148 = param_4 + 1;
    local_160 = *local_148;
    local_158 = param_4;
LAB_14038773b:
    if (param_14 == 0) {
      if (param_7 != 0) {
        uVar15 = (uint)(short)((ushort)((byte *)param_1[3])[1] + (ushort)*(byte *)param_1[3] * 0x100
                              );
        if (uVar15 <= *(uint *)(param_7 + 0x14)) {
          uVar15 = *(uint *)(param_7 + 0x14);
        }
        *(uint *)(param_7 + 0x14) = uVar15;
      }
    }
    else if (param_8 != (uint *)0x0) {
      *param_8 = *param_8 +
                 (int)(short)((ushort)*(byte *)param_1[3] * 0x100 + (ushort)((byte *)param_1[3])[1])
      ;
    }
    local_f8 = param_1[3];
    local_f0 = *param_1;
    uStack_e8 = param_1[1];
    local_e0 = param_1[2];
    puVar10 = (undefined1 *)FUN_1403c6ce0(&local_f8,param_4,param_11);
    if ((char)puVar10 == '\0') goto LAB_140387a17;
  }
  else {
    local_158 = (uint *)(param_5 + 0x10);
    local_148 = (uint *)(param_5 + 0x14);
    local_160 = *local_148;
    if (iVar25 == 1) goto LAB_14038773b;
    if (iVar25 == 2) {
      uVar18 = param_1[2];
      iVar25 = (int)uVar18;
      uVar26 = param_1[1];
      uVar19 = param_1[3] + 10;
      if ((uVar26 <= uVar19) && (uVar19 <= (uVar18 & 0xffffffff) + uVar26)) {
        iVar16 = (int)uVar26;
        if (3 < (uint)((iVar25 - (int)uVar19) + iVar16)) {
          bVar2 = *(byte *)(param_1[3] + 0xb);
          iVar8 = (bVar2 & 1) * 2;
          uVar21 = (ulonglong)(iVar8 + 6);
          if ((bVar2 & 8) == 0) {
            if ((bVar2 & 0x40) == 0) {
              if ((char)bVar2 < '\0') {
                uVar21 = (ulonglong)(iVar8 + 0xe);
              }
            }
            else {
              uVar21 = (ulonglong)(iVar8 + 10);
            }
          }
          else {
            uVar21 = (ulonglong)(iVar8 + 8);
          }
          if (((uint)uVar21 <= (uint)((iVar25 - (int)uVar19) + iVar16)) && (uVar19 != 0)) {
            do {
              FUN_1403cf180(uVar19,&local_f8,&local_d0);
              puVar10 = (undefined1 *)FUN_1403a4c80(local_158,*local_148 + 5,0);
              if ((char)puVar10 == '\0') goto LAB_140387a17;
              if (((int)*local_148 < (int)*local_158) ||
                 (cVar7 = FUN_1403a4c80(local_158,*local_148 + 1,0), cVar7 != '\0')) {
                uVar15 = *local_148;
                lVar5 = *(longlong *)(param_5 + 0x18);
                *local_148 = uVar15 + 1;
                *(byte **)(lVar5 + (ulonglong)uVar15 * 0xc) = local_d0;
                *(undefined4 *)(lVar5 + 8 + (ulonglong)uVar15 * 0xc) = local_c8;
              }
              else {
                DAT_1404e4f20 = DAT_14045dd10;
                DAT_1404e4f28 = (undefined4)DAT_14045dd18;
              }
              if (((((*(byte *)(uVar19 + 1) & 0x20) == 0) ||
                   (uVar19 = uVar19 + uVar21, uVar19 < uVar26)) ||
                  ((uVar18 & 0xffffffff) + uVar26 < uVar19)) ||
                 ((uint)((iVar25 - (int)uVar19) + iVar16) < 4)) break;
              bVar2 = *(byte *)(uVar19 + 1);
              iVar8 = (bVar2 & 1) * 2;
              uVar21 = (ulonglong)(iVar8 + 6);
              if ((bVar2 & 8) == 0) {
                if ((bVar2 & 0x40) == 0) {
                  if ((char)bVar2 < '\0') {
                    uVar21 = (ulonglong)(iVar8 + 0xe);
                  }
                }
                else {
                  uVar21 = (ulonglong)(iVar8 + 10);
                }
              }
              else {
                uVar21 = (ulonglong)(iVar8 + 8);
              }
            } while ((uint)uVar21 <= (uint)((iVar25 - (int)uVar19) + iVar16));
          }
        }
      }
    }
  }
  puVar10 = (undefined1 *)FUN_1403f86d0(local_158);
  if ((char)puVar10 == '\0') {
LAB_140387a17:
    return (ulonglong)puVar10 & 0xffffffffffffff00;
  }
  uVar15 = *local_148 - 4;
  local_164 = 0;
  if (uVar15 <= *local_148) {
    local_164 = 4;
  }
  local_150 = (float *)(*(longlong *)(local_158 + 2) + (ulonglong)uVar15 * 0xc);
  uVar15 = *(uint *)(param_1 + 4);
  uVar18 = (ulonglong)uVar15;
  puVar4 = (uint *)param_3[1];
  uVar20 = *puVar4;
  if (uVar15 < uVar20) {
    puVar22 = &DAT_14045dd10;
    if (*(undefined8 **)(puVar4 + 6) != (undefined8 *)0x0) {
      puVar22 = *(undefined8 **)(puVar4 + 6);
    }
    bVar2 = *(byte *)(puVar22[2] + 3 + uVar18 * 4);
    bVar3 = *(byte *)(puVar22[2] + 2 + uVar18 * 4);
LAB_140387a81:
    iVar25 = (int)(short)((ushort)bVar2 + (ushort)bVar3 * 0x100);
  }
  else {
    if (uVar15 < puVar4[1]) {
      puVar22 = &DAT_14045dd10;
      if (*(undefined8 **)(puVar4 + 6) != (undefined8 *)0x0) {
        puVar22 = *(undefined8 **)(puVar4 + 6);
      }
      lVar5 = (ulonglong)(uVar15 - uVar20) + (ulonglong)uVar20 * 2;
      bVar2 = *(byte *)(puVar22[2] + 1 + lVar5 * 2);
      bVar3 = *(byte *)(puVar22[2] + lVar5 * 2);
      goto LAB_140387a81;
    }
    iVar25 = 0;
  }
  lVar5 = param_1[3];
  puVar6 = (uint *)param_3[2];
  uVar20 = *puVar6;
  if (uVar15 < uVar20) {
    puVar22 = &DAT_14045dd10;
    if (*(undefined8 **)(puVar6 + 6) != (undefined8 *)0x0) {
      puVar22 = *(undefined8 **)(puVar6 + 6);
    }
    bVar2 = *(byte *)(puVar22[2] + 3 + uVar18 * 4);
    bVar3 = *(byte *)(puVar22[2] + 2 + uVar18 * 4);
LAB_140387ae8:
    iVar16 = (int)(short)((ushort)bVar2 + (ushort)bVar3 * 0x100);
  }
  else {
    if (uVar15 < puVar6[1]) {
      puVar22 = &DAT_14045dd10;
      if (*(undefined8 **)(puVar6 + 6) != (undefined8 *)0x0) {
        puVar22 = *(undefined8 **)(puVar6 + 6);
      }
      lVar1 = (ulonglong)(uVar15 - uVar20) + (ulonglong)uVar20 * 2;
      bVar2 = *(byte *)(puVar22[2] + 1 + lVar1 * 2);
      bVar3 = *(byte *)(puVar22[2] + lVar1 * 2);
      goto LAB_140387ae8;
    }
    iVar16 = 0;
  }
  iVar16 = (short)((ushort)*(byte *)(lVar5 + 9) + (ushort)*(byte *)(lVar5 + 8) * 0x100) + iVar16;
  iVar8 = FUN_1403c5ff0(puVar4,uVar15);
  iVar9 = FUN_1403c5ff0(puVar6,uVar15);
  if (local_164 != 0) {
    iVar25 = (short)((ushort)*(byte *)(lVar5 + 3) + (ushort)*(byte *)(lVar5 + 2) * 0x100) - iVar25;
    *local_150 = (float)iVar25;
    if (((1 < local_164) && (local_150[3] = (float)(iVar25 + iVar8), 2 < local_164)) &&
       (local_150[7] = (float)iVar16, 3 < local_164)) {
      pfVar11 = local_150 + 10;
      goto LAB_140387bbe;
    }
  }
  DAT_1404e4f20 = DAT_14045dd10;
  DAT_1404e4f28 = (undefined4)DAT_14045dd18;
  pfVar11 = (float *)((longlong)&DAT_1404e4f20 + 4);
LAB_140387bbe:
  *pfVar11 = (float)(iVar16 - iVar9);
  piVar12 = (int *)param_12[1];
  for (iVar25 = *(int *)(param_12 + 2); iVar25 != 0; iVar25 = iVar25 + -1) {
    if (*piVar12 != 0) {
      if ((param_11 == '\0') || (*(int *)((longlong)param_1 + 0x24) != 1)) {
        uVar24 = 0;
      }
      else {
        uVar24 = 1;
      }
      uVar15 = *local_148;
      local_f0 = *(longlong *)(local_158 + 2);
      if (local_160 != 0) {
        bVar28 = uVar15 < local_160;
        uVar15 = uVar15 - local_160;
        if (bVar28) {
          uVar15 = 0;
        }
        local_f0 = local_f0 + (ulonglong)local_160 * 0xc;
      }
      uStack_e8 = (ulonglong)uVar15;
      local_138 = (byte *)*param_12;
      pfStack_130 = (float *)param_12[1];
      local_128 = param_12[2];
      puVar10 = (undefined1 *)
                FUN_1403ad830(*param_3,(int)param_1[4],&local_138,&local_f8,param_5,param_13,uVar24)
      ;
      if ((char)puVar10 == '\0') goto LAB_140387a17;
      break;
    }
    piVar12 = piVar12 + 1;
  }
  if (((param_6 != (uint *)0x0) && (param_14 == 0)) && (*(int *)((longlong)param_1 + 0x24) == 2)) {
    if ((int)*param_6 < 0) {
      *param_6 = ~*param_6;
    }
    param_6[1] = 0;
    FUN_1403a4c80(param_6,*local_148);
    if (-1 < (int)*param_6) {
      param_6[1] = 0;
      uVar15 = *local_148;
      if ((uVar15 * 3 & 0x3fffffff) != 0) {
        FUN_1404210f0(*(undefined8 *)(param_6 + 2),*(undefined8 *)(local_158 + 2));
      }
      param_6[1] = param_6[1] + uVar15;
    }
  }
  iVar25 = *(int *)((longlong)param_1 + 0x24);
  if (iVar25 == 0) {
    FUN_1403a4c80(param_4,param_4[1] + local_164,0);
    if (-1 < (int)*param_4) {
      if (local_164 * 3 != 0) {
        FUN_1404210f0(*(longlong *)(param_4 + 2) + (ulonglong)param_4[1] * 0xc,local_150,
                      local_164 * 0xc);
      }
      param_4[1] = param_4[1] + local_164;
    }
    if (local_164 == 0) {
      DAT_1404e4f20 = DAT_14045dd10;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      local_150 = (float *)&DAT_1404e4f20;
    }
    fVar31 = *local_150;
    FUN_1403f86d0(local_158,local_160);
  }
  else if (iVar25 == 1) {
    if ((param_14 == 0) && (param_7 != 0)) {
      uVar15 = (param_4[1] - local_160) - 4;
      if (uVar15 <= *(uint *)(param_7 + 0x10)) {
        uVar15 = *(uint *)(param_7 + 0x10);
      }
      *(uint *)(param_7 + 0x10) = uVar15;
    }
    if (local_164 == 0) {
      DAT_1404e4f20 = DAT_14045dd10;
      uVar13 = DAT_1404e4f20;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      DAT_1404e4f20._0_4_ = (float)DAT_14045dd10;
      fVar31 = (float)DAT_1404e4f20;
      DAT_1404e4f20 = uVar13;
    }
    else {
      fVar31 = *local_150;
    }
  }
  else if (iVar25 == 2) {
    local_118 = (char *)(param_5 + 0x20);
    local_110 = (longlong *)0x0;
    local_108 = (char *)0x0;
    cVar7 = *local_118;
    *local_118 = cVar7 == '\0';
    if (*(undefined8 **)(param_5 + 0x28) == (undefined8 *)0x0) {
      *(char ***)(param_5 + 0x28) = &local_118;
    }
    else {
      if (cVar7 == '\0') {
        *(undefined8 *)(param_5 + 0x28) = **(undefined8 **)(param_5 + 0x28);
      }
      local_110 = *(longlong **)(param_5 + 0x30);
      *local_110 = (longlong)&local_118;
    }
    *(char ***)(param_5 + 0x30) = &local_118;
    fVar31 = DAT_140492704;
    uVar15 = 0;
    local_168 = 0;
    if (*(int *)((longlong)param_1 + 0x24) == 2) {
      pbVar23 = (byte *)param_1[1];
      local_d4 = *(uint *)(param_1 + 2);
      uVar18 = (ulonglong)local_d4;
      pbVar27 = (byte *)(param_1[3] + 10);
      local_d0 = pbVar23;
      if ((pbVar23 <= pbVar27) && (pbVar27 <= pbVar23 + uVar18)) {
        if (3 < ((int)pbVar23 - (int)pbVar27) + local_d4) {
          bVar2 = *(byte *)(param_1[3] + 0xb);
          iVar25 = (bVar2 & 1) * 2;
          uVar26 = (ulonglong)(iVar25 + 6);
          if ((bVar2 & 8) == 0) {
            if ((bVar2 & 0x40) == 0) {
              if ((char)bVar2 < '\0') {
                uVar26 = (ulonglong)(iVar25 + 0xe);
              }
            }
            else {
              uVar26 = (ulonglong)(iVar25 + 10);
            }
          }
          else {
            uVar26 = (ulonglong)(iVar25 + 8);
          }
          uVar15 = local_168;
          if (((uint)uVar26 <= ((int)pbVar23 - (int)pbVar27) + local_d4) && (pbVar27 != (byte *)0x0)
             ) {
            do {
              local_108 = (char *)(ulonglong)((uint)pbVar27[2] * 0x100 + (uint)pbVar27[3]);
              if ((*(char ***)(local_118 + 8) == &local_118) ||
                 ((*(char ***)(local_118 + 8))[2] != local_108)) {
                uVar15 = param_4[1];
                if ((param_11 == '\0') ||
                   ((param_10 != '\0' && (((uint)pbVar27[1] + (uint)*pbVar27 * 0x100 >> 9 & 1) != 0)
                    ))) {
                  local_138 = (byte *)*param_12;
                  pfStack_130 = (float *)param_12[1];
                  local_128 = param_12[2];
                  uVar13 = FUN_1403d0210(param_3,local_b0,local_108,0);
                  cVar7 = FUN_140387630(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,
                                        param_8,param_9,param_10,param_11,&local_138,param_13,
                                        param_14 + 1,local_b8);
                  if (cVar7 != '\0') goto LAB_140387fb8;
                }
                else {
LAB_140387fb8:
                  uVar20 = *local_148 - 4;
                  local_164 = 0;
                  if (uVar20 <= *local_148) {
                    local_164 = 4;
                  }
                  local_150 = (float *)(*(longlong *)(local_158 + 2) + (ulonglong)uVar20 * 0xc);
                  uVar20 = param_4[1];
                  pfVar11 = *(float **)(param_4 + 2);
                  if (uVar15 == 0) {
                    local_c0 = local_d0;
                  }
                  else {
                    if (uVar20 < uVar15) {
                      uVar20 = 0;
                    }
                    else {
                      uVar20 = uVar20 - uVar15;
                    }
                    pfVar11 = pfVar11 + (ulonglong)uVar15 * 3;
                  }
                  if ((param_10 != '\0') &&
                     (((uint)pbVar27[1] + (uint)*pbVar27 * 0x100 >> 9 & 1) != 0)) {
                    if (uVar20 - 4 < uVar20) {
                      pfVar14 = pfVar11 + (ulonglong)(uVar20 - 4) * 3;
                    }
                    else {
                      DAT_1404e4f20 = DAT_14045dd10;
                      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                      pfVar14 = (float *)&DAT_1404e4f20;
                    }
                    pfVar17 = local_150;
                    if (local_164 == 0) {
                      DAT_1404e4f20 = DAT_14045dd10;
                      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                      pfVar17 = (float *)&DAT_1404e4f20;
                    }
                    *(undefined8 *)pfVar17 = *(undefined8 *)pfVar14;
                    pfVar17[2] = pfVar14[2];
                    if (uVar20 - 3 < uVar20) {
                      pfVar14 = pfVar11 + (ulonglong)(uVar20 - 3) * 3;
                    }
                    else {
                      DAT_1404e4f20 = DAT_14045dd10;
                      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                      pfVar14 = (float *)&DAT_1404e4f20;
                    }
                    if (local_164 < 2) {
                      DAT_1404e4f20 = DAT_14045dd10;
                      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                      pfVar17 = (float *)&DAT_1404e4f20;
                    }
                    else {
                      pfVar17 = local_150 + 3;
                    }
                    *(undefined8 *)pfVar17 = *(undefined8 *)pfVar14;
                    pfVar17[2] = pfVar14[2];
                    if (uVar20 - 2 < uVar20) {
                      pfVar14 = pfVar11 + (ulonglong)(uVar20 - 2) * 3;
                    }
                    else {
                      DAT_1404e4f20 = DAT_14045dd10;
                      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                      pfVar14 = (float *)&DAT_1404e4f20;
                    }
                    if (local_164 < 3) {
                      DAT_1404e4f20 = DAT_14045dd10;
                      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                      pfVar17 = (float *)&DAT_1404e4f20;
                    }
                    else {
                      pfVar17 = local_150 + 6;
                    }
                    *(undefined8 *)pfVar17 = *(undefined8 *)pfVar14;
                    pfVar17[2] = pfVar14[2];
                    if (uVar20 - 1 < uVar20) {
                      pfVar14 = pfVar11 + (ulonglong)(uVar20 - 1) * 3;
                    }
                    else {
                      DAT_1404e4f20 = DAT_14045dd10;
                      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                      pfVar14 = (float *)&DAT_1404e4f20;
                    }
                    if (local_164 < 4) {
                      DAT_1404e4f20 = DAT_14045dd10;
                      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                      pfVar17 = (float *)&DAT_1404e4f20;
                    }
                    else {
                      pfVar17 = local_150 + 9;
                    }
                    *(undefined8 *)pfVar17 = *(undefined8 *)pfVar14;
                    pfVar17[2] = pfVar14[2];
                  }
                  if (uVar20 != 0) {
                    FUN_1403cf180(pbVar27,&local_f8,&local_138);
                    if (local_168 + local_160 < *local_148) {
                      puVar22 = (undefined8 *)
                                (*(longlong *)(local_158 + 2) +
                                (ulonglong)(local_168 + local_160) * 0xc);
                    }
                    else {
                      DAT_1404e4f20 = DAT_14045dd10;
                      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                      puVar22 = &DAT_1404e4f20;
                    }
                    pfStack_130 = pfVar11;
                    if (((uint)pbVar27[1] + (uint)*pbVar27 * 0x100 & 0x1800) == 0x800) {
                      local_138 = local_c0;
                      local_128 = (ulonglong)uVar20;
                      FUN_14040eac0(puVar22,&local_138);
                      if ((((float)local_f8 != fVar31) || (local_f8._4_4_ != 0.0)) ||
                         (((float)local_f0 != 0.0 || (local_f0._4_4_ != fVar31)))) {
                        for (pfVar14 = pfVar11; pfVar14 != pfVar11 + (ulonglong)uVar20 * 3;
                            pfVar14 = pfVar14 + 3) {
                          fVar29 = pfVar14[1];
                          pfVar14[1] = local_f0._4_4_ * fVar29 + local_f8._4_4_ * *pfVar14;
                          *pfVar14 = (float)local_f0 * fVar29 + (float)local_f8 * *pfVar14;
                        }
                      }
                    }
                    else {
                      if (((((float)local_f8 != fVar31) || (local_f8._4_4_ != 0.0)) ||
                          ((float)local_f0 != 0.0)) || (local_f0._4_4_ != fVar31)) {
                        for (pfVar14 = pfVar11; pfVar14 != pfVar11 + (ulonglong)uVar20 * 3;
                            pfVar14 = pfVar14 + 3) {
                          fVar29 = pfVar14[1];
                          pfVar14[1] = local_f0._4_4_ * fVar29 + local_f8._4_4_ * *pfVar14;
                          *pfVar14 = (float)local_f0 * fVar29 + (float)local_f8 * *pfVar14;
                        }
                      }
                      local_138 = local_c0;
                      local_128 = (ulonglong)uVar20;
                      FUN_14040eac0(puVar22,&local_138);
                    }
                  }
                  if (((pbVar27[1] & 2) == 0) && (param_11 == '\0')) {
                    uVar18 = (ulonglong)pbVar27[4];
                    uVar19 = (ulonglong)pbVar27[5];
                    if ((pbVar27[1] & 1) != 0) {
                      uVar18 = (ulonglong)((uint)pbVar27[4] * 0x100 + (uint)pbVar27[5]);
                      uVar19 = (ulonglong)((uint)pbVar27[7] + (uint)pbVar27[6] * 0x100);
                    }
                    if (((uint)uVar18 < param_4[1]) && ((uint)uVar19 < uVar20)) {
                      fVar29 = *(float *)(*(longlong *)(param_4 + 2) + 4 + uVar18 * 0xc) -
                               pfVar11[uVar19 * 3 + 1];
                      fVar30 = *(float *)(*(longlong *)(param_4 + 2) + uVar18 * 0xc) -
                               pfVar11[uVar19 * 3];
                      if (fVar30 == 0.0) {
                        if (fVar29 != 0.0) {
                          pfVar14 = pfVar11 + (ulonglong)uVar20 * 3;
                          for (; pfVar11 != pfVar14; pfVar11 = pfVar11 + 3) {
                            pfVar11[1] = fVar29 + pfVar11[1];
                          }
                        }
                      }
                      else {
                        pfVar14 = pfVar11 + (ulonglong)uVar20 * 3;
                        if (fVar29 == 0.0) {
                          for (; pfVar11 != pfVar14; pfVar11 = pfVar11 + 3) {
                            *pfVar11 = fVar30 + *pfVar11;
                          }
                        }
                        else {
                          for (; pfVar11 != pfVar14; pfVar11 = pfVar11 + 3) {
                            *pfVar11 = fVar30 + *pfVar11;
                            pfVar11[1] = fVar29 + pfVar11[1];
                          }
                        }
                      }
                    }
                  }
                  FUN_1403f86d0(param_4,param_4[1] - 4);
                  if (param_4[1] < 0x30d41) {
                    uVar18 = (ulonglong)local_d4;
                    pbVar23 = local_d0;
                    goto LAB_1403884b6;
                  }
                }
                FUN_1403f86d0(local_158,local_160);
                *(longlong **)(local_118 + 0x10) = local_110;
                if (local_110 != (longlong *)0x0) {
                  *local_110 = (longlong)local_118;
                }
                bVar28 = *local_118 == '\0';
                if (!bVar28) {
                  local_110 = *(longlong **)(local_118 + 8);
                  *(longlong *)(local_118 + 8) = local_110[1];
                }
                puVar10 = (undefined1 *)CONCAT71((int7)((ulonglong)local_110 >> 8),bVar28);
                *local_118 = bVar28;
                goto LAB_140387a17;
              }
LAB_1403884b6:
              uVar15 = local_168 + 1;
              if ((((pbVar27[1] & 0x20) == 0) || (pbVar27 = pbVar27 + uVar26, pbVar27 < pbVar23)) ||
                 (pbVar23 + uVar18 < pbVar27)) break;
              if ((uint)(((int)uVar18 - (int)pbVar27) + (int)pbVar23) < 4) break;
              bVar2 = pbVar27[1];
              iVar25 = (bVar2 & 1) * 2;
              uVar26 = (ulonglong)(iVar25 + 6);
              if ((bVar2 & 8) == 0) {
                if ((bVar2 & 0x40) == 0) {
                  if ((char)bVar2 < '\0') {
                    uVar26 = (ulonglong)(iVar25 + 0xe);
                  }
                }
                else {
                  uVar26 = (ulonglong)(iVar25 + 10);
                }
              }
              else {
                uVar26 = (ulonglong)(iVar25 + 8);
              }
              if ((pbVar27 < pbVar23) ||
                 (local_168 = uVar15,
                 (uint)(((int)uVar18 - (int)pbVar27) + (int)pbVar23) < (uint)uVar26)) break;
            } while( true );
          }
        }
      }
    }
    if ((param_7 != 0) && (param_14 == 0)) {
      if (param_8 != (uint *)0x0) {
        uVar20 = *param_8;
        if (*param_8 <= *(uint *)(param_7 + 0x1c)) {
          uVar20 = *(uint *)(param_7 + 0x1c);
        }
        *(uint *)(param_7 + 0x1c) = uVar20;
      }
      uVar20 = param_4[1];
      if (param_4[1] <= *(uint *)(param_7 + 0x18)) {
        uVar20 = *(uint *)(param_7 + 0x18);
      }
      *(uint *)(param_7 + 0x18) = uVar20;
      if (uVar15 <= *(uint *)(param_7 + 0x20)) {
        uVar15 = *(uint *)(param_7 + 0x20);
      }
      *(uint *)(param_7 + 0x20) = uVar15;
    }
    FUN_1403a4c80(param_4,param_4[1] + local_164,0);
    if (-1 < (int)*param_4) {
      if (local_164 * 3 != 0) {
        FUN_1404210f0(*(longlong *)(param_4 + 2) + (ulonglong)param_4[1] * 0xc,local_150,
                      local_164 * 0xc);
      }
      param_4[1] = param_4[1] + local_164;
    }
    if (local_164 == 0) {
      DAT_1404e4f20 = DAT_14045dd10;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      local_150 = (float *)&DAT_1404e4f20;
    }
    fVar31 = *local_150;
    FUN_1403f86d0(local_158,local_160);
    *(longlong **)(local_118 + 0x10) = local_110;
    if (local_110 != (longlong *)0x0) {
      *local_110 = (longlong)local_118;
    }
    if (*local_118 != '\0') {
      *(undefined8 *)(local_118 + 8) = *(undefined8 *)(*(longlong *)(local_118 + 8) + 8);
    }
    *local_118 = *local_118 == '\0';
  }
  else {
    fVar31 = 0.0;
  }
  if (((param_14 == 0) && (param_9 != '\0')) && (fVar31 != 0.0)) {
    pfVar14 = *(float **)(param_4 + 2);
    pfVar11 = pfVar14 + (ulonglong)param_4[1] * 3;
    for (; pfVar14 != pfVar11; pfVar14 = pfVar14 + 3) {
      *pfVar14 = *pfVar14 - fVar31;
    }
  }
  return (ulonglong)(*param_4 >> 0x1f) ^ 1;
}

