// Function: FUN_140223810
// Addr: 140223810
// Size: 4268 bytes


ulonglong FUN_140223810(longlong *param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                       float *param_5,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char cVar18;
  ulonglong in_RAX;
  undefined8 *puVar19;
  float *pfVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float local_res8 [2];
  float local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174 [3];
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
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
  float local_e4;
  float local_e0;
  float local_dc;
  longlong local_d8;
  
  uVar25 = 0;
  local_res8[0] = 0.0;
  lVar24 = param_1[0x5d];
  if ((lVar24 != 0) &&
     (in_RAX = *(ulonglong *)(lVar24 + 0x1a8), *(ulonglong *)(lVar24 + 0x1a0) != in_RAX)) {
    puVar19 = (undefined8 *)(**(code **)(*param_1 + 0x80))(param_1);
    fVar10 = DAT_140492704;
    lVar24 = param_1[0x5d];
    local_1fc = DAT_14049297c;
    local_158 = *puVar19;
    uVar21 = puVar19[1];
    uVar6 = puVar19[2];
    uVar7 = puVar19[3];
    fVar38 = *(float *)(puVar19 + 4);
    fVar42 = *(float *)((longlong)puVar19 + 0x24);
    fVar43 = *(float *)(puVar19 + 5);
    fVar46 = *(float *)((longlong)puVar19 + 0x2c);
    uVar8 = puVar19[6];
    uVar9 = puVar19[7];
    uStack_150 = uVar21;
    local_148 = uVar6;
    uStack_140 = uVar7;
    local_138 = fVar38;
    fStack_134 = fVar42;
    fStack_130 = fVar43;
    fStack_12c = fVar46;
    local_128 = uVar8;
    uStack_120 = uVar9;
    if (*(longlong *)(lVar24 + 0x30) == *(longlong *)(lVar24 + 0x38)) {
      uVar22 = 0;
      if ((*(longlong *)(lVar24 + 0x1a8) - *(longlong *)(lVar24 + 0x1a0) >> 2) * -0x79435e50d79435e5
          != 0) {
        do {
          lVar24 = *(longlong *)(lVar24 + 0x1a0);
          lVar23 = (longlong)(int)uVar25 * 0x4c;
          uVar21 = FUN_14005ecb0(&local_118,&local_158,lVar24 + 0xc + lVar23);
          FUN_14005f730(&local_1e8,uVar21);
          fVar38 = param_3[1];
          fVar42 = *param_3;
          local_1ec = 0.0;
          fVar43 = param_3[2];
          local_1f8 = *param_4;
          fVar50 = fVar42 * local_1e8 + fVar38 * local_1d8 + fVar43 * local_1c8 + local_1b8;
          local_1f4 = param_4[1];
          local_1f0 = (float)param_4[2];
          fVar52 = fVar42 * local_1e4 + fVar38 * local_1d4 + fVar43 * local_1c4 + local_1b4;
          fVar43 = fVar42 * local_1e0 + fVar38 * local_1d0 + fVar43 * local_1c0 + local_1b0;
          pfVar20 = (float *)FUN_14005f480(&local_1f8,0);
          fVar38 = *pfVar20;
          pfVar20 = (float *)FUN_14005f480(&local_1f8,1);
          fVar42 = *pfVar20;
          fVar46 = fVar38 * local_1e8 + fVar42 * local_1d8 +
                   local_1f0 * local_1c8 + local_1ec * local_1b8;
          fVar48 = fVar38 * local_1e4 + fVar42 * local_1d4 +
                   local_1f0 * local_1c4 + local_1ec * local_1b4;
          fVar42 = fVar38 * local_1e0 + fVar42 * local_1d0 +
                   local_1f0 * local_1c0 + local_1ec * local_1b0;
          fVar38 = fVar48 * fVar48 + fVar46 * fVar46 + fVar42 * fVar42;
          if (fVar38 < 0.0) {
            fVar38 = (float)FUN_14041ad10(fVar38);
          }
          else {
            fVar38 = SQRT(fVar38);
          }
          local_160 = *(undefined4 *)(lVar23 + 8 + lVar24);
          fVar38 = fVar10 / fVar38;
          local_168 = *(undefined8 *)(lVar23 + lVar24);
          local_198 = fVar50;
          local_194 = fVar52;
          local_190 = fVar43;
          local_188 = fVar38 * fVar46;
          local_184 = fVar38 * fVar48;
          local_180 = fVar38 * fVar42;
          cVar18 = FUN_1401853c0(&local_198,&local_188,&local_168,local_res8);
          fVar11 = local_res8[0];
          if ((cVar18 != '\0') && (local_res8[0] < local_1fc)) {
            *param_5 = fVar38 * fVar46 * local_res8[0] + fVar50;
            param_5[1] = fVar38 * fVar48 * local_res8[0] + fVar52;
            param_5[2] = fVar38 * fVar42 * local_res8[0] + fVar43;
            uVar21 = FUN_140053e40(&local_118,uVar25);
            FUN_14000de40(param_6,uVar21);
            FUN_140017240(&local_118);
            local_1fc = fVar11;
          }
          lVar24 = param_1[0x5d];
          uVar25 = uVar25 + 1;
          uVar22 = (ulonglong)(int)uVar25;
        } while (uVar22 < (ulonglong)
                          ((*(longlong *)(lVar24 + 0x1a8) - *(longlong *)(lVar24 + 0x1a0) >> 2) *
                          -0x79435e50d79435e5));
      }
    }
    else {
      uVar22 = 0;
      if ((*(longlong *)(lVar24 + 0x38) - *(longlong *)(lVar24 + 0x30) >> 4) * -0x1111111111111111
          != 0) {
        uStack_120._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
        fVar17 = uStack_120._4_4_;
        iVar26 = 0;
        uStack_120._0_4_ = (float)uVar9;
        fVar16 = (float)uStack_120;
        local_128._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
        fVar15 = local_128._4_4_;
        local_128._0_4_ = (float)uVar8;
        fVar14 = (float)local_128;
        uStack_140._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
        fVar13 = uStack_140._4_4_;
        uStack_140._0_4_ = (float)uVar7;
        fVar12 = (float)uStack_140;
        local_148._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
        fVar11 = local_148._4_4_;
        local_148._0_4_ = (float)uVar6;
        fVar52 = (float)local_148;
        uStack_150._4_4_ = (float)((ulonglong)uVar21 >> 0x20);
        fVar50 = uStack_150._4_4_;
        uStack_150._0_4_ = (float)uVar21;
        fVar48 = (float)uStack_150;
        local_158._4_4_ = (float)((ulonglong)local_158 >> 0x20);
        fVar10 = local_158._4_4_;
        local_1a4 = (float)local_158;
        do {
          local_d8 = *(longlong *)(lVar24 + 0x1a0);
          lVar27 = (longlong)iVar26 * 0x4c;
          lVar23 = (longlong)iVar26 * 0x40;
          lVar24 = *(longlong *)(param_1[0x5b] + 0x30);
          fVar37 = *(float *)(lVar23 + lVar24);
          fVar53 = *(float *)(lVar23 + 4 + lVar24);
          fVar44 = *(float *)(lVar23 + 8 + lVar24);
          fVar45 = *(float *)(lVar23 + 0x1c + lVar24);
          fVar47 = *(float *)(lVar23 + 0x14 + lVar24);
          fVar49 = *(float *)(lVar23 + 0x10 + lVar24);
          fVar51 = *(float *)(lVar23 + 0x20 + lVar24);
          fVar1 = *(float *)(lVar23 + 0x24 + lVar24);
          fVar2 = *(float *)(lVar23 + 0x28 + lVar24);
          fVar3 = *(float *)(lVar23 + 0x2c + lVar24);
          fVar4 = *(float *)(lVar23 + 0x30 + lVar24);
          fVar41 = *(float *)(lVar23 + 0x34 + lVar24);
          fVar5 = *(float *)(lVar23 + 0x38 + lVar24);
          fVar28 = *(float *)(lVar23 + 0xc + lVar24) * fVar14 +
                   fVar53 * fVar52 + fVar37 * local_1a4 + fVar44 * fVar38;
          fVar29 = *(float *)(lVar23 + 0xc + lVar24) * fVar15 +
                   fVar53 * fVar11 + fVar37 * fVar10 + fVar44 * fVar42;
          fVar33 = *(float *)(lVar23 + 0x18 + lVar24);
          fVar30 = *(float *)(lVar23 + 0xc + lVar24);
          local_res8[0] = fVar30 * fVar17 + fVar44 * fVar46 + fVar53 * fVar13 + fVar37 * fVar50;
          fVar30 = fVar30 * fVar16 + fVar53 * fVar12 + fVar37 * fVar48 + fVar44 * fVar43;
          fVar39 = fVar47 * fVar52 + local_1a4 * fVar49 + fVar33 * fVar38 + fVar45 * fVar14;
          fVar31 = fVar33 * fVar42 + fVar10 * fVar49 + fVar47 * fVar11 + fVar45 * fVar15;
          fVar32 = fVar33 * fVar43 + fVar48 * fVar49 + fVar47 * fVar12 + fVar45 * fVar16;
          fVar40 = fVar33 * fVar46 + fVar50 * fVar49 + fVar13 * fVar47 + fVar45 * fVar17;
          fVar33 = fVar3 * fVar14 + fVar1 * fVar52 + local_1a4 * fVar51 + fVar38 * fVar2;
          fVar34 = fVar15 * fVar3 + fVar2 * fVar42 + fVar11 * fVar1 + fVar51 * fVar10;
          fVar35 = fVar3 * fVar16 + fVar43 * fVar2 + fVar1 * fVar12 + fVar48 * fVar51;
          fVar37 = *(float *)(local_d8 + 0x1c + lVar27);
          fVar53 = *(float *)(local_d8 + 0x28 + lVar27);
          fVar44 = *(float *)(local_d8 + 0x24 + lVar27);
          fVar36 = fVar13 * fVar1 + fVar51 * fVar50 + fVar2 * fVar46 + fVar17 * fVar3;
          fVar45 = *(float *)(lVar23 + 0x3c + lVar24);
          fVar47 = *(float *)(local_d8 + 0xc + lVar27);
          local_178 = fVar45 * fVar14 + fVar5 * fVar38 + fVar4 * local_1a4 + fVar41 * fVar52;
          local_1a0 = fVar45 * fVar15 + fVar5 * fVar42 + fVar4 * fVar10 + fVar41 * fVar11;
          fVar49 = *(float *)(local_d8 + 0x14 + lVar27);
          fVar51 = *(float *)(local_d8 + 0x20 + lVar27);
          fVar1 = *(float *)(local_d8 + 0x18 + lVar27);
          fVar2 = *(float *)(local_d8 + 0x38 + lVar27);
          fVar3 = *(float *)(local_d8 + 0x34 + lVar27);
          local_1a8 = fVar4 * fVar48 + fVar41 * fVar12 + fVar5 * fVar43 + fVar45 * fVar16;
          fVar41 = fVar45 * fVar17 + fVar5 * fVar46 + fVar50 * fVar4 + fVar41 * fVar13;
          fVar45 = *(float *)(local_d8 + 0x30 + lVar27);
          fVar4 = *(float *)(local_d8 + 0x10 + lVar27);
          local_118 = fVar47 * fVar28 + fVar4 * fVar39 + fVar49 * fVar33 + fVar1 * local_178;
          local_114 = fVar47 * fVar29 + fVar4 * fVar31 + fVar49 * fVar34 + fVar1 * local_1a0;
          local_110 = fVar47 * fVar30 + fVar4 * fVar32 + fVar49 * fVar35 + fVar1 * local_1a8;
          local_10c = fVar47 * local_res8[0] + fVar4 * fVar40 + fVar49 * fVar36 + fVar1 * fVar41;
          local_108 = fVar28 * fVar37 + fVar39 * fVar51 + fVar44 * fVar33 + fVar53 * local_178;
          local_104 = fVar29 * fVar37 + fVar31 * fVar51 + fVar44 * fVar34 + fVar53 * local_1a0;
          local_100 = fVar30 * fVar37 + fVar32 * fVar51 + fVar44 * fVar35 + fVar53 * local_1a8;
          local_fc = local_res8[0] * fVar37 + fVar40 * fVar51 + fVar44 * fVar36 + fVar53 * fVar41;
          fVar37 = *(float *)(local_d8 + 0x2c + lVar27);
          local_f8 = fVar28 * fVar37 + fVar39 * fVar45 + fVar33 * fVar3 + local_178 * fVar2;
          local_f4 = fVar29 * fVar37 + fVar31 * fVar45 + fVar34 * fVar3 + local_1a0 * fVar2;
          local_f0 = fVar30 * fVar37 + fVar32 * fVar45 + fVar35 * fVar3 + local_1a8 * fVar2;
          fVar53 = *(float *)(local_d8 + 0x3c + lVar27);
          fVar44 = *(float *)(local_d8 + 0x48 + lVar27);
          fVar47 = *(float *)(local_d8 + 0x40 + lVar27);
          local_ec = local_res8[0] * fVar37 + fVar40 * fVar45 + fVar36 * fVar3 + fVar41 * fVar2;
          fVar37 = *(float *)(local_d8 + 0x44 + lVar27);
          local_e8 = fVar28 * fVar53 + fVar39 * fVar47 + fVar33 * fVar37 + local_178 * fVar44;
          local_e4 = fVar29 * fVar53 + fVar31 * fVar47 + fVar34 * fVar37 + local_1a0 * fVar44;
          local_e0 = fVar30 * fVar53 + fVar32 * fVar47 + fVar35 * fVar37 + local_1a8 * fVar44;
          local_dc = local_res8[0] * fVar53 + fVar40 * fVar47 + fVar36 * fVar37 + fVar41 * fVar44;
          FUN_14005f730(&local_1e8,&local_118,local_d8,fVar53,fVar41);
          fVar37 = param_3[2];
          fVar53 = *param_3;
          fVar44 = param_3[1];
          local_1ec = 0.0;
          local_1f4 = param_4[1];
          fVar45 = local_1e8 * fVar53 + local_1d8 * fVar44 + local_1c8 * fVar37 + local_1b8;
          local_1f8 = *param_4;
          local_1f0 = (float)param_4[2];
          fVar47 = fVar53 * local_1e4 + local_1d4 * fVar44 + local_1c4 * fVar37 + local_1b4;
          fVar44 = fVar53 * local_1e0 + local_1d0 * fVar44 + local_1c0 * fVar37 + local_1b0;
          pfVar20 = (float *)FUN_14005f480(&local_1f8,0);
          fVar37 = *pfVar20;
          pfVar20 = (float *)FUN_14005f480(&local_1f8,1);
          fVar53 = *pfVar20;
          fVar49 = local_1e8 * fVar37 + fVar53 * local_1d8 +
                   local_1f0 * local_1c8 + local_1ec * local_1b8;
          fVar51 = local_1e4 * fVar37 + local_1d4 * fVar53 +
                   local_1f0 * local_1c4 + local_1ec * local_1b4;
          fVar53 = local_1e0 * fVar37 + local_1d0 * fVar53 +
                   local_1f0 * local_1c0 + local_1ec * local_1b0;
          fVar37 = fVar51 * fVar51 + fVar49 * fVar49 + fVar53 * fVar53;
          if (fVar37 < 0.0) {
            fVar37 = (float)FUN_14041ad10(fVar37);
          }
          else {
            fVar37 = SQRT(fVar37);
          }
          fVar37 = DAT_140492704 / fVar37;
          local_168 = *(undefined8 *)(local_d8 + lVar27);
          local_160 = *(undefined4 *)(local_d8 + 8 + lVar27);
          local_198 = fVar37 * fVar49;
          local_194 = fVar37 * fVar51;
          local_190 = fVar37 * fVar53;
          local_188 = fVar45;
          local_184 = fVar47;
          local_180 = fVar44;
          cVar18 = FUN_1401853c0(&local_188,&local_198,&local_168,local_174);
          if ((cVar18 != '\0') && (local_174[0] < local_1fc)) {
            local_1fc = local_174[0];
            lVar24 = *(longlong *)(param_1[0x5d] + 0x30);
            *param_5 = local_174[0] * fVar37 * fVar49 + fVar45;
            param_5[1] = fVar37 * fVar51 * local_174[0] + fVar47;
            param_5[2] = local_174[0] * fVar37 * fVar53 + fVar44;
            if (*(longlong *)((longlong)iVar26 * 0xf0 + lVar24 + 0x10) == 0) {
              uVar25 = uVar25 | 1;
              uVar21 = FUN_140053e40(&local_118,iVar26);
            }
            else {
              uVar25 = uVar25 | 2;
              uVar21 = FUN_140016fc0(&local_158);
            }
            FUN_14000de40(param_6,uVar21);
            if ((uVar25 & 2) != 0) {
              uVar25 = uVar25 & 0xfffffffd;
              FUN_140017240(&local_158);
            }
            if ((uVar25 & 1) != 0) {
              uVar25 = uVar25 & 0xfffffffe;
              FUN_140017240(&local_118);
            }
          }
          lVar24 = param_1[0x5d];
          iVar26 = iVar26 + 1;
          uVar22 = (ulonglong)iVar26;
        } while (uVar22 < (ulonglong)
                          ((*(longlong *)(lVar24 + 0x38) - *(longlong *)(lVar24 + 0x30) >> 4) *
                          -0x1111111111111111));
      }
    }
    return CONCAT71((int7)(uVar22 >> 8),local_1fc < DAT_14049297c);
  }
  return in_RAX & 0xffffffffffffff00;
}

