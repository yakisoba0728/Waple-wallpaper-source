// Function: FUN_14018c720
// Addr: 14018c720
// Size: 4451 bytes


uint FUN_14018c720(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  float *pfVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  char cVar15;
  undefined8 uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  byte bVar23;
  undefined8 *puVar24;
  float *pfVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  longlong lVar36;
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
  float fVar54;
  int local_res8;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  undefined4 *local_158;
  float local_148;
  float local_144;
  undefined8 *local_140;
  ulonglong local_138;
  undefined8 *local_130;
  ulonglong local_120;
  uint *local_118;
  uint *local_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  
  fVar38 = DAT_140492a24;
  fVar37 = DAT_14049297c;
  uVar18 = *(ulonglong *)(param_1 + 0x90);
  if (*(int *)(uVar18 + 0x1c38) == -1) {
    return 0;
  }
  uVar29 = 9;
  if (0 < *(int *)(param_2 + 1)) {
    uVar29 = *(int *)(param_2 + 1) << 8 | 9;
  }
  local_148 = DAT_140492a24;
  local_144 = DAT_140492a24;
  local_138 = uVar18;
  uVar16 = FUN_14028af20(0x250);
  puVar17 = (uint *)FUN_1401d5c50(uVar16);
  *puVar17 = uVar29;
  local_118 = puVar17;
  uVar16 = thunk_FUN_14028af20(uVar29);
  *(undefined8 *)(puVar17 + 2) = uVar16;
  FUN_1404217a0(uVar16,0,uVar29);
  uVar14 = DAT_140484d88;
  puVar21 = *(undefined8 **)(puVar17 + 2);
  puVar28 = (undefined8 *)0x0;
  *puVar21 = DAT_140484d80;
  *(undefined1 *)(puVar21 + 1) = uVar14;
  *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar17 + 2);
  local_140 = (undefined8 *)((longlong)puVar21 + 9);
  puVar32 = auStack_178;
  fVar51 = fVar38;
  fVar50 = fVar38;
  fVar49 = fVar38;
  fVar52 = fVar37;
  fVar53 = fVar37;
  fVar54 = fVar37;
  if (0 < *(int *)(param_2 + 1)) {
    local_res8 = 0;
    do {
      puVar21 = *(undefined8 **)(puVar17 + 10);
      puVar1 = puVar17 + 8;
      local_130 = (undefined8 *)*param_2;
      if (puVar21 == *(undefined8 **)(puVar17 + 0xc)) {
        lVar26 = (longlong)puVar21 - *(longlong *)puVar1;
        lVar26 = lVar26 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar26),8);
        lVar26 = (lVar26 >> 7) - (lVar26 >> 0x3f);
        if (lVar26 == 0x147ae147ae147ae) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar33 = ((longlong)*(undefined8 **)(puVar17 + 0xc) - *(longlong *)puVar1 >> 3) *
                 -0x70a3d70a3d70a3d7;
        uVar18 = 0x147ae147ae147ae - (uVar33 >> 1);
        if (uVar18 <= uVar33 && uVar33 - uVar18 != 0) goto LAB_14018d86b;
        local_120 = lVar26 + 1;
        uVar33 = (uVar33 >> 1) + uVar33;
        uVar18 = local_120;
        if (local_120 <= uVar33) {
          uVar18 = uVar33;
        }
        if (0x147ae147ae147ae < uVar18) goto LAB_14018d86b;
        uVar33 = uVar18 * 200;
        puVar31 = puVar28;
        if (uVar33 == 0) {
LAB_14018ca00:
          local_f8 = puVar31 + lVar26 * 0x19;
          local_f8[0x10] = 0;
          puVar30 = local_f8 + 0x19;
          local_f8[0x12] = 0;
          local_f8[0x14] = 0;
          local_f8[8] = 0;
          local_f8[10] = 0;
          *local_f8 = 0;
          local_f8[1] = 0;
          local_f8[2] = 0;
          local_f8[0xd] = 0;
          local_f8[0xe] = 0;
          local_f8[0xf] = 0;
          local_f8[3] = 0;
          local_f8[7] = 0;
          local_f8[9] = 0;
          local_f8[0xb] = 0;
          local_f8[0xc] = 0x3f800000;
          local_f8[4] = 0;
          local_f8[5] = 0;
          local_f8[6] = 0;
          local_f8[0x11] = 0;
          local_f8[0x13] = 0;
          local_f8[0x15] = 0;
          local_f8[0x16] = 0;
          local_f8[0x17] = 0;
          local_f8[0x18] = 0;
          puVar24 = *(undefined8 **)(puVar17 + 10);
          puVar34 = *(undefined8 **)(puVar17 + 8);
          local_110 = puVar1;
          local_f0 = puVar30;
          local_100 = uVar18;
          puVar13 = puVar31;
          if (puVar21 == puVar24) {
            for (; puVar34 != puVar24; puVar34 = puVar34 + 0x19) {
              FUN_1401dd430(puVar13,puVar34);
              puVar13 = puVar13 + 0x19;
            }
          }
          else {
            for (; puVar34 != puVar21; puVar34 = puVar34 + 0x19) {
              FUN_1401dd430(puVar13,puVar34);
              puVar13 = puVar13 + 0x19;
            }
            puVar24 = *(undefined8 **)(puVar17 + 10);
            local_f8 = puVar31;
            for (; puVar21 != puVar24; puVar21 = puVar21 + 0x19) {
              FUN_1401dd430(puVar30,puVar21);
              puVar30 = puVar30 + 0x19;
            }
          }
          local_108 = 0;
          FUN_1401dcc40(puVar17 + 8,puVar31,local_120,uVar18);
          FUN_1401dcb80(&local_110);
          uVar18 = local_138;
          goto LAB_14018cb81;
        }
        if (uVar33 < 0x1000) {
          puVar31 = (undefined8 *)FUN_14028af20();
          goto LAB_14018ca00;
        }
        if (uVar33 + 0x27 <= uVar33) goto LAB_14018d86b;
        lVar19 = FUN_14028af20(uVar33 + 0x27);
        if (lVar19 != 0) {
          puVar31 = (undefined8 *)(lVar19 + 0x27U & 0xffffffffffffffe0);
          puVar31[-1] = lVar19;
          goto LAB_14018ca00;
        }
LAB_14018d126:
        pcVar9 = (code *)swi(0x29);
        (*pcVar9)(5);
        puVar32 = auStack_170;
        break;
      }
      puVar21[0x10] = 0;
      puVar21[0x12] = 0;
      puVar21[0x14] = 0;
      puVar21[8] = 0;
      puVar21[10] = 0;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[0xd] = 0;
      puVar21[0xe] = 0;
      puVar21[0xf] = 0;
      puVar21[3] = 0;
      puVar21[7] = 0;
      puVar21[9] = 0;
      puVar21[0xb] = 0;
      puVar21[0xc] = 0x3f800000;
      puVar21[4] = 0;
      puVar21[5] = 0;
      puVar21[6] = 0;
      puVar21[0x11] = 0;
      puVar21[0x13] = 0;
      puVar21[0x15] = 0;
      puVar21[0x16] = 0;
      puVar21[0x17] = 0;
      puVar21[0x18] = 0;
      *(longlong *)(puVar17 + 10) = *(longlong *)(puVar17 + 10) + 200;
