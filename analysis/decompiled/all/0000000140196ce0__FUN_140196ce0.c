// Function: FUN_140196ce0
// Addr: 140196ce0
// Size: 7159 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140196ce0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  float fVar15;
  char cVar16;
  undefined4 uVar17;
  int iVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong *plVar21;
  float *pfVar22;
  float *pfVar23;
  undefined4 *puVar24;
  uint *puVar25;
  undefined8 *puVar26;
  char *pcVar27;
  longlong *plVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  undefined8 uVar32;
  uint uVar33;
  bool bVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  uint uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 local_res8;
  float local_res18 [2];
  float local_res20;
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [24];
  char **local_2e8;
  uint local_2e0;
  undefined4 local_2d8;
  uint local_2d0;
  uint local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  undefined8 local_298;
  ulonglong uStack_290;
  ulonglong local_288;
  ulonglong uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  char *local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130 [12];
  undefined1 local_124 [12];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  uint local_e0;
  float local_dc;
  
  puVar31 = auStack_308;
  if ((*(byte *)(param_1 + 0x418) & 1) == 0) {
    return;
  }
  lVar20 = *(longlong *)(param_1 + 0x88);
  bVar1 = *(byte *)(lVar20 + 0x1ad);
  if (bVar1 == 0) {
    return;
  }
  iVar35 = 0;
  if (*(longlong *)(param_1 + 0x3d8) == 0) {
    uVar33 = *(uint *)(lVar20 + 0x118) >> 1;
    uVar32 = 8;
    if (2 < bVar1) {
      uVar32 = 4;
    }
    local_2c8 = (uint)((byte)uVar33 & 1) << 5;
    local_2d0 = (uVar33 & 1) << 0x19 | 8;
    uVar17 = 0x19;
    local_2d8 = 0x19;
    local_2e0 = 0x1b;
    local_2e8 = (char **)0x14048e650;
    uVar19 = FUN_1401aadb0(lVar20 + 0x16c0,*(undefined4 *)(lVar20 + 0x7c),
                           *(undefined4 *)(lVar20 + 0x80),1);
    lVar20 = *(longlong *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x3d8) = uVar19;
    local_2c8 = 0;
    local_2d0 = 8;
    if (*(byte *)(lVar20 + 0x1ad) < 3) {
      uVar17 = 0x17;
    }
    local_2e0 = 0x1b;
    local_2e8 = (char **)0x14048e638;
    local_2d8 = uVar17;
    uVar19 = FUN_1401aadb0(lVar20 + 0x16c0,*(undefined4 *)(lVar20 + 0x7c),
                           *(undefined4 *)(lVar20 + 0x80),uVar32);
    lVar20 = *(longlong *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x3e0) = uVar19;
    cVar16 = FUN_14017e750(lVar20);
    local_2c8 = 0;
    local_2d0 = 10;
    uVar33 = 1;
    if (cVar16 != '\0') {
      uVar33 = 0xf;
    }
    local_2d8 = 0x1b;
    local_2e8 = (char **)0x14048e618;
    local_2e0 = uVar33;
    uVar19 = FUN_1401aadb0(lVar20 + 0x16c0,*(undefined4 *)(lVar20 + 0x7c),
                           *(undefined4 *)(lVar20 + 0x80),uVar32);
    *(undefined8 *)(param_1 + 1000) = uVar19;
    if (bVar1 < 3) {
      lVar20 = *(longlong *)(param_1 + 0x88);
      local_2c8 = 0;
      local_2d0 = 10;
      local_2d8 = 0x1b;
      local_2e8 = (char **)0x14048e6f0;
      local_2e0 = uVar33;
      uVar32 = FUN_1401aadb0(lVar20 + 0x16c0,*(undefined4 *)(lVar20 + 0x7c),
                             *(undefined4 *)(lVar20 + 0x80),uVar32);
      *(undefined8 *)(param_1 + 0x3f0) = uVar32;
      uVar32 = FUN_14014ff70(*(longlong *)(param_1 + 0x88) + 0x1630,
                             "materials/util/volumetrics_blur_h.json");
      *(undefined8 *)(param_1 + 0x408) = uVar32;
      uVar32 = FUN_14014ff70(*(longlong *)(param_1 + 0x88) + 0x1630,
                             "materials/util/volumetrics_blur_v.json");
      *(undefined8 *)(param_1 + 0x410) = uVar32;
    }
    uVar32 = FUN_14014ff70(*(longlong *)(param_1 + 0x88) + 0x1630,
                           "materials/util/volumetrics_combine.json");
    *(undefined8 *)(param_1 + 0x400) = uVar32;
  }
  (**(code **)(**(longlong **)(param_1 + 0x3d8) + 8))();
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x1518) + 0xc0))();
  plVar28 = *(longlong **)(param_1 + 0x3e0);
  lVar20 = plVar28[1];
  plVar21 = (longlong *)(lVar20 + 0x50);
  *plVar21 = *plVar21 + 8;
  **(longlong **)(lVar20 + 0x50) = (longlong)plVar28;
  (**(code **)(*plVar28 + 0x48))();
  plVar21 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x1518);
  (**(code **)(*plVar21 + 0x120))(plVar21,0,1);
  fVar41 = DAT_140492704;
  if (param_2[0x6f] == 0) {
    local_2b8 = &local_res8;
    local_res8 = local_res8 & 0xffffffff00000000;
    uStack_2b0 = (float *)((longlong)&local_res8 + 4);
    uVar17 = FUN_140098c30(&local_2b8);
    fVar36 = (float)FUN_14025c5d0(param_2[0x19]);
    fVar37 = (float)FUN_14025c5f0();
    local_288 = 0;
    local_1d8 = (char *)0x0;
    lStack_1d0 = 0;
    local_1c8 = 0;
    local_298 = (char *)0x0;
    uStack_290 = 0;
    if ((char)param_2[0x58] == '\0') {
      local_2e8 = &local_1d8;
      FUN_14025c660();
    }
    else {
      cVar16 = FUN_140185940(param_2);
      if (cVar16 == '\0') {
        local_2a8 = 0.5;
        local_2a4 = 0.5;
        local_2a0 = fVar37;
        FUN_1401d85c0(&local_298,&local_2a8);
        local_2a8 = 0.5;
        local_2a4 = 0.5;
        local_2a0 = fVar36;
        FUN_1401d85c0(&local_298,&local_2a8);
        uVar33 = DAT_140492ff0;
        do {
          fVar44 = (float)FUN_14041a9c0();
          uVar39 = FUN_14041a9c0();
          uVar38 = FUN_14041a2e0();
          fVar42 = (float)(uVar38 ^ uVar33);
          uVar38 = FUN_14041a2e0();
          uVar38 = uVar38 ^ uVar33;
          iVar18 = FUN_140251ee0(&local_298);
          local_2a8 = fVar44;
          local_2a4 = fVar42;
          local_2a0 = fVar36;
          local_res8._0_4_ = (float)iVar18;
          FUN_1401d85c0(&local_298,&local_2a8);
          local_e4 = uVar39;
          local_e0 = uVar38;
          local_dc = fVar36;
          FUN_1401d85c0(&local_298,&local_e4);
          local_258 = fVar44;
          local_254 = fVar42;
          local_250 = fVar37;
          FUN_1401d85c0(&local_298,&local_258);
          local_2b8 = (undefined8 *)CONCAT44(uVar38,uVar39);
          uStack_2b0 = (float *)CONCAT44(uStack_2b0._4_4_,fVar37);
          FUN_1401d85c0(&local_298,&local_2b8);
          local_res18[0] = (float)(iVar18 + 2);
          FUN_1400dd630(&local_1d8,local_res18);
          FUN_1400dd630(&local_1d8,&local_res8);
          iVar18 = (int)(float)local_res8;
          fVar44 = (float)((int)(float)local_res8 + 1);
          local_res18[0] = fVar44;
          FUN_1400dd630(&local_1d8,local_res18);
          local_res18[0] = (float)(iVar18 + 2);
          FUN_1400dd630(&local_1d8,local_res18);
          local_res18[0] = fVar44;
          FUN_1400dd630(&local_1d8,local_res18);
          local_res18[0] = (float)(iVar18 + 3);
          FUN_1400dd630(&local_1d8,local_res18);
          local_res18[0] = 1.4013e-45;
          FUN_1400dd630(&local_1d8,local_res18);
          local_res18[0] = fVar44;
          FUN_1400dd630(&local_1d8,local_res18);
          FUN_1400dd630(&local_1d8,&local_res8);
          local_res18[0] = 0.0;
          FUN_1400dd630(&local_1d8,local_res18);
          iVar18 = (int)(float)local_res8;
          local_res8._0_4_ = (float)((int)(float)local_res8 + 2);
          FUN_1400dd630(&local_1d8,&local_res8);
          local_res8 = CONCAT44(local_res8._4_4_,iVar18 + 3);
          FUN_1400dd630(&local_1d8,&local_res8);
          iVar35 = iVar35 + 1;
        } while (iVar35 < 0x20);
      }
      else {
        FUN_1401a2f40(&local_178,0xffffffff,0xffffffff,fVar36);
        FUN_1401a2f40(&uStack_16c,1);
        FUN_1401a2f40(&uStack_160);
        FUN_1401a2f40(&uStack_154,0xffffffff);
        FUN_1401a2f40(&local_148);
        FUN_1401a2f40(&uStack_13c,1);
        FUN_1401a2f40(local_130);
        FUN_1401a2f40(local_124,0xffffffff);
        local_2b8 = (undefined8 *)&local_178;
        uStack_2b0 = &local_118;
        uVar32 = FUN_14025f810(&local_258,&local_2b8);
        FUN_14025f750(&local_298,uVar32);
        FUN_1401d9410(&local_258);
        local_2b8 = (undefined8 *)&local_178;
        local_178 = 1;
        uStack_2b0 = (float *)local_130;
        uStack_174 = 0x20002;
        uStack_170 = 0x30000;
        uStack_16c = 0x50004;
        local_168 = 0x40006;
        uStack_164 = 0x70006;
        uStack_160 = 3;
        uStack_15c = 0x30004;
        local_158 = 0x70004;
        uStack_154 = 0x20001;
        uStack_150 = 0x50005;
        uStack_14c = 0x60002;
        local_148 = 0x30002;
        uStack_144 = 0x60006;
        uStack_140 = 0x70003;
        uStack_13c = 0x10000;
        local_138 = 5;
        local_134 = 0x40005;
        uVar32 = FUN_14025f690(&local_258,&local_2b8);
        FUN_14025f5e0(&local_1d8,uVar32);
        FUN_1400dda40(&local_258);
      }
    }
    local_2c8 = local_2c8 & 0xffffff00;
    local_2d0 = 0;
    local_2d8 = 0;
    local_2e0 = (uint)(lStack_1d0 - (longlong)local_1d8 >> 1);
    local_2e8 = (char **)local_1d8;
    lVar20 = (**(code **)(**(longlong **)(param_2[0x19] + 0x1518) + 0x40))
                       (*(longlong **)(param_2[0x19] + 0x1518),uVar17,local_298,
                        ((longlong)(uStack_290 - (longlong)local_298) >> 2) * -0x5555555555555555);
    param_2[0x6f] = lVar20;
    FUN_1400dda40(&local_1d8);
    FUN_1401d9410(&local_298);
  }
  lVar20 = param_2[0x70];
  if (lVar20 == 0) {
    lVar20 = FUN_14014ff70(param_2[0x19] + 0x1630,"materials/util/volumetrics_back.json");
    param_2[0x70] = lVar20;
  }
  if ((char)param_2[0x58] == '\0') {
    local_2a8 = *(float *)(param_2 + 0x5d);
    local_2a4 = local_2a8;
    local_2a0 = local_2a8;
    uVar32 = (**(code **)(*param_2 + 0x80))(param_2);
    plVar21 = (longlong *)FUN_14019d3e0(&local_258,uVar32,3);
    local_2b8 = (undefined8 *)*plVar21;
    uStack_2b0 = (float *)CONCAT44(uStack_2b0._4_4_,(int)plVar21[1]);
    FUN_14019d450(&local_258,&local_2b8,fVar41);
    uVar32 = FUN_14005f680(&local_178);
    FUN_140214f80(&local_1b8,uVar32,3);
    FUN_14005f3f0(&local_2a8,0);
    pfVar23 = (float *)FUN_14005f5b0(&local_1b8,0);
    pfVar22 = (float *)FUN_14005f5a0(&local_2b8);
    local_2e8._0_4_ = pfVar22[3] * pfVar23[3];
    FUN_14005f580(&local_2b8,*pfVar22 * *pfVar23,pfVar22[1] * pfVar23[1],pfVar22[2] * pfVar23[2]);
    puVar14 = (undefined1 *)uStack_2b0;
    puVar26 = local_2b8;
    plVar21 = (longlong *)FUN_14005f600(&local_238,0);
    *plVar21 = (longlong)puVar26;
    plVar21[1] = (longlong)puVar14;
    FUN_14005f3f0(&local_2a8,1);
    pfVar23 = (float *)FUN_14005f5b0(&local_1b8,1);
    pfVar22 = (float *)FUN_14005f5a0(&local_2b8);
    local_2e8._0_4_ = pfVar22[3] * pfVar23[3];
    FUN_14005f580(&local_2b8,*pfVar22 * *pfVar23,pfVar22[1] * pfVar23[1],pfVar22[2] * pfVar23[2]);
    puVar14 = (undefined1 *)uStack_2b0;
    puVar26 = local_2b8;
    plVar21 = (longlong *)FUN_14005f600(&local_238,1);
    *plVar21 = (longlong)puVar26;
    plVar21[1] = (longlong)puVar14;
    FUN_14005f3f0(&local_2a8,2);
    pfVar23 = (float *)FUN_14005f5b0(&local_1b8,2);
    pfVar22 = (float *)FUN_14005f5a0(&local_2b8);
    local_2e8 = (char **)CONCAT44(local_2e8._4_4_,pfVar22[3] * pfVar23[3]);
    FUN_14005f580(&local_2b8,*pfVar22 * *pfVar23,pfVar22[1] * pfVar23[1],pfVar22[2] * pfVar23[2]);
    puVar14 = (undefined1 *)uStack_2b0;
    puVar26 = local_2b8;
    plVar21 = (longlong *)FUN_14005f600(&local_238,2);
    *plVar21 = (longlong)puVar26;
    plVar21[1] = (longlong)puVar14;
    puVar26 = (undefined8 *)FUN_14005f5b0(&local_1b8,3);
    uVar32 = *puVar26;
    uVar19 = puVar26[1];
    puVar26 = (undefined8 *)FUN_14005f600(&local_238,3);
    *puVar26 = uVar32;
    puVar26[1] = uVar19;
  }
  else {
    FUN_14005f730(&local_238,param_2 + 0x67);
  }
  lVar2 = param_2[0x19];
  plVar21 = param_2 + 0x67;
  *(ulonglong *)(lVar2 + 0xab0) = local_238;
  *(undefined8 **)(lVar2 + 0xab8) = uStack_230;
  *(undefined8 *)(lVar2 + 0xac0) = local_228;
  *(longlong *)(lVar2 + 0xac8) = uStack_220;
  *(float *)(lVar2 + 0xad0) = (float)local_218;
  *(float *)(lVar2 + 0xad4) = local_218._4_4_;
  *(float *)(lVar2 + 0xad8) = (float)uStack_210;
  *(float *)(lVar2 + 0xadc) = uStack_210._4_4_;
  *(float *)(lVar2 + 0xae0) = (float)local_208;
  *(float *)(lVar2 + 0xae4) = local_208._4_4_;
  *(float *)(lVar2 + 0xae8) = (float)uStack_200;
  *(float *)(lVar2 + 0xaec) = uStack_200._4_4_;
  FUN_140155fc0(lVar20);
  (**(code **)(*(longlong *)param_2[0x6f] + 8))();
  FUN_140157430(lVar20);
  FUN_140162040(*(undefined8 *)(param_1 + 0x3e0),0);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x1518) + 0xc0))();
  if (*(longlong *)(param_1 + 0x3f8) == 0) {
    local_268 = 0;
    uStack_264 = 0x40000000;
    uStack_260 = 0x3f800000;
    local_298 = _DAT_140492aa0;
    uStack_290 = _UNK_140492aa8;
    local_278 = _DAT_140492e50;
    uStack_270 = _UNK_140492e58;
    local_288 = _DAT_140492bd0;
    uStack_280 = _UNK_140492bd8;
    if ((*(byte *)(*(longlong *)(param_1 + 0x88) + 0x118) & 1) != 0) {
      local_288 = _DAT_140492bd0 & 0xffffffff00000000;
      local_278 = CONCAT44(0x40000000,(int)_DAT_140492e50);
      uStack_260 = 0;
    }
    plVar28 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x1518);
    local_2b8 = &local_res8;
    uStack_2b0 = (float *)&stack0x00000010;
    lVar20 = *plVar28;
    local_res8 = 0x700000000;
    uVar17 = FUN_140098c30(&local_2b8);
    local_2e0 = local_2e0 & 0xffffff00;
    local_2e8 = (char **)((ulonglong)local_2e8 & 0xffffffff00000000);
    uVar32 = (**(code **)(lVar20 + 0x48))(plVar28,uVar17,&local_298,3);
    *(undefined8 *)(param_1 + 0x3f8) = uVar32;
  }
  plVar3 = *(longlong **)(param_1 + 1000);
  lVar20 = plVar3[1];
  plVar28 = (longlong *)(lVar20 + 0x50);
  *plVar28 = *plVar28 + 8;
  **(longlong **)(lVar20 + 0x50) = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x48))();
  if ((*(byte *)(param_1 + 0x418) & 2) != 0) {
    local_2e8 = (char **)CONCAT44(local_2e8._4_4_,fVar41);
    *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) & 0xfd | 4;
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x1518) + 0x118))();
    plVar28 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x1518);
    (**(code **)(*plVar28 + 0x120))(plVar28,1,0);
  }
  plVar28 = *(longlong **)(param_1 + 0x3f8);
  FUN_14005f730(&local_1b8,plVar21);
  lVar20 = (**(code **)(*param_2 + 0x80))(param_2);
  fVar36 = *(float *)(lVar20 + 0x30);
  fVar37 = *(float *)(lVar20 + 0x34);
  fVar44 = *(float *)(lVar20 + 0x38);
  local_res18[0] = fVar36;
  local_res20 = fVar37;
  local_1c0 = fVar44;
  if ((char)param_2[0x58] == '\0') {
    lVar20 = param_2[0x19];
    fVar41 = (*(float *)(lVar20 + 0x160) * DAT_14049267c + *(float *)(lVar20 + 0x68)) - fVar36;
    fVar42 = (*(float *)(lVar20 + 0x164) * DAT_14049267c + *(float *)(lVar20 + 0x6c)) - fVar37;
    fVar43 = (*(float *)(lVar20 + 0x168) * DAT_14049267c + *(float *)(lVar20 + 0x70)) - fVar44;
    bVar34 = fVar41 * fVar41 + fVar42 * fVar42 + fVar43 * fVar43 <
             *(float *)(param_2 + 0x5d) * *(float *)(param_2 + 0x5d);
  }
  else if ((*(uint *)((longlong)param_2 + 0x2c4) >> 1 & 1) == 0) {
    lVar20 = param_2[0x19];
    local_f8 = (*(float *)(lVar20 + 0x168) * DAT_14049267c + *(float *)(lVar20 + 0x70)) - fVar44;
    local_f0 = (*(float *)(lVar20 + 0x164) * DAT_14049267c + *(float *)(lVar20 + 0x6c)) - fVar37;
    local_e8 = (*(float *)(lVar20 + 0x160) * DAT_14049267c + *(float *)(lVar20 + 0x68)) - fVar36;
    pfVar23 = (float *)(**(code **)(*param_2 + 0x80))(param_2);
    local_ec = *pfVar23;
    local_f4 = pfVar23[1];
    local_fc = pfVar23[2];
    fVar36 = pfVar23[3] * pfVar23[3] + local_fc * local_fc +
             local_f4 * local_f4 + local_ec * local_ec;
    if (fVar36 < 0.0) {
      fVar36 = (float)FUN_14041ad10();
    }
    else {
      fVar36 = SQRT(fVar36);
    }
    fVar36 = fVar41 / fVar36;
    local_fc = local_fc * fVar36;
    local_f4 = local_f4 * fVar36;
    local_ec = local_ec * fVar36;
    if ((*(uint *)(param_2[0x19] + 0x118) >> 0xc & 1) != 0) {
      fVar41 = 0.0;
    }
    local_2b8 = (undefined8 *)0x0;
    uStack_2b0 = (float *)CONCAT44(0x3f800000,fVar41);
    pfVar23 = (float *)FUN_14005f480(&local_2b8,0);
    fVar15 = fStack_180;
    fVar43 = fStack_184;
    fVar42 = fStack_190;
    fVar44 = fStack_1a0;
    fVar37 = fStack_1a4;
    fVar36 = fStack_1b0;
    local_108 = local_1a8;
    local_104 = local_198;
    local_10c = local_1b8;
    local_110 = fStack_194;
    local_114 = fStack_1b4;
    local_258 = 0.0;
    local_res8 = CONCAT44(local_res8._4_4_,*pfVar23);
    local_254 = 1.0;
    local_100 = local_188;
    local_24c = 1.0;
    local_118 = uStack_2b0._4_4_ * fStack_17c + (float)uStack_2b0 * fStack_18c +
                local_2b8._4_4_ * fStack_19c + fStack_1ac * *pfVar23;
    local_250 = fVar41;
    pfVar23 = (float *)FUN_14005f480(&local_258,0);
    fVar41 = local_254 * fStack_19c + *pfVar23 * fStack_1ac +
             fStack_18c * local_250 + fStack_17c * local_24c;
    fVar36 = (local_254 * fStack_1a0 + *pfVar23 * fStack_1b0 +
             fStack_190 * local_250 + fStack_180 * local_24c) / fVar41 -
             (uStack_2b0._4_4_ * fVar15 + (float)uStack_2b0 * fVar42 +
             local_2b8._4_4_ * fVar44 + (float)local_res8 * fVar36) / local_118;
    fVar37 = (local_254 * fStack_1a4 + fStack_1b4 * *pfVar23 +
             fStack_194 * local_250 + fStack_184 * local_24c) / fVar41 -
             ((float)uStack_2b0 * local_110 + uStack_2b0._4_4_ * fVar43 +
             local_2b8._4_4_ * fVar37 + (float)local_res8 * local_114) / local_118;
    fVar41 = (*pfVar23 * local_1b8 + local_254 * local_1a8 +
             local_198 * local_250 + local_188 * local_24c) / fVar41 -
             (uStack_2b0._4_4_ * local_100 + (float)uStack_2b0 * local_104 +
             local_108 * local_2b8._4_4_ + (float)local_res8 * local_10c) / local_118;
    fVar41 = fVar37 * fVar37 + fVar41 * fVar41 + fVar36 * fVar36;
    if (fVar41 < 0.0) {
      fVar41 = (float)FUN_14041ad10();
    }
    else {
      fVar41 = SQRT(fVar41);
    }
    fVar43 = local_f4 * local_f0 + local_ec * local_e8 + local_fc * local_f8;
    fVar36 = local_f0 - local_f4 * fVar43;
    fVar44 = local_e8 - local_ec * fVar43;
    fVar37 = local_f8 - local_fc * fVar43;
    fVar42 = fVar36 * fVar36 + fVar44 * fVar44 + fVar37 * fVar37;
    if (fVar42 < 0.0) {
      fVar42 = (float)FUN_14041ad10();
    }
    else {
      fVar42 = SQRT(fVar42);
    }
    fVar36 = local_res18[0];
    fVar37 = local_res20;
    fVar44 = local_1c0;
    if (((fVar43 <= 0.0) || (*(float *)(param_2 + 0x5d) < fVar43)) ||
       ((fVar43 / *(float *)(param_2 + 0x5d)) * fVar41 < fVar42)) {
      bVar34 = false;
    }
    else {
      bVar34 = true;
    }
  }
  else {
    local_238 = 0;
    uStack_230 = (undefined8 *)0x0;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    FUN_1401849e0(&local_238,plVar21);
    lVar20 = param_2[0x19];
    fVar41 = *(float *)(lVar20 + 0x160) * DAT_140492654 + *(float *)(lVar20 + 0x68);
    fVar42 = *(float *)(lVar20 + 0x164) * DAT_140492654 + *(float *)(lVar20 + 0x6c);
    fVar43 = *(float *)(lVar20 + 0x168) * DAT_140492654 + *(float *)(lVar20 + 0x70);
    if (0.0 <= fVar41 * (float)local_238 + fVar42 * local_238._4_4_ + (float)uStack_230 * fVar43 +
               uStack_230._4_4_) {
      if (0.0 <= fVar41 * (float)local_228 + fVar42 * local_228._4_4_ + (float)uStack_220 * fVar43 +
                 uStack_220._4_4_) {
        if (0.0 <= fVar41 * (float)local_218 + fVar42 * local_218._4_4_ + (float)uStack_210 * fVar43
                   + uStack_210._4_4_) {
          if (0.0 <= fVar41 * (float)local_208 + fVar42 * local_208._4_4_ +
                     (float)uStack_200 * fVar43 + uStack_200._4_4_) {
            if (0.0 <= fVar41 * (float)local_1f8 + fVar42 * local_1f8._4_4_ +
                       (float)uStack_1f0 * fVar43 + uStack_1f0._4_4_) {
              if (0.0 <= fVar41 * (float)local_1e8 + fVar42 * local_1e8._4_4_ +
                         (float)uStack_1e0 * fVar43 + uStack_1e0._4_4_) {
                bVar34 = true;
                goto LAB_1401980e9;
              }
            }
          }
        }
      }
    }
    bVar34 = false;
  }
