// Function: FUN_1400ec220
// Addr: 1400ec220
// Size: 7191 bytes


void FUN_1400ec220(longlong *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  float fVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 uVar13;
  size_t sVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 *******pppppppuVar25;
  longlong *plVar26;
  byte bVar27;
  longlong *plVar28;
  undefined4 *puVar29;
  ulonglong *puVar30;
  undefined8 *******pppppppuVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  ulonglong *puVar34;
  undefined1 *puVar35;
  longlong *plVar36;
  longlong lVar37;
  ulonglong uVar38;
  int *piVar39;
  ulonglong uVar40;
  int iVar41;
  uint uVar42;
  ulonglong uVar43;
  float fVar44;
  longlong *local_res18;
  ulonglong local_res20;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  longlong *local_248;
  longlong *local_240;
  undefined4 local_238;
  ulonglong *local_228;
  ulonglong *puStack_220;
  ulonglong *local_218;
  undefined8 ******local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  int *local_1c0;
  longlong *local_1b8;
  int *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158 [2];
  undefined8 ******local_148;
  undefined4 local_13c;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_124;
  undefined8 ******local_120;
  longlong lStack_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_f8 [4];
  int *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a0;
  undefined **local_98;
  undefined8 *local_90;
  undefined ***local_60;
  
  puVar18 = (undefined8 *)param_1[0x1b];
  if (puVar18 != (undefined8 *)0x0) {
    (**(code **)*puVar18)(puVar18,1);
  }
  param_1[0x1b] = 0;
  if ((longlong *)param_1[0x2d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x10))();
    param_1[0x2d] = 0;
  }
  plVar28 = (longlong *)param_1[0x29];
  plVar22 = param_1 + 0x28;
  local_1b8 = plVar22;
  for (plVar16 = (longlong *)*plVar22; plVar16 != plVar28; plVar16 = plVar16 + 3) {
    if ((longlong *)plVar16[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar16[2] + 0x10))();
      plVar16[2] = 0;
    }
    if ((longlong *)*plVar16 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar16 + 0x10))();
      *plVar16 = 0;
    }
    if ((longlong *)plVar16[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar16[1] + 0x10))();
      plVar16[1] = 0;
    }
  }
  FUN_1400efc50(plVar22);
  FUN_14017e040(param_1[1]);
  FUN_1400ede50(local_f8);
  sVar14 = strlen(param_2);
  plVar22 = param_1 + 0xf;
  FUN_14000f880(plVar22,param_2,sVar14);
  if (param_1[0x17] != param_1[0x18]) {
    param_1[0x18] = param_1[0x17];
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1400eb130(&local_148,param_2);
  lVar15 = param_1[1];
  local_res18 = (longlong *)0x0;
  if (*(char *)(lVar15 + 0x3078) == '\0') {
    if (*(char *)(lVar15 + 0x3058) == '\0') goto LAB_1400ec384;
    uVar11 = FUN_14017dfc0();
    pppppppuVar25 = &local_148;
    if (0xf < CONCAT44(uStack_12c,local_130)) {
      pppppppuVar25 = (undefined8 *******)local_148;
    }
    cVar10 = FUN_140279790(*(undefined8 *)(param_1[1] + 0x1898),pppppppuVar25,&local_res18,uVar11);
    if (cVar10 == '\0') goto LAB_1400ec384;
    local_248 = local_res18;
    FUN_14017d9b0(param_1[1],0,param_2,0);
LAB_1400ec500:
    piVar39 = (int *)0x0;
    local_1c0 = (int *)0x0;
  }
  else {
    pppppppuVar25 = &local_148;
    if (0xf < CONCAT44(uStack_12c,local_130)) {
      pppppppuVar25 = (undefined8 *******)local_148;
    }
    FUN_140279790(*(undefined8 *)(lVar15 + 0x1898),pppppppuVar25,0,1);
LAB_1400ec384:
    iVar12 = FUN_1402c10d0(param_2,"error");
    if (iVar12 == 0) goto LAB_1400ec500;
    pppppppuVar25 = &local_148;
    if (0xf < CONCAT44(uStack_12c,local_130)) {
      pppppppuVar25 = (undefined8 *******)local_148;
    }
    lVar15 = FUN_1400d4160(*(undefined8 *)(param_1[1] + 0x1898),pppppppuVar25,&local_res18,0);
    local_1c0 = (int *)0x0;
    piVar39 = (int *)0x0;
    if (lVar15 != 0) {
      piVar39 = (int *)FUN_14028af20(0x18);
      *piVar39 = 1;
      *(longlong *)(piVar39 + 2) = lVar15;
      piVar39[4] = (int)local_res18;
      iVar12 = *(int *)(param_1[1] + 0x1218);
      local_1c0 = piVar39;
      if (local_f8 != plVar22) {
        if (0xf < (ulonglong)param_1[0x12]) {
          plVar22 = (longlong *)*plVar22;
        }
        FUN_14000f880(local_f8,plVar22,param_1[0x11]);
      }
      local_248 = param_1 + 0x15;
      local_238 = 4;
      if (1 < iVar12) {
        local_238 = 6;
      }
      local_240 = local_f8;
      local_d8 = piVar39;
      cVar10 = FUN_14015e580(*(undefined8 *)(param_1[1] + 0x158),param_1[1] + 0x1708,piVar39,
                             param_1 + 3);
      if (cVar10 == '\0') {
        FUN_1400cb150(piVar39);
        local_1c0 = (int *)0x0;
        local_a0 = 1;
        piVar39 = (int *)0x0;
      }
    }
  }
  if (local_b8 == local_b0) {
    plVar22 = local_c8;
    plVar28 = local_d0;
    if (piVar39 == (int *)0x0) {
LAB_1400ec555:
      if (plVar28 == plVar22) goto LAB_1400ec55a;
    }
    else {
      if (local_d0 != local_c8) {
        plVar16 = (longlong *)FUN_1400eef60(&local_d0,0);
        if (*plVar16 != plVar16[1]) goto LAB_1400ec7ad;
        goto LAB_1400ec555;
      }
LAB_1400ec55a:
      local_200 = 0;
      uStack_1f8 = (longlong *)0x0;
      local_1f0 = (longlong *)0x0;
      FUN_140160790(&local_d0,&local_200);
      FUN_1400caf90(&local_200);
    }
    *(undefined4 *)(param_1 + 6) = 6;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 6;
    *(undefined4 *)((longlong)param_1 + 0x24) = 6;
    *(undefined4 *)(param_1 + 4) = 6;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 9;
    uVar17 = thunk_FUN_14028af20(0x90);
    local_1c0 = (int *)FUN_14028af20(0x18);
    *local_1c0 = 1;
    *(undefined8 *)(local_1c0 + 2) = uVar17;
    local_1c0[4] = 0x90;
    FUN_140170510(uVar17,(int)param_1[4]);
    iVar12 = FUN_1402c10d0(param_2,"_rt_shadowAtlas");
    plVar22 = local_d0;
    if (iVar12 == 0) {
      *(undefined4 *)(param_1 + 3) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0x8000008;
    }
    if (*local_d0 != local_d0[1]) {
      local_d0[1] = *local_d0;
    }
    puVar33 = (undefined4 *)local_d0[1];
    if (puVar33 == (undefined4 *)local_d0[2]) {
      lVar15 = ((longlong)puVar33 - *local_d0) / 0x28;
      if (lVar15 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      plVar28 = (longlong *)(lVar15 + 1);
      uVar24 = (local_d0[2] - *local_d0 >> 3) * -0x3333333333333333;
      uVar23 = uVar24 >> 1;
      plVar16 = (longlong *)0x666666666666666;
      if ((uVar24 < 0x666666666666666 - uVar23 || uVar24 - (0x666666666666666 - uVar23) == 0) &&
         (plVar16 = (longlong *)(uVar23 + uVar24), (longlong *)(uVar23 + uVar24) < plVar28)) {
        plVar16 = plVar28;
      }
      local_res18 = plVar16;
      lVar20 = FUN_1401611b0(uVar23,&local_res18);
      *(undefined4 *)(lVar20 + lVar15 * 0x28) = 6;
      *(undefined4 *)(lVar20 + 4 + lVar15 * 0x28) = 6;
      *(undefined4 *)(lVar20 + 8 + lVar15 * 0x28) = 1;
      *(undefined4 *)(lVar20 + 0xc + lVar15 * 0x28) = local_13c;
      *(undefined8 *)(lVar20 + 0x10 + lVar15 * 0x28) = uVar17;
      *(undefined4 *)(lVar20 + 0x18 + lVar15 * 0x28) = 0x90;
      *(undefined8 *)(lVar20 + 0x1c + lVar15 * 0x28) = 0;
      *(undefined4 *)(lVar20 + 0x24 + lVar15 * 0x28) = local_124;
      puVar32 = (undefined4 *)*plVar22;
      if (puVar33 == (undefined4 *)plVar22[1]) {
        lVar37 = plVar22[1] - (longlong)puVar32;
        lVar15 = lVar20;
        puVar33 = puVar32;
      }
      else {
        FUN_1404210f0(lVar20,puVar32,(longlong)puVar33 - (longlong)puVar32);
        lVar15 = lVar20 + (lVar15 * 5 + 5) * 8;
        lVar37 = plVar22[1] - (longlong)puVar33;
      }
      uVar13 = FUN_1404210f0(lVar15,puVar33,lVar37);
      lVar15 = *plVar22;
      if (lVar15 != 0) {
        FUN_1400efee0(uVar13,lVar15,(plVar22[2] - lVar15 >> 3) * -0x3333333333333333);
      }
      *plVar22 = lVar20;
      plVar22[1] = lVar20 + (longlong)plVar28 * 0x28;
      plVar22[2] = lVar20 + (longlong)plVar16 * 0x28;
    }
    else {
      *puVar33 = 6;
      puVar33[1] = 6;
      puVar33[2] = 1;
      puVar33[3] = local_13c;
      *(undefined8 *)(puVar33 + 4) = uVar17;
      *(undefined8 *)(puVar33 + 6) = 0x90;
      puVar33[8] = 0;
      puVar33[9] = local_124;
      local_d0[1] = local_d0[1] + 0x28;
    }
  }
LAB_1400ec7ad:
  FUN_14015ff20(param_1);
  if (param_1[9] != 0) {
    if (param_1[0x26] == 0) {
      puVar18 = (undefined8 *)FUN_14028af20(0x198);
      puVar18[2] = param_1[1] + 0x1c88;
      puVar18[1] = 0;
      puVar18[3] = 0;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[8] = 0;
      *puVar18 = &PTR_FUN_14048b7d0;
      FUN_140153760(puVar18 + 9);
      *(undefined4 *)(puVar18 + 0x19) = 0;
      puVar18[0x1a] = 0;
      puVar18[0x1b] = 0;
      lVar15 = FUN_14028af20(0x18);
      *(longlong *)lVar15 = lVar15;
      *(longlong *)(lVar15 + 8) = lVar15;
      puVar18[0x1a] = lVar15;
      puVar18[0x1c] = 0;
      puVar18[0x1d] = 0;
      puVar18[0x1e] = 0;
      puVar18[0x1f] = 7;
      puVar18[0x20] = 8;
      *(undefined4 *)(puVar18 + 0x19) = 0x3f800000;
      FUN_14004f190(puVar18 + 0x1c,0x10,puVar18[0x1a]);
      FUN_14000d970(puVar18 + 0x21);
      *(undefined1 *)(puVar18 + 0x29) = 0;
      puVar18[0x31] = 0;
      puVar18[0x32] = param_1;
      param_1[0x26] = (longlong)puVar18;
      FUN_1401a38f0(puVar18 + 1,0);
      local_98 = &PTR_LAB_14048b7a0;
      local_60 = &local_98;
      local_90 = puVar18;
      FUN_140033a00(&local_98,param_1[0x26] + 0x150);
      if (local_60 != (undefined ***)0x0) {
        (*(code *)(*local_60)[4])
                  (local_60,CONCAT71((int7)((ulonglong)&local_98 >> 8),local_60 != &local_98));
      }
      lVar20 = param_1[1];
      uVar17 = FUN_140031a20(&local_200,param_1[0x26] + 0x150);
      lVar15 = lVar20 + 0x1858;
      local_res18 = *(longlong **)(param_1[0x26] + 8);
      uVar19 = FUN_14007c330(param_1[0x26],&local_res18);
      FUN_1401618d0(lVar15,&local_228,&local_res18,uVar19);
      puVar21 = puStack_220;
      if (puStack_220 == (ulonglong *)0x0) {
        if (*(longlong *)(lVar20 + 0x1868) == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("unordered_map/set too long");
        }
        lVar20 = FUN_14028af20(0x58);
        *(longlong **)(lVar20 + 0x10) = local_res18;
        *(undefined8 *)(lVar20 + 0x50) = 0;
        cVar10 = FUN_14017acd0(lVar15);
        if (cVar10 != '\0') {
          FUN_14017ac20(lVar15);
          puVar18 = (undefined8 *)FUN_1401618d0(lVar15,&local_228,lVar20 + 0x10,uVar19);
          local_228 = (ulonglong *)*puVar18;
          puStack_220 = (ulonglong *)puVar18[1];
        }
        puVar21 = (ulonglong *)FUN_14017ad40(lVar15,uVar19,local_228,lVar20);
      }
      FUN_1400319c0(puVar21 + 3,uVar17);
      FUN_1400190c0(uVar17);
    }
    fVar9 = DAT_140492974;
    puVar18 = (undefined8 *)param_1[8];
    for (puVar2 = (undefined8 *)*puVar18; puVar2 != puVar18; puVar2 = (undefined8 *)*puVar2) {
      plVar22 = (longlong *)FUN_14028af20(0x58);
      *plVar22 = 0;
      local_1a8 = plVar22 + 7;
      plVar22[1] = 0;
      plVar22[2] = 0;
      plVar22[3] = 0;
      plVar22[4] = 0;
      plVar22[5] = 0;
      *local_1a8 = 0;
      plVar22[8] = 0;
      plVar22[9] = 0;
      plVar22[10] = 0xf;
      *(undefined1 *)local_1a8 = 0;
      *(undefined1 *)(plVar22 + 6) = 1;
      if (plVar22 != puVar2 + -5) {
        plVar28 = puVar2 + 2;
        if (0xf < (ulonglong)puVar2[5]) {
          plVar28 = (longlong *)*plVar28;
        }
        FUN_14000f880(local_1a8,plVar28,puVar2[4]);
      }
      plVar22[1] = (longlong)FUN_14015ea10;
      plVar28 = puVar2 + 6;
      *plVar22 = 8;
      plVar16 = (longlong *)puVar2[8];
      lStack_118 = 0;
      if (0xf < (ulonglong)puVar2[9]) {
        plVar28 = (longlong *)*plVar28;
      }
      local_1a0 = plVar16;
      if ((longlong *)0x7fffffffffffffff < plVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      lVar15 = param_1[0x26];
      if (plVar16 < (longlong *)0x10) {
        uVar13 = (undefined4)*plVar28;
        local_208 = (undefined8 ******)*plVar28;
        local_120 = (undefined8 ******)*plVar28;
        lStack_118 = plVar28[1];
        local_108 = (longlong *)0xf;
        local_110 = plVar16;
      }
      else {
        local_res18 = (longlong *)((ulonglong)plVar16 | 0xf);
        if (local_res18 < (longlong *)0x8000000000000000) {
          if (local_res18 < (longlong *)0x16) {
            local_res18 = (longlong *)0x16;
          }
        }
        else {
          local_res18 = (longlong *)0x7fffffffffffffff;
        }
        local_208 = (undefined8 ******)FUN_1400173f0(&local_120,&local_res18);
        local_108 = local_res18;
        local_120 = local_208;
        local_110 = plVar16;
        uVar13 = FUN_1404210f0(local_208,plVar28,(longlong)plVar16 + 1);
      }
      local_res18 = plVar22;
      uVar23 = FUN_14007c330(uVar13,&local_res18);
      FUN_1401618d0(lVar15 + 200,&local_228,&local_res18,uVar23);
      if (puStack_220 == (ulonglong *)0x0) {
        if (*(longlong *)(lVar15 + 0xd8) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("unordered_map/set too long");
        }
        local_res18 = (longlong *)FUN_14028af20(0x18);
        local_res18[2] = (longlong)plVar22;
        fVar44 = (float)(*(longlong *)(lVar15 + 0xd8) + 1);
        uVar24 = *(ulonglong *)(lVar15 + 0x100);
        if (*(float *)(lVar15 + 200) < fVar44 / (float)uVar24) {
          fVar44 = (float)FUN_140419fa0(fVar44 / *(float *)(lVar15 + 200));
          lVar20 = 0;
          if ((fVar9 <= fVar44) && (fVar44 = fVar44 - fVar9, fVar44 < fVar9)) {
            lVar20 = -0x8000000000000000;
          }
          uVar40 = 8;
          if (8 < (ulonglong)((longlong)fVar44 + lVar20)) {
            uVar40 = (longlong)fVar44 + lVar20;
          }
          uVar38 = uVar24;
          if ((uVar24 < uVar40) && ((0x1ff < uVar24 || (uVar38 = uVar24 * 8, uVar24 * 8 < uVar40))))
          {
            uVar38 = uVar40;
          }
          for (lVar20 = 0x3f; 0xfffffffffffffffU >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
          if ((ulonglong)(1L << ((byte)lVar20 & 0x3f)) < uVar38) {
                    /* WARNING: Subroutine does not return */
            FUN_14028c2e0("invalid hash bucket count");
          }
          plVar28 = *(longlong **)(lVar15 + 0xd0);
          uVar24 = uVar38 - 1 | 1;
          lVar20 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          bVar27 = (char)lVar20 + 1;
          lVar20 = 1L << (bVar27 & 0x3f);
          FUN_14004f190(lVar15 + 0xe0,2L << (bVar27 & 0x3f),plVar28);
          *(longlong *)(lVar15 + 0x100) = lVar20;
          *(longlong *)(lVar15 + 0xf8) = lVar20 + -1;
          plVar16 = (longlong *)**(undefined8 **)(lVar15 + 0xd0);
joined_r0x0001400ecd22:
          if (plVar16 != plVar28) {
            plVar36 = (longlong *)*plVar16;
            plVar26 = plVar16 + 2;
            uVar24 = FUN_14007c330();
            lVar20 = *(longlong *)(lVar15 + 0xe0);
            uVar24 = uVar24 & *(ulonglong *)(lVar15 + 0xf8);
            plVar3 = *(longlong **)(lVar20 + uVar24 * 0x10);
            if (plVar3 == plVar28) {
              *(longlong **)(lVar20 + uVar24 * 0x10) = plVar16;
              *(longlong **)(lVar20 + 8 + uVar24 * 0x10) = plVar16;
              plVar16 = plVar36;
            }
            else {
              plVar4 = *(longlong **)(lVar20 + 8 + uVar24 * 0x10);
              if (*plVar26 == plVar4[2]) {
                plVar4 = (longlong *)*plVar4;
                if (plVar4 != plVar16) {
                  puVar7 = (undefined8 *)plVar16[1];
                  *puVar7 = plVar36;
                  puVar5 = (undefined8 *)plVar36[1];
                  *puVar5 = plVar4;
                  puVar6 = (undefined8 *)plVar4[1];
                  *puVar6 = plVar16;
                  plVar4[1] = (longlong)puVar5;
                  plVar36[1] = (longlong)puVar7;
                  plVar16[1] = (longlong)puVar6;
                }
                *(longlong **)(lVar20 + 8 + uVar24 * 0x10) = plVar16;
                plVar16 = plVar36;
              }
              else {
                do {
                  if (plVar3 == plVar4) {
                    puVar7 = (undefined8 *)plVar16[1];
                    *puVar7 = plVar36;
                    puVar5 = (undefined8 *)plVar36[1];
                    *puVar5 = plVar4;
                    puVar6 = (undefined8 *)plVar4[1];
                    *puVar6 = plVar16;
                    plVar4[1] = (longlong)puVar5;
                    plVar36[1] = (longlong)puVar7;
                    plVar16[1] = (longlong)puVar6;
                    *(longlong **)(lVar20 + uVar24 * 0x10) = plVar16;
                    plVar16 = plVar36;
                    goto joined_r0x0001400ecd22;
                  }
                  plVar4 = (longlong *)plVar4[1];
                } while (*plVar26 != plVar4[2]);
                lVar20 = *plVar4;
                puVar7 = (undefined8 *)plVar16[1];
                *puVar7 = plVar36;
                plVar26 = (longlong *)plVar36[1];
                *plVar26 = lVar20;
                puVar5 = *(undefined8 **)(lVar20 + 8);
                *puVar5 = plVar16;
                *(longlong **)(lVar20 + 8) = plVar26;
                plVar36[1] = (longlong)puVar7;
                plVar16[1] = (longlong)puVar5;
                plVar16 = plVar36;
              }
            }
            goto joined_r0x0001400ecd22;
          }
          local_1b0 = (int *)0x0;
          FUN_14005b0e0(&local_1b0);
          uVar24 = uVar23 & *(ulonglong *)(lVar15 + 0xf8);
          puVar21 = *(ulonglong **)(*(longlong *)(lVar15 + 0xe0) + 8 + uVar24 * 0x10);
          if (puVar21 == *(ulonglong **)(lVar15 + 0xd0)) {
            puStack_220 = (ulonglong *)0x0;
            local_228 = *(ulonglong **)(lVar15 + 0xd0);
          }
          else {
            uVar40 = puVar21[2];
            while (local_res18[2] != uVar40) {
              if (puVar21 == *(ulonglong **)(*(longlong *)(lVar15 + 0xe0) + uVar24 * 0x10)) {
                puStack_220 = (ulonglong *)0x0;
                local_228 = puVar21;
                goto LAB_1400eceb4;
              }
              puVar21 = (ulonglong *)puVar21[1];
              uVar40 = puVar21[2];
            }
            local_228 = (ulonglong *)*puVar21;
            puStack_220 = puVar21;
          }
        }
LAB_1400eceb4:
        puVar7 = (undefined8 *)local_228[1];
        *(longlong *)(lVar15 + 0xd8) = *(longlong *)(lVar15 + 0xd8) + 1;
        *local_res18 = (longlong)local_228;
        local_res18[1] = (longlong)puVar7;
        *puVar7 = local_res18;
        local_228[1] = (ulonglong)local_res18;
        uVar23 = uVar23 & *(ulonglong *)(lVar15 + 0xf8);
        lVar20 = *(longlong *)(lVar15 + 0xe0);
        puVar21 = *(ulonglong **)(lVar20 + uVar23 * 0x10);
        if (puVar21 == *(ulonglong **)(lVar15 + 0xd0)) {
          *(longlong **)(lVar20 + uVar23 * 0x10) = local_res18;
LAB_1400ecf0c:
          *(longlong **)(lVar20 + 8 + uVar23 * 0x10) = local_res18;
        }
        else if (puVar21 == local_228) {
          *(longlong **)(lVar20 + uVar23 * 0x10) = local_res18;
        }
        else if (*(undefined8 **)(lVar20 + 8 + uVar23 * 0x10) == puVar7) goto LAB_1400ecf0c;
      }
      plVar28 = local_1a8;
      pppppppuVar25 = (undefined8 *******)FUN_140030830(lVar15 + 0x108,local_1a8);
      if (pppppppuVar25 != &local_120) {
        pppppppuVar31 = &local_120;
        if ((longlong *)0xf < local_108) {
          pppppppuVar31 = (undefined8 *******)local_208;
        }
        FUN_14000f880(pppppppuVar25,pppppppuVar31,local_1a0);
      }
      FUN_140017240(&local_120);
      plVar26 = (longlong *)FUN_14028af20(0x60);
      plVar16 = plVar26 + 4;
      plVar26[1] = 0;
      plVar26[2] = 0;
      *plVar26 = (longlong)&PTR_FUN_14048b700;
      *(undefined4 *)(plVar26 + 3) = 0;
      *plVar16 = 0;
      plVar26[5] = 0;
      plVar26[6] = 0;
      plVar26[7] = 0xf;
      *(undefined1 *)plVar16 = 0;
      plVar26[8] = 0;
      plVar26[9] = 0;
      plVar26[10] = 0;
      plVar26[0xb] = 0xf;
      *(undefined1 *)(plVar26 + 8) = 0;
      plVar26[1] = param_1[0x26];
      plVar26[2] = (longlong)plVar22;
      if (plVar26 != plVar22 + 3) {
        if (0xf < (ulonglong)plVar22[10]) {
          plVar28 = (longlong *)*plVar28;
        }
        FUN_14000f880(plVar16,plVar28,plVar22[9]);
      }
      FUN_140175880(param_1[1] + 0x1708,plVar26);
    }
  }
  iVar12 = 0;
  FUN_140017240(&local_148);
  lVar15 = FUN_140099980(*(undefined8 *)(param_1[0x27] + 0x18),
                         *(undefined4 *)((longlong)param_1 + 0x1c),*(byte *)(param_1 + 2) >> 1 & 1);
  param_1[0x2b] = lVar15;
  uVar13 = FUN_1400d2a20((int)param_1[3]);
  *(undefined4 *)(param_1 + 0x2c) = uVar13;
  if (local_b8 != local_b0) {
    if (param_1[0x1d] != 0) {
      FUN_1400edeb0();
    }
    puVar18 = (undefined8 *)FUN_14028af20(0x20);
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    puVar18[3] = 0;
    lVar15 = FUN_1400ede90(puVar18);
    param_1[0x1d] = lVar15;
    local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
    *(undefined1 *)(lVar15 + 0x18) = local_a0;
    puVar35 = auStack_268;
    if (((longlong)local_c8 - (longlong)local_d0 >> 3) * -0x5555555555555555 != 0) {
      do {
        local_1b0 = (int *)(longlong)iVar12;
        local_200 = 0;
        uStack_1f8 = (longlong *)0x0;
        local_1f0 = (longlong *)0x0;
        local_1e8 = (longlong *)0x0;
        plVar22 = (longlong *)local_d0[(longlong)local_1b0 * 3];
        local_1a8 = (longlong *)local_d0[(longlong)local_1b0 * 3 + 1];
        if (plVar22 != local_1a8) {
          do {
            plVar28 = local_1f0;
            uVar13 = *(undefined4 *)((longlong)plVar22 + 4);
            lVar20 = plVar22[1];
            lVar15 = plVar22[2];
            local_res20 = CONCAT44(local_res20._4_4_,(int)*plVar22);
            local_208 = (undefined8 ******)CONCAT44(local_208._4_4_,uVar13);
            local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,(int)lVar20);
            if (local_1f0 == local_1e8) {
              uVar23 = (longlong)local_1f0 - (longlong)uStack_1f8;
              lVar20 = (longlong)uVar23 >> 5;
              if (lVar20 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_140013050();
              }
              uVar24 = (longlong)local_1e8 - (longlong)uStack_1f8 >> 5;
              if (0x7ffffffffffffff - (uVar24 >> 1) < uVar24) goto LAB_1400ede2a;
              uVar38 = lVar20 + 1;
              uVar24 = (uVar24 >> 1) + uVar24;
              uVar40 = uVar38;
              if (uVar38 <= uVar24) {
                uVar40 = uVar24;
              }
              if (0x7ffffffffffffff < uVar40) goto LAB_1400ede2a;
              uVar24 = uVar40 * 0x20;
              if (uVar24 == 0) {
                plVar16 = (longlong *)0x0;
              }
              else if (uVar24 < 0x1000) {
                plVar16 = (longlong *)FUN_14028af20(uVar24);
              }
              else {
                if (uVar24 + 0x27 <= uVar24) goto LAB_1400ede2a;
                lVar20 = FUN_14028af20();
                if (lVar20 == 0) goto LAB_1400edcee;
                plVar16 = (longlong *)(lVar20 + 0x27U & 0xffffffffffffffe0);
                plVar16[-1] = lVar20;
              }
              uVar23 = uVar23 & 0xffffffffffffffe0;
              *(undefined4 *)(uVar23 + 0x10 + (longlong)plVar16) = (undefined4)local_res20;
              *(longlong *)(uVar23 + (longlong)plVar16) = lVar15;
              *(int *)(uVar23 + 0x14 + (longlong)plVar16) = (int)local_208;
              *(undefined4 *)(uVar23 + 0x1c + (longlong)plVar16) = uStack_12c;
              *(undefined4 *)(uVar23 + 0x18 + (longlong)plVar16) = local_1b8._0_4_;
              *(undefined8 *)(uVar23 + 8 + (longlong)plVar16) = 0;
              if (plVar28 == local_1f0) {
                lVar15 = (longlong)local_1f0 - (longlong)uStack_1f8;
                plVar26 = plVar16;
                plVar28 = uStack_1f8;
              }
              else {
                FUN_1404210f0(plVar16,uStack_1f8,(longlong)plVar28 - (longlong)uStack_1f8);
                lVar15 = (longlong)local_1f0 - (longlong)plVar28;
                plVar26 = (longlong *)((longlong)plVar16 + uVar23 + 0x20);
              }
              FUN_1404210f0(plVar26,plVar28,lVar15);
              if (uStack_1f8 != (longlong *)0x0) {
                uVar23 = (longlong)local_1e8 - (longlong)uStack_1f8 & 0xffffffffffffffe0;
                plVar28 = uStack_1f8;
                if (0xfff < uVar23) {
                  if (0x1f < (ulonglong)((longlong)uStack_1f8 + (-8 - uStack_1f8[-1])))
                  goto LAB_1400edcee;
                  uVar23 = uVar23 + 0x27;
                  plVar28 = (longlong *)uStack_1f8[-1];
                }
                thunk_FUN_14028af80(plVar28,uVar23);
              }
              local_1e8 = plVar16 + uVar40 * 4;
              local_1f0 = plVar16 + uVar38 * 4;
              uStack_1f8 = plVar16;
            }
            else {
              *(int *)(local_1f0 + 2) = (int)*plVar22;
              *(undefined4 *)((longlong)local_1f0 + 0x1c) = uStack_12c;
              *local_1f0 = lVar15;
              local_1f0[1] = 0;
              *(undefined4 *)((longlong)local_1f0 + 0x14) = uVar13;
              *(int *)(local_1f0 + 3) = (int)lVar20;
              local_1f0 = local_1f0 + 4;
            }
            plVar22 = plVar22 + 5;
          } while (plVar22 != local_1a8);
          iVar12 = (int)local_res18;
        }
        plVar16 = local_1e8;
        plVar28 = local_1f0;
        plVar22 = uStack_1f8;
        uVar13 = *(undefined4 *)(local_b8 + (longlong)local_1b0 * 8);
        puVar21 = (ulonglong *)param_1[0x1d];
        uVar1 = *(undefined4 *)(local_b8 + 4 + (longlong)local_1b0 * 8);
        local_200 = CONCAT44(uVar1,uVar13);
        puVar33 = (undefined4 *)puVar21[1];
        if (puVar33 == (undefined4 *)puVar21[2]) {
          plVar22 = (longlong *)((longlong)puVar33 - *puVar21);
          if ((longlong)plVar22 >> 5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          uVar23 = (longlong)((longlong)puVar21[2] - *puVar21) >> 5;
          if (0x7ffffffffffffff - (uVar23 >> 1) < uVar23) {
LAB_1400ede2a:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          uVar40 = ((longlong)plVar22 >> 5) + 1;
          uVar23 = (uVar23 >> 1) + uVar23;
          uVar24 = uVar40;
          if (uVar40 <= uVar23) {
            uVar24 = uVar23;
          }
          if (0x7ffffffffffffff < uVar24) goto LAB_1400ede2a;
          uVar24 = uVar24 * 0x20;
          if (uVar24 == 0) {
            uVar23 = 0;
          }
          else {
            if (uVar24 < 0x1000) {
              uVar23 = FUN_14028af20(uVar24);
            }
            else {
              if (uVar24 + 0x27 <= uVar24) goto LAB_1400ede2a;
              lVar15 = FUN_14028af20();
              if (lVar15 == 0) goto LAB_1400edcee;
              uVar23 = lVar15 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(uVar23 - 8) = lVar15;
            }
            uVar13 = (undefined4)local_200;
          }
          plVar26 = local_1e8;
          plVar16 = local_1f0;
          plVar28 = uStack_1f8;
          uVar43 = (ulonglong)plVar22 & 0xffffffffffffffe0;
          *(undefined4 *)(uVar43 + uVar23) = uVar13;
          *(undefined4 *)(uVar43 + 4 + uVar23) = local_200._4_4_;
          local_1e8 = (longlong *)0x0;
          local_1f0 = (longlong *)0x0;
          uStack_1f8 = (longlong *)0x0;
          *(longlong **)(uVar43 + 8 + uVar23) = plVar28;
          *(longlong **)(uVar43 + 0x10 + uVar23) = plVar16;
          *(longlong **)(uVar43 + 0x18 + uVar23) = plVar26;
          puVar32 = (undefined4 *)puVar21[1];
          puVar29 = (undefined4 *)*puVar21;
          uVar38 = uVar23;
          if (puVar33 != puVar32) {
            FUN_1400efdd0((undefined4 *)*puVar21,puVar33,uVar23);
            puVar32 = (undefined4 *)puVar21[1];
            uVar38 = uVar43 + 0x20 + uVar23;
            puVar29 = puVar33;
          }
          FUN_1400efdd0(puVar29,puVar32,uVar38);
          plVar28 = (longlong *)*puVar21;
          if (plVar28 != (longlong *)0x0) {
            plVar22 = (longlong *)puVar21[1];
            for (; plVar28 != plVar22; plVar28 = plVar28 + 4) {
              FUN_1400efd70(plVar28 + 1);
            }
            uVar38 = *puVar21;
            uVar43 = puVar21[2] - uVar38 & 0xffffffffffffffe0;
            if (0xfff < uVar43) {
              if (0x1f < (uVar38 - *(ulonglong *)(uVar38 - 8)) - 8) goto LAB_1400edcee;
              uVar43 = uVar43 + 0x27;
              uVar38 = *(ulonglong *)(uVar38 - 8);
            }
            thunk_FUN_14028af80(uVar38,uVar43);
          }
          *puVar21 = uVar23;
          puVar21[1] = uVar40 * 0x20 + uVar23;
          puVar21[2] = uVar24 + uVar23;
        }
        else {
          *puVar33 = uVar13;
          puVar33[1] = uVar1;
          local_1e8 = (longlong *)0x0;
          local_1f0 = (longlong *)0x0;
          uStack_1f8 = (longlong *)0x0;
          *(longlong **)(puVar33 + 2) = plVar22;
          *(longlong **)(puVar33 + 4) = plVar28;
          *(longlong **)(puVar33 + 6) = plVar16;
          puVar21[1] = puVar21[1] + 0x20;
        }
        FUN_1400efd70(&uStack_1f8);
        iVar12 = iVar12 + 1;
        local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar12);
        puVar35 = auStack_268;
      } while ((ulonglong)(longlong)iVar12 <
               (ulonglong)(((longlong)local_c8 - (longlong)local_d0 >> 3) * -0x5555555555555555));
    }
    goto LAB_1400edd7c;
  }
  iVar12 = FUN_1400eb090(uVar13);
  local_208 = (undefined8 ******)CONCAT44(local_208._4_4_,iVar12);
  local_198 = 0;
  local_190 = 0;
  local_184 = 1;
  local_174 = 0;
  local_18c = 1;
  local_188 = uVar13;
  if ((*(byte *)((longlong)param_1 + 0x1c) & 0x20) == 0) {
    local_17c = 1;
    local_178 = 8;
  }
  else {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
    local_17c = 0;
    local_178 = 0x28;
    local_174 = 0x10000000000;
    if ((local_d0 != local_c8) &&
       (plVar22 = (longlong *)FUN_1400eef60(&local_d0,0), *plVar22 != plVar22[1])) {
      plVar22 = (longlong *)FUN_1400eef60(&local_d0,0);
      lVar15 = *plVar22;
      FUN_1400eb130(&local_200,param_2);
      local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
      local_res20._0_4_ = 0;
      plVar22 = *(longlong **)(param_1[1] + 0x1898);
      lVar20 = *plVar22;
      uVar17 = FUN_140017110(&local_200);
      (**(code **)(lVar20 + 0x50))(plVar22,uVar17,&local_res18,&local_res20);
      plVar22 = *(longlong **)(param_1[1] + 0x1898);
      lVar20 = *plVar22;
      uVar17 = FUN_140017110(&local_200);
      (**(code **)(lVar20 + 0x40))(plVar22,&local_168,uVar17);
      plVar22 = *(longlong **)(param_1[1] + 0x1898);
      puVar18 = &local_200;
      if (local_158[0] != 0) {
        puVar18 = &local_168;
      }
      lVar20 = *plVar22;
      uVar17 = FUN_140017110(puVar18);
      (**(code **)(lVar20 + 0x58))(plVar22,&local_228,uVar17);
      local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(lVar15 + 0x18));
      local_res18 = (longlong *)
                    CONCAT44(local_res18._4_4_,(int)local_res18 + *(int *)(lVar15 + 0x1c));
      plVar22 = (longlong *)(**(code **)(**(longlong **)(param_1[1] + 0x158) + 0x130))();
      param_1[0x1b] = (longlong)plVar22;
      if (plVar22 != (longlong *)0x0) {
        cVar10 = (**(code **)(*plVar22 + 8))(plVar22,*(undefined8 *)(param_1[1] + 0x1518),param_1);
        plVar22 = (longlong *)param_1[0x1b];
        if (cVar10 == '\0') {
          if (plVar22 != (longlong *)0x0) {
            (**(code **)*plVar22)(plVar22,1);
          }
          param_1[0x1b] = 0;
        }
        else {
          lVar15 = *plVar22;
          uVar17 = FUN_140017110(&local_228);
          (**(code **)(lVar15 + 0x18))
                    (plVar22,uVar17,(ulonglong)local_res18 & 0xffffffff,local_res20 & 0xffffffff);
        }
      }
      FUN_140017240(&local_228);
      FUN_140017240(&local_168);
      FUN_140017240(&local_200);
    }
  }
  local_res18 = local_d0;
  local_1a0 = local_c8;
  puVar35 = auStack_268;
  plVar28 = local_c8;
  plVar16 = local_d0;
  if (local_d0 != local_c8) {
    do {
      local_190 = (int)(plVar16[1] - *plVar16 >> 3) * -0x33333333;
      local_168 = (undefined8 *)0x0;
      uStack_160 = (undefined8 *)0x0;
      local_158[0] = 0;
      uVar42 = *(uint *)((longlong)param_1 + 0x1c);
      local_198 = CONCAT44(*(undefined4 *)(*plVar16 + 4),*(undefined4 *)*plVar16);
      local_218 = (ulonglong *)0x0;
      local_228 = (ulonglong *)0x0;
      puStack_220 = (ulonglong *)0x0;
      local_res18 = plVar16;
      if ((uVar42 & 0x20) == 0) {
        local_1b0 = (int *)plVar16[1];
        piVar39 = (int *)*plVar16;
        if (piVar39 != local_1b0) {
          do {
            puVar21 = puStack_220;
            local_res20 = *(ulonglong *)(piVar39 + 4);
            iVar41 = iVar12 * *piVar39;
            uVar42 = iVar12 * piVar39[1] * *piVar39;
            plVar22 = (longlong *)(ulonglong)uVar42;
            if (puStack_220 == local_218) {
              uVar23 = (longlong)puStack_220 - (longlong)local_228;
              lVar15 = (longlong)uVar23 >> 4;
              if (lVar15 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_140013050();
              }
              uVar24 = (longlong)local_218 - (longlong)local_228 >> 4;
              if (0xfffffffffffffff - (uVar24 >> 1) < uVar24) goto LAB_1400ede3c;
              local_1a8 = (longlong *)(lVar15 + 1);
              plVar28 = (longlong *)((uVar24 >> 1) + uVar24);
              plVar16 = local_1a8;
              if (local_1a8 <= plVar28) {
                plVar16 = plVar28;
              }
              if ((longlong *)0xfffffffffffffff < plVar16) goto LAB_1400ede3c;
              uVar24 = (longlong)plVar16 * 0x10;
              if (uVar24 == 0) {
                puVar34 = (ulonglong *)0x0;
              }
              else if (uVar24 < 0x1000) {
                puVar34 = (ulonglong *)FUN_14028af20(uVar24);
              }
              else {
                if (uVar24 + 0x27 <= uVar24) goto LAB_1400ede3c;
                uVar24 = FUN_14028af20();
                if (uVar24 == 0) goto LAB_1400edcee;
                puVar34 = (ulonglong *)(uVar24 + 0x27 & 0xffffffffffffffe0);
                puVar34[-1] = uVar24;
              }
              uVar23 = uVar23 & 0xfffffffffffffff0;
              *(ulonglong *)(uVar23 + (longlong)puVar34) = local_res20;
              *(int *)(uVar23 + 8 + (longlong)puVar34) = iVar41;
              *(uint *)(uVar23 + 0xc + (longlong)puVar34) = uVar42;
              if (puVar21 == puStack_220) {
                lVar15 = (longlong)puStack_220 - (longlong)local_228;
                puVar30 = puVar34;
                puVar21 = local_228;
              }
              else {
                FUN_1404210f0(puVar34,local_228,(longlong)puVar21 - (longlong)local_228);
                lVar15 = (longlong)puStack_220 - (longlong)puVar21;
                puVar30 = (ulonglong *)((longlong)puVar34 + uVar23 + 0x10);
              }
              FUN_1404210f0(puVar30,puVar21,lVar15);
              if (local_228 != (ulonglong *)0x0) {
                uVar23 = (longlong)local_218 - (longlong)local_228 & 0xfffffffffffffff0;
                puVar21 = local_228;
                if (0xfff < uVar23) {
                  if (0x1f < (ulonglong)((longlong)local_228 + (-8 - (longlong)local_228[-1])))
                  goto LAB_1400edcee;
                  uVar23 = uVar23 + 0x27;
                  puVar21 = (ulonglong *)local_228[-1];
                }
                thunk_FUN_14028af80(puVar21,uVar23);
              }
              local_218 = puVar34 + (longlong)plVar16 * 2;
              puStack_220 = puVar34 + (longlong)local_1a8 * 2;
              local_228 = puVar34;
              iVar12 = (int)local_208;
            }
            else {
              *puStack_220 = local_res20;
              *(int *)(puStack_220 + 1) = iVar41;
              *(uint *)((longlong)puStack_220 + 0xc) = uVar42;
              puStack_220 = puStack_220 + 2;
            }
            piVar39 = piVar39 + 10;
          } while (piVar39 != local_1b0);
          uVar42 = *(uint *)((longlong)param_1 + 0x1c);
        }
        uVar17 = 0;
        plVar28 = local_1a0;
        plVar16 = local_res18;
      }
      else {
        piVar39 = (int *)*plVar16;
        uVar17 = 0;
        if (piVar39 != (int *)plVar16[1]) {
          iVar41 = iVar12 * piVar39[1] * *piVar39;
          uVar17 = thunk_FUN_14028af20(iVar41);
          FUN_1404217a0(uVar17,0,iVar41);
          local_248 = (longlong *)CONCAT44(local_248._4_4_,iVar12);
          FUN_1400eb220(&local_228,uVar17,*piVar39,piVar39[1]);
          uVar42 = *(uint *)((longlong)param_1 + 0x1c);
        }
      }
      if ((uVar42 & 0x40) == 0) {
        plVar22 = *(longlong **)param_1[0x27];
        (**(code **)(*plVar22 + 0x28))(plVar22,&local_198,local_228,&local_168);
        if ((local_168 != (undefined8 *)0x0) && ((local_174 & 0x10000000000) != 0)) {
          (**(code **)*local_168)(local_168,&DAT_140487078,param_1 + 0x2d);
        }
      }
      else {
        uStack_1f8 = (longlong *)CONCAT44(local_190,(int)param_1[5]);
        local_200 = local_198;
        local_1f0 = (longlong *)CONCAT44(local_17c,local_188);
        local_1e8 = (longlong *)CONCAT44((undefined4)local_174,local_178);
        local_1e0 = local_174._4_4_;
        plVar22 = *(longlong **)param_1[0x27];
        (**(code **)(*plVar22 + 0x30))(plVar22,&local_200,local_228,&uStack_160);
      }
      thunk_FUN_14028af80(uVar17);
      if (local_168 == (undefined8 *)0x0) {
        local_200 = CONCAT44(8,(int)param_1[0x2c]);
      }
      else {
        local_200 = CONCAT44((*(uint *)((longlong)param_1 + 0x1c) & 0x2000000 | 0x4000000) >> 0x18,
                             (int)param_1[0x2c]);
      }
      uStack_1f8 = (longlong *)((ulonglong)local_190 << 0x20);
      if ((local_168 != (undefined8 *)0x0) || (uStack_160 != (undefined8 *)0x0)) {
        puVar18 = uStack_160;
        if (local_168 != (undefined8 *)0x0) {
          puVar18 = local_168;
        }
        (**(code **)(**(longlong **)param_1[0x27] + 0x38))
                  (*(longlong **)param_1[0x27],puVar18,&local_200,local_158);
      }
      puVar33 = (undefined4 *)param_1[0x29];
      if (puVar33 == (undefined4 *)param_1[0x2a]) {
        lVar15 = (longlong)puVar33 - *local_1b8;
        lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
        lVar15 = (lVar15 >> 2) - (lVar15 >> 0x3f);
        if (lVar15 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar24 = (param_1[0x2a] - *local_1b8 >> 3) * -0x5555555555555555;
        uVar23 = 0xaaaaaaaaaaaaaaa - (uVar24 >> 1);
        if (uVar23 <= uVar24 && uVar24 - uVar23 != 0) {
LAB_1400ede3c:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        plVar22 = (longlong *)(lVar15 + 1);
        plVar26 = (longlong *)((uVar24 >> 1) + uVar24);
        plVar36 = plVar22;
        if (plVar22 <= plVar26) {
          plVar36 = plVar26;
        }
        if ((longlong *)0xaaaaaaaaaaaaaaa < plVar36) goto LAB_1400ede3c;
        uVar23 = (longlong)plVar36 * 0x18;
        if (uVar23 == 0) {
          uVar23 = 0;
        }
        else if (uVar23 < 0x1000) {
          uVar23 = FUN_14028af20();
        }
        else {
          if (uVar23 + 0x27 <= uVar23) goto LAB_1400ede3c;
          lVar20 = FUN_14028af20(uVar23 + 0x27);
          if (lVar20 == 0) goto LAB_1400edcee;
          uVar23 = lVar20 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar23 - 8) = lVar20;
        }
        puVar32 = (undefined4 *)(uVar23 + lVar15 * 0x18);
        *puVar32 = (undefined4)local_168;
        puVar32[1] = local_168._4_4_;
        puVar32[2] = (undefined4)uStack_160;
        puVar32[3] = uStack_160._4_4_;
        *(longlong *)(uVar23 + 0x10 + lVar15 * 0x18) = local_158[0];
        puVar32 = (undefined4 *)*local_1b8;
        if (puVar33 == (undefined4 *)param_1[0x29]) {
          lVar15 = param_1[0x29] - (longlong)puVar32;
          uVar24 = uVar23;
          puVar33 = puVar32;
        }
        else {
          FUN_1404210f0(uVar23,puVar32,(longlong)puVar33 - (longlong)puVar32);
          uVar24 = uVar23 + (lVar15 * 3 + 3) * 8;
          lVar15 = param_1[0x29] - (longlong)puVar33;
        }
        FUN_1404210f0(uVar24,puVar33,lVar15);
        FUN_1400efe40(local_1b8,uVar23,plVar22,plVar36);
      }
      else {
        *puVar33 = (undefined4)local_168;
        puVar33[1] = local_168._4_4_;
        puVar33[2] = (undefined4)uStack_160;
        puVar33[3] = uStack_160._4_4_;
        *(longlong *)(puVar33 + 4) = local_158[0];
        param_1[0x29] = param_1[0x29] + 0x18;
      }
      if (local_228 != (ulonglong *)0x0) {
        puVar21 = local_228;
        if ((0xfff < ((longlong)local_218 - (longlong)local_228 & 0xfffffffffffffff0U)) &&
           (puVar21 = (ulonglong *)local_228[-1], plVar22 = param_1,
           0x1f < (ulonglong)((longlong)local_228 + (-8 - (longlong)puVar21)))) goto LAB_1400edcee;
        thunk_FUN_14028af80(puVar21);
      }
      plVar16 = plVar16 + 3;
      puVar35 = auStack_268;
      local_res18 = plVar16;
      if (plVar16 == plVar28) break;
      iVar12 = (int)local_208;
    } while( true );
  }
LAB_1400edcf5:
  plVar22 = (longlong *)param_1[0x1b];
  if ((plVar22 != (longlong *)0x0) && (param_1[0x28] != param_1[0x29])) {
    *(undefined8 *)(puVar35 + -8) = 0x1400edd1b;
    puVar18 = (undefined8 *)FUN_1400eef60(param_1 + 0x28,0);
    uVar17 = *puVar18;
    pcVar8 = *(code **)(*plVar22 + 0x10);
    *(undefined8 *)(puVar35 + -8) = 0x1400edd28;
    (*pcVar8)(plVar22,uVar17);
  }
  for (; local_d0 != local_c8; local_d0 = local_d0 + 3) {
    lVar15 = local_d0[1];
    for (lVar20 = *local_d0; lVar20 != lVar15; lVar20 = lVar20 + 0x28) {
      if ((*(uint *)(lVar20 + 0x20) & 0x40000000) != 0) {
        uVar17 = *(undefined8 *)(lVar20 + 0x10);
        *(undefined8 *)(puVar35 + -8) = 0x1400edd62;
        thunk_FUN_14028af80(uVar17);
        *(undefined8 *)(lVar20 + 0x10) = 0;
      }
    }
  }
LAB_1400edd7c:
  piVar39 = local_1c0;
  if ((local_1c0 != (int *)0x0) && (*local_1c0 = *local_1c0 + -1, *local_1c0 == 0)) {
    uVar17 = *(undefined8 *)(local_1c0 + 2);
    *(undefined8 *)(puVar35 + -8) = 0x1400edd93;
    thunk_FUN_14028af80(uVar17);
    *(undefined8 *)(puVar35 + -8) = 0x1400edda0;
    thunk_FUN_14028af80(piVar39,0x18);
  }
  *(undefined8 *)(puVar35 + -8) = 0x1400edda8;
  FUN_14015fec0(param_1);
  *(undefined8 *)(puVar35 + -8) = 0x1400eddb4;
  FUN_14000d9e0(&local_b8);
  *(undefined8 *)(puVar35 + -8) = 0x1400eddc0;
  FUN_1400efba0(&local_d0);
  *(undefined8 *)(puVar35 + -8) = 0x1400eddc9;
  FUN_140017240(local_f8);
  return;
LAB_1400edcee:
  pcVar8 = (code *)swi(0x29);
  (*pcVar8)(5);
  puVar35 = auStack_260;
  param_1 = plVar22;
  goto LAB_1400edcf5;
}

