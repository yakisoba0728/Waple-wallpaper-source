// Function: FUN_1401de750
// Addr: 1401de750
// Size: 2968 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401de750(longlong param_1,longlong param_2,char param_3,int param_4)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  float *pfVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float local_res8;
  float local_res10;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [4];
  float local_1f4;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [64];
  undefined1 local_148 [48];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_108 [224];
  
  lVar8 = *(longlong *)(param_1 + 0x180);
  if ((lVar8 == param_2) && ((param_2 == 0 || (*(int *)(param_1 + 400) == param_4)))) {
LAB_1401df2ca:
    uVar23 = 1;
  }
  else {
    if (lVar8 != 0) {
      lVar11 = thunk_FUN_14028d250(*(undefined8 *)(lVar8 + 0x198),*(undefined8 *)(lVar8 + 0x1a0),
                                   param_1);
      lVar8 = *(longlong *)(param_1 + 0x180);
      lVar9 = *(longlong *)(lVar8 + 0x1a0);
      if (lVar11 != lVar9) {
        FUN_1404210f0(lVar11,lVar11 + 8,lVar9 - (lVar11 + 8));
        plVar19 = (longlong *)(lVar8 + 0x1a0);
        *plVar19 = *plVar19 + -8;
        (**(code **)(**(longlong **)(param_1 + 0x180) + 0xa0))();
      }
    }
    uVar15 = 0;
    uVar20 = uVar15;
    lVar8 = param_2;
    if (param_1 != param_2) {
      while (uVar37 = (uint)uVar20, lVar8 != 0) {
        uVar16 = uVar37 + 1;
        if ((*(byte *)(lVar8 + 0x120) & 4) == 0) {
          uVar16 = uVar37;
        }
        uVar20 = (ulonglong)uVar16;
        lVar8 = *(longlong *)(lVar8 + 0x180);
      }
      bVar24 = (*(byte *)(param_1 + 0x120) & 4) != 0;
      puVar13 = *(undefined8 **)(param_1 + 0x1a0);
      puVar18 = *(undefined8 **)(param_1 + 0x198);
      uVar17 = (ulonglong)bVar24;
      uVar16 = (uint)bVar24;
      uVar22 = uVar17;
      if (puVar18 != puVar13) {
        do {
          iVar10 = FUN_1401ddb50(*puVar18);
          uVar37 = (uint)uVar20;
          uVar16 = iVar10 + (int)uVar22;
          iVar10 = (int)uVar17;
          uVar17 = uVar17 & 0xffffffff;
          if (iVar10 < (int)uVar16) {
            uVar17 = (ulonglong)uVar16;
          }
          uVar16 = (uint)uVar17;
          puVar18 = puVar18 + 1;
        } while (puVar18 != puVar13);
      }
      if ((int)(uVar16 + uVar37) < 4) {
        if (param_3 == '\0') {
          *(undefined4 *)(param_1 + 0xd0) = 0;
          *(longlong *)(param_1 + 0x180) = param_2;
          *(int *)(param_1 + 400) = param_4;
          if (param_2 == 0) {
            *(undefined8 *)(param_1 + 0x188) = 0;
          }
          else {
            *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 8);
          }
        }
        else {
          if (param_2 == 0) {
            local_294 = 0;
            local_290 = 0;
            local_28c = 0;
            local_288 = 0;
            local_280 = 0;
            local_27c = 0;
            local_278 = 0;
            local_274 = 0;
            local_26c = 0;
            local_268 = 0;
            local_264 = 0;
            local_260 = 0;
            local_284 = DAT_140492704;
            local_270 = DAT_140492704;
            local_25c = DAT_140492704;
            local_298 = DAT_140492704;
          }
          else {
            puVar12 = (undefined4 *)FUN_1401850a0(param_2);
            local_294 = puVar12[1];
            local_290 = puVar12[2];
            local_28c = puVar12[3];
            local_288 = puVar12[4];
            local_280 = puVar12[6];
            local_27c = puVar12[7];
            local_278 = puVar12[8];
            local_274 = puVar12[9];
            local_26c = puVar12[0xb];
            local_268 = puVar12[0xc];
            local_264 = puVar12[0xd];
            local_260 = puVar12[0xe];
            local_284 = puVar12[5];
            local_270 = puVar12[10];
            local_25c = puVar12[0xf];
            local_298 = *puVar12;
          }
          puVar13 = (undefined8 *)FUN_1401850a0(param_1);
          local_248 = *puVar13;
          uStack_240 = puVar13[1];
          local_238 = puVar13[2];
          uStack_230 = puVar13[3];
          local_228 = puVar13[4];
          uStack_220 = puVar13[5];
          local_218 = puVar13[6];
          uStack_210 = puVar13[7];
          FUN_14005f730(local_188,&local_298);
          FUN_14005ecb0(local_148,local_188,&local_248);
          if (param_2 == 0) {
            local_1c8 = _DAT_140492a60;
            uStack_1c0 = _UNK_140492a68;
            local_1b8 = _DAT_140492a90;
            uStack_1b0 = _UNK_140492a98;
            local_1a8 = _DAT_140492b40;
            uStack_1a0 = _UNK_140492b48;
            local_198 = _DAT_140492de0;
            uStack_190 = _UNK_140492de8;
          }
          else {
            FUN_1401dd7d0(param_2,&local_1c8);
          }
          FUN_1401dd7d0(param_1,local_108);
          FUN_14005f730(local_188,&local_1c8);
          FUN_14005ecb0(local_208,local_188,local_108);
          fVar34 = *(float *)(param_1 + 0x134);
          fVar35 = *(float *)(param_1 + 0x138);
          fVar36 = *(float *)(param_1 + 0x13c);
          *(undefined4 *)(param_1 + 0x134) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
          *(undefined4 *)(param_1 + 0xd0) = 0;
          pfVar14 = (float *)FUN_1401850a0(param_1);
          fVar40 = *pfVar14;
          fVar39 = pfVar14[1];
          fVar38 = pfVar14[3];
          fVar2 = pfVar14[4];
          fVar3 = pfVar14[5];
          fVar4 = pfVar14[7];
          fVar5 = pfVar14[6];
          fVar6 = pfVar14[2];
          local_258 = *(undefined8 *)(pfVar14 + 8);
          uStack_250 = *(undefined8 *)(pfVar14 + 10);
          *(undefined4 *)(param_1 + 0xd0) = 0;
          *(longlong *)(param_1 + 0x180) = param_2;
          *(int *)(param_1 + 400) = param_4;
          if (param_2 != 0) {
            uVar15 = *(ulonglong *)(param_2 + 8);
          }
          *(ulonglong *)(param_1 + 0x188) = uVar15;
          if (param_4 < 0) {
            *(undefined4 *)(param_1 + 0x128) = local_118;
            *(undefined4 *)(param_1 + 300) = local_114;
            *(undefined4 *)(param_1 + 0x130) = local_110;
            FUN_14005f480(local_208,0);
            uVar25 = FUN_14041c460();
            if (local_1f0 * local_1f0 + local_1e0 * local_1e0 < 0.0) {
              FUN_14041ad10();
            }
            uVar26 = FUN_14041c460();
            fVar27 = (float)FUN_14041a9c0();
            fVar28 = (float)FUN_14041a2e0();
            pfVar14 = (float *)FUN_14005f480(local_1f8,0);
            uVar29 = FUN_14041c460(local_1e8 * fVar27 - local_1e4 * fVar28,
                                   local_1f4 * fVar28 - fVar27 * *pfVar14);
            *(undefined4 *)(param_1 + 0x140) = uVar29;
            *(undefined4 *)(param_1 + 0x144) = uVar26;
            *(undefined4 *)(param_1 + 0x148) = uVar25;
            fVar30 = (float)FUN_14041a2e0();
            fVar31 = (float)FUN_14041a9c0();
            fVar32 = (float)FUN_14041a2e0();
            fVar33 = (float)FUN_14041a9c0();
            *(float *)(param_1 + 0x14c) = fVar28 * fVar30;
            uVar37 = (uint)fVar31 ^ DAT_140492ff0;
            *(float *)(param_1 + 0x150) = fVar30 * fVar27;
            *(uint *)(param_1 + 0x154) = uVar37;
            *(float *)(param_1 + 0x158) = fVar28 * fVar31 * fVar33 - fVar32 * fVar27;
            *(float *)(param_1 + 0x15c) = fVar27 * fVar31 * fVar33 + fVar28 * fVar32;
            *(float *)(param_1 + 0x160) = fVar30 * fVar33;
            *(float *)(param_1 + 0x164) = fVar28 * fVar32 * fVar31 + fVar33 * fVar27;
            *(float *)(param_1 + 0x168) = fVar32 * fVar27 * fVar31 - fVar28 * fVar33;
            *(float *)(param_1 + 0x16c) = fVar32 * fVar30;
            local_res10 = fVar40 * fVar40 + fVar39 * fVar39 + fVar6 * fVar6 + fVar38 * fVar38;
            if (local_res10 < 0.0) {
              local_res10 = (float)FUN_14041ad10();
            }
            else {
              local_res10 = SQRT(local_res10);
            }
            fVar40 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2;
            if (fVar40 < 0.0) {
              fVar40 = (float)FUN_14041ad10();
            }
            else {
              fVar40 = SQRT(fVar40);
            }
            fVar28 = (float)FUN_1401e24b0(&local_258);
            pfVar14 = (float *)FUN_1401850a0(param_1);
            fVar39 = pfVar14[6];
            fVar38 = pfVar14[4];
            fVar2 = pfVar14[5];
            fVar3 = pfVar14[7];
            fVar4 = pfVar14[8];
            fVar5 = pfVar14[9];
            fVar6 = pfVar14[10];
            fVar27 = pfVar14[0xb];
            local_res8 = *pfVar14 * *pfVar14 + pfVar14[1] * pfVar14[1] +
                         pfVar14[2] * pfVar14[2] + pfVar14[3] * pfVar14[3];
            if (local_res8 < 0.0) {
              local_res8 = (float)FUN_14041ad10();
            }
            else {
              local_res8 = SQRT(local_res8);
            }
            fVar39 = fVar38 * fVar38 + fVar2 * fVar2 + fVar3 * fVar3 + fVar39 * fVar39;
            if (fVar39 < 0.0) {
              fVar39 = (float)FUN_14041ad10();
            }
            else {
              fVar39 = SQRT(fVar39);
            }
            fVar38 = fVar5 * fVar5 + fVar4 * fVar4 + fVar27 * fVar27 + fVar6 * fVar6;
            if (fVar38 < 0.0) {
              fVar38 = (float)FUN_14041ad10();
            }
            else {
              fVar38 = SQRT(fVar38);
            }
            fVar2 = DAT_1404925e0;
            if (DAT_1404925e0 < local_res8) {
              *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) / local_res8;
            }
            if (fVar2 < fVar39) {
              *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) / fVar39;
            }
            if (fVar2 < fVar38) {
              *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) / fVar38;
            }
            *(undefined4 *)(param_1 + 0xd0) = 0;
            *(float *)(param_1 + 0x134) = fVar34 * local_res10 * *(float *)(param_1 + 0x134);
            *(float *)(param_1 + 0x138) = fVar40 * fVar35 * *(float *)(param_1 + 0x138);
            *(float *)(param_1 + 0x13c) = fVar28 * fVar36 * *(float *)(param_1 + 0x13c);
          }
          else {
            *(undefined8 *)(param_1 + 0x140) = 0;
            *(undefined4 *)(param_1 + 0x148) = 0;
            *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x140);
            *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x148);
            *(float *)(param_1 + 0x134) = fVar34;
            *(float *)(param_1 + 0x138) = fVar35;
            *(float *)(param_1 + 0x13c) = fVar36;
            fVar34 = (float)FUN_14041a2e0();
            fVar35 = (float)FUN_14041a9c0();
            fVar36 = (float)FUN_14041a2e0();
            fVar40 = (float)FUN_14041a9c0();
            fVar39 = (float)FUN_14041a2e0();
            fVar38 = (float)FUN_14041a9c0();
            pfVar14 = (float *)FUN_140077ec0(&local_248,0);
            *pfVar14 = fVar36 * fVar34;
            uStack_240 = CONCAT44(uStack_240._4_4_,(uint)fVar40 ^ DAT_140492ff0);
            local_248 = CONCAT44(fVar36 * fVar35,(undefined4)local_248);
            pfVar14 = (float *)FUN_140077ec0((longlong)&uStack_240 + 4,0);
            *pfVar14 = fVar40 * fVar34 * fVar38 - fVar39 * fVar35;
            local_238 = CONCAT44(fVar36 * fVar38,fVar35 * fVar40 * fVar38 + fVar39 * fVar34);
            pfVar14 = (float *)FUN_140077ec0(&uStack_230,0);
            *pfVar14 = fVar39 * fVar34 * fVar40 + fVar38 * fVar35;
            *(undefined8 *)(param_1 + 0x14c) = local_248;
            *(undefined8 *)(param_1 + 0x154) = uStack_240;
            *(undefined4 *)(param_1 + 0x15c) = (undefined4)local_238;
            *(undefined4 *)(param_1 + 0x160) = local_238._4_4_;
            *(undefined4 *)(param_1 + 0x164) = (undefined4)uStack_230;
            *(float *)(param_1 + 0x168) = fVar39 * fVar35 * fVar40 - fVar38 * fVar34;
            *(float *)(param_1 + 0x16c) = fVar39 * fVar36;
          }
        }
        if (param_2 == 0) {
          FUN_1401dd9a0(param_1);
        }
        else {
          FUN_1401dda60();
        }
        goto LAB_1401df2ca;
      }
    }
    uVar7 = *(ushort *)(param_1 + 0x120);
    uVar23 = 0xfffd;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    *(ushort *)(param_1 + 0x120) = uVar7 & 0xfffd;
    *(undefined8 *)(param_1 + 0x188) = 0;
    plVar19 = *(longlong **)(param_1 + 0x198);
    plVar21 = *(longlong **)(param_1 + 0x1a0);
    if (plVar19 != plVar21) {
      if ((uVar7 & 4) != 0) {
        do {
          lVar8 = *plVar19;
          puVar1 = (ushort *)(lVar8 + 0x120);
          *puVar1 = *puVar1 | 2;
          FUN_1401dd900(lVar8,1);
          plVar19 = plVar19 + 1;
        } while (plVar19 != plVar21);
        return 0;
      }
      do {
        lVar8 = *plVar19;
        uVar7 = *(ushort *)(lVar8 + 0x120);
        *(ushort *)(lVar8 + 0x120) = uVar7 & (ushort)uVar23;
        FUN_1401dd900(lVar8,CONCAT11((char)(uVar7 >> 8),(uVar7 & 4) != 0));
        plVar19 = plVar19 + 1;
      } while (plVar19 != plVar21);
    }
    uVar23 = 0;
  }
  return uVar23;
}

