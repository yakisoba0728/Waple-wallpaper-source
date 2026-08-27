// Function: FUN_140225900
// Addr: 140225900
// Size: 4364 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140225900(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,char param_9
                  ,undefined8 *param_10,float *param_11,float param_12,float param_13)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  float local_270;
  undefined8 local_268;
  uint local_260 [2];
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  uint auStack_208 [2];
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  undefined8 local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  uint local_1d8;
  float local_1d4;
  uint local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [36];
  undefined1 local_124 [236];
  
  uVar3 = *(uint *)(param_4 + 0x18);
  uVar10 = (ulonglong)uVar3;
  if (uVar3 != 0xffffffff) {
    FUN_140267f00(&local_1c8,param_1[0x5d],uVar3,*(undefined4 *)param_1[0x5b],
                  *(undefined8 *)(param_2 + 0x80),param_5,param_6,param_7);
    local_2d0 = local_1c8;
    local_2c8 = (float)uStack_1c0;
    local_2cc = (float)uStack_1c4;
    local_2c0 = (float)uStack_1b4;
    local_2c4 = (float)local_1b8;
    local_2b8 = (float)local_1a8;
    local_2bc = (float)uStack_1b0;
    local_2b0 = (float)uStack_1a0;
    local_2b4 = (float)uStack_1a4;
    FUN_1402163f0(&local_200,&local_2d0,param_4 + 0x5c);
    local_2d0 = *(float *)(param_4 + 0x1c);
    local_2cc = *(float *)(param_4 + 0x20);
    local_2c8 = *(float *)(param_4 + 0x24);
    local_2c0 = *(float *)(param_4 + 0x30);
    local_2c4 = *(float *)(param_4 + 0x2c);
    local_2b8 = *(float *)(param_4 + 0x3c);
    local_2bc = *(float *)(param_4 + 0x34);
    local_2b0 = *(float *)(param_4 + 0x44);
    local_2b4 = *(float *)(param_4 + 0x40);
    FUN_1402163f0(&local_238,&local_2d0);
    fVar22 = 0.0;
    fVar13 = local_1e8 * local_1e8 + 0.0 + local_1e0 * local_1e0;
    if (fVar13 < 0.0) {
      fVar13 = (float)FUN_14041ad10();
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    fVar25 = local_218;
    fVar23 = local_220;
    fVar24 = DAT_140492704;
    fVar13 = DAT_140492704 / fVar13;
    local_1f4 = 0.0;
    local_1f0 = 0x3f800000;
    local_1e0 = local_1e0 * fVar13;
    local_1e4 = fVar13 * 0.0;
    local_1e8 = local_1e8 * fVar13;
    local_200 = local_1e0 - local_1e4 * 0.0;
    local_1f8 = local_1e4 * 0.0 - local_1e8;
    local_1fc = local_1e8 * 0.0 - local_1e0 * 0.0;
    fVar13 = local_220 * local_220 + 0.0 + local_218 * local_218;
    if (fVar13 < 0.0) {
      fVar13 = (float)FUN_14041ad10();
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    fVar13 = fVar24 / fVar13;
    fVar25 = fVar25 * fVar13;
    fVar23 = fVar23 * fVar13;
    fVar13 = fVar13 * 0.0;
    fVar11 = fVar25 - fVar13 * 0.0;
    fVar17 = fVar13 * 0.0 - fVar23;
    fVar14 = fVar23 * 0.0 - fVar25 * 0.0;
    FUN_140228b00(&local_238,&local_200);
    local_2d0 = fVar11 * local_238 + local_234 * 0.0 + fVar23 * local_230;
    local_2cc = fVar14 * local_238 + local_234 + fVar13 * local_230;
    local_2c8 = fVar17 * local_238 + local_234 * 0.0 + fVar25 * local_230;
    local_2c4 = fVar11 * local_22c + local_228 * 0.0 + fVar23 * local_224;
    local_2c0 = fVar14 * local_22c + local_228 + fVar13 * local_224;
    fVar21 = *(float *)(param_4 + 0x50);
    local_1d8 = param_8 & 0x800;
    local_2bc = fVar17 * local_22c + local_228 * 0.0 + fVar25 * local_224;
    local_2b4 = fVar14 * local_220 + local_21c + fVar13 * local_218;
    local_2b8 = fVar11 * local_220 + local_21c * 0.0 + fVar23 * local_218;
    fVar13 = *(float *)(param_4 + 0x54);
    local_2b0 = fVar17 * local_220 + local_21c * 0.0 + fVar25 * local_218;
    if (local_1d8 != 0) {
      *(float *)(*(longlong *)(param_1[0x5b] + 0x10) + uVar10 * 4) =
           (*(float *)(param_4 + 0x4c) - local_198) * param_12 +
           *(float *)(*(longlong *)(param_1[0x5b] + 0x10) + uVar10 * 4);
    }
    if ((param_8 & 0x1000) != 0) {
      lVar4 = *(longlong *)((int *)param_1[0x5b] + 4);
      uVar9 = (ulonglong)(*(int *)param_1[0x5b] + uVar3);
      *(float *)(lVar4 + uVar9 * 4) =
           (fVar21 - fStack_194) * param_12 + *(float *)(lVar4 + uVar9 * 4);
    }
    if ((param_8 & 0x2000) != 0) {
      uVar9 = (ulonglong)(uVar3 + *(int *)param_1[0x5b] * 2);
      lVar4 = *(longlong *)((int *)param_1[0x5b] + 4);
      *(float *)(lVar4 + uVar9 * 4) =
           (fVar13 - fStack_190) * param_12 + *(float *)(lVar4 + uVar9 * 4);
    }
    local_1d0 = param_8 & 0x8000;
    if (local_1d0 != 0) {
      iVar5 = *(int *)param_1[0x5b];
      lVar4 = *(longlong *)((int *)param_1[0x5b] + 4);
      fVar13 = *(float *)(lVar4 + (ulonglong)(uVar3 + iVar5 * 4) * 4);
      fVar23 = *(float *)(lVar4 + (ulonglong)(uVar3 + iVar5 * 2 + iVar5) * 4);
      fVar25 = *(float *)(lVar4 + (ulonglong)(uVar3 + iVar5 * 4 + iVar5) * 4);
      fVar21 = *(float *)(lVar4 + (ulonglong)(uVar3 + iVar5 * 6) * 4);
      local_2a8 = local_2d0;
      local_2a4 = local_2c4;
      local_2a0 = local_2c0;
      local_29c = local_2cc;
      local_298 = local_2bc;
      local_294 = local_2c8;
      pfVar6 = (float *)FUN_140218db0(&local_210,&local_2d0);
      fVar11 = *pfVar6;
      fVar14 = pfVar6[1];
      fVar17 = pfVar6[2];
      fVar18 = pfVar6[3];
      iVar5 = *(int *)param_1[0x5b];
      *(float *)(*(longlong *)((int *)param_1[0x5b] + 4) +
                (ulonglong)(iVar5 + uVar3 + iVar5 * 2) * 4) =
           ((fVar23 * fVar11 - fVar13 * fVar14) - fVar25 * fVar17) - fVar21 * fVar18;
      *(float *)(*(longlong *)((int *)param_1[0x5b] + 4) +
                (ulonglong)(uVar3 + *(int *)param_1[0x5b] * 4) * 4) =
           (fVar13 * fVar11 + fVar14 * fVar23 + fVar21 * fVar17) - fVar18 * fVar25;
      iVar5 = *(int *)param_1[0x5b];
      *(float *)(*(longlong *)((int *)param_1[0x5b] + 4) +
                (ulonglong)(iVar5 + uVar3 + iVar5 * 4) * 4) =
           (fVar25 * fVar11 + fVar17 * fVar23 + fVar18 * fVar13) - fVar21 * fVar14;
      *(float *)(*(longlong *)((int *)param_1[0x5b] + 4) +
                (ulonglong)(uVar3 + *(int *)param_1[0x5b] * 6) * 4) =
           (fVar21 * fVar11 + fVar18 * fVar23 + fVar25 * fVar14) - fVar17 * fVar13;
    }
    fVar25 = local_2b0;
    fVar23 = local_2b4;
    fVar13 = local_2b8;
    if ((param_8 & 0xa800) == 0x8000) {
      lVar4 = *(longlong *)((int *)param_1[0x5b] + 4);
      iVar5 = *(int *)param_1[0x5b];
      fVar21 = *(float *)(lVar4 + uVar10 * 4);
      fVar11 = *(float *)(lVar4 + (ulonglong)(iVar5 + uVar3) * 4);
      fVar14 = *(float *)(lVar4 + (ulonglong)(uVar3 + iVar5 * 2) * 4);
      *(float *)(lVar4 + uVar10 * 4) = fVar11 * local_2c4 + fVar21 * local_2d0 + fVar14 * local_2b8;
      *(float *)(*(longlong *)((int *)param_1[0x5b] + 4) +
                (ulonglong)(*(int *)param_1[0x5b] + uVar3) * 4) =
           fVar11 * local_2c0 + fVar21 * local_2cc + fVar14 * local_2b4;
      *(float *)(*(longlong *)((int *)param_1[0x5b] + 4) +
                (ulonglong)(uVar3 + *(int *)param_1[0x5b] * 2) * 4) =
           fVar11 * local_2bc + fVar21 * local_2c8 + fVar14 * local_2b0;
    }
    local_2a8 = local_2d0;
    local_2a4 = local_2c4;
    local_2a0 = local_2c0;
    local_29c = local_2cc;
    local_298 = local_2bc;
    local_294 = local_2c8;
    if (param_9 == '\0') {
      if (*(int *)(param_4 + 0x14) == 0) {
        uVar7 = *(undefined8 *)(param_4 + 0x24);
        *param_10 = *(undefined8 *)(param_4 + 0x1c);
        param_10[1] = uVar7;
        uVar7 = *(undefined8 *)(param_4 + 0x34);
        param_10[2] = *(undefined8 *)(param_4 + 0x2c);
        param_10[3] = uVar7;
        uVar7 = *(undefined8 *)(param_4 + 0x44);
        param_10[4] = *(undefined8 *)(param_4 + 0x3c);
        param_10[5] = uVar7;
        uVar7 = *(undefined8 *)(param_4 + 0x4c);
        uVar16 = *(undefined8 *)(param_4 + 0x54);
      }
      else {
        if ((param_8 >> 10 & 1) == 0) {
          iVar5 = *(int *)(param_4 + 0xc) + *(int *)(param_4 + 0x14);
        }
        else {
          iVar5 = 0;
        }
        puVar8 = (undefined8 *)
                 FUN_140267580(&local_188,param_1[0x5d],uVar3,*(undefined4 *)param_1[0x5b],
                               *(undefined8 *)(param_2 + 0x80),iVar5);
        uVar7 = puVar8[1];
        *param_10 = *puVar8;
        param_10[1] = uVar7;
        uVar7 = puVar8[3];
        param_10[2] = puVar8[2];
        param_10[3] = uVar7;
        uVar7 = puVar8[5];
        param_10[4] = puVar8[4];
        param_10[5] = uVar7;
        uVar7 = puVar8[6];
        uVar16 = puVar8[7];
      }
      param_10[6] = uVar7;
      param_10[7] = uVar16;
    }
    local_290 = *param_10;
    uStack_288 = CONCAT44(*(undefined4 *)(param_10 + 2),*(undefined4 *)(param_10 + 1));
    local_280 = *(undefined8 *)((longlong)param_10 + 0x14);
    uStack_278 = param_10[4];
    local_270 = *(float *)(param_10 + 5);
    if (*param_11 < *(float *)(param_3 + 4) || *param_11 == *(float *)(param_3 + 4)) {
      fVar21 = 0.0;
      fVar14 = 0.0;
      fVar11 = 0.0;
    }
    else {
      local_2d0 = *(float *)(param_4 + 0x1c);
      local_2cc = *(float *)(param_4 + 0x20);
      local_2c8 = *(float *)(param_4 + 0x24);
      fVar21 = (*(float *)(param_4 + 0xb0) - *(float *)(param_4 + 0x4c)) + 0.0;
      local_2c4 = *(float *)(param_4 + 0x2c);
      fVar14 = (*(float *)(param_4 + 0xb4) - *(float *)(param_4 + 0x50)) + 0.0;
      fVar11 = (*(float *)(param_4 + 0xb8) - *(float *)(param_4 + 0x54)) + 0.0;
      local_2c0 = *(float *)(param_4 + 0x30);
      local_2bc = *(float *)(param_4 + 0x34);
      local_2b8 = *(float *)(param_4 + 0x3c);
      local_2b4 = *(float *)(param_4 + 0x40);
      local_2b0 = *(float *)(param_4 + 0x44);
      local_238 = *(float *)(param_4 + 0x80);
      local_234 = *(float *)(param_4 + 0x84);
      local_230 = *(float *)(param_4 + 0x88);
      local_22c = *(float *)(param_4 + 0x90);
      local_228 = *(float *)(param_4 + 0x94);
      local_224 = *(float *)(param_4 + 0x98);
      local_220 = *(float *)(param_4 + 0xa0);
      local_21c = *(float *)(param_4 + 0xa4);
      local_218 = *(float *)(param_4 + 0xa8);
      FUN_140228b00(local_148,&local_238);
      uVar7 = FUN_1402163f0(local_124,local_148,&local_2d0);
      puVar8 = (undefined8 *)FUN_1402163f0(&local_188,&local_290,uVar7);
      local_290 = *puVar8;
      uStack_288 = puVar8[1];
      local_280 = puVar8[2];
      uStack_278 = puVar8[3];
      local_270 = *(float *)(puVar8 + 4);
    }
    puVar8 = (undefined8 *)FUN_1402163f0(&local_188,&local_290,param_4 + 0x5c);
    local_290 = *puVar8;
    uStack_288 = puVar8[1];
    local_280 = puVar8[2];
    fVar18 = *(float *)(puVar8 + 3);
    uStack_278 = puVar8[3];
    fVar17 = *(float *)(puVar8 + 4);
    fVar15 = fVar18 * fVar18 + 0.0 + fVar17 * fVar17;
    if (fVar15 < 0.0) {
      fVar15 = (float)FUN_14041ad10();
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    fVar24 = fVar24 / fVar15;
    local_280 = 0x3f800000;
    local_270 = fVar17 * fVar24;
    uStack_278._4_4_ = fVar24 * 0.0;
    uStack_278._0_4_ = fVar18 * fVar24;
    local_290._0_4_ = local_270 - uStack_278._4_4_ * 0.0;
    uStack_288._0_4_ = uStack_278._4_4_ * 0.0 - (float)uStack_278;
    uStack_288._4_4_ = 0.0;
    local_290._4_4_ = (float)uStack_278 * 0.0 - local_270 * 0.0;
    FUN_140228b00(&local_238,&local_290);
    fVar17 = local_218;
    fVar24 = local_230;
    local_248 = local_1f0._4_4_;
    local_23c = local_1e8;
    local_240 = local_1e4;
    local_244 = local_1e0;
    local_1d4 = local_224;
    local_258 = local_200;
    local_254 = local_1fc;
    local_1cc = local_1f8;
    local_250 = local_1f4;
    local_24c = (float)local_1f0;
    if ((param_8 & 0x3800) != 0) {
      fVar19 = (float)(*(uint *)(param_4 + 0x4c) ^ DAT_140492ff0);
      fVar15 = (float)(*(uint *)(param_4 + 0x50) ^ DAT_140492ff0);
      fVar18 = (float)(*(uint *)(param_4 + 0x54) ^ DAT_140492ff0);
      fVar21 = fVar21 + (local_198 - *(float *)(param_10 + 6)) +
               ((fVar19 * local_200 + fVar15 * local_1f4 + fVar18 * local_1e8) -
               (fVar15 * uStack_288._4_4_ + fVar19 * (float)local_290 + fVar18 * (float)uStack_278))
      ;
      fVar14 = fVar14 + (fStack_194 - *(float *)((longlong)param_10 + 0x34)) +
               ((fVar19 * local_1fc + fVar15 * (float)local_1f0 + fVar18 * local_1e4) -
               (fVar15 * (float)local_280 + fVar19 * local_290._4_4_ + fVar18 * uStack_278._4_4_));
      fVar11 = fVar11 + (fStack_190 - *(float *)(param_10 + 7)) +
               ((fVar19 * local_1f8 + fVar15 * local_1f0._4_4_ + fVar18 * local_1e0) -
               (fVar15 * local_280._4_4_ + fVar19 * (float)uStack_288 + fVar18 * local_270));
      if (local_1d8 == 0) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = fVar14 * local_2a4 + fVar21 * local_2a8 + fVar11 * fVar13;
      }
      if ((param_8 & 0x1000) == 0) {
        fVar23 = 0.0;
      }
      else {
        fVar23 = fVar14 * local_2a0 + fVar21 * local_29c + fVar11 * fVar23;
      }
      if ((param_8 & 0x2000) != 0) {
        fVar22 = fVar14 * local_298 + fVar21 * local_294 + fVar11 * fVar25;
      }
      pfVar6 = (float *)(**(code **)(*param_1 + 0x80))(param_1);
      fVar25 = pfVar6[1];
      fVar21 = pfVar6[2];
      fVar11 = pfVar6[4];
      fVar14 = pfVar6[8];
      fVar18 = *pfVar6;
      fVar15 = pfVar6[5];
      fVar19 = pfVar6[6];
      fVar1 = pfVar6[9];
      fVar2 = pfVar6[10];
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(float *)(param_1 + 0x25) =
           (fVar23 * fVar11 + fVar13 * fVar18 + fVar22 * fVar14) * param_13 * param_12 +
           *(float *)(param_1 + 0x25);
      *(float *)((longlong)param_1 + 300) =
           (fVar13 * fVar25 + fVar23 * fVar15 + fVar22 * fVar1) * param_13 * param_12 +
           *(float *)((longlong)param_1 + 300);
      *(float *)(param_1 + 0x26) =
           (fVar13 * fVar21 + fVar23 * fVar19 + fVar22 * fVar2) * param_13 * param_12 +
           *(float *)(param_1 + 0x26);
    }
    if (local_1d0 != 0) {
      local_268 = param_1[0x28];
      uVar20 = (uint)local_268;
      uVar3 = *(uint *)(param_1 + 0x29);
      fVar22 = fVar24 * local_250 + local_1d4 * local_24c + fVar17 * local_248;
      fVar13 = fVar24 * local_23c + local_1d4 * local_240 + fVar17 * local_244;
      local_260[0] = uVar3;
      if (fVar13 * fVar13 + fVar22 * fVar22 < 0.0) {
        FUN_14041ad10();
      }
      fVar13 = (float)FUN_14041c460();
      if (DAT_1404925fc <= (float)(uVar3 & _DAT_140492fc0) + (float)(uVar20 & _DAT_140492fc0)) {
        FUN_140215020(&local_188,local_260,(longlong)&local_268 + 4,&local_268);
        local_210 = 0;
        uStack_20c = 0x3f800000;
        auStack_208[0] = 0;
        puVar8 = (undefined8 *)
                 FUN_1401e2500(local_124,&local_188,fVar13 * param_13 * param_12,&local_210);
        local_188 = *puVar8;
        uStack_180 = puVar8[1];
        local_178 = puVar8[2];
        uStack_170 = puVar8[3];
        local_168 = puVar8[4];
        uStack_160 = puVar8[5];
        local_158 = puVar8[6];
        uStack_150 = puVar8[7];
        FUN_1401e23d0(&local_188,auStack_208,&uStack_20c,&local_210);
        local_268 = CONCAT44(uStack_20c,local_210);
        local_260[0] = auStack_208[0];
      }
      else {
        uVar12 = FUN_14041d0c0();
        local_268 = CONCAT44(uVar12,(undefined4)local_268);
      }
      FUN_1401dd630(param_1,&local_268);
    }
    *param_10 = CONCAT44(uStack_1c4,local_1c8);
    param_10[1] = CONCAT44(uStack_1bc,uStack_1c0);
    param_10[2] = CONCAT44(uStack_1b4,local_1b8);
    param_10[3] = CONCAT44(uStack_1ac,uStack_1b0);
    param_10[4] = CONCAT44(uStack_1a4,local_1a8);
    param_10[5] = CONCAT44(uStack_19c,uStack_1a0);
    param_10[6] = CONCAT44(fStack_194,local_198);
    param_10[7] = CONCAT44(uStack_18c,fStack_190);
  }
  return;
}

