// Function: FUN_1401d4580
// Addr: 1401d4580
// Size: 4860 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401d4580(ulonglong *param_1,longlong param_2,undefined8 param_3,char param_4,
                       longlong *param_5)

{
  float *pfVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  ulonglong in_RAX;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
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
  undefined8 local_268;
  float local_260;
  undefined8 local_258;
  float local_250;
  float local_24c;
  undefined8 local_248;
  float fStack_240;
  float fStack_23c;
  longlong *local_238;
  longlong local_230;
  ulonglong local_228;
  longlong *local_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  longlong *local_1b8;
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
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  
  if (*(longlong *)(param_2 + 0x18) == 0) {
    plVar22 = (longlong *)
              (**(code **)(**(longlong **)(*param_1 + 0x1510) + 8))
                        (*(longlong **)(*param_1 + 0x1510),*(undefined8 *)(param_2 + 0x10));
    in_RAX = 0;
    if ((plVar22 != (longlong *)0x0) &&
       ((iVar6 = (**(code **)(*plVar22 + 0x60))(plVar22), iVar6 == 5 ||
        (in_RAX = (**(code **)(*plVar22 + 0x60))(plVar22), (int)in_RAX == 1)))) {
      in_RAX = FUN_1401d76d0(param_1,plVar22);
      *(longlong **)(param_2 + 0x18) = plVar22;
    }
  }
  else if (((*(int *)(param_2 + 8) == 1) &&
           (in_RAX = *param_1, *(int *)(param_2 + 4) == *(int *)(in_RAX + 0x144))) &&
          (param_4 != '\0')) {
    *param_5 = param_2 + 0x128;
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x130) >> 8),
                    *(longlong *)(param_2 + 0x128) != *(longlong *)(param_2 + 0x130));
  }
  if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
    iVar6 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x60))();
    uVar7 = iVar6 - 1;
    in_RAX = (ulonglong)uVar7;
    if (uVar7 == 0) {
      local_230 = *(longlong *)(param_2 + 0x18);
      if ((*(longlong *)(local_230 + 0x4b8) != 0) &&
         (plVar22 = (longlong *)(*(longlong *)(local_230 + 0x4b8) + 8), *plVar22 != 0)) {
        local_228 = 0;
LAB_1401d46cd:
        uVar12 = 0;
        lVar9 = plVar22[0x35];
        lVar19 = 0x128;
        if (param_4 == '\0') {
          lVar19 = 0x68;
        }
        lVar13 = plVar22[0x34];
        plVar20 = (longlong *)(lVar19 + param_2);
        plVar2 = *(longlong **)(param_2 + 0x18);
        *param_5 = (longlong)plVar20;
        uVar21 = (lVar9 - lVar13 >> 2) * -0x79435e50d79435e5;
        local_220 = plVar20;
        uVar8 = (**(code **)(*plVar2 + 0x80))();
        FUN_14005ecb0(&local_1f8,param_3,uVar8);
        if ((uint)uVar21 == 0) {
          fVar24 = (float)plVar22[0x37];
          fVar39 = (float)((ulonglong)plVar22[0x37] >> 0x20);
          fVar53 = (float)*(undefined8 *)((longlong)plVar22 + 0x1c4);
          if (fVar24 < fVar53) {
            local_248 = 0x110;
            lVar19 = 0x140;
            lVar9 = 0x130;
            if (param_4 == '\0') {
              lVar9 = 0x70;
            }
            lVar15 = 0x158;
            lVar16 = 0x170;
            lVar13 = 0x1b8;
            fVar53 = (fVar53 - fVar24) * _DAT_140492dd0;
            fVar41 = ((float)((ulonglong)*(undefined8 *)((longlong)plVar22 + 0x1c4) >> 0x20) -
                     fVar39) * _UNK_140492dd4;
            local_260 = (*(float *)((longlong)plVar22 + 0x1cc) - *(float *)(plVar22 + 0x38)) *
                        DAT_1404926c0;
            local_268 = (longlong *)CONCAT44(fVar41,fVar53);
            fVar53 = fVar53 + fVar24;
            fVar41 = fVar41 + fVar39;
            fVar24 = local_260 + *(float *)(plVar22 + 0x38);
            if (*(longlong *)(lVar9 + param_2) - *plVar20 != 0x10) {
              FUN_1401d9490(local_220,1);
              lVar9 = 0x140;
              if (param_4 == '\0') {
                lVar9 = 0x80;
              }
              FUN_1401d9490(lVar9 + param_2,1);
              lVar9 = 0x158;
              if (param_4 == '\0') {
                lVar9 = 0x98;
              }
              FUN_1401d9490(lVar9 + param_2,1);
              lVar9 = 0x170;
              if (param_4 == '\0') {
                lVar9 = 0xb0;
              }
              FUN_1401d9490(lVar9 + param_2,1);
              lVar9 = 0x188;
              if (param_4 == '\0') {
                lVar9 = 200;
              }
              FUN_1401d9490(lVar9 + param_2,1);
              lVar9 = 0x1a0;
              if (param_4 == '\0') {
                lVar9 = 0xe0;
              }
              FUN_1401d9490(lVar9 + param_2,1);
              lVar9 = 0x1b8;
              if (param_4 == '\0') {
                lVar9 = 0xf8;
              }
              FUN_1401d9490(lVar9 + param_2,1);
              lVar9 = 0x1d0;
              if (param_4 == '\0') {
                lVar9 = local_248;
              }
              FUN_1401d9490(lVar9 + param_2,1);
              FUN_1401d9280(param_2 + 0x20,1);
              FUN_1401aa940(param_2 + 0x50,1);
              uVar26 = FUN_1401d9280(param_2 + 0x38,1);
              FUN_1401d5880(uVar26,param_2,0,&local_268);
            }
            fVar51 = fVar53 * local_1f8 + fVar41 * local_1e8 + fVar24 * local_1d8 + local_1c8;
            fVar39 = **(float **)(param_2 + 0x50);
            pfVar14 = *(float **)(param_2 + 0x20);
            fVar27 = (float)((uint)fVar39 ^ DAT_140492ff0);
            fVar25 = *pfVar14;
            fVar34 = pfVar14[2];
            fVar50 = fVar25 * fVar27;
            fVar48 = fVar53 * fStack_1f4 + fVar41 * fStack_1e4 + fVar24 * fStack_1d4 + fStack_1c4;
            fVar46 = pfVar14[1];
            fVar49 = fVar46 * fVar27;
            fVar27 = fVar34 * fVar27;
            fVar52 = fVar53 * fStack_1f0 + fVar41 * fStack_1e0 + fVar24 * fStack_1d0 + fStack_1c0;
            local_208 = fStack_1f4;
            fStack_204 = fStack_1f4;
            fStack_200 = fStack_1f4;
            fStack_1fc = fStack_1f4;
            local_218 = fStack_1f0;
            fStack_214 = fStack_1f0;
            fStack_210 = fStack_1f0;
            fStack_20c = fStack_1f0;
            local_1a8 = fStack_1e0;
            fStack_1a4 = fStack_1e0;
            fStack_1a0 = fStack_1e0;
            fStack_19c = fStack_1e0;
            local_198 = fStack_1d0;
            fStack_194 = fStack_1d0;
            fStack_190 = fStack_1d0;
            fStack_18c = fStack_1d0;
            fVar47 = local_1f8 * fVar50 + local_1e8 * fVar49 + local_1d8 * fVar27 + fVar51;
            puVar3 = *(undefined4 **)(param_2 + 0x38);
            fVar45 = fStack_1f4 * fVar50 + fStack_1e4 * fVar49 + fStack_1d4 * fVar27 + fVar48;
            fVar29 = fVar39 * fVar34;
            fVar27 = fStack_1f0 * fVar50 + fStack_1e0 * fVar49 + fStack_1d0 * fVar27 + fVar52;
            fVar49 = fVar39 * fVar25;
            fVar39 = fVar39 * fVar46;
            local_268 = (longlong *)
                        CONCAT44(fStack_1f4 * fVar25 + fStack_1e4 * fVar46 +
                                 fStack_1d4 * fVar34 + fVar48 * 0.0,
                                 local_1f8 * fVar25 + local_1e8 * fVar46 +
                                 local_1d8 * fVar34 + fVar51 * 0.0);
            local_258._0_4_ = *puVar3;
            local_260 = fStack_1f0 * fVar25 + fStack_1e0 * fVar46 +
                        fStack_1d0 * fVar34 + fVar52 * 0.0;
            local_258._4_4_ = (float)puVar3[1];
            local_250 = (float)puVar3[2];
            local_24c = 0.0;
            pfVar14 = (float *)FUN_14005f480(&local_258,0);
            fVar41 = local_198;
            fVar24 = local_1a8;
            fVar53 = *pfVar14;
            local_238 = (longlong *)
                        CONCAT44(local_238._4_4_,
                                 local_1f8 * fVar53 + local_1e8 * local_258._4_4_ +
                                 local_1d8 * local_250 + fVar51 * local_24c);
            local_230 = CONCAT44(local_230._4_4_,
                                 local_208 * fVar53 + fStack_1e4 * local_258._4_4_ +
                                 fStack_1d4 * local_250 + fVar48 * local_24c);
            local_228 = CONCAT44(local_228._4_4_,
                                 local_218 * fVar53 + local_1a8 * local_258._4_4_ +
                                 local_198 * local_250 + fVar52 * local_24c);
            puVar10 = (undefined8 *)FUN_14005eb80(&local_258,&local_268);
            bVar23 = param_4 == '\0';
            uVar8 = *puVar10;
            uVar30 = (undefined4)uVar8;
            uVar26 = *(undefined4 *)(puVar10 + 1);
            pfVar14 = (float *)*local_220;
            *pfVar14 = fVar47;
            pfVar14[1] = fVar47;
            pfVar14[2] = fVar47;
            pfVar14[3] = fVar47;
            if (bVar23) {
              lVar19 = 0x80;
            }
            pfVar14 = *(float **)(lVar19 + param_2);
            *pfVar14 = fVar45;
            pfVar14[1] = fVar45;
            pfVar14[2] = fVar45;
            pfVar14[3] = fVar45;
            if (bVar23) {
              lVar15 = 0x98;
            }
            pfVar14 = *(float **)(lVar15 + param_2);
            *pfVar14 = fVar27;
            pfVar14[1] = fVar27;
            pfVar14[2] = fVar27;
            pfVar14[3] = fVar27;
            local_268._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
            if (bVar23) {
              lVar16 = 0xb0;
            }
            puVar3 = *(undefined4 **)(lVar16 + param_2);
            *puVar3 = uVar30;
            puVar3[1] = uVar30;
            puVar3[2] = uVar30;
            puVar3[3] = uVar30;
            lVar9 = 0x188;
            if (bVar23) {
              lVar9 = 200;
            }
            puVar3 = *(undefined4 **)(lVar9 + param_2);
            *puVar3 = local_268._4_4_;
            puVar3[1] = local_268._4_4_;
            puVar3[2] = local_268._4_4_;
            puVar3[3] = local_268._4_4_;
            lVar9 = 0x1a0;
            if (bVar23) {
              lVar9 = 0xe0;
            }
            puVar3 = *(undefined4 **)(lVar9 + param_2);
            *puVar3 = uVar26;
            puVar3[1] = uVar26;
            puVar3[2] = uVar26;
            puVar3[3] = uVar26;
            fVar47 = (local_1f8 * fVar49 + local_1e8 * fVar39 + local_1d8 * fVar29 + fVar51) -
                     fVar47;
            fVar45 = (local_208 * fVar49 + fStack_1e4 * fVar39 + fStack_1d4 * fVar29 + fVar48) -
                     fVar45;
            fVar27 = (local_218 * fVar49 + fVar24 * fVar39 + fVar41 * fVar29 + fVar52) - fVar27;
            fVar53 = fVar47 * fVar47 + fVar45 * fVar45 + fVar27 * fVar27;
            local_268 = (longlong *)uVar8;
            if (fVar53 < 0.0) {
              fVar53 = (float)FUN_14041ad10(fVar53);
            }
            else {
              fVar53 = SQRT(fVar53);
            }
            if (param_4 == '\0') {
              lVar13 = 0xf8;
            }
            pfVar14 = *(float **)(param_2 + lVar13);
            *pfVar14 = fVar53;
            pfVar14[1] = fVar53;
            pfVar14[2] = fVar53;
            pfVar14[3] = fVar53;
            fVar53 = local_238._0_4_ * local_238._0_4_ + (float)local_230 * (float)local_230 +
                     (float)local_228 * (float)local_228;
            if (fVar53 < 0.0) {
              fVar53 = (float)FUN_14041ad10(fVar53);
            }
            else {
              fVar53 = SQRT(fVar53);
            }
            lVar9 = 0x1d0;
            if (param_4 == '\0') {
              lVar9 = local_248;
            }
            pfVar14 = *(float **)(lVar9 + param_2);
            *pfVar14 = fVar53;
            pfVar14[1] = fVar53;
            pfVar14[2] = fVar53;
            pfVar14[3] = fVar53;
          }
        }
        else {
          uVar11 = uVar21 & 0xffffffff;
          local_248 = 0x110;
          lVar9 = 0x130;
          if (param_4 == '\0') {
            lVar9 = 0x70;
          }
          lVar19 = 0x1b8;
          if (uVar11 != *(longlong *)(lVar9 + param_2) - *plVar20 >> 4) {
            FUN_1401d9490(local_220,uVar21 & 0xffffffff);
            lVar9 = 0x140;
            if (param_4 == '\0') {
              lVar9 = 0x80;
            }
            FUN_1401d9490(lVar9 + param_2,uVar11);
            lVar9 = 0x158;
            if (param_4 == '\0') {
              lVar9 = 0x98;
            }
            FUN_1401d9490(lVar9 + param_2,uVar11);
            lVar9 = 0x170;
            if (param_4 == '\0') {
              lVar9 = 0xb0;
            }
            FUN_1401d9490(lVar9 + param_2,uVar11);
            lVar9 = 0x188;
            if (param_4 == '\0') {
              lVar9 = 200;
            }
            FUN_1401d9490(lVar9 + param_2,uVar11);
            lVar9 = 0x1a0;
            if (param_4 == '\0') {
              lVar9 = 0xe0;
            }
            FUN_1401d9490(lVar9 + param_2,uVar11);
            lVar9 = 0x1b8;
            if (param_4 == '\0') {
              lVar9 = 0xf8;
            }
            FUN_1401d9490(lVar9 + param_2,uVar11);
            lVar9 = 0x1d0;
            if (param_4 == '\0') {
              lVar9 = local_248;
            }
            FUN_1401d9490(lVar9 + param_2,uVar11);
            FUN_1401d9280(param_2 + 0x20,uVar11);
            FUN_1401aa940(param_2 + 0x50,uVar11);
            FUN_1401d9280(param_2 + 0x38,uVar11);
            fVar53 = DAT_140492620;
            uVar11 = uVar12;
            uVar17 = uVar12;
            do {
              iVar6 = (int)uVar11;
              pfVar14 = (float *)(uVar17 * 0x4c + plVar22[0x34]);
              fVar24 = *pfVar14 * *pfVar14;
              if (fVar53 <= pfVar14[1] * pfVar14[1] + fVar24 + pfVar14[2] * pfVar14[2]) {
                FUN_1401d5880(fVar24,param_2);
              }
              else {
                lVar9 = *(longlong *)(param_2 + 0x20);
                *(undefined4 *)(lVar9 + uVar17 * 0xc) = 0;
                *(undefined8 *)(lVar9 + 4 + uVar17 * 0xc) = 0x3f800000;
                lVar9 = *(longlong *)(param_2 + 0x38);
                *(undefined8 *)(lVar9 + uVar17 * 0xc) = 0;
                *(undefined4 *)(lVar9 + 8 + uVar17 * 0xc) = 0;
                *(undefined4 *)(*(longlong *)(param_2 + 0x50) + uVar17 * 4) = 0;
              }
              uVar11 = (ulonglong)(iVar6 + 1U);
              uVar17 = uVar17 + 1;
            } while (iVar6 + 1U < (uint)uVar21);
          }
          lVar18 = 0x1a0;
          lVar16 = 0x188;
          lVar15 = 0x170;
          lVar13 = 0x158;
          lVar9 = 0x140;
          if (param_4 == '\0') {
            lVar9 = 0x80;
          }
          local_268 = (longlong *)(lVar9 + param_2);
          if (param_4 == '\0') {
            lVar13 = 0x98;
          }
          local_238 = (longlong *)(lVar13 + param_2);
          if (param_4 == '\0') {
            lVar15 = 0xb0;
          }
          if (param_4 == '\0') {
            lVar16 = 200;
          }
          local_1b8 = (longlong *)(lVar16 + param_2);
          if (param_4 == '\0') {
            lVar18 = 0xe0;
          }
          local_258 = (longlong *)(lVar18 + param_2);
          lVar9 = 0x1d0;
          if (param_4 == '\0') {
            lVar19 = 0xf8;
            lVar9 = local_248;
          }
          do {
            lVar13 = plVar22[0x34];
            lVar16 = uVar12 * 0x4c;
            if (local_228 == 0) {
              lVar13 = *(longlong *)(local_230 + 0x4b8);
              if (((lVar13 == 0) || (*(longlong *)(lVar13 + 8) == 0)) ||
                 ((ulonglong)(*(longlong *)(lVar13 + 0x2d0) - *(longlong *)(lVar13 + 0x2c8) >> 6) <=
                  uVar12)) {
                pfVar14 = (float *)&DAT_1404e10b0;
              }
              else {
                pfVar14 = (float *)(uVar12 * 0x40 + *(longlong *)(lVar13 + 0x2c8));
              }
              lVar13 = plVar22[0x34];
            }
            else {
              pfVar14 = (float *)(uVar12 * 0x40 +
                                 *(longlong *)(*(longlong *)(local_228 + 0x2d8) + 0x30));
            }
            fVar53 = *pfVar14;
            fVar24 = pfVar14[1];
            fVar39 = pfVar14[2];
            pfVar1 = (float *)(lVar13 + 0xc + lVar16);
            fVar41 = *pfVar1;
            fVar25 = pfVar1[1];
            fVar34 = pfVar1[2];
            pfVar1 = (float *)(lVar13 + 0x1c + lVar16);
            fVar46 = *pfVar1;
            fVar27 = pfVar1[1];
            fVar29 = pfVar1[2];
            pfVar1 = (float *)(lVar13 + 0x2c + lVar16);
            fVar45 = *pfVar1;
            fVar48 = pfVar1[1];
            fVar47 = pfVar1[2];
            pfVar1 = (float *)(lVar13 + 0x3c + lVar16);
            fVar49 = *pfVar1;
            fVar50 = pfVar1[1];
            fVar51 = pfVar1[2];
            fVar52 = pfVar14[0xc];
            fVar4 = pfVar14[0xd];
            fVar5 = pfVar14[0xe];
            fVar28 = fVar39 * local_1d8 + fVar24 * local_1e8 + fVar53 * local_1f8;
            fVar31 = fVar39 * fStack_1d4 + fVar24 * fStack_1e4 + fVar53 * fStack_1f4;
            fVar32 = fVar39 * fStack_1d0 + fVar24 * fStack_1e0 + fVar53 * fStack_1f0;
            fVar33 = fVar39 * fStack_1cc + fVar24 * fStack_1dc + fVar53 * fStack_1ec;
            fVar53 = pfVar14[4];
            fVar24 = pfVar14[5];
            fVar39 = pfVar14[6];
            fVar35 = fVar39 * local_1d8 + fVar24 * local_1e8 + fVar53 * local_1f8;
            fVar36 = fVar39 * fStack_1d4 + fVar24 * fStack_1e4 + fVar53 * fStack_1f4;
            fVar37 = fVar39 * fStack_1d0 + fVar24 * fStack_1e0 + fVar53 * fStack_1f0;
            fVar38 = fVar39 * fStack_1cc + fVar24 * fStack_1dc + fVar53 * fStack_1ec;
            fVar53 = pfVar14[8];
            fVar24 = pfVar14[9];
            fVar39 = pfVar14[10];
            fVar40 = fVar39 * local_1d8 + fVar24 * local_1e8 + fVar53 * local_1f8;
            fVar42 = fVar39 * fStack_1d4 + fVar24 * fStack_1e4 + fVar53 * fStack_1f4;
            fVar43 = fVar39 * fStack_1d0 + fVar24 * fStack_1e0 + fVar53 * fStack_1f0;
            fVar44 = fVar39 * fStack_1cc + fVar24 * fStack_1dc + fVar53 * fStack_1ec;
            local_148 = fVar34 * fVar40 + fVar25 * fVar35 + fVar41 * fVar28;
            fStack_144 = fVar34 * fVar42 + fVar25 * fVar36 + fVar41 * fVar31;
            local_198 = fVar34 * fVar43 + fVar25 * fVar37 + fVar41 * fVar32;
            fStack_13c = fVar34 * fVar44 + fVar25 * fVar38 + fVar41 * fVar33;
            local_218 = fVar29 * fVar40 + fVar27 * fVar35 + fVar46 * fVar28;
            fStack_214 = fVar29 * fVar42 + fVar27 * fVar36 + fVar46 * fVar31;
            fStack_210 = fVar29 * fVar43 + fVar27 * fVar37 + fVar46 * fVar32;
            fStack_20c = fVar29 * fVar44 + fVar27 * fVar38 + fVar46 * fVar33;
            local_158 = fVar47 * fVar40 + fVar48 * fVar35 + fVar45 * fVar28;
            fStack_240 = fVar47 * fVar42 + fVar48 * fVar36 + fVar45 * fVar31;
            local_178 = fVar47 * fVar43 + fVar48 * fVar37 + fVar45 * fVar32;
            fStack_14c = fVar47 * fVar44 + fVar48 * fVar38 + fVar45 * fVar33;
            fVar53 = *(float *)(*(longlong *)(param_2 + 0x50) + uVar12 * 4);
            lVar13 = *(longlong *)(param_2 + 0x20);
            fVar24 = *(float *)(lVar13 + uVar12 * 0xc);
            fVar39 = *(float *)(lVar13 + 4 + uVar12 * 0xc);
            fVar41 = *(float *)(lVar13 + 8 + uVar12 * 0xc);
            fVar25 = (float)((uint)fVar53 ^ DAT_140492ff0);
            fVar46 = fVar24 * fVar25;
            fVar34 = fVar39 * fVar25;
            local_128 = fVar51 * fVar40 +
                        fVar5 * local_1d8 + local_1c8 + fVar4 * local_1e8 + fVar52 * local_1f8 +
                        fVar50 * fVar35 + fVar49 * fVar28;
            local_208 = fVar51 * fVar42 +
                        fVar5 * fStack_1d4 + fStack_1c4 + fVar4 * fStack_1e4 + fVar52 * fStack_1f4 +
                        fVar50 * fVar36 + fVar49 * fVar31;
            local_1a8 = fVar51 * fVar43 +
                        fVar5 * fStack_1d0 + fStack_1c0 + fVar4 * fStack_1e0 + fVar52 * fStack_1f0 +
                        fVar50 * fVar37 + fVar49 * fVar32;
            fStack_11c = fVar51 * fVar44 +
                         fVar5 * fStack_1cc + fStack_1bc + fVar4 * fStack_1dc + fVar52 * fStack_1ec
                         + fVar50 * fVar38 + fVar49 * fVar33;
            fVar25 = fVar41 * fVar25;
            local_248 = CONCAT44(fStack_240,fStack_240);
            fVar29 = fVar46 * local_148 + fVar34 * local_218 + fVar25 * local_158 + local_128;
            fVar47 = fVar46 * local_198 + fVar34 * fStack_210 + fVar25 * local_178 + local_1a8;
            fVar27 = fVar46 * fStack_144 + fVar34 * fStack_214 + fVar25 * fStack_240 + local_208;
            fVar48 = fVar24 * fVar53;
            lVar13 = *(longlong *)(param_2 + 0x38);
            fVar49 = fVar41 * fVar53;
            fVar53 = fVar39 * fVar53;
            fVar25 = *(float *)(lVar13 + 8 + uVar12 * 0xc);
            fVar51 = fVar24 * local_148 + fVar39 * local_218 + fVar41 * local_158 + local_128 * 0.0;
            fVar34 = *(float *)(lVar13 + 4 + uVar12 * 0xc);
            fVar50 = fVar24 * local_198 + fVar39 * fStack_210 + fVar41 * local_178 + local_1a8 * 0.0
            ;
            fVar46 = *(float *)(lVar13 + uVar12 * 0xc);
            fVar52 = fVar24 * fStack_144 + fVar39 * fStack_214 +
                     fVar41 * fStack_240 + local_208 * 0.0;
            fVar45 = fVar46 * local_148 + fVar34 * local_218 + fVar25 * local_158 + local_128 * 0.0;
            fVar39 = fVar46 * fStack_144 + fVar34 * fStack_214 +
                     fVar25 * fStack_240 + local_208 * 0.0;
            fVar41 = fVar46 * local_198 + fVar34 * fStack_210 + fVar25 * local_178 + local_1a8 * 0.0
            ;
            fVar24 = fVar52 * fVar52 + fVar51 * fVar51 + fVar50 * fVar50;
            fStack_23c = fStack_240;
            fStack_204 = local_208;
            fStack_200 = local_208;
            fStack_1fc = local_208;
            fStack_1a4 = local_1a8;
            fStack_1a0 = local_1a8;
            fStack_19c = local_1a8;
            fStack_194 = local_198;
            fStack_190 = local_198;
            fStack_18c = local_198;
            local_188 = fStack_214;
            fStack_184 = fStack_214;
            fStack_180 = fStack_214;
            fStack_17c = fStack_214;
            fStack_174 = local_178;
            fStack_170 = local_178;
            fStack_16c = local_178;
            local_168 = fStack_210;
            fStack_164 = fStack_210;
            fStack_160 = fStack_210;
            fStack_15c = fStack_210;
            fStack_154 = fStack_240;
            fStack_150 = local_178;
            fStack_140 = local_198;
            local_138 = fStack_144;
            fStack_134 = fStack_144;
            fStack_130 = fStack_144;
            fStack_12c = fStack_144;
            fStack_124 = local_208;
            fStack_120 = local_1a8;
            if (fVar24 < 0.0) {
              fVar24 = (float)FUN_14041ad10(fVar24);
            }
            else {
              fVar24 = SQRT(fVar24);
            }
            fVar24 = DAT_140492704 / fVar24;
            pfVar14 = (float *)(*local_220 + uVar12 * 0x10);
            *pfVar14 = fVar29;
            pfVar14[1] = fVar29;
            pfVar14[2] = fVar29;
            pfVar14[3] = fVar29;
            fVar51 = fVar51 * fVar24;
            fVar52 = fVar52 * fVar24;
            fVar50 = fVar50 * fVar24;
            pfVar14 = (float *)(*local_268 + uVar12 * 0x10);
            *pfVar14 = fVar27;
            pfVar14[1] = fVar27;
            pfVar14[2] = fVar27;
            pfVar14[3] = fVar27;
            pfVar14 = (float *)(*local_238 + uVar12 * 0x10);
            *pfVar14 = fVar47;
            pfVar14[1] = fVar47;
            pfVar14[2] = fVar47;
            pfVar14[3] = fVar47;
            pfVar14 = (float *)(*(longlong *)(lVar15 + param_2) + uVar12 * 0x10);
            *pfVar14 = fVar51;
            pfVar14[1] = fVar51;
            pfVar14[2] = fVar51;
            pfVar14[3] = fVar51;
            pfVar14 = (float *)(*local_1b8 + uVar12 * 0x10);
            *pfVar14 = fVar52;
            pfVar14[1] = fVar52;
            pfVar14[2] = fVar52;
            pfVar14[3] = fVar52;
            fVar29 = (fVar48 * local_148 + fVar53 * local_218 + fVar49 * local_158 + local_128) -
                     fVar29;
            pfVar14 = (float *)(*local_258 + uVar12 * 0x10);
            *pfVar14 = fVar50;
            pfVar14[1] = fVar50;
            pfVar14[2] = fVar50;
            pfVar14[3] = fVar50;
            fVar27 = (fVar48 * local_138 + fVar53 * local_188 +
                     fVar49 * (float)local_248 + local_208) - fVar27;
            fVar47 = (fVar48 * local_198 + fVar53 * local_168 + fVar49 * local_178 + local_1a8) -
                     fVar47;
            fVar53 = fVar29 * fVar29 + fVar27 * fVar27 + fVar47 * fVar47;
            if (fVar53 < 0.0) {
              fVar53 = (float)FUN_14041ad10(fVar53);
            }
            else {
              fVar53 = SQRT(fVar53);
            }
            pfVar14 = (float *)(*(longlong *)(lVar19 + param_2) + uVar12 * 0x10);
            *pfVar14 = fVar53;
            pfVar14[1] = fVar53;
            pfVar14[2] = fVar53;
            pfVar14[3] = fVar53;
            fVar53 = fVar39 * fVar39 + fVar45 * fVar45 + fVar41 * fVar41;
            if (fVar53 < 0.0) {
              fVar53 = (float)FUN_14041ad10(fVar53);
            }
            else {
              fVar53 = SQRT(fVar53);
            }
            pfVar14 = (float *)(*(longlong *)(lVar9 + param_2) + uVar12 * 0x10);
            *pfVar14 = fVar53;
            pfVar14[1] = fVar53;
            pfVar14[2] = fVar53;
            pfVar14[3] = fVar53;
            uVar7 = (int)uVar21 - 1;
            uVar21 = (ulonglong)uVar7;
            uVar12 = uVar12 + 1;
          } while (uVar7 != 0);
        }
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*param_1 + 0x144);
        param_5 = (longlong *)*param_5;
        *(undefined4 *)(param_2 + 8) = 1;
        lVar9 = param_5[1];
        return CONCAT71((int7)((ulonglong)lVar9 >> 8),*param_5 != lVar9);
      }
    }
    else if (uVar7 == 4) {
      in_RAX = *(ulonglong *)(param_2 + 0x18);
      plVar22 = *(longlong **)(in_RAX + 0x2e8);
      if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
        local_230 = 0;
        local_228 = in_RAX;
        goto LAB_1401d46cd;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