LAB_1401980e9:
  if (param_2[0x71] == 0) {
    local_238 = local_238 & 0xffffffff00000000;
    uStack_230 = (undefined8 *)0x0;
    local_228 = 0;
    uStack_230 = (undefined8 *)FUN_14028af20(0x38);
    *uStack_230 = uStack_230;
    uStack_230[1] = uStack_230;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 7;
    uStack_200 = 8;
    local_238 = CONCAT44(local_238._4_4_,0x3f800000);
    FUN_140011f50(&uStack_220,0x10,uStack_230);
    if ((*(uint *)((longlong)param_2 + 0x2c4) >> 1 & 1) != 0) {
      local_288 = 6;
      uStack_290 = 0;
      local_298._0_6_ = CONCAT24(s_COOKIE_140491b18._4_2_,s_COOKIE_140491b18._0_4_);
      uStack_280 = 0xf;
      local_298 = (char *)(ulonglong)(uint6)local_298;
      puVar24 = (undefined4 *)FUN_14015a440(&local_238,&local_298);
      *puVar24 = 1;
      if (0xf < uStack_280) {
        FUN_140017200(&local_298,local_298);
      }
    }
    if (((*(byte *)((longlong)param_2 + 0x2c4) & 1) != 0) &&
       (*(char *)(param_2[0x19] + 0x1ac) != '\0')) {
      local_288 = 6;
      uStack_290 = 0;
      local_298._0_6_ = CONCAT24(s_SHADOW_140491a80._4_2_,s_SHADOW_140491a80._0_4_);
      uStack_280 = 0xf;
      local_298 = (char *)(ulonglong)(uint6)local_298;
      puVar24 = (undefined4 *)FUN_14015a440(&local_238,&local_298);
      *puVar24 = 1;
      if (0xf < uStack_280) {
        FUN_140017200(&local_298,local_298);
      }
    }
    bVar1 = *(byte *)(param_2[0x19] + 0x1ad);
    uVar30 = (ulonglong)bVar1;
    uStack_280 = 0xf;
    local_298._0_6_ = CONCAT24(s_QUALITY_140491a88._4_2_,s_QUALITY_140491a88._0_4_);
    uStack_290 = 0;
    local_288 = 7;
    local_298 = (char *)(ulonglong)CONCAT16(s_QUALITY_140491a88[6],(uint6)local_298);
    puVar25 = (uint *)FUN_14015a440(&local_238,&local_298);
    *puVar25 = (uint)bVar1;
    if (uStack_280 < 0x10) {
LAB_1401982fa:
      if ((char)param_2[0x58] == '\0') {
        local_288 = 10;
        uStack_280 = 0xf;
        local_298 = (char *)s_POINTLIGHT_140491a90._0_8_;
        uStack_290 = (ulonglong)(ushort)s_POINTLIGHT_140491a90._8_2_;
        puVar24 = (undefined4 *)FUN_14015a440(&local_238,&local_298);
        *puVar24 = 1;
        if (0xf < uStack_280) {
          uVar29 = uStack_280 + 1;
          pcVar27 = local_298;
          if (0xfff < uVar29) {
            pcVar27 = *(char **)(local_298 + -8);
            if ((char *)0x1f < local_298 + (-8 - (longlong)pcVar27)) goto LAB_1401985c9;
            uVar29 = uStack_280 + 0x28;
          }
          thunk_FUN_14028af80(pcVar27,uVar29);
        }
        local_res8 = 0x1f;
        bVar1 = *(byte *)(param_2[0x19] + 0x1ac);
        uVar30 = (ulonglong)bVar1;
        local_298 = (char *)0x0;
        uStack_290 = 0;
        local_288 = 0;
        uStack_280 = 0;
        local_298 = (char *)FUN_1400173f0(&local_298,&local_res8);
        uVar32 = CONCAT35(s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50._13_3_,
                          s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50._8_5_);
        auVar9[3] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x10];
        auVar9[4] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x11];
        auVar9[5] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x12];
        auVar9[6] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x13];
        auVar9[7] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x14];
        auVar9[8] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x15];
        auVar9[9] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x16];
        auVar9[10] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x17];
        auVar9[0xb] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x18];
        auVar9[0xc] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x19];
        auVar9[0xd] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x1a];
        auVar9[0xe] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x1b];
        auVar9[0xf] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0x1c];
        auVar9[0] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0xd];
        auVar9[1] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0xe];
        auVar9[2] = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50[0xf];
        uStack_280 = local_res8;
        local_288 = 0x1d;
        *(undefined8 *)local_298 = s_LIGHTS_SHADOW_MAPPING_QUALITY_14048ee50._0_8_;
        *(undefined8 *)(local_298 + 8) = uVar32;
        *(undefined1 (*) [16])(local_298 + 0xd) = auVar9;
        local_298[0x1d] = '\0';
        puVar25 = (uint *)FUN_14015a440(&local_238,&local_298);
        *puVar25 = (uint)bVar1;
        if (0xf < uStack_280) {
          uVar29 = uStack_280 + 1;
          pcVar27 = local_298;
          if (0xfff < uVar29) {
            pcVar27 = *(char **)(local_298 + -8);
            if ((char *)0x1f < local_298 + (-8 - (longlong)pcVar27)) goto LAB_1401985c9;
            uVar29 = uStack_280 + 0x28;
          }
          thunk_FUN_14028af80(pcVar27,uVar29);
        }
      }
      lVar20 = FUN_140150110(param_2[0x19] + 0x1630,"materials/util/volumetrics_fullscreen.json",
                             &local_238,0);
      param_2[0x71] = lVar20;
      lVar20 = FUN_140150110(param_2[0x19] + 0x1630,"materials/util/volumetrics_front.json",
                             &local_238,0);
      param_2[0x72] = lVar20;
      if (uStack_220 != 0) {
        uVar29 = (uStack_210 - uStack_220 >> 3) * 8;
        lVar20 = uStack_220;
        if (0xfff < uVar29) {
          lVar20 = *(longlong *)(uStack_220 + -8);
          if (0x1f < (uStack_220 - lVar20) - 8U) goto LAB_1401985c9;
          uVar29 = uVar29 + 0x27;
        }
        thunk_FUN_14028af80(lVar20,uVar29);
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
      }
      *(undefined8 *)uStack_230[1] = 0;
      puVar26 = (undefined8 *)*uStack_230;
      while (puVar26 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar26;
        FUN_140017240(puVar26 + 2);
        thunk_FUN_14028af80(puVar26,0x38);
        puVar26 = puVar4;
      }
      thunk_FUN_14028af80(uStack_230,0x38);
      goto LAB_14019852f;
    }
    uVar29 = uStack_280 + 1;
    pcVar27 = local_298;
    if (uVar29 < 0x1000) {
LAB_1401982f5:
      thunk_FUN_14028af80(pcVar27,uVar29);
      goto LAB_1401982fa;
    }
    pcVar27 = *(char **)(local_298 + -8);
    if (local_298 + (-8 - (longlong)pcVar27) < (char *)0x20) {
      uVar29 = uStack_280 + 0x28;
      goto LAB_1401982f5;
    }
