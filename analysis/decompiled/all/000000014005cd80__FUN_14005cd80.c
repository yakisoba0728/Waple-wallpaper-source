// Function: FUN_14005cd80
// Addr: 14005cd80
// Size: 4386 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14005cd80(longlong *param_1,ulonglong param_2,float param_3,undefined4 *param_4,
                       undefined4 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong local_res10;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  longlong *local_1e8;
  longlong *local_1e0;
  undefined8 *local_1d8;
  float local_1c8;
  float fStack_1c4;
  float local_1c0 [2];
  undefined1 local_1b8 [16];
  longlong local_1a8;
  float local_1a0;
  float local_19c [3];
  float local_190;
  float local_18c;
  float local_188 [2];
  undefined8 local_180;
  undefined4 local_178 [2];
  undefined8 local_170;
  undefined4 local_168 [2];
  uint local_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [16];
  undefined8 *local_138;
  undefined8 local_130;
  ulonglong local_128;
  longlong local_120;
  int local_118 [6];
  longlong local_100 [3];
  undefined8 uStack_e8;
  
  lVar10 = DAT_1404e52b0;
  local_120 = DAT_1404e52b0;
  local_res10 = param_2;
  iVar7 = FUN_1402c97a0();
  fVar5 = DAT_140492960;
  fVar6 = DAT_140492704;
  iVar8 = (int)(((float)iVar7 / DAT_140492960) * _DAT_140492878 + _DAT_1404928c0);
  local_148 = ZEXT416(0);
  iVar7 = 0x2d;
  if (iVar8 < 0x2d) {
    iVar7 = iVar8;
  }
  uVar15 = 0;
  local_138 = (undefined8 *)0x0;
  iVar8 = iVar7;
  if (iVar7 < 0x23) {
    iVar7 = 0x23;
    iVar8 = iVar7;
  }
  do {
    iVar9 = FUN_1402c97a0();
    fVar18 = (float)iVar9 / fVar5;
    iVar9 = FUN_1402c97a0();
    fStack_1c4 = (fVar18 + fVar18) - fVar6;
    fVar18 = (float)iVar9 / fVar5;
    local_1c8 = (fVar18 + fVar18) - fVar6;
    if ((undefined8 *)local_148._8_8_ == local_138) {
      FUN_14005ffa0(local_148,local_148._8_8_,&local_1c8);
    }
    else {
      *(ulonglong *)local_148._8_8_ = CONCAT44(fStack_1c4,local_1c8);
      local_148._8_8_ = (undefined8 *)(local_148._8_8_ + 8);
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_1d8 = &local_130;
  local_1e0 = &local_150;
  local_res10 = local_res10 & 0xffffffff00000000;
  local_1e8 = &local_158;
  local_158 = 0;
  local_100[2] = _DAT_140492c00;
  uStack_e8 = _UNK_140492c08;
  local_150 = 0;
  local_130 = 0;
  iVar7 = (**(code **)(lVar10 + 0x90))(local_100 + 2,iVar8,local_148._0_8_,&local_res10);
  fVar18 = DAT_14049297c;
  fVar5 = DAT_1404926c0;
  if (iVar7 < 0) {
LAB_14005de24:
    if (local_148._0_8_ == 0) {
      return uVar15;
    }
    lVar10 = local_148._0_8_;
    puVar12 = auStack_208;
    if (((ulonglong)(((longlong)local_138 - local_148._0_8_ >> 3) * 8) < 0x1000) ||
       (lVar10 = *(longlong *)(local_148._0_8_ + -8), puVar12 = auStack_208,
       (local_148._0_8_ - lVar10) - 8U < 0x20)) goto LAB_14005de6a;
  }
  else {
    local_1b8 = ZEXT816(0);
    local_1a8 = 0;
    local_160 = 0;
    lVar14 = local_158;
    if (0 < (int)local_res10) {
      do {
        iVar8 = 0;
        lVar10 = (longlong)(int)uVar15;
        iVar7 = *(int *)(lVar14 + lVar10 * 4);
        pfVar3 = *(float **)(local_150 + lVar10 * 8);
        fVar19 = DAT_140492a24;
        fVar21 = DAT_140492a24;
        local_1a0 = fVar18;
        fVar20 = DAT_140492a24;
        fVar17 = DAT_140492a24;
        local_19c[0] = fVar18;
        fVar16 = fVar18;
        if (0 < iVar7) {
          do {
            iVar9 = iVar8 * 2;
            iVar8 = iVar8 + 1;
            fVar21 = pfVar3[(longlong)iVar9 + 1];
            fVar17 = pfVar3[iVar9];
            local_19c[0] = fVar21;
            if (fVar16 <= fVar21) {
              local_19c[0] = fVar16;
            }
            fVar16 = fVar17;
            if (local_1a0 <= fVar17) {
              fVar16 = local_1a0;
            }
            local_1a0 = fVar16;
            if (fVar17 <= fVar20) {
              fVar17 = fVar20;
            }
            if (fVar21 <= fVar19) {
              fVar21 = fVar19;
            }
            fVar19 = fVar21;
            fVar20 = fVar17;
            fVar16 = local_19c[0];
          } while (iVar8 < iVar7);
        }
        local_19c[1] = -0.003;
        local_180 = 0;
        local_178[0] = 0x3f800000;
        local_170 = 0;
        local_168[0] = 0xbf800000;
        local_1a0 = (fVar17 - local_1a0) * fVar5 + local_1a0;
        local_19c[0] = (fVar21 - local_19c[0]) * fVar5 + local_19c[0];
        fVar21 = local_1a0 * param_3;
        iVar8 = 1;
        if (1 < iVar7 + -1) {
          do {
            local_1c8 = 0.0;
            local_1c0[0] = param_3 * *pfVar3;
            FUN_14005f270(local_1b8,local_1c0);
            FUN_14005f270(local_1b8,pfVar3 + 1);
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = *pfVar3 * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - pfVar3[1] * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_180);
            FUN_14005f270(local_1b8,(longlong)&local_180 + 4);
            FUN_14005f270(local_1b8,local_178);
            local_1c0[0] = 0.0;
            iVar9 = iVar8 + 1;
            iVar7 = iVar9 * 2;
            local_1c8 = param_3 * pfVar3[iVar7];
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar3 + (longlong)iVar7 + 1);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[iVar7] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - pfVar3[(longlong)iVar7 + 1] * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_180);
            FUN_14005f270(local_1b8,(longlong)&local_180 + 4);
            FUN_14005f270(local_1b8,local_178);
            local_1c0[0] = 0.0;
            iVar8 = iVar8 * 2;
            local_1c8 = param_3 * pfVar3[iVar8];
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar3 + (longlong)iVar8 + 1);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[iVar8] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - pfVar3[(longlong)iVar8 + 1] * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_180);
            FUN_14005f270(local_1b8,(longlong)&local_180 + 4);
            FUN_14005f270(local_1b8,local_178);
            local_1c0[0] = -0.006;
            local_1c8 = param_3 * *pfVar3;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar3 + 1);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = *pfVar3 * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - pfVar3[1] * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_170);
            FUN_14005f270(local_1b8,(longlong)&local_170 + 4);
            FUN_14005f270(local_1b8,local_168);
            local_1c0[0] = -0.006;
            local_1c8 = param_3 * pfVar3[iVar8];
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar3 + (longlong)iVar8 + 1);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[iVar8] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - pfVar3[(longlong)iVar8 + 1] * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_170);
            FUN_14005f270(local_1b8,(longlong)&local_170 + 4);
            FUN_14005f270(local_1b8,local_168);
            local_1c0[0] = -0.006;
            local_1c8 = param_3 * pfVar3[iVar7];
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar3 + (longlong)iVar7 + 1);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[iVar7] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - pfVar3[(longlong)iVar7 + 1] * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_170);
            FUN_14005f270(local_1b8,(longlong)&local_170 + 4);
            FUN_14005f270(local_1b8,local_168);
            lVar14 = local_158;
            iVar8 = iVar9;
          } while (iVar9 < *(int *)(local_158 + lVar10 * 4) + -1);
        }
        iVar7 = 0;
        if (0 < *(int *)(lVar14 + lVar10 * 4)) {
          do {
            lVar13 = (longlong)(iVar7 * 2);
            iVar7 = iVar7 + 1;
            fVar17 = pfVar3[lVar13];
            lVar14 = (longlong)((iVar7 % *(int *)(lVar14 + lVar10 * 4)) * 2);
            pfVar1 = pfVar3 + lVar14 + 1;
            pfVar2 = pfVar3 + lVar13 + 1;
            fVar16 = fVar17 - pfVar3[lVar14];
            fVar19 = (pfVar3[lVar13 + 1] - pfVar3[lVar14 + 1]) - 0.0;
            fVar22 = 0.0 - fVar16;
            fVar20 = fVar16 * 0.0 - (pfVar3[lVar13 + 1] - pfVar3[lVar14 + 1]) * 0.0;
            fVar16 = fVar22 * fVar22 + fVar19 * fVar19 + fVar20 * fVar20;
            if (fVar16 < 0.0) {
              fVar16 = (float)FUN_14041ad10();
            }
            else {
              fVar16 = SQRT(fVar16);
            }
            local_1c8 = fVar17 * param_3;
            local_1c0[0] = 0.0;
            fVar16 = fVar6 / fVar16;
            local_190 = fVar16 * fVar19;
            local_18c = fVar16 * fVar22;
            local_188[0] = fVar16 * fVar20;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar2);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[lVar13] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - *pfVar2 * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_190);
            FUN_14005f270(local_1b8,&local_18c);
            FUN_14005f270(local_1b8,local_188);
            local_1c0[0] = -0.006;
            local_1c8 = param_3 * pfVar3[lVar14];
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar1);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[lVar14] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - *pfVar1 * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_190);
            FUN_14005f270(local_1b8,&local_18c);
            FUN_14005f270(local_1b8,local_188);
            local_1c0[0] = -0.006;
            local_1c8 = param_3 * pfVar3[lVar13];
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar2);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[lVar13] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - *pfVar2 * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_190);
            FUN_14005f270(local_1b8,&local_18c);
            FUN_14005f270(local_1b8,local_188);
            local_1c0[0] = 0.0;
            local_1c8 = param_3 * pfVar3[lVar13];
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar2);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[lVar13] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - *pfVar2 * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_190);
            FUN_14005f270(local_1b8,&local_18c);
            FUN_14005f270(local_1b8,local_188);
            local_1c0[0] = 0.0;
            local_1c8 = param_3 * pfVar3[lVar14];
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar1);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[lVar14] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - *pfVar1 * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_190);
            FUN_14005f270(local_1b8,&local_18c);
            FUN_14005f270(local_1b8,local_188);
            local_1c0[0] = -0.006;
            local_1c8 = param_3 * pfVar3[lVar14];
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,pfVar1);
            FUN_14005f270(local_1b8,local_1c0);
            local_1c8 = pfVar3[lVar14] * fVar5 + fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar5 - *pfVar1 * fVar5;
            FUN_14005f270(local_1b8,&local_1c8);
            local_1c8 = fVar21;
            FUN_14005f270(local_1b8,&local_1c8);
            FUN_14005f270(local_1b8,local_19c);
            FUN_14005f270(local_1b8,local_19c + 1);
            FUN_14005f270(local_1b8,&local_190);
            FUN_14005f270(local_1b8,&local_18c);
            FUN_14005f270(local_1b8,local_188);
            lVar14 = local_158;
          } while (iVar7 < *(int *)(local_158 + lVar10 * 4));
        }
        local_160 = local_160 + 1;
        uVar15 = (ulonglong)local_160;
        lVar10 = local_120;
      } while ((int)local_160 < (int)local_res10);
    }
    uVar15 = 0;
    (**(code **)(lVar10 + 0x98))(local_res10 & 0xffffffff,lVar14,local_150,local_130);
    lVar10 = local_1b8._0_8_;
    if (local_1b8._0_8_ != local_1b8._8_8_) {
      local_100[0] = local_1b8._0_8_;
      uVar15 = (longlong)(local_1b8._8_8_ - local_1b8._0_8_) >> 2;
      local_118[3] = 0;
      local_118[4] = 0;
      *param_4 = (int)(uVar15 / 0xb);
      local_118[5] = 0;
      *param_5 = 0x2c;
      local_118[0] = (int)uVar15 * 4;
      local_100[1] = 0;
      local_118[1] = 1;
      local_118[2] = 1;
      local_128 = 0;
      (**(code **)(*param_1 + 0x18))(param_1,local_118,local_100,&local_128);
      lVar10 = local_1b8._0_8_;
      uVar15 = local_128;
    }
    if (lVar10 == 0) goto LAB_14005de24;
    uVar11 = (local_1a8 - lVar10 >> 2) * 4;
    if (uVar11 < 0x1000) {
LAB_14005de0e:
      thunk_FUN_14028af80(lVar10,uVar11);
      local_1a8 = 0;
      local_1b8 = ZEXT816(0);
      goto LAB_14005de24;
    }
    if ((lVar10 - *(longlong *)(lVar10 + -8)) - 8U < 0x20) {
      uVar11 = uVar11 + 0x27;
      lVar10 = *(longlong *)(lVar10 + -8);
      goto LAB_14005de0e;
    }
  }
  lVar10 = 5;
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar12 = auStack_200;
LAB_14005de6a:
  *(undefined8 *)(puVar12 + -8) = 0x14005de72;
  thunk_FUN_14028af80(lVar10);
  return uVar15;
}