LAB_14018cb81:
      puVar21 = *(undefined8 **)(puVar17 + 0x90);
      lVar26 = *(longlong *)(puVar17 + 10);
      if (puVar21 == *(undefined8 **)(puVar17 + 0x92)) {
        uVar33 = (longlong)puVar21 - *(longlong *)(puVar17 + 0x8e);
        lVar19 = (longlong)uVar33 >> 5;
        if (lVar19 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar22 = (longlong)*(undefined8 **)(puVar17 + 0x92) - *(longlong *)(puVar17 + 0x8e) >> 5;
        if (0x7ffffffffffffff - (uVar22 >> 1) < uVar22) goto LAB_14018d86b;
        uVar18 = lVar19 + 1;
        uVar22 = (uVar22 >> 1) + uVar22;
        uVar20 = uVar18;
        if (uVar18 <= uVar22) {
          uVar20 = uVar22;
        }
        if (0x7ffffffffffffff < uVar20) goto LAB_14018d86b;
        uVar22 = uVar20 * 0x20;
        puVar31 = puVar28;
        if (uVar22 != 0) {
          if (uVar22 < 0x1000) {
            puVar31 = (undefined8 *)FUN_14028af20(uVar22);
          }
          else {
            if (uVar22 + 0x27 <= uVar22) goto LAB_14018d86b;
            lVar19 = FUN_14028af20();
            if (lVar19 == 0) goto LAB_14018d126;
            puVar31 = (undefined8 *)(lVar19 + 0x27U & 0xffffffffffffffe0);
            puVar31[-1] = lVar19;
          }
        }
        uVar33 = uVar33 & 0xffffffffffffffe0;
        *(undefined4 *)(uVar33 + 0x13 + (longlong)puVar31) = 0;
        *(undefined1 *)(uVar33 + 0x17 + (longlong)puVar31) = 0;
        *(undefined8 *)(uVar33 + (longlong)puVar31) = 0;
        *(undefined8 *)(uVar33 + 8 + (longlong)puVar31) = 0;
        *(undefined2 *)(uVar33 + 0x10 + (longlong)puVar31) = 0;
        *(undefined1 *)(uVar33 + 0x12 + (longlong)puVar31) = 0;
        *(undefined8 *)(uVar33 + 0x18 + (longlong)puVar31) = 0;
        puVar30 = *(undefined8 **)(puVar17 + 0x8e);
        if (puVar21 == *(undefined8 **)(puVar17 + 0x90)) {
          lVar19 = (longlong)*(undefined8 **)(puVar17 + 0x90) - (longlong)puVar30;
          puVar24 = puVar31;
          puVar21 = puVar30;
        }
        else {
          FUN_1404210f0(puVar31,puVar30,(longlong)puVar21 - (longlong)puVar30);
          puVar24 = (undefined8 *)(uVar33 + 0x20 + (longlong)puVar31);
          lVar19 = *(longlong *)(puVar17 + 0x90) - (longlong)puVar21;
        }
        FUN_1404210f0(puVar24,puVar21,lVar19);
        lVar19 = *(longlong *)(puVar17 + 0x8e);
        if (lVar19 != 0) {
          uVar33 = *(longlong *)(puVar17 + 0x92) - lVar19 & 0xffffffffffffffe0;
          if (0xfff < uVar33) {
            if (0x1f < (lVar19 - *(longlong *)(lVar19 + -8)) - 8U) goto LAB_14018d126;
            uVar33 = uVar33 + 0x27;
            lVar19 = *(longlong *)(lVar19 + -8);
          }
          thunk_FUN_14028af80(lVar19,uVar33);
        }
        *(undefined8 **)(puVar17 + 0x8e) = puVar31;
        puVar21 = puVar31 + uVar18 * 4;
        *(undefined8 **)(puVar17 + 0x90) = puVar21;
        *(undefined8 **)(puVar17 + 0x92) = puVar31 + uVar20 * 4;
        uVar18 = local_138;
      }
      else {
        *(undefined4 *)((longlong)puVar21 + 0x13) = 0;
        *(undefined1 *)((longlong)puVar21 + 0x17) = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        *(undefined2 *)(puVar21 + 2) = 0;
        *(undefined1 *)((longlong)puVar21 + 0x12) = 0;
        puVar21[3] = 0;
        *(longlong *)(puVar17 + 0x90) = *(longlong *)(puVar17 + 0x90) + 0x20;
        puVar21 = *(undefined8 **)(puVar17 + 0x90);
      }
      puVar31 = local_130 + (longlong)local_res8 * 0x26;
      local_158 = param_3;
      local_130 = puVar31;
      FUN_1401c2f10(*(undefined8 *)(uVar18 + 0x1a60),lVar26 + -200,puVar21 + -4,puVar31);
      lVar19 = FUN_14014ff70(*(longlong *)(uVar18 + 0x1a60) + 0x1630,
                             (undefined8 *)((longlong)puVar31 + 0x2c));
      if ((lVar19 == 0) || (plVar3 = *(longlong **)(lVar19 + 0x1e0), plVar3 == (longlong *)0x0)) {
        *param_3 = 1;
      }
      else {
        cVar15 = (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(lVar26 + -0x90));
        if (cVar15 == '\0') {
          *param_3 = 2;
        }
      }
      lVar19 = 2;
      puVar21 = local_140;
      puVar30 = (undefined8 *)((longlong)puVar31 + 0x2c);
      do {
        uVar16 = puVar30[1];
        *puVar21 = *puVar30;
        puVar21[1] = uVar16;
        uVar16 = puVar30[3];
        puVar21[2] = puVar30[2];
        puVar21[3] = uVar16;
        uVar16 = puVar30[5];
        puVar21[4] = puVar30[4];
        puVar21[5] = uVar16;
        uVar16 = puVar30[7];
        puVar21[6] = puVar30[6];
        puVar21[7] = uVar16;
        uVar16 = puVar30[9];
        puVar21[8] = puVar30[8];
        puVar21[9] = uVar16;
        uVar16 = puVar30[0xb];
        puVar21[10] = puVar30[10];
        puVar21[0xb] = uVar16;
        uVar10 = *(undefined4 *)((longlong)puVar30 + 100);
        uVar11 = *(undefined4 *)(puVar30 + 0xd);
        uVar12 = *(undefined4 *)((longlong)puVar30 + 0x6c);
        *(undefined4 *)(puVar21 + 0xc) = *(undefined4 *)(puVar30 + 0xc);
        *(undefined4 *)((longlong)puVar21 + 100) = uVar10;
        *(undefined4 *)(puVar21 + 0xd) = uVar11;
        *(undefined4 *)((longlong)puVar21 + 0x6c) = uVar12;
        uVar10 = *(undefined4 *)((longlong)puVar30 + 0x74);
        uVar11 = *(undefined4 *)(puVar30 + 0xf);
        uVar12 = *(undefined4 *)((longlong)puVar30 + 0x7c);
        *(undefined4 *)(puVar21 + 0xe) = *(undefined4 *)(puVar30 + 0xe);
        *(undefined4 *)((longlong)puVar21 + 0x74) = uVar10;
        *(undefined4 *)(puVar21 + 0xf) = uVar11;
        *(undefined4 *)((longlong)puVar21 + 0x7c) = uVar12;
        lVar19 = lVar19 + -1;
        puVar21 = puVar21 + 0x10;
        puVar30 = puVar30 + 0x10;
      } while (lVar19 != 0);
      puVar21 = *(undefined8 **)(lVar26 + -0xc0);
      if (puVar21 == *(undefined8 **)(lVar26 + -0xb8)) {
        uVar33 = (longlong)puVar21 - *(longlong *)(lVar26 + -200);
        lVar19 = (longlong)uVar33 >> 3;
        if (lVar19 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar22 = (longlong)*(undefined8 **)(lVar26 + -0xb8) - *(longlong *)(lVar26 + -200) >> 3;
        if (0x1fffffffffffffff - (uVar22 >> 1) < uVar22) {
LAB_14018d86b:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar18 = lVar19 + 1;
        uVar22 = (uVar22 >> 1) + uVar22;
        uVar20 = uVar18;
        if (uVar18 <= uVar22) {
          uVar20 = uVar22;
        }
        if (0x1fffffffffffffff < uVar20) goto LAB_14018d86b;
        uVar22 = uVar20 * 8;
        puVar31 = puVar28;
        if (uVar22 != 0) {
          if (uVar22 < 0x1000) {
            puVar31 = (undefined8 *)FUN_14028af20();
          }
          else {
            if (uVar22 + 0x27 <= uVar22) goto LAB_14018d86b;
            lVar19 = FUN_14028af20(uVar22 + 0x27);
            if (lVar19 == 0) goto LAB_14018d126;
            puVar31 = (undefined8 *)(lVar19 + 0x27U & 0xffffffffffffffe0);
            puVar31[-1] = lVar19;
          }
        }
        uVar33 = uVar33 & 0xfffffffffffffff8;
        *(undefined8 **)(uVar33 + (longlong)puVar31) = local_140;
        puVar30 = *(undefined8 **)(lVar26 + -200);
        if (puVar21 == *(undefined8 **)(lVar26 + -0xc0)) {
          lVar19 = (longlong)*(undefined8 **)(lVar26 + -0xc0) - (longlong)puVar30;
          puVar24 = puVar31;
          puVar21 = puVar30;
        }
        else {
          FUN_1404210f0(puVar31,puVar30,(longlong)puVar21 - (longlong)puVar30);
          puVar24 = (undefined8 *)(uVar33 + 8 + (longlong)puVar31);
          lVar19 = *(longlong *)(lVar26 + -0xc0) - (longlong)puVar21;
        }
        FUN_1404210f0(puVar24,puVar21,lVar19);
        FUN_1400384c0(lVar26 + -200,puVar31,uVar18,uVar20);
        uVar18 = local_138;
        puVar31 = local_130;
      }
      else {
        *puVar21 = local_140;
        *(longlong *)(lVar26 + -0xc0) = *(longlong *)(lVar26 + -0xc0) + 8;
      }
      local_140 = local_140 + 0x20;
      if (*(char *)((longlong)param_2 + 0xc) == '\0') {
        pfVar25 = (float *)*puVar31;
        fVar46 = fVar37;
        fVar39 = fVar37;
        fVar41 = fVar37;
        fVar40 = fVar37;
        fVar43 = fVar37;
        fVar42 = fVar37;
        fVar45 = fVar38;
        fVar49 = fVar38;
        fVar47 = fVar38;
        fVar50 = fVar38;
        fVar48 = fVar38;
        fVar44 = fVar38;
        if (2 < *(uint *)(puVar31 + 1)) {
          do {
            fVar44 = *pfVar25;
            fVar50 = pfVar25[1];
            fVar49 = pfVar25[2];
            fVar42 = fVar44;
            if (fVar43 <= fVar44) {
              fVar42 = fVar43;
            }
            if (fVar44 <= fVar48) {
              fVar44 = fVar48;
            }
            pfVar25 = pfVar25 + 3;
            fVar40 = fVar50;
            if (fVar41 <= fVar50) {
              fVar40 = fVar41;
            }
            if (fVar50 <= fVar47) {
              fVar50 = fVar47;
            }
            fVar39 = fVar49;
            if (fVar46 <= fVar49) {
              fVar39 = fVar46;
            }
            if (fVar49 <= fVar45) {
              fVar49 = fVar45;
            }
            fVar46 = fVar39;
            fVar41 = fVar40;
            fVar43 = fVar42;
            fVar45 = fVar49;
            fVar47 = fVar50;
            fVar48 = fVar44;
          } while (((longlong)pfVar25 - (longlong)*puVar31 >> 2) + 2 <
                   (longlong)(ulonglong)*(uint *)(puVar31 + 1));
        }
        *(float *)(lVar26 + -0xa8) = fVar42;
        *(float *)(lVar26 + -0xa4) = fVar40;
        *(float *)(lVar26 + -0xa0) = fVar39;
        *(float *)(lVar26 + -0x9c) = fVar44;
        *(float *)(lVar26 + -0x98) = fVar50;
        *(float *)(lVar26 + -0x94) = fVar49;
      }
      else {
        *(undefined8 *)(lVar26 + -0xa8) = param_2[2];
        *(undefined4 *)(lVar26 + -0xa0) = *(undefined4 *)(param_2 + 3);
        *(undefined8 *)(lVar26 + -0x9c) = *(undefined8 *)((longlong)param_2 + 0x1c);
        *(undefined4 *)(lVar26 + -0x94) = *(undefined4 *)((longlong)param_2 + 0x24);
        fVar39 = *(float *)(lVar26 + -0xa0);
        fVar40 = *(float *)(lVar26 + -0xa4);
        fVar42 = *(float *)(lVar26 + -0xa8);
        fVar49 = *(float *)(lVar26 + -0x94);
        fVar50 = *(float *)(lVar26 + -0x98);
        fVar44 = *(float *)(lVar26 + -0x9c);
      }
      if (fVar44 <= fVar51) {
        fVar44 = fVar51;
      }
      fVar51 = fVar44;
      if (fVar50 <= local_148) {
        fVar50 = local_148;
      }
      if (fVar52 <= fVar42) {
        fVar42 = fVar52;
      }
      if (fVar49 <= local_144) {
        fVar49 = local_144;
      }
      if (fVar53 <= fVar40) {
        fVar40 = fVar53;
      }
      local_res8 = local_res8 + 1;
      if (fVar54 <= fVar39) {
        fVar39 = fVar54;
      }
      local_148 = fVar50;
      local_144 = fVar49;
      puVar32 = auStack_178;
      fVar52 = fVar42;
      fVar53 = fVar40;
      fVar54 = fVar39;
    } while (local_res8 < *(int *)(param_2 + 1));
  }
  pfVar25 = *(float **)(puVar17 + 0x6e);
  fVar51 = fVar51 - fVar52;
  fVar50 = fVar50 - fVar53;
  fVar49 = fVar49 - fVar54;
  fVar42 = fVar51 * DAT_1404926c0 + fVar52;
  fVar39 = fVar54 + fVar49 * DAT_1404926c0;
  fVar40 = fVar50 * DAT_1404926c0 + fVar53;
  fVar44 = fVar42 * 0.0;
  fVar38 = fVar39 * 0.0;
  fVar37 = fVar40 * 0.0;
  fVar46 = fVar44 + fVar37;
  fVar40 = fVar44 + fVar40 + fVar38 + 0.0;
  fVar39 = fVar46 + fVar39 + 0.0;
  fVar44 = fVar46 + fVar38 + DAT_140492704;
  fVar38 = fVar42 + fVar37 + fVar38 + 0.0;
  if (pfVar25 == *(float **)(puVar17 + 0x70)) {
    lVar26 = (longlong)pfVar25 - *(longlong *)(puVar17 + 0x6c);
    lVar26 = lVar26 / 0x26 + (lVar26 >> 0x3f);
    lVar26 = (lVar26 >> 1) - (lVar26 >> 0x3f);
    if (lVar26 == 0x35e50d79435e50d) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar32 + -8) = &UNK_14018d87c;
      FUN_140013050();
    }
    uVar33 = lVar26 + 1;
    uVar35 = ((longlong)*(float **)(puVar17 + 0x70) - *(longlong *)(puVar17 + 0x6c) >> 2) *
             -0x79435e50d79435e5;
    uVar20 = 0x35e50d79435e50d - (uVar35 >> 1);
    uVar22 = 0x35e50d79435e50d;
    if ((uVar35 < uVar20 || uVar35 - uVar20 == 0) &&
       (uVar22 = (uVar35 >> 1) + uVar35, uVar22 < uVar33)) {
      uVar22 = uVar33;
    }
    *(ulonglong *)(puVar32 + 0x180) = uVar22;
    *(undefined8 *)(puVar32 + -8) = 0x14018d2c7;
    lVar19 = FUN_1401dbf80(fVar37,puVar32 + 0x180);
    lVar26 = lVar26 * 0x4c;
    *(float *)(lVar19 + lVar26) = fVar51;
    *(float *)(lVar19 + 4 + lVar26) = fVar50;
    *(float *)(lVar19 + 8 + lVar26) = fVar49;
    *(undefined8 *)(lVar19 + 0xc + lVar26) = 0x3f800000;
    *(undefined8 *)(lVar19 + 0x14 + lVar26) = 0;
    *(undefined4 *)(lVar19 + 0x1c + lVar26) = 0;
    *(undefined8 *)(lVar19 + 0x20 + lVar26) = 0x3f800000;
    *(undefined8 *)(lVar19 + 0x28 + lVar26) = 0;
    *(undefined4 *)(lVar19 + 0x30 + lVar26) = 0;
    *(undefined8 *)(lVar19 + 0x34 + lVar26) = 0x3f800000;
    *(float *)(lVar19 + 0x3c + lVar26) = fVar38;
    *(float *)(lVar19 + 0x40 + lVar26) = fVar40;
    *(float *)(lVar19 + 0x44 + lVar26) = fVar39;
    *(float *)(lVar19 + 0x48 + lVar26) = fVar44;
    pfVar4 = *(float **)(puVar17 + 0x6c);
    if (pfVar25 == *(float **)(puVar17 + 0x6e)) {
      lVar36 = (longlong)*(float **)(puVar17 + 0x6e) - (longlong)pfVar4;
      lVar26 = lVar19;
      pfVar25 = pfVar4;
    }
    else {
      *(undefined8 *)(puVar32 + -8) = 0x14018d351;
      FUN_1404210f0(lVar19,pfVar4,(longlong)pfVar25 - (longlong)pfVar4);
      lVar26 = lVar26 + 0x4c + lVar19;
      lVar36 = *(longlong *)(puVar17 + 0x6e) - (longlong)pfVar25;
    }
    *(undefined8 *)(puVar32 + -8) = 0x14018d36b;
    FUN_1404210f0(lVar26,pfVar25,lVar36);
    *(undefined8 *)(puVar32 + -8) = 0x14018d386;
    FUN_1401dcaf0(puVar17 + 0x6c,lVar19,uVar33,*(undefined8 *)(puVar32 + 0x180));
  }
  else {
    *pfVar25 = fVar51;
    pfVar25[1] = fVar50;
    pfVar25[2] = fVar49;
    pfVar25[3] = 1.0;
    pfVar25[4] = 0.0;
    pfVar25[5] = 0.0;
    pfVar25[6] = 0.0;
    pfVar25[7] = 0.0;
    pfVar25[8] = 1.0;
    pfVar25[9] = 0.0;
    pfVar25[10] = 0.0;
    pfVar25[0xb] = 0.0;
    pfVar25[0xc] = 0.0;
    pfVar25[0xd] = 1.0;
    pfVar25[0xe] = 0.0;
    pfVar25[0xf] = fVar38;
    pfVar25[0x10] = fVar40;
    pfVar25[0x11] = fVar39;
    pfVar25[0x12] = fVar44;
    *(longlong *)(puVar17 + 0x6e) = *(longlong *)(puVar17 + 0x6e) + 0x4c;
  }
  piVar5 = *(int **)(puVar32 + 400);
  puVar17[0x75] = *(uint *)(puVar32 + 0x198);
  puVar17[0x76] = *(uint *)(puVar32 + 0x30);
  uVar29 = *(uint *)(puVar32 + 0x34);
  puVar17[0x77] = uVar29;
  puVar17[0x72] = (uint)fVar52;
  puVar17[0x73] = (uint)fVar53;
  puVar17[0x74] = (uint)fVar54;
  if (*piVar5 != 0) {
    *(undefined8 *)(puVar32 + -8) = 0x14018d3eb;
    FUN_1401d7af0(uVar29,puVar17);
    return 0;
  }
  puVar1 = (uint *)(uVar18 + 0x1c38);
  *puVar1 = *puVar1 + 1;
  uVar29 = *puVar1;
  uVar33 = (((((ulonglong)(uVar29 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar29 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar29 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar29 >> 0x18)) * 0x100000001b3;
  *(undefined8 *)(puVar32 + -8) = 0x14018d461;
  FUN_140060150(uVar18 + 0x1bf8,puVar32 + 0x48,puVar1,uVar33);
  puVar21 = *(undefined8 **)(puVar32 + 0x50);
  if (puVar21 != (undefined8 *)0x0) goto LAB_14018d7eb;
  if (*(longlong *)(uVar18 + 0x1c08) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar32 + -8) = &UNK_14018d889;
    FUN_14028c2e0("unordered_map/set too long");
  }
  *(undefined8 *)(puVar32 + -8) = 0x14018d490;
  puVar21 = (undefined8 *)FUN_14028af20(0x20);
  *(uint *)(puVar21 + 2) = *puVar1;
  puVar21[3] = 0;
  fVar38 = (float)(*(longlong *)(uVar18 + 0x1c08) + 1);
  uVar22 = *(ulonglong *)(uVar18 + 0x1c30);
  fVar37 = *(float *)(uVar18 + 0x1bf8);
  if (fVar38 / (float)uVar22 <= fVar37) {
    puVar28 = *(undefined8 **)(puVar32 + 0x48);
  }
  else {
    *(undefined8 *)(puVar32 + -8) = 0x14018d51a;
    fVar37 = (float)FUN_140419fa0(fVar38 / fVar37);
    lVar26 = 0;
    if ((DAT_140492974 <= fVar37) && (fVar37 = fVar37 - DAT_140492974, fVar37 < DAT_140492974)) {
      lVar26 = -0x8000000000000000;
    }
    uVar20 = 8;
    if (8 < (ulonglong)((longlong)fVar37 + lVar26)) {
      uVar20 = (longlong)fVar37 + lVar26;
    }
    uVar35 = uVar22;
    if ((uVar22 < uVar20) && ((0x1ff < uVar22 || (uVar35 = uVar22 * 8, uVar22 * 8 < uVar20)))) {
      uVar35 = uVar20;
    }
    for (lVar26 = 0x3f; 0xfffffffffffffffU >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar26 & 0x3f)) < uVar35) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar32 + -8) = &UNK_14018d85e;
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar3 = *(longlong **)(uVar18 + 0x1c00);
    uVar22 = uVar35 - 1 | 1;
    lVar26 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    bVar23 = (char)lVar26 + 1;
    lVar26 = 1L << (bVar23 & 0x3f);
    *(undefined8 *)(puVar32 + -8) = 0x14018d5c3;
    FUN_14004f190(uVar18 + 0x1c10,2L << (bVar23 & 0x3f),plVar3);
    *(longlong *)(uVar18 + 0x1c30) = lVar26;
    *(longlong *)(uVar18 + 0x1c28) = lVar26 + -1;
    plVar27 = (longlong *)**(longlong **)(uVar18 + 0x1c00);
    if (plVar27 != plVar3) {
      do {
        lVar26 = *(longlong *)(uVar18 + 0x1c10);
        plVar6 = (longlong *)*plVar27;
        uVar22 = (((((ulonglong)*(byte *)(plVar27 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar27 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar27 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar27 + 0x13)) * 0x100000001b3 &
                 *(ulonglong *)(uVar18 + 0x1c28);
        plVar7 = *(longlong **)(lVar26 + uVar22 * 0x10);
        if (plVar7 == plVar3) {
          *(longlong **)(lVar26 + uVar22 * 0x10) = plVar27;
          *(longlong **)(lVar26 + 8 + uVar22 * 0x10) = plVar27;
        }
        else {
          plVar8 = *(longlong **)(lVar26 + 8 + uVar22 * 0x10);
          if ((int)plVar27[2] == (int)plVar8[2]) {
            plVar8 = (longlong *)*plVar8;
            if (plVar8 != plVar27) {
              plVar7 = (longlong *)plVar27[1];
              *plVar7 = (longlong)plVar6;
              puVar28 = (undefined8 *)plVar6[1];
              *puVar28 = plVar8;
              puVar31 = (undefined8 *)plVar8[1];
              *puVar31 = plVar27;
              plVar8[1] = (longlong)puVar28;
              plVar6[1] = (longlong)plVar7;
              plVar27[1] = (longlong)puVar31;
            }
            *(longlong **)(lVar26 + 8 + uVar22 * 0x10) = plVar27;
          }
          else {
            do {
              if (plVar7 == plVar8) {
                plVar7 = (longlong *)plVar27[1];
                *plVar7 = (longlong)plVar6;
                puVar28 = (undefined8 *)plVar6[1];
                *puVar28 = plVar8;
                puVar31 = (undefined8 *)plVar8[1];
                *puVar31 = plVar27;
                plVar8[1] = (longlong)puVar28;
                plVar6[1] = (longlong)plVar7;
                plVar27[1] = (longlong)puVar31;
                *(longlong **)(lVar26 + uVar22 * 0x10) = plVar27;
                goto LAB_14018d6d8;
              }
              plVar8 = (longlong *)plVar8[1];
            } while ((int)plVar27[2] != (int)plVar8[2]);
            lVar26 = *plVar8;
            plVar7 = (longlong *)plVar27[1];
            *plVar7 = (longlong)plVar6;
            plVar8 = (longlong *)plVar6[1];
            *plVar8 = lVar26;
            puVar28 = *(undefined8 **)(lVar26 + 8);
            *puVar28 = plVar27;
            *(longlong **)(lVar26 + 8) = plVar8;
            plVar6[1] = (longlong)plVar7;
            plVar27[1] = (longlong)puVar28;
          }
        }
LAB_14018d6d8:
        plVar27 = plVar6;
      } while (plVar6 != plVar3);
      puVar17 = *(uint **)(puVar32 + 0x60);
    }
    *(undefined8 *)(puVar32 + 0x180) = 0;
    *(undefined8 *)(puVar32 + -8) = 0x14018d705;
    FUN_1400500f0(puVar32 + 0x180);
    uVar22 = uVar33 & *(ulonglong *)(uVar18 + 0x1c28);
    puVar28 = *(undefined8 **)(uVar18 + 0x1c00);
    puVar31 = *(undefined8 **)(*(longlong *)(uVar18 + 0x1c10) + 8 + uVar22 * 0x10);
    if (puVar31 != puVar28) {
      iVar2 = *(int *)(puVar31 + 2);
      puVar28 = puVar31;
      while (*(int *)(puVar21 + 2) != iVar2) {
        if (puVar28 == *(undefined8 **)(*(longlong *)(uVar18 + 0x1c10) + uVar22 * 0x10))
        goto LAB_14018d794;
        puVar28 = (undefined8 *)puVar28[1];
        iVar2 = *(int *)(puVar28 + 2);
      }
      puVar28 = (undefined8 *)*puVar28;
    }
  }
LAB_14018d794:
  puVar31 = (undefined8 *)puVar28[1];
  *(longlong *)(uVar18 + 0x1c08) = *(longlong *)(uVar18 + 0x1c08) + 1;
  *puVar21 = puVar28;
  puVar21[1] = puVar31;
  *puVar31 = puVar21;
  puVar28[1] = puVar21;
  lVar26 = *(longlong *)(uVar18 + 0x1c10);
  uVar33 = *(ulonglong *)(uVar18 + 0x1c28) & uVar33;
  puVar30 = *(undefined8 **)(lVar26 + uVar33 * 0x10);
  if (puVar30 == *(undefined8 **)(uVar18 + 0x1c00)) {
    *(undefined8 **)(lVar26 + uVar33 * 0x10) = puVar21;
  }
  else {
    if (puVar30 == puVar28) {
      *(undefined8 **)(lVar26 + uVar33 * 0x10) = puVar21;
      goto LAB_14018d7eb;
    }
    if (*(undefined8 **)(lVar26 + 8 + uVar33 * 0x10) != puVar31) goto LAB_14018d7eb;
  }
  *(undefined8 **)(lVar26 + 8 + uVar33 * 0x10) = puVar21;
LAB_14018d7eb:
  puVar21[3] = puVar17;
  puVar17[0x8d] = *(uint *)(uVar18 + 0x1c38);
  return *(uint *)(uVar18 + 0x1c38);
}

