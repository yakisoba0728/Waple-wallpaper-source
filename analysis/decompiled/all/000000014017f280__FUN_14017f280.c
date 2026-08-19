// Function: FUN_14017f280
// Addr: 14017f280
// Size: 2073 bytes


/* WARNING: Removing unreachable block (ram,0x00014017f56f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017f280(longlong *param_1,int param_2,int param_3)

{
  float fVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  char *pcVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  longlong *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_res8;
  float local_resc;
  float local_res10 [2];
  uint local_res18;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [24];
  longlong *local_1f8;
  uint local_1f0;
  int local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  float *local_1c8;
  float *pfStack_1c0;
  undefined8 local_1b8;
  longlong local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [32];
  longlong *local_138;
  longlong *local_130;
  longlong *local_118;
  ulonglong *local_110;
  int *local_100;
  ulonglong local_e8;
  uint local_e0;
  
  puVar17 = auStack_218;
  iVar25 = 2;
  if (2 < param_2) {
    iVar25 = param_2;
  }
  *(int *)((longlong)param_1 + 0x8c) = iVar25;
  iVar22 = 2;
  if (2 < param_3) {
    iVar22 = param_3;
  }
  *(int *)(param_1 + 0x12) = iVar22;
  fVar29 = (float)iVar25;
  local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,iVar22);
  *(float *)((longlong)param_1 + 0x84) = fVar29;
  fVar30 = (float)iVar22;
  *(float *)(param_1 + 0x11) = fVar30;
  (**(code **)(*(longlong *)param_1[0x2a5] + 0x88))((longlong *)param_1[0x2a5],0,0,iVar25);
  fVar1 = DAT_1404927d4;
  uVar14 = 0;
  if (param_1[0xb] == 0) {
    local_1a8 = _DAT_140492b70;
    uStack_1a0 = _UNK_140492b78;
    local_178 = 0;
    local_188 = _DAT_140492f20;
    uStack_180 = _UNK_140492f28;
    local_174 = 0x40000000;
    local_198 = _DAT_140492ca0;
    uStack_190 = _UNK_140492ca8;
    local_170 = 0x3f800000;
    if ((*(byte *)(param_1 + 0x25) & 1) != 0) {
      local_198 = _DAT_140492ca0 & 0xffffffff00000000;
      local_188 = CONCAT44(0x40000000,(int)_DAT_140492f20);
      local_170 = 0;
    }
    plVar2 = (longlong *)param_1[0x2a5];
    local_1c8 = &local_res8;
    pfStack_1c0 = local_res10;
    lVar12 = *plVar2;
    local_res8 = 0.0;
    local_resc = 9.80909e-45;
    uVar10 = FUN_140098d00(&local_1c8);
    local_1f0 = local_1f0 & 0xffffff00;
    local_1f8 = (longlong *)((ulonglong)local_1f8 & 0xffffffff00000000);
    lVar12 = (**(code **)(lVar12 + 0x48))(plVar2,uVar10,&local_1a8,3);
    param_1[0xb] = lVar12;
  }
  FUN_140183b40(param_1);
  uVar24 = *(uint *)(param_1 + 0x25) >> 0xd;
  local_res8 = (float)(uVar24 & 0xffffff01);
  local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,*(byte *)(param_1 + 0x25));
  local_res18 = 1;
  if ((uVar24 & 1) != 0) {
    local_res18 = 0xf;
  }
  bVar9 = *(byte *)(param_1 + 0x25);
  if (((byte)uVar24 & 1 & SUB41(local_res8,0)) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x310c) = 0;
    iVar11 = iVar25;
    if (iVar22 < iVar25) {
      iVar11 = iVar22;
    }
    do {
      iVar11 = iVar11 / 2;
      if (iVar11 < 1) {
        if ((iVar11 == 0) && (param_1[uVar14 + 0x617] != 0)) {
          func_0x0001401ab6c0(param_1 + 0x2da);
          param_1[uVar14 + 0x617] = 0;
        }
      }
      else {
        *(int *)((longlong)param_1 + 0x310c) = *(int *)((longlong)param_1 + 0x310c) + 1;
        if (param_1[uVar14 + 0x617] == 0) {
          uVar24 = 2 << ((byte)uVar14 & 0x1f);
          uVar23 = (ulonglong)uVar24;
          FUN_14000efe0(local_168);
          uVar13 = FUN_14000ca60(local_158,&DAT_14048e0b8);
          uVar13 = func_0x000140032260(uVar13,uVar23);
          FUN_14000ca60(uVar13,"FrameBuffer");
          local_1b8 = 0;
          local_198 = 0;
          uStack_190 = 0xf;
          uStack_1a0 = 0;
          local_1a8 = 0;
          local_1c8 = (float *)0x0;
          pfStack_1c0 = (float *)0x0;
          if ((((byte)local_e0 & 0x22) == 2) || (uVar19 = *local_110, uVar19 == 0)) {
            if ((local_e0 & 4) == 0) {
              if (*local_118 == 0) {
                lVar20 = 0;
                lVar12 = 0;
              }
              else {
                lVar12 = *local_138;
                lVar20 = ((longlong)*local_100 + *local_118) - lVar12;
              }
              goto LAB_14017f53a;
            }
          }
          else {
            lVar12 = *local_130;
            if (uVar19 < local_e8) {
              uVar19 = local_e8;
            }
            lVar20 = uVar19 - lVar12;
LAB_14017f53a:
            if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_14000f950(&local_1a8,lVar12,lVar20);
            }
          }
          local_1f8 = &local_1a8;
          local_1d8 = 0;
          local_1e0 = 2;
          local_1e8 = 0x1b;
          local_1f0 = local_res18;
          lVar12 = FUN_1401aae80(param_1 + 0x2da,iVar25,iVar22,uVar24);
          param_1[uVar14 + 0x617] = lVar12;
          if (0xf < uStack_190) {
            uVar14 = uStack_190 + 1;
            lVar12 = local_1a8;
            if (0xfff < uVar14) {
              lVar12 = *(longlong *)(local_1a8 + -8);
              if (0x1f < (local_1a8 - lVar12) - 8U) {
                pcVar7 = (code *)swi(0x29);
                (*pcVar7)(5);
                puVar17 = auStack_210;
                goto LAB_14017f766;
              }
              uVar14 = uStack_190 + 0x28;
            }
            func_0x00014028b040(lVar12,uVar14);
            return;
          }
          FUN_1400057a0(local_168);
        }
      }
      uVar24 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar24;
    } while ((int)uVar24 < 8);
    bVar9 = local_res10[0]._0_1_;
  }
  uVar24 = local_res18;
  fVar28 = local_res8;
  uVar23 = 0;
  if (param_1[0x613] == 0) {
    local_1d8 = 0;
    local_1e0 = 2;
    local_1e8 = (uint)(bVar9 & 1) * 4 + 0x16;
    local_1f8 = (longlong *)0x14048b658;
    local_1f0 = local_res18;
    lVar12 = FUN_1401aae80(param_1 + 0x2da,iVar25,iVar22,1);
    param_1[0x613] = lVar12;
    puVar18 = auStack_218;
    if (SUB41(fVar28,0) == '\0') {
      local_1d8 = 0;
      local_1e0 = 2;
      local_1e8 = 0x1b;
      local_1f8 = (longlong *)0x14048e128;
      local_1f0 = uVar24;
      lVar12 = FUN_1401aae80(param_1 + 0x2da,iVar25,iVar22,4);
      local_1d8 = 0;
      local_1e0 = 2;
      param_1[0x614] = lVar12;
      local_1e8 = 0x1b;
      local_1f8 = (longlong *)0x14048e110;
      local_1f0 = uVar24;
      lVar12 = FUN_1401aae80(param_1 + 0x2da,iVar25,iVar22,8);
      local_1d8 = 0;
      local_1e0 = 2;
      param_1[0x615] = lVar12;
      local_1e8 = 0x1b;
      local_1f8 = (longlong *)0x14048e100;
      local_1f0 = uVar24;
      lVar12 = FUN_1401aae80(param_1 + 0x2da,iVar25,iVar22,8);
      param_1[0x616] = lVar12;
      puVar18 = auStack_218;
    }
  }
  else {
LAB_14017f766:
    puVar3 = (undefined8 *)param_1[0x2db];
    for (puVar4 = (undefined8 *)*puVar3; puVar18 = puVar17, puVar4 != puVar3;
        puVar4 = (undefined8 *)*puVar4) {
      lVar12 = puVar4[6];
      if ((*(byte *)(lVar12 + 0x28) & 1) == 0) {
        *(undefined8 *)(puVar17 + -8) = 0x14017f78a;
        FUN_140162010(lVar12,iVar25,iVar22);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[0x2c9];
  for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
    *(uint *)(puVar4[6] + 0x1f8) = *(uint *)(puVar4[6] + 0x1f8) | 3;
  }
  param_1[0x63a] = uVar23;
  param_1[0x63b] = uVar23;
  param_1[0x63c] = uVar23;
  *(int *)(param_1 + 0x63d) = (int)uVar23;
  local_res8 = fVar29;
  local_resc = fVar30;
  if ((*(uint *)(param_1[0x2e4] + 0x118) & 0xc000000) == 0) {
    plVar2 = (longlong *)param_1[0x2fe];
    bVar8 = false;
    puVar18[0x58] = 0;
    plVar16 = (longlong *)*plVar2;
    if (plVar16 != plVar2) {
      plVar26 = *(longlong **)(puVar18 + 0x50);
      do {
        lVar12 = plVar16[2];
        if (((lVar12 != 0) && ((*(byte *)(lVar12 + 0x40) & 4) != 0)) &&
           (*(int *)(lVar12 + 0x44) == 2)) {
          if (!bVar8) {
            plVar26 = (longlong *)param_1[0x308];
            pcVar7 = *(code **)(*plVar26 + 0x20);
            *(undefined8 *)(puVar18 + -8) = 0x14017f849;
            (*pcVar7)(plVar26);
            bVar8 = true;
          }
          uVar13 = *(undefined8 *)(lVar12 + 0x48);
          *(undefined8 *)(puVar18 + 0x28) = 0;
          plVar5 = (longlong *)param_1[0x308];
          *(float **)(puVar18 + 0x20) = &local_res8;
          uVar6 = *(undefined8 *)(lVar12 + 0x38);
          pcVar7 = *(code **)(*plVar5 + 0x40);
          *(undefined8 *)(puVar18 + -8) = 0x14017f880;
          (*pcVar7)(plVar5,uVar6,uVar13,2);
        }
        plVar16 = (longlong *)*plVar16;
      } while (plVar16 != plVar2);
      *(longlong **)(puVar18 + 0x50) = plVar26;
      if (bVar8) {
        pcVar7 = *(code **)(*plVar26 + 0x28);
        *(undefined8 *)(puVar18 + -8) = 0x14017f89b;
        (*pcVar7)(plVar26);
      }
    }
  }
  if ((*(uint *)(param_1 + 0x25) & 0x2000) == 0) {
    lVar12 = param_1[0x62c];
    if (lVar12 == 0) {
      return;
    }
    if (*param_1 == 0) {
      return;
    }
    local_res10[0] = *(float *)(*param_1 + 0x3bc);
    *(undefined **)(puVar18 + -8) = &UNK_14017faa9;
    FUN_14017e9f0(lVar12,"bloomstrength",local_res10,1);
    lVar12 = param_1[0x62c];
    local_res10[0] = *(float *)(*param_1 + 0x3c0);
    *(undefined **)(puVar18 + -8) = &UNK_14017fadc;
    FUN_14017e9f0(lVar12,"bloomthreshold",local_res10,1);
    pfVar21 = (float *)(puVar18 + 0x50);
    lVar12 = param_1[0x62c];
    pcVar15 = "bloomtint";
    uVar13 = 3;
    uVar10 = *(undefined4 *)(*param_1 + 0x3e0);
    *(undefined8 *)(puVar18 + 0x50) = *(undefined8 *)(*param_1 + 0x3d8);
    *(undefined4 *)(puVar18 + 0x58) = uVar10;
  }
  else {
    lVar12 = param_1[0x632];
    if (lVar12 == 0) {
      return;
    }
    lVar20 = *param_1;
    if (lVar20 == 0) {
      return;
    }
    fVar29 = *(float *)(lVar20 + 0x3d0);
    fVar27 = (float)*(int *)((longlong)param_1 + 0x310c);
    fVar30 = (float)*(int *)(lVar20 + 0x3d4);
    fVar28 = fVar27;
    if (fVar30 < fVar27) {
      fVar28 = fVar30;
    }
    if (fVar1 <= fVar28) {
      if (fVar27 <= fVar30) {
        fVar30 = fVar27;
      }
      *(int *)(param_1 + 0x621) = (int)fVar30;
    }
    else {
      *(int *)(param_1 + 0x621) = (int)fVar1;
    }
    *(undefined8 *)(puVar18 + -8) = 0x14017f933;
    fVar30 = (float)FUN_14041e420();
    local_res8 = *(float *)(lVar20 + 0x3c4) / (fVar30 + fVar1);
    *(undefined8 *)(puVar18 + -8) = 0x14017f970;
    local_resc = fVar29;
    FUN_14017e9f0(lVar12,"bloomstrength",&local_res8,2);
    lVar12 = *param_1;
    lVar20 = param_1[0x632];
    fVar1 = *(float *)(lVar12 + 0x3c8);
    *(float *)(puVar18 + 0x50) = fVar1;
    fVar30 = fVar1 * *(float *)(lVar12 + 0x3cc);
    *(float *)(puVar18 + 0x54) = fVar1 - fVar30;
    *(float *)(puVar18 + 0x58) = fVar30 + fVar30;
    *(float *)(puVar18 + 0x5c) = DAT_14049275c / (fVar30 + _DAT_1404926bc);
    *(undefined8 *)(puVar18 + -8) = 0x14017f9db;
    FUN_14017e9f0(lVar20,"blend",puVar18 + 0x50,4);
    lVar12 = param_1[0x632];
    uVar10 = *(undefined4 *)(*param_1 + 0x3e0);
    *(undefined8 *)(puVar18 + 0x50) = *(undefined8 *)(*param_1 + 0x3d8);
    *(undefined4 *)(puVar18 + 0x58) = uVar10;
    *(undefined8 *)(puVar18 + -8) = 0x14017fa14;
    FUN_14017e9f0(lVar12,"bloomtint",puVar18 + 0x50,3);
    lVar12 = param_1[0x634];
    *(undefined8 *)(puVar18 + -8) = 0x14017fa3c;
    local_res10[0] = fVar29;
    FUN_14017e9f0(lVar12,"scatter",local_res10,1);
    lVar12 = param_1[0x635];
    pfVar21 = local_res10;
    uVar13 = 1;
    pcVar15 = "scatter";
    local_res10[0] = fVar29;
  }
  *(undefined8 *)(puVar18 + -8) = 0x14017fb15;
  FUN_14017e9f0(lVar12,pcVar15,pfVar21,uVar13);
  return;
}

