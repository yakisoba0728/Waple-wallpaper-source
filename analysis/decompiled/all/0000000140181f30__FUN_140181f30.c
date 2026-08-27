// Function: FUN_140181f30
// Addr: 140181f30
// Size: 4178 bytes


void FUN_140181f30(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  float *pfVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  undefined8 *_Buf1;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  float fVar27;
  float fVar28;
  undefined4 extraout_XMM0_Da;
  float fVar29;
  longlong local_res8;
  undefined8 local_res10;
  byte local_res18;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  float local_178;
  undefined4 uStack_174;
  undefined8 *local_170;
  longlong local_168;
  ulonglong local_160;
  undefined8 uStack_158;
  longlong local_150;
  ulonglong local_148;
  ulonglong local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128 [2];
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 uStack_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70 [7];
  
  puVar24 = &local_98;
  puVar23 = auStack_198;
  local_res8 = param_1;
  local_res10 = param_2;
  lVar10 = FUN_140086de0(param_2,"alignment","");
  if (*(char *)(lVar10 + 8) == '\a') {
    uVar11 = FUN_140086de0(lVar10,"value","");
    cVar6 = FUN_1400886e0(uVar11);
    if (cVar6 != '\0') {
      uVar11 = FUN_140086de0(lVar10,"value","");
      uVar8 = FUN_140085ee0(uVar11);
      *(undefined4 *)(param_1 + 0x124) = uVar8;
    }
  }
  lVar10 = FUN_140086de0(param_2,"alignmentposition","");
  fVar28 = DAT_140492620;
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(byte *)(lVar12 + 8) - 1 < 3)) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    fVar27 = (float)FUN_140086220(uVar11);
    *(float *)(param_1 + 0x31c8) = fVar27 * fVar28;
  }
  lVar10 = FUN_140086de0(param_2,"alignmentx","");
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(byte *)(lVar12 + 8) - 1 < 3)) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    fVar27 = (float)FUN_140086220(uVar11);
    *(float *)(param_1 + 0x31bc) = fVar27 * fVar28;
  }
  lVar10 = FUN_140086de0(param_2,"alignmenty","");
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(byte *)(lVar12 + 8) - 1 < 3)) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    fVar27 = (float)FUN_140086220(uVar11);
    *(float *)(param_1 + 0x31c0) = fVar27 * fVar28;
  }
  lVar10 = FUN_140086de0(param_2,"alignmentz","");
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(byte *)(lVar12 + 8) - 1 < 3)) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    fVar27 = (float)FUN_140086220(uVar11);
    *(float *)(param_1 + 0x31c4) = fVar27 * fVar28;
  }
  lVar10 = FUN_140086de0(param_2,"alignmentfliph","");
  if (*(char *)(lVar10 + 8) == '\a') {
    lVar12 = FUN_140086de0(lVar10,"value","");
    if (*(char *)(lVar12 + 8) == '\x05') {
      uVar11 = FUN_140086de0(lVar10,"value","");
      cVar6 = FUN_140086300(uVar11);
      if (cVar6 != '\0') {
        *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 0x800;
        goto LAB_1401821ef;
      }
    }
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) & 0xfffff7ff;
  }
LAB_1401821ef:
  lVar10 = FUN_140086de0(param_2,"schemecolor","");
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(char *)(lVar12 + 8) == '\x04')) {
    puVar13 = (undefined8 *)FUN_140086de0(lVar10,"value","");
    pcVar21 = (char *)*puVar13;
    if (pcVar21 == (char *)0x0) {
      fVar29 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
    }
    else {
      if ((*(uint *)(puVar13 + 1) >> 8 & 1) != 0) {
        pcVar21 = pcVar21 + 4;
      }
      fVar29 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      if ((pcVar21 != (char *)0x0) && (*pcVar21 != '\0')) {
        dVar4 = (double)FUN_1402d06ac(pcVar21);
        fVar29 = (float)dVar4;
        cVar6 = *pcVar21;
        while (cVar6 != '\0') {
          if (*pcVar21 == ' ') goto LAB_1401822c0;
          pcVar21 = pcVar21 + 1;
          cVar6 = *pcVar21;
        }
        goto LAB_1401822cd;
      }
    }
    goto LAB_140182311;
  }
  goto LAB_14018232c;
  while (pcVar21 = pcVar21 + 1, *pcVar21 != '\0') {
LAB_1401822c0:
    if (*pcVar21 != ' ') break;
  }