LAB_1401985c9:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar31 = auStack_300;
  }
  else {
LAB_14019852f:
    lVar20 = param_2[0x19];
    uVar30 = param_2[(ulonglong)(bVar34 ^ 1) + 0x71];
    if (*(char *)(lVar20 + 0x1ca) != '\0') {
      FUN_1400d4200();
    }
    FUN_14005f730(&local_178,lVar20 + 0x930);
    if ((char)param_2[0x58] != '\0') {
      lVar20 = param_2[0x19];
      *(ulonglong *)(lVar20 + 0xab0) = CONCAT44(fStack_1b4,local_1b8);
      *(ulonglong *)(lVar20 + 0xab8) = CONCAT44(fStack_1ac,fStack_1b0);
      *(ulonglong *)(lVar20 + 0xac0) = CONCAT44(fStack_1a4,local_1a8);
      *(ulonglong *)(lVar20 + 0xac8) = CONCAT44(fStack_19c,fStack_1a0);
      *(ulonglong *)(lVar20 + 0xad0) = CONCAT44(fStack_194,local_198);
      *(ulonglong *)(lVar20 + 0xad8) = CONCAT44(fStack_18c,fStack_190);
      *(ulonglong *)(lVar20 + 0xae0) = CONCAT44(fStack_184,local_188);
      *(ulonglong *)(lVar20 + 0xae8) = CONCAT44(fStack_17c,fStack_180);
      puVar26 = (undefined8 *)(**(code **)(*param_2 + 0x80))(param_2);
      lVar20 = param_2[0x19];
      uVar32 = puVar26[1];
      *(undefined8 *)(lVar20 + 0xd8) = *puVar26;
      *(undefined8 *)(lVar20 + 0xe0) = uVar32;
      puVar31 = auStack_308;
      goto LAB_14019868e;
    }
  }
  fVar41 = *(float *)(param_2 + 0x5d);
  pcVar5 = *(code **)(*param_2 + 0x80);
  *(undefined8 *)(puVar31 + -8) = 0x1401985e1;
  lVar20 = (*pcVar5)();
  uStack_25c = 0x3f800000;
  uVar17 = *(undefined4 *)(lVar20 + 0x30);
  uVar39 = *(undefined4 *)(lVar20 + 0x34);
  uVar40 = *(undefined4 *)(lVar20 + 0x38);
  lVar20 = param_2[0x19];
  fVar42 = fVar41 * 0.0;
  local_238 = CONCAT44(fVar42,(float)local_238);
  uStack_230 = (undefined8 *)CONCAT44(fVar42,fVar42);
  local_228 = CONCAT44(local_228._4_4_,fVar42);
  uStack_220 = CONCAT44(fVar42,fVar42);
  local_218 = CONCAT44(fVar42,fVar42);
  *(float *)(lVar20 + 0xab0) = fVar41;
  *(float *)(lVar20 + 0xab4) = fVar42;
  *(float *)(lVar20 + 0xab8) = fVar42;
  *(float *)(lVar20 + 0xabc) = fVar42;
  *(float *)(lVar20 + 0xac0) = fVar42;
  *(float *)(lVar20 + 0xac4) = fVar41;
  *(float *)(lVar20 + 0xac8) = fVar42;
  *(float *)(lVar20 + 0xacc) = fVar42;
  *(float *)(lVar20 + 0xad0) = fVar42;
  *(float *)(lVar20 + 0xad4) = fVar42;
  *(float *)(lVar20 + 0xad8) = fVar41;
  *(float *)(lVar20 + 0xadc) = fVar42;
  *(undefined4 *)(lVar20 + 0xae0) = uVar17;
  *(undefined4 *)(lVar20 + 0xae4) = uVar39;
  *(undefined4 *)(lVar20 + 0xae8) = uVar40;
  *(undefined4 *)(lVar20 + 0xaec) = 0x3f800000;
  lVar20 = param_2[0x19];
  lVar2 = param_2[0x65];
  *(longlong *)(lVar20 + 0xd8) = param_2[100];
  *(longlong *)(lVar20 + 0xe0) = lVar2;
