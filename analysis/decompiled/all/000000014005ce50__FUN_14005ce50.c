// Function: FUN_14005ce50
// Addr: 14005ce50
// Size: 212 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14005ce50(longlong *param_1,ulonglong param_2,float param_3,undefined4 *param_4,
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
  ulonglong local_res10;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  longlong *plStack_1e8;
  longlong *plStack_1e0;
  undefined8 *puStack_1d8;
  float fStack_1c8;
  float fStack_1c4;
  float afStack_1c0 [2];
  undefined1 auStack_1b8 [16];
  longlong lStack_1a8;
  float fStack_1a0;
  float afStack_19c [3];
  float fStack_190;
  float fStack_18c;
  float afStack_188 [2];
  undefined8 uStack_180;
  undefined4 auStack_178 [2];
  undefined8 uStack_170;
  undefined4 auStack_168 [2];
  uint uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  undefined1 local_148 [16];
  undefined8 *local_138;
  undefined8 uStack_130;
  ulonglong uStack_128;
  longlong local_120;
  int aiStack_118 [6];
  longlong alStack_100 [3];
  undefined8 uStack_e8;
  
  lVar10 = DAT_1404e5380;
  local_120 = DAT_1404e5380;
  local_res10 = param_2;
  iVar7 = func_0x0001402c9870();
  fVar5 = DAT_140492a30;
  fVar6 = DAT_1404927d4;
  iVar8 = (int)(((float)iVar7 / DAT_140492a30) * _DAT_140492948 + _DAT_140492990);
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
    iVar9 = func_0x0001402c9870();
    fVar17 = (float)iVar9 / fVar5;
    iVar9 = func_0x0001402c9870();
    fStack_1c4 = (fVar17 + fVar17) - fVar6;
    fVar17 = (float)iVar9 / fVar5;
    fStack_1c8 = (fVar17 + fVar17) - fVar6;
    if ((undefined8 *)local_148._8_8_ == local_138) {
      FUN_140060070(local_148,local_148._8_8_,&fStack_1c8);
    }
    else {
      *(ulonglong *)local_148._8_8_ = CONCAT44(fStack_1c4,fStack_1c8);
      local_148._8_8_ = (undefined8 *)(local_148._8_8_ + 8);
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_1d8 = &uStack_130;
  plStack_1e0 = &lStack_150;
  local_res10 = local_res10 & 0xffffffff00000000;
  plStack_1e8 = &lStack_158;
  lStack_158 = 0;
  alStack_100[2] = _UNK_140492cd0;
  uStack_e8 = _UNK_140492cd8;
  lStack_150 = 0;
  uStack_130 = 0;
  iVar7 = (**(code **)(lVar10 + 0x90))(alStack_100 + 2,iVar8,local_148._0_8_,&local_res10);
  fVar17 = _UNK_140492a4c;
  fVar5 = DAT_140492790;
  if (iVar7 < 0) {
code_r0x00014005def4:
    if (local_148._0_8_ == 0) {
      return uVar15;
    }
    lVar10 = local_148._0_8_;
    puVar12 = auStack_208;
    if (((ulonglong)(((longlong)local_138 - local_148._0_8_ >> 3) * 8) < 0x1000) ||
       (lVar10 = *(longlong *)(local_148._0_8_ + -8), puVar12 = auStack_208,
       (local_148._0_8_ - lVar10) - 8U < 0x20)) goto code_r0x00014005df3a;
  }
  else {
    auStack_1b8 = ZEXT816(0);
    lStack_1a8 = 0;
    uStack_160 = 0;
    lVar14 = lStack_158;
    if (0 < (int)local_res10) {
      do {
        iVar8 = 0;
        lVar10 = (longlong)(int)uVar15;
        iVar7 = *(int *)(lVar14 + lVar10 * 4);
        pfVar3 = *(float **)(lStack_150 + lVar10 * 8);
        fVar19 = DAT_140492af4;
        fVar20 = DAT_140492af4;
        fStack_1a0 = fVar17;
        fVar21 = DAT_140492af4;
        fVar16 = DAT_140492af4;
        afStack_19c[0] = fVar17;
        fVar18 = fVar17;
        if (0 < iVar7) {
          do {
            iVar9 = iVar8 * 2;
            iVar8 = iVar8 + 1;
            fVar20 = pfVar3[(longlong)iVar9 + 1];
            fVar16 = pfVar3[iVar9];
            afStack_19c[0] = fVar20;
            if (fVar18 <= fVar20) {
              afStack_19c[0] = fVar18;
            }
            fVar18 = fVar16;
            if (fStack_1a0 <= fVar16) {
              fVar18 = fStack_1a0;
            }
            fStack_1a0 = fVar18;
            if (fVar16 <= fVar21) {
              fVar16 = fVar21;
            }
            if (fVar20 <= fVar19) {
              fVar20 = fVar19;
            }
            fVar19 = fVar20;
            fVar21 = fVar16;
            fVar18 = afStack_19c[0];
          } while (iVar8 < iVar7);
        }
        afStack_19c[1] = -0.003;
        uStack_180 = 0;
        auStack_178[0] = 0x3f800000;
        uStack_170 = 0;
        auStack_168[0] = 0xbf800000;
        fStack_1a0 = (fVar16 - fStack_1a0) * fVar5 + fStack_1a0;
        afStack_19c[0] = (fVar20 - afStack_19c[0]) * fVar5 + afStack_19c[0];
        fVar20 = fStack_1a0 * param_3;
        iVar8 = 1;
        if (1 < iVar7 + -1) {
          do {
            fStack_1c8 = 0.0;
            afStack_1c0[0] = param_3 * *pfVar3;
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            func_0x00014005f340(auStack_1b8,pfVar3 + 1);
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = *pfVar3 * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - pfVar3[1] * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&uStack_180);
            func_0x00014005f340(auStack_1b8,(longlong)&uStack_180 + 4);
            func_0x00014005f340(auStack_1b8,auStack_178);
            afStack_1c0[0] = 0.0;
            iVar9 = iVar8 + 1;
            iVar7 = iVar9 * 2;
            fStack_1c8 = param_3 * pfVar3[iVar7];
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar3 + (longlong)iVar7 + 1);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[iVar7] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - pfVar3[(longlong)iVar7 + 1] * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&uStack_180);
            func_0x00014005f340(auStack_1b8,(longlong)&uStack_180 + 4);
            func_0x00014005f340(auStack_1b8,auStack_178);
            afStack_1c0[0] = 0.0;
            iVar8 = iVar8 * 2;
            fStack_1c8 = param_3 * pfVar3[iVar8];
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar3 + (longlong)iVar8 + 1);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[iVar8] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - pfVar3[(longlong)iVar8 + 1] * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&uStack_180);
            func_0x00014005f340(auStack_1b8,(longlong)&uStack_180 + 4);
            func_0x00014005f340(auStack_1b8,auStack_178);
            afStack_1c0[0] = -0.006;
            fStack_1c8 = param_3 * *pfVar3;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar3 + 1);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = *pfVar3 * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - pfVar3[1] * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&uStack_170);
            func_0x00014005f340(auStack_1b8,(longlong)&uStack_170 + 4);
            func_0x00014005f340(auStack_1b8,auStack_168);
            afStack_1c0[0] = -0.006;
            fStack_1c8 = param_3 * pfVar3[iVar8];
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar3 + (longlong)iVar8 + 1);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[iVar8] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - pfVar3[(longlong)iVar8 + 1] * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&uStack_170);
            func_0x00014005f340(auStack_1b8,(longlong)&uStack_170 + 4);
            func_0x00014005f340(auStack_1b8,auStack_168);
            afStack_1c0[0] = -0.006;
            fStack_1c8 = param_3 * pfVar3[iVar7];
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar3 + (longlong)iVar7 + 1);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[iVar7] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - pfVar3[(longlong)iVar7 + 1] * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&uStack_170);
            func_0x00014005f340(auStack_1b8,(longlong)&uStack_170 + 4);
            func_0x00014005f340(auStack_1b8,auStack_168);
            lVar14 = lStack_158;
            iVar8 = iVar9;
          } while (iVar9 < *(int *)(lStack_158 + lVar10 * 4) + -1);
        }
        iVar7 = 0;
        if (0 < *(int *)(lVar14 + lVar10 * 4)) {
          do {
            lVar13 = (longlong)(iVar7 * 2);
            iVar7 = iVar7 + 1;
            lVar14 = (longlong)((iVar7 % *(int *)(lVar14 + lVar10 * 4)) * 2);
            pfVar1 = pfVar3 + lVar14 + 1;
            pfVar2 = pfVar3 + lVar13 + 1;
            fVar16 = pfVar3[lVar13] - pfVar3[lVar14];
            fVar18 = (pfVar3[lVar13 + 1] - pfVar3[lVar14 + 1]) - 0.0;
            fVar21 = 0.0 - fVar16;
            fVar19 = fVar16 * 0.0 - (pfVar3[lVar13 + 1] - pfVar3[lVar14 + 1]) * 0.0;
            fVar16 = fVar21 * fVar21 + fVar18 * fVar18 + fVar19 * fVar19;
            if (fVar16 < 0.0) {
                    /* WARNING: Subroutine does not return */
              FUN_14041ade0();
            }
            fStack_1c8 = pfVar3[lVar13] * param_3;
            afStack_1c0[0] = 0.0;
            afStack_188[0] = fVar6 / SQRT(fVar16);
            fStack_190 = afStack_188[0] * fVar18;
            fStack_18c = afStack_188[0] * fVar21;
            afStack_188[0] = afStack_188[0] * fVar19;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar2);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[lVar13] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - *pfVar2 * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&fStack_190);
            func_0x00014005f340(auStack_1b8,&fStack_18c);
            func_0x00014005f340(auStack_1b8,afStack_188);
            afStack_1c0[0] = -0.006;
            fStack_1c8 = param_3 * pfVar3[lVar14];
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar1);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[lVar14] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - *pfVar1 * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&fStack_190);
            func_0x00014005f340(auStack_1b8,&fStack_18c);
            func_0x00014005f340(auStack_1b8,afStack_188);
            afStack_1c0[0] = -0.006;
            fStack_1c8 = param_3 * pfVar3[lVar13];
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar2);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[lVar13] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - *pfVar2 * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&fStack_190);
            func_0x00014005f340(auStack_1b8,&fStack_18c);
            func_0x00014005f340(auStack_1b8,afStack_188);
            afStack_1c0[0] = 0.0;
            fStack_1c8 = param_3 * pfVar3[lVar13];
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar2);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[lVar13] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - *pfVar2 * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&fStack_190);
            func_0x00014005f340(auStack_1b8,&fStack_18c);
            func_0x00014005f340(auStack_1b8,afStack_188);
            afStack_1c0[0] = 0.0;
            fStack_1c8 = param_3 * pfVar3[lVar14];
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar1);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[lVar14] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - *pfVar1 * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&fStack_190);
            func_0x00014005f340(auStack_1b8,&fStack_18c);
            func_0x00014005f340(auStack_1b8,afStack_188);
            afStack_1c0[0] = -0.006;
            fStack_1c8 = param_3 * pfVar3[lVar14];
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,pfVar1);
            func_0x00014005f340(auStack_1b8,afStack_1c0);
            fStack_1c8 = pfVar3[lVar14] * fVar5 + fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar5 - *pfVar1 * fVar5;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            fStack_1c8 = fVar20;
            func_0x00014005f340(auStack_1b8,&fStack_1c8);
            func_0x00014005f340(auStack_1b8,afStack_19c);
            func_0x00014005f340(auStack_1b8,afStack_19c + 1);
            func_0x00014005f340(auStack_1b8,&fStack_190);
            func_0x00014005f340(auStack_1b8,&fStack_18c);
            func_0x00014005f340(auStack_1b8,afStack_188);
            lVar14 = lStack_158;
          } while (iVar7 < *(int *)(lStack_158 + lVar10 * 4));
        }
        uStack_160 = uStack_160 + 1;
        uVar15 = (ulonglong)uStack_160;
        lVar10 = local_120;
      } while ((int)uStack_160 < (int)local_res10);
    }
    uVar15 = 0;
    (**(code **)(lVar10 + 0x98))(local_res10 & 0xffffffff,lVar14,lStack_150,uStack_130);
    lVar10 = auStack_1b8._0_8_;
    if (auStack_1b8._0_8_ != auStack_1b8._8_8_) {
      alStack_100[0] = auStack_1b8._0_8_;
      uVar15 = (longlong)(auStack_1b8._8_8_ - auStack_1b8._0_8_) >> 2;
      aiStack_118[3] = 0;
      aiStack_118[4] = 0;
      *param_4 = (int)(uVar15 / 0xb);
      aiStack_118[5] = 0;
      *param_5 = 0x2c;
      aiStack_118[0] = (int)uVar15 * 4;
      alStack_100[1] = 0;
      aiStack_118[1] = 1;
      aiStack_118[2] = 1;
      uStack_128 = 0;
      (**(code **)(*param_1 + 0x18))(param_1,aiStack_118,alStack_100,&uStack_128);
      lVar10 = auStack_1b8._0_8_;
      uVar15 = uStack_128;
    }
    if (lVar10 == 0) goto code_r0x00014005def4;
    uVar11 = (lStack_1a8 - lVar10 >> 2) * 4;
    if (uVar11 < 0x1000) {
code_r0x00014005dede:
      func_0x00014028b040(lVar10,uVar11);
      lStack_1a8 = 0;
      auStack_1b8 = ZEXT816(0);
      goto code_r0x00014005def4;
    }
    if ((lVar10 - *(longlong *)(lVar10 + -8)) - 8U < 0x20) {
      uVar11 = uVar11 + 0x27;
      lVar10 = *(longlong *)(lVar10 + -8);
      goto code_r0x00014005dede;
    }
  }
  lVar10 = 5;
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar12 = auStack_200;
code_r0x00014005df3a:
  *(undefined **)(puVar12 + -8) = &UNK_14005df42;
  func_0x00014028b040(lVar10);
  return uVar15;
}