LAB_1401822cd:
  dVar4 = (double)FUN_1402d06ac(pcVar21);
  fVar27 = (float)dVar4;
  cVar6 = *pcVar21;
  while (cVar6 != '\0') {
    if (*pcVar21 == ' ') goto LAB_1401822f8;
    pcVar21 = pcVar21 + 1;
    cVar6 = *pcVar21;
  }
  goto LAB_140182305;
  while (pcVar21 = pcVar21 + 1, *pcVar21 != '\0') {
LAB_1401822f8:
    if (*pcVar21 != ' ') break;
  }
LAB_140182305:
  dVar4 = (double)FUN_1402d06ac(pcVar21);
  fVar28 = (float)dVar4;
LAB_140182311:
  *(float *)(param_1 + 0x31b0) = fVar29;
  *(float *)(param_1 + 0x31b4) = fVar27;
  *(float *)(param_1 + 0x31b8) = fVar28;
LAB_14018232c:
  lVar10 = FUN_140086de0(param_2,&DAT_140488714,&DAT_140488719);
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(char *)(lVar12 + 8) == '\x05')) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    uVar7 = FUN_140086300(uVar11);
    *(undefined1 *)(param_1 + 0x3110) = uVar7;
  }
  lVar10 = FUN_140086de0(param_2,"wec_con","");
  fVar28 = DAT_1404928cc;
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(byte *)(lVar12 + 8) - 1 < 3)) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    fVar27 = (float)FUN_140086220(uVar11);
    *(float *)(param_1 + 0x3114) = fVar27 / fVar28;
  }
  lVar10 = FUN_140086de0(param_2,&DAT_140488700,&DAT_140488707);
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(byte *)(lVar12 + 8) - 1 < 3)) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    fVar27 = (float)FUN_140086220(uVar11);
    *(float *)(param_1 + 0x3118) = fVar27 / fVar28;
  }
  lVar10 = FUN_140086de0(param_2,&DAT_140488754,&DAT_14048875a);
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(byte *)(lVar12 + 8) - 1 < 3)) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    fVar27 = (float)FUN_140086220(uVar11);
    *(float *)(param_1 + 0x311c) = fVar27 / fVar28;
  }
  lVar10 = FUN_140086de0(param_2,&DAT_140488760,&DAT_140488767);
  fVar27 = DAT_1404928f8;
  fVar28 = DAT_1404926c0;
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(byte *)(lVar12 + 8) - 1 < 3)) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    fVar29 = (float)FUN_140086220(uVar11);
    *(float *)(param_1 + 0x3120) = fVar29 / fVar27 - fVar28;
  }
  lVar10 = FUN_140086de0(param_2,&DAT_14048867c,&DAT_140488681);
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(char *)(lVar12 + 8) == '\x04')) {
    uVar11 = FUN_140086de0(lVar10,"value","");
    uVar11 = FUN_140085cc0(uVar11,&local_178);
    FUN_14000de40(param_1 + 0x3128,uVar11);
    FUN_140017240(&local_178);
  }
  lVar10 = FUN_140086de0(param_2,&DAT_140488688,&DAT_14048868f);
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar12 = FUN_140086de0(lVar10,"value",""), *(byte *)(lVar12 + 8) - 1 < 3)) {
    FUN_140086de0(lVar10,"value","");
    fVar29 = (float)FUN_140086220();
    *(float *)(param_1 + 0x3148) = fVar29 / fVar27;
  }
  if ((*(char *)(param_1 + 0x3110) == '\0') ||
     ((((*(float *)(param_1 + 0x3114) == DAT_140492704 &&
        (*(float *)(param_1 + 0x3118) == DAT_140492704)) &&
       (*(float *)(param_1 + 0x311c) == DAT_140492704)) && (*(float *)(param_1 + 0x3120) == 0.0))))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((*(longlong *)(param_1 + 0x3138) == 0) || (*(float *)(param_1 + 0x3148) <= 0.0)) {
    local_res18 = 0;
  }
  else {
    local_res18 = 1;
  }
  if (bVar5) {
    uStack_e0 = 0;
    uStack_b8 = 0;
    local_a0 = (uint)local_res18;
    local_d8 = 3;
    local_d0 = 0xf;
    local_e8 = (ulonglong)(uint3)DAT_14048e2e4;
    local_c8 = 1;
    local_b0 = 3;
    local_a8 = 0xf;
    local_c0 = (ulonglong)(uint3)DAT_14048e2e0;
    local_178 = 0.0;
    local_170 = (undefined8 *)0x0;
    local_168 = 0;
    local_170 = (undefined8 *)FUN_14028af20(0x38);
    *local_170 = local_170;
    local_170[1] = local_170;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    local_148 = 7;
    local_140 = 8;
    local_178 = 1.0;
    FUN_140011f50(&local_160,0x10,local_170);
    puVar26 = &local_e8;
    do {
      uVar14 = puVar26[3];
      uVar19 = puVar26[2];
      puVar18 = puVar26;
      if (0xf < uVar14) {
        puVar18 = (ulonglong *)*puVar26;
      }
      uVar17 = 0;
      uVar25 = 0xcbf29ce484222325;
      if (uVar19 != 0) {
        do {
          pbVar1 = (byte *)(uVar17 + (longlong)puVar18);
          uVar17 = uVar17 + 1;
          uVar25 = (uVar25 ^ *pbVar1) * 0x100000001b3;
        } while (uVar17 < uVar19);
      }
      puVar13 = *(undefined8 **)(local_160 + 8 + (local_148 & uVar25) * 0x10);
      puVar20 = local_170;
      if (puVar13 != local_170) {
        puVar22 = *(undefined8 **)(local_160 + (local_148 & uVar25) * 0x10);
        while( true ) {
          puVar20 = puVar13 + 2;
          if (0xf < (ulonglong)puVar13[5]) {
            puVar20 = (undefined8 *)*puVar20;
          }
          puVar18 = puVar26;
          if (0xf < uVar14) {
            puVar18 = (ulonglong *)*puVar26;
          }
          if ((uVar19 == puVar13[4]) &&
             ((uVar19 == 0 || (iVar9 = memcmp(puVar18,puVar20,uVar19), iVar9 == 0))))
          goto LAB_140182c83;
          puVar20 = puVar13;
          if (puVar13 == puVar22) break;
          puVar13 = (undefined8 *)puVar13[1];
        }
      }
      if (local_168 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar13 = (undefined8 *)FUN_14028af20(0x38);
      FUN_140016fc0(puVar13 + 2,puVar26);
      *(int *)(puVar13 + 6) = (int)puVar26[4];
      if (local_178 < (float)(local_168 + 1) / (float)local_140) {
        FUN_14015b710(&local_178);
        puVar22 = *(undefined8 **)(local_160 + 8 + (local_148 & uVar25) * 0x10);
        puVar20 = local_170;
        if (puVar22 != local_170) {
          _Size = puVar13[4];
          puVar2 = *(undefined8 **)(local_160 + (local_148 & uVar25) * 0x10);
          while( true ) {
            puVar20 = puVar22 + 2;
            if (0xf < (ulonglong)puVar22[5]) {
              puVar20 = (undefined8 *)*puVar20;
            }
            if ((ulonglong)puVar13[5] < 0x10) {
              _Buf1 = puVar13 + 2;
            }
            else {
              _Buf1 = (undefined8 *)puVar13[2];
            }
            if ((_Size == puVar22[4]) &&
               ((_Size == 0 || (iVar9 = memcmp(_Buf1,puVar20,_Size), iVar9 == 0)))) break;
            puVar20 = puVar22;
            if (puVar22 == puVar2) goto LAB_140182c1e;
            puVar22 = (undefined8 *)puVar22[1];
          }
          puVar20 = (undefined8 *)*puVar22;
        }
      }
LAB_140182c1e:
      puVar22 = (undefined8 *)puVar20[1];
      local_168 = local_168 + 1;
      *puVar13 = puVar20;
      puVar13[1] = puVar22;
      *puVar22 = puVar13;
      puVar20[1] = puVar13;
      uVar25 = local_148 & uVar25;
      puVar2 = *(undefined8 **)(local_160 + uVar25 * 0x10);
      if (puVar2 == local_170) {
        *(undefined8 **)(local_160 + uVar25 * 0x10) = puVar13;
LAB_140182c74:
        *(undefined8 **)(local_160 + 8 + uVar25 * 0x10) = puVar13;
      }
      else if (puVar2 == puVar20) {
        *(undefined8 **)(local_160 + uVar25 * 0x10) = puVar13;
      }
      else if (*(undefined8 **)(local_160 + 8 + uVar25 * 0x10) == puVar22) goto LAB_140182c74;
LAB_140182c83:
      param_1 = local_res8;
      puVar26 = puVar26 + 5;
    } while (puVar26 != puVar24);
    uVar11 = FUN_140150110(local_res8 + 0x1640,"materials/util/ccsimple.json",&local_178,0);
    *(undefined8 *)(param_1 + 0x3188) = uVar11;
    if (local_160 != 0) {
      uVar14 = ((longlong)(local_150 - local_160) >> 3) * 8;
      uVar19 = local_160;
      if (0xfff < uVar14) {
        uVar19 = *(ulonglong *)(local_160 - 8);
        if (0x1f < (local_160 - uVar19) - 8) goto LAB_140182f63;
        uVar14 = uVar14 + 0x27;
      }
      thunk_FUN_14028af80(uVar19,uVar14);
      local_150 = 0;
      local_160 = 0;
      uStack_158 = 0;
    }
    *(undefined8 *)local_170[1] = 0;
    puVar13 = (undefined8 *)*local_170;
    while (puVar13 != (undefined8 *)0x0) {
      puVar20 = (undefined8 *)*puVar13;
      FUN_140017240(puVar13 + 2);
      thunk_FUN_14028af80(puVar13,0x38);
      puVar13 = puVar20;
    }
    thunk_FUN_14028af80(local_170,0x38);
    FUN_140017240(&local_c0);
    FUN_140017240(&local_e8);
    local_138 = (float)FUN_14041e350(*(undefined4 *)(param_1 + 0x3118),DAT_1404927a8);
    fStack_134 = (float)FUN_14041e350(*(undefined4 *)(param_1 + 0x3114),fVar28);
    fStack_130 = (float)FUN_14041e350(*(undefined4 *)(param_1 + 0x311c),fVar28);
    fStack_12c = *(float *)(param_1 + 0x3120);
    FUN_14017e920(*(undefined8 *)(param_1 + 0x3188),"params",&local_138,4);
    param_2 = local_res10;
  }
  else {
    if (local_res18 == 0) {
      *(undefined8 *)(param_1 + 0x3188) = 0;
      goto LAB_140182ee5;
    }
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_140017480(puVar24,&DAT_14048e2e0,3);
    local_78 = 1;
    local_128[0] = 0.0;
    local_120 = 0;
    local_118 = 0;
    local_120 = FUN_14028af20(0x38);
    *(longlong *)local_120 = local_120;
    *(longlong *)(local_120 + 8) = local_120;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    local_f8 = 7;
    local_f0 = 8;
    local_128[0] = 1.0;
    fVar28 = (float)FUN_140011f50(&local_110,0x10,local_120);
    do {
      uVar14 = FUN_14000f400(fVar28,puVar24);
      fVar28 = (float)FUN_1400110a0(local_128,&local_138,puVar24,uVar14);
      if (CONCAT44(fStack_12c,fStack_130) == 0) {
        if (local_118 == 0x492492492492492) goto LAB_140182f6a;
        plVar15 = (longlong *)FUN_14028af20(0x38);
        FUN_140016fc0(plVar15 + 2,puVar24);
        *(int *)(plVar15 + 6) = (int)puVar24[4];
        fVar28 = (float)(local_118 + 1) / (float)local_f0;
        if (local_128[0] < fVar28) {
          FUN_14015b710(local_128);
          pfVar16 = (float *)FUN_1400110a0(local_128,&local_178,plVar15 + 2,uVar14);
          fVar28 = *pfVar16;
          fStack_134 = pfVar16[1];
          fStack_130 = pfVar16[2];
          fStack_12c = pfVar16[3];
          local_138 = fVar28;
        }
        lVar12 = CONCAT44(fStack_134,local_138);
        local_118 = local_118 + 1;
        puVar13 = *(undefined8 **)(lVar12 + 8);
        *plVar15 = lVar12;
        plVar15[1] = (longlong)puVar13;
        *puVar13 = plVar15;
        *(longlong **)(lVar12 + 8) = plVar15;
        uVar14 = local_f8 & uVar14;
        lVar10 = *(longlong *)(local_110 + uVar14 * 0x10);
        if (lVar10 == local_120) {
          *(longlong **)(local_110 + uVar14 * 0x10) = plVar15;
LAB_1401828c9:
          *(longlong **)(local_110 + 8 + uVar14 * 0x10) = plVar15;
        }
        else if (lVar10 == lVar12) {
          *(longlong **)(local_110 + uVar14 * 0x10) = plVar15;
        }
        else if (*(undefined8 **)(local_110 + 8 + uVar14 * 0x10) == puVar13) goto LAB_1401828c9;
      }
      puVar24 = puVar24 + 5;
    } while (puVar24 != local_70);
    uVar11 = FUN_140150110(param_1 + 0x1640,"materials/util/ccsimple.json",local_128,0);
    *(undefined8 *)(param_1 + 0x3188) = uVar11;
    uVar8 = extraout_XMM0_Da;
    if (local_110 != 0) {
      FUN_140037480(extraout_XMM0_Da,local_110,local_100 - local_110 >> 3);
      uVar8 = 0;
      local_100 = 0;
      local_110 = 0;
      uStack_108 = 0;
    }
    FUN_140035290(uVar8,local_120);
    thunk_FUN_14028af80(local_120,0x38);
    lVar10 = 1;
    puVar24 = local_70;
    do {
      puVar24 = puVar24 + -5;
      FUN_140017240(puVar24);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (local_res18 != 0) {
    FUN_1400924d0(&local_178,&DAT_14048e334,param_1 + 0x3128);
    pfVar16 = &local_178;
    if (0xf < local_160) {
      pfVar16 = (float *)CONCAT44(uStack_174,local_178);
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x3188) + 0xd8);
    lVar12 = FUN_14014cf90(param_1 + 0x1530,pfVar16,1);
    if (lVar12 != lVar10) {
      *(longlong *)(*(longlong *)(param_1 + 0x3188) + 0xd8) = lVar12;
      FUN_1401511b0(param_1 + 0x1640);
    }
    local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(param_1 + 0x3148));
    FUN_14017e920(*(undefined8 *)(param_1 + 0x3188),"lutparams",&local_res8,1);
    if (0xf < local_160) {
      lVar12 = CONCAT44(uStack_174,local_178);
      uVar14 = local_160 + 1;
      lVar10 = lVar12;
      if (0xfff < uVar14) {
        lVar10 = *(longlong *)(lVar12 + -8);
        if (0x1f < (lVar12 - lVar10) - 8U) {
LAB_140182f63:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar23 = auStack_190;
LAB_140182f6a:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar23 + -8) = &UNK_140182f76;
          FUN_14028c2e0("unordered_map/set too long");
        }
        uVar14 = local_160 + 0x28;
      }
      thunk_FUN_14028af80(lVar10,uVar14);
    }
  }
LAB_140182ee5:
  FUN_140085520(param_1 + 0x1750,param_2);
  uVar11 = FUN_140017fb0(&local_178,param_1 + 0x1728,param_2);
  FUN_140085610(param_1 + 0x1728,uVar11);
  FUN_140085440(&local_178);
  FUN_1401731d0(param_1 + 0x1718);
  return;
}