LAB_14019868e:
  fVar42 = DAT_140492628;
  lVar2 = param_2[0x69];
  lVar7 = param_2[0x6a];
  lVar20 = param_2[0x19];
  lVar8 = param_2[0x68];
  lVar10 = param_2[0x6b];
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x35c);
  lVar11 = param_2[0x6c];
  uVar39 = *(undefined4 *)((longlong)param_2 + 0x364);
  lVar12 = param_2[0x6d];
  uVar40 = *(undefined4 *)((longlong)param_2 + 0x36c);
  lVar13 = param_2[0x6e];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x374);
  *(longlong *)(lVar20 + 0xa70) = *plVar21;
  *(longlong *)(lVar20 + 0xa78) = lVar8;
  *(longlong *)(lVar20 + 0xa80) = lVar2;
  *(longlong *)(lVar20 + 0xa88) = lVar7;
  *(int *)(lVar20 + 0xa90) = (int)lVar10;
  *(undefined4 *)(lVar20 + 0xa94) = uVar17;
  *(int *)(lVar20 + 0xa98) = (int)lVar11;
  *(undefined4 *)(lVar20 + 0xa9c) = uVar39;
  *(int *)(lVar20 + 0xaa0) = (int)lVar12;
  *(undefined4 *)(lVar20 + 0xaa4) = uVar40;
  *(int *)(lVar20 + 0xaa8) = (int)lVar13;
  *(undefined4 *)(lVar20 + 0xaac) = uVar6;
  lVar20 = param_2[0x19];
  *(ulonglong *)(lVar20 + 0x970) = CONCAT44(uStack_174,local_178);
  *(ulonglong *)(lVar20 + 0x978) = CONCAT44(uStack_16c,uStack_170);
  *(ulonglong *)(lVar20 + 0x980) = CONCAT44(uStack_164,local_168);
  *(ulonglong *)(lVar20 + 0x988) = CONCAT44(uStack_15c,uStack_160);
  *(ulonglong *)(lVar20 + 0x990) = CONCAT44(uStack_154,local_158);
  *(ulonglong *)(lVar20 + 0x998) = CONCAT44(uStack_14c,uStack_150);
  *(ulonglong *)(lVar20 + 0x9a0) = CONCAT44(uStack_144,local_148);
  *(ulonglong *)(lVar20 + 0x9a8) = CONCAT44(uStack_13c,uStack_140);
  lVar20 = param_2[0x19];
  lVar2 = param_2[99];
  *(longlong *)(lVar20 + 0xa8) = param_2[0x62];
  *(longlong *)(lVar20 + 0xb0) = lVar2;
  fVar41 = *(float *)(param_2 + 0x5e);
  *(undefined8 *)(puVar31 + -8) = 0x140198735;
  uVar39 = FUN_14041a2e0(fVar41 * fVar42);
  fVar41 = *(float *)((longlong)param_2 + 0x2f4);
  *(undefined8 *)(puVar31 + -8) = 0x140198749;
  uVar40 = FUN_14041a2e0(fVar41 * fVar42);
  lVar20 = param_2[0x19];
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x2e4);
  *(float *)(lVar20 + 0xb8) = *(float *)(param_2 + 0x5d) * DAT_1404926f8;
  *(undefined4 *)(lVar20 + 0xbc) = uVar39;
  *(undefined4 *)(lVar20 + 0xc0) = uVar40;
  *(undefined4 *)(lVar20 + 0xc4) = uVar17;
  lVar20 = param_2[0x19];
  lVar2 = param_2[0x5f];
  *(float *)(lVar20 + 200) = fVar36;
  *(float *)(lVar20 + 0xcc) = fVar37;
  *(float *)(lVar20 + 0xd0) = fVar44;
  *(int *)(lVar20 + 0xd4) = (int)lVar2;
  lVar20 = param_2[0x19];
  lVar2 = param_2[0x5a];
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x2d4);
  uVar39 = *(undefined4 *)((longlong)param_2 + 0x2fc);
  *(undefined4 *)(lVar20 + 0xe8) = *(undefined4 *)((longlong)param_2 + 0x2cc);
  *(int *)(lVar20 + 0xec) = (int)lVar2;
  *(undefined4 *)(lVar20 + 0xf0) = uVar17;
  *(undefined4 *)(lVar20 + 0xf4) = uVar39;
  if (((*(uint *)((longlong)param_2 + 0x2c4) >> 1 & 1) != 0) && (param_2[0x66] != 0)) {
    *(longlong *)(uVar30 + 0xe0) = param_2[0x66];
  }
  *(undefined8 *)(puVar31 + -8) = 0x140198824;
  FUN_140155fc0(uVar30);
  if (bVar34 == false) {
    plVar28 = (longlong *)param_2[0x6f];
    lVar20 = *plVar28;
  }
  else {
    lVar20 = *plVar28;
  }
  pcVar5 = *(code **)(lVar20 + 8);
  *(undefined8 *)(puVar31 + -8) = 0x14019883f;
  (*pcVar5)(plVar28);
  *(undefined8 *)(puVar31 + -8) = 0x140198847;
  FUN_140157430(uVar30);
  plVar21 = *(longlong **)(param_1 + 1000);
  *(longlong *)(plVar21[1] + 0x50) = *(longlong *)(plVar21[1] + 0x50) + -8;
  if ((longlong *)**(longlong **)(plVar21[1] + 0x50) == (longlong *)0x0) {
    pcVar5 = *(code **)(*plVar21 + 0x50);
    *(undefined8 *)(puVar31 + -8) = 0x140198878;
    (*pcVar5)(plVar21);
  }
  else {
    pcVar5 = *(code **)(*(longlong *)**(longlong **)(plVar21[1] + 0x50) + 0x48);
    *(undefined8 *)(puVar31 + -8) = 0x14019886d;
    (*pcVar5)();
  }
  return;
}

