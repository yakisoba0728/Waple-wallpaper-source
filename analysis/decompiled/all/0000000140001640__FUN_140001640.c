// Function: FUN_140001640
// Addr: 140001640
// Size: 2075 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001640(void)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined4 uVar25;
  ulonglong local_res18;
  undefined4 *local_res20;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  ulonglong local_1a8;
  char local_1a0 [4];
  char local_19c;
  undefined1 local_19b;
  undefined2 local_19a;
  undefined8 local_198;
  ulonglong local_190;
  undefined8 *local_188;
  ulonglong local_180;
  char local_178 [4];
  char local_174;
  undefined1 local_173;
  undefined2 local_172;
  undefined8 local_170;
  ulonglong local_168;
  undefined4 local_160;
  char local_158;
  undefined6 uStack_157;
  char acStack_151 [4];
  undefined1 local_14d;
  undefined4 local_14c;
  undefined8 local_148;
  ulonglong local_140;
  undefined4 local_138;
  char local_130 [7];
  char acStack_129 [4];
  undefined1 local_125;
  undefined4 local_124;
  undefined8 local_120;
  ulonglong local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8 [4];
  undefined1 local_d8 [32];
  undefined4 local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined4 local_70;
  undefined8 local_68 [5];
  
  puVar20 = auStack_1c8;
  local_130 = (char  [7])s_gl_VertexID_140487558._0_7_;
  acStack_129 = (char  [4])s_gl_VertexID_140487558._7_4_;
  local_158 = (char)s_SV_VERTEXID_140487580._0_7_;
  uStack_157 = SUB76(s_SV_VERTEXID_140487580._0_7_,1);
  acStack_151 = (char  [4])s_SV_VERTEXID_140487580._7_4_;
  local_124 = 0;
  local_120 = 0xb;
  local_118 = 0xf;
  local_125 = 0;
  local_14c = 0;
  local_148 = 0xb;
  local_140 = 0xf;
  local_14d = 0;
  local_138 = 0xd;
  FUN_140016fc0(local_f8,local_130);
  FUN_140016fc0(local_d8,&local_158);
  local_b8 = local_138;
  local_1a0[0] = s_gl_InstanceID_140487590[8];
  local_1a0[1] = s_gl_InstanceID_140487590[9];
  local_1a0[2] = s_gl_InstanceID_140487590[10];
  local_1a0[3] = s_gl_InstanceID_140487590[0xb];
  local_19c = s_gl_InstanceID_140487590[0xc];
  local_178[0] = s_SV_INSTANCEID_140487568[8];
  local_178[1] = s_SV_INSTANCEID_140487568[9];
  local_178[2] = s_SV_INSTANCEID_140487568[10];
  local_178[3] = s_SV_INSTANCEID_140487568[0xb];
  local_174 = s_SV_INSTANCEID_140487568[0xc];
  local_1a8._0_1_ = s_gl_InstanceID_140487590[0];
  local_1a8._1_1_ = s_gl_InstanceID_140487590[1];
  local_1a8._2_1_ = s_gl_InstanceID_140487590[2];
  local_1a8._3_1_ = s_gl_InstanceID_140487590[3];
  local_1a8._4_1_ = s_gl_InstanceID_140487590[4];
  local_1a8._5_1_ = s_gl_InstanceID_140487590[5];
  local_1a8._6_1_ = s_gl_InstanceID_140487590[6];
  local_1a8._7_1_ = s_gl_InstanceID_140487590[7];
  local_19a = 0;
  local_198 = 0xd;
  local_190 = 0xf;
  local_19b = 0;
  local_172 = 0;
  local_170 = 0xd;
  local_168 = 0xf;
  local_180._0_1_ = s_SV_INSTANCEID_140487568[0];
  local_180._1_1_ = s_SV_INSTANCEID_140487568[1];
  local_180._2_1_ = s_SV_INSTANCEID_140487568[2];
  local_180._3_1_ = s_SV_INSTANCEID_140487568[3];
  local_180._4_1_ = s_SV_INSTANCEID_140487568[4];
  local_180._5_1_ = s_SV_INSTANCEID_140487568[5];
  local_180._6_1_ = s_SV_INSTANCEID_140487568[6];
  local_180._7_1_ = s_SV_INSTANCEID_140487568[7];
  local_173 = 0;
  local_160 = 0xd;
  FUN_140016fc0(local_b0,&local_1a8);
  FUN_140016fc0(local_90,&local_180);
  local_70 = local_160;
  DAT_1404e7e90 = 0.0;
  DAT_1404e7e98 = (longlong *)0x0;
  DAT_1404e7ea0 = 0;
  DAT_1404e7e98 = (longlong *)FUN_14028af20(0x58);
  *DAT_1404e7e98 = (longlong)DAT_1404e7e98;
  DAT_1404e7e98[1] = (longlong)DAT_1404e7e98;
  DAT_1404e7ea8 = 0;
  _DAT_1404e7eb0 = 0;
  uRam00000001404e7eb8 = 0;
  DAT_1404e7ec0 = 7;
  DAT_1404e7ec8 = 8;
  DAT_1404e7e90 = 1.0;
  FUN_14003e510(&DAT_1404e7ea8,0x10,DAT_1404e7e98);
  fVar9 = DAT_140492974;
  puVar21 = local_f8;
  do {
    uVar14 = 0;
    puVar11 = puVar21;
    if (0xf < (ulonglong)puVar21[3]) {
      puVar11 = (undefined8 *)*puVar21;
    }
    uVar22 = 0xcbf29ce484222325;
    local_res18 = 0xcbf29ce484222325;
    if (puVar21[2] != 0) {
      do {
        pbVar1 = (byte *)((longlong)puVar11 + uVar14);
        uVar14 = uVar14 + 1;
        uVar22 = (uVar22 ^ *pbVar1) * 0x100000001b3;
        local_res18 = uVar22;
      } while (uVar14 < (ulonglong)puVar21[2]);
    }
    local_188 = puVar21;
    FUN_1400f9560(uVar14,&local_108,puVar21,local_res18);
    if (CONCAT44(uStack_fc,uStack_100) == 0) {
      if (DAT_1404e7ea0 == 0x2e8ba2e8ba2e8ba) goto LAB_140001e43;
      puVar11 = (undefined8 *)FUN_14028af20(0x58);
      local_110 = puVar11;
      FUN_140016fc0(puVar11 + 2,puVar21);
      FUN_140016fc0(puVar11 + 6,puVar21 + 4);
      *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(puVar21 + 8);
      uVar14 = DAT_1404e7ec8;
      if (DAT_1404e7e90 < (float)(DAT_1404e7ea0 + 1) / (float)DAT_1404e7ec8) {
        fVar24 = (float)FUN_140419fa0((float)(DAT_1404e7ea0 + 1) / DAT_1404e7e90);
        plVar5 = DAT_1404e7e98;
        lVar15 = 0;
        if ((fVar9 <= fVar24) && (fVar24 = fVar24 - fVar9, fVar24 < fVar9)) {
          lVar15 = -0x8000000000000000;
        }
        uVar22 = 8;
        if (8 < (ulonglong)((longlong)fVar24 + lVar15)) {
          uVar22 = (longlong)fVar24 + lVar15;
        }
        uVar16 = uVar14;
        if ((uVar14 < uVar22) && ((0x1ff < uVar14 || (uVar16 = uVar14 * 8, uVar14 * 8 < uVar22)))) {
          uVar16 = uVar22;
        }
        for (lVar15 = 0x3f; 0xfffffffffffffffU >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
        if ((ulonglong)(1L << ((byte)lVar15 & 0x3f)) < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("invalid hash bucket count");
        }
        uVar14 = uVar16 - 1 | 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        bVar13 = (char)lVar15 + 1;
        uVar14 = 1L << (bVar13 & 0x3f);
        FUN_14003e510(&DAT_1404e7ea8,2L << (bVar13 & 0x3f),DAT_1404e7e98);
        DAT_1404e7ec0 = uVar14 - 1;
        local_res20 = &DAT_1404e7e90;
        DAT_1404e7ec8 = uVar14;
        plVar8 = (longlong *)*DAT_1404e7e98;
        lVar15 = DAT_1404e7ea8;
joined_r0x000140001a20:
        DAT_1404e7ea8 = lVar15;
        if (plVar8 != plVar5) {
          uVar14 = plVar8[5];
          plVar18 = plVar8 + 2;
          plVar2 = (longlong *)*plVar8;
          if (0xf < uVar14) {
            plVar18 = (longlong *)plVar8[2];
          }
          uVar22 = plVar8[4];
          uVar16 = 0;
          uVar23 = 0xcbf29ce484222325;
          if (uVar22 != 0) {
            do {
              pbVar1 = (byte *)(uVar16 + (longlong)plVar18);
              uVar16 = uVar16 + 1;
              uVar23 = (uVar23 ^ *pbVar1) * 0x100000001b3;
            } while (uVar16 < uVar22);
            uVar14 = plVar8[5];
          }
          uVar23 = uVar23 & DAT_1404e7ec0;
          plVar18 = *(longlong **)(lVar15 + uVar23 * 0x10);
          if (plVar18 == plVar5) {
            *(longlong **)(lVar15 + uVar23 * 0x10) = plVar8;
            *(longlong **)(lVar15 + 8 + uVar23 * 0x10) = plVar8;
            plVar8 = plVar2;
            puVar11 = local_110;
            lVar15 = DAT_1404e7ea8;
          }
          else {
            plVar3 = *(longlong **)(lVar15 + 8 + uVar23 * 0x10);
            plVar19 = plVar3 + 2;
            if (0xf < (ulonglong)plVar3[5]) {
              plVar19 = (longlong *)*plVar19;
            }
            plVar17 = plVar8 + 2;
            if (0xf < uVar14) {
              plVar17 = (longlong *)plVar8[2];
            }
            if (uVar22 == plVar3[4]) {
              if ((uVar22 != 0) && (iVar10 = memcmp(plVar17,plVar19,uVar22), iVar10 != 0)) {
                uVar14 = plVar8[5];
                goto joined_r0x000140001b39;
              }
              plVar3 = (longlong *)*plVar3;
              if (plVar3 != plVar8) {
                puVar21 = (undefined8 *)plVar8[1];
                *puVar21 = plVar2;
                puVar11 = (undefined8 *)plVar2[1];
                *puVar11 = plVar3;
                puVar4 = (undefined8 *)plVar3[1];
                *puVar4 = plVar8;
                plVar3[1] = (longlong)puVar11;
                plVar2[1] = (longlong)puVar21;
                plVar8[1] = (longlong)puVar4;
              }
              *(longlong **)(lVar15 + 8 + uVar23 * 0x10) = plVar8;
              plVar8 = plVar2;
              puVar11 = local_110;
              lVar15 = DAT_1404e7ea8;
            }
            else {
joined_r0x000140001b39:
              while (plVar18 != plVar3) {
                plVar3 = (longlong *)plVar3[1];
                plVar19 = plVar3 + 2;
                if (0xf < (ulonglong)plVar3[5]) {
                  plVar19 = (longlong *)*plVar19;
                }
                if (uVar14 < 0x10) {
                  plVar17 = plVar8 + 2;
                }
                else {
                  plVar17 = (longlong *)plVar8[2];
                }
                if (uVar22 == plVar3[4]) {
                  if ((uVar22 == 0) || (iVar10 = memcmp(plVar17,plVar19,uVar22), iVar10 == 0)) {
                    lVar15 = *plVar3;
                    puVar21 = (undefined8 *)plVar8[1];
                    *puVar21 = plVar2;
                    plVar18 = (longlong *)plVar2[1];
                    *plVar18 = lVar15;
                    puVar11 = *(undefined8 **)(lVar15 + 8);
                    *puVar11 = plVar8;
                    *(longlong **)(lVar15 + 8) = plVar18;
                    plVar2[1] = (longlong)puVar21;
                    plVar8[1] = (longlong)puVar11;
                    plVar8 = plVar2;
                    puVar11 = local_110;
                    lVar15 = DAT_1404e7ea8;
                    goto joined_r0x000140001a20;
                  }
                  uVar14 = plVar8[5];
                }
              }
              puVar21 = (undefined8 *)plVar8[1];
              *puVar21 = plVar2;
              puVar11 = (undefined8 *)plVar2[1];
              *puVar11 = plVar3;
              puVar4 = (undefined8 *)plVar3[1];
              *puVar4 = plVar8;
              plVar3[1] = (longlong)puVar11;
              plVar2[1] = (longlong)puVar21;
              plVar8[1] = (longlong)puVar4;
              *(longlong **)(lVar15 + uVar23 * 0x10) = plVar8;
              plVar8 = plVar2;
              puVar11 = local_110;
              lVar15 = DAT_1404e7ea8;
            }
          }
          goto joined_r0x000140001a20;
        }
        local_res20 = (undefined4 *)0x0;
        uVar25 = FUN_1400fa3a0(&local_res20);
        puVar12 = (undefined4 *)FUN_1400f9560(uVar25,local_68,puVar11 + 2,local_res18);
        local_108 = *puVar12;
        uStack_104 = puVar12[1];
        uStack_100 = puVar12[2];
        uStack_fc = puVar12[3];
        puVar21 = local_188;
      }
      plVar8 = (longlong *)CONCAT44(uStack_104,local_108);
      DAT_1404e7ea0 = DAT_1404e7ea0 + 1;
      puVar4 = (undefined8 *)plVar8[1];
      *puVar11 = plVar8;
      puVar11[1] = puVar4;
      *puVar4 = puVar11;
      plVar8[1] = (longlong)puVar11;
      lVar15 = DAT_1404e7ea8;
      local_res18 = local_res18 & DAT_1404e7ec0;
      plVar5 = *(longlong **)(DAT_1404e7ea8 + local_res18 * 0x10);
      if (plVar5 == DAT_1404e7e98) {
        *(undefined8 **)(DAT_1404e7ea8 + local_res18 * 0x10) = puVar11;
LAB_140001cb6:
        *(undefined8 **)(lVar15 + 8 + local_res18 * 0x10) = puVar11;
      }
      else if (plVar5 == plVar8) {
        *(undefined8 **)(DAT_1404e7ea8 + local_res18 * 0x10) = puVar11;
      }
      else if (*(undefined8 **)(DAT_1404e7ea8 + 8 + local_res18 * 0x10) == puVar4)
      goto LAB_140001cb6;
    }
    puVar21 = puVar21 + 9;
  } while (puVar21 != local_68);
  local_188 = puVar21;
  FUN_140017240(local_90);
  FUN_140017240(local_b0);
  FUN_140017240(local_d8);
  FUN_140017240(local_f8);
  if (0xf < local_168) {
    uVar22 = local_168 + 1;
    uVar14 = local_180;
    if (0xfff < uVar22) {
      uVar14 = *(ulonglong *)(local_180 - 8);
      if (0x1f < (local_180 - uVar14) - 8) goto LAB_140001e3c;
      uVar22 = local_168 + 0x28;
    }
    thunk_FUN_14028af80(uVar14,uVar22);
  }
  local_170 = 0;
  local_168 = 0xf;
  local_180 = local_180 & 0xffffffffffffff00;
  if (0xf < local_190) {
    uVar22 = local_190 + 1;
    uVar14 = local_1a8;
    if (0xfff < uVar22) {
      uVar14 = *(ulonglong *)(local_1a8 - 8);
      if (0x1f < (local_1a8 - uVar14) - 8) goto LAB_140001e3c;
      uVar22 = local_190 + 0x28;
    }
    thunk_FUN_14028af80(uVar14,uVar22);
  }
  local_198 = 0;
  local_190 = 0xf;
  local_1a8 = local_1a8 & 0xffffffffffffff00;
  if (0xf < local_140) {
    lVar7 = CONCAT17(acStack_151[0],CONCAT61(uStack_157,local_158));
    uVar14 = local_140 + 1;
    lVar15 = lVar7;
    if (0xfff < uVar14) {
      lVar15 = *(longlong *)(lVar7 + -8);
      if (0x1f < (lVar7 - lVar15) - 8U) goto LAB_140001e3c;
      uVar14 = local_140 + 0x28;
    }
    thunk_FUN_14028af80(lVar15,uVar14);
  }
  local_148 = 0;
  local_140 = 0xf;
  local_158 = '\0';
  if (0xf < local_118) {
    lVar7 = CONCAT17(acStack_129[0],local_130);
    uVar14 = local_118 + 1;
    lVar15 = lVar7;
    if (0xfff < uVar14) {
      lVar15 = *(longlong *)(lVar7 + -8);
      if (0x1f < (lVar7 - lVar15) - 8U) {
LAB_140001e3c:
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar20 = auStack_1c0;
LAB_140001e43:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar20 + -8) = &UNK_140001e4f;
        FUN_14028c2e0("unordered_map/set too long");
      }
      uVar14 = local_118 + 0x28;
    }
    thunk_FUN_14028af80(lVar15,uVar14);
  }
  FUN_14028b410(FUN_1404248d0);
  return;
}

