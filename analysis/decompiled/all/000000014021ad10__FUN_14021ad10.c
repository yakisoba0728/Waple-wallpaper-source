// Function: FUN_14021ad10
// Addr: 14021ad10
// Size: 5985 bytes


/* WARNING: Removing unreachable block (ram,0x00014021c29f) */
/* WARNING: Removing unreachable block (ram,0x00014021c2a4) */
/* WARNING: Removing unreachable block (ram,0x00014021c380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14021ad10(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong *plVar23;
  code *pcVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  bool bVar49;
  bool bVar50;
  undefined8 *puVar51;
  bool bVar52;
  longlong *plVar53;
  undefined1 uVar54;
  char cVar55;
  uint uVar56;
  undefined4 uVar57;
  longlong *plVar58;
  longlong lVar59;
  ulonglong uVar60;
  longlong *plVar61;
  ulonglong uVar62;
  undefined4 *puVar63;
  void *pvVar64;
  undefined8 *puVar65;
  undefined8 *puVar66;
  longlong lVar67;
  longlong lVar68;
  int iVar69;
  undefined ***pppuVar70;
  longlong lVar71;
  ulonglong uVar72;
  undefined1 *puVar73;
  undefined8 *puVar74;
  longlong lVar75;
  undefined8 *puVar76;
  longlong lVar77;
  undefined ***pppuVar78;
  undefined ***pppuVar79;
  uint uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  undefined ***local_res8;
  undefined8 local_res10;
  ulonglong local_res18;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [24];
  undefined ***local_2b8;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  longlong local_298;
  longlong *plStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined **local_278;
  code *pcStack_270;
  undefined8 uStack_268;
  longlong lStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined ***pppuStack_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
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
  longlong local_1c8 [7];
  longlong *local_190;
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
  longlong local_158 [7];
  longlong *local_120;
  undefined8 extraout_XMM0_Qb;
  
  puVar73 = auStack_2d8;
  local_res10 = param_2;
  FUN_1401de470();
  FUN_140224ae0(param_1);
  FUN_140085520(param_1 + 0x1b0,param_2);
  plVar58 = (longlong *)FUN_140086de0(param_2,"model","");
  lVar68 = 0;
  uVar56 = *(uint *)(plVar58 + 1) & 0xff;
  if (uVar56 == 4) {
    lVar59 = *plVar58;
    if ((lVar59 != 0) && (lVar68 = lVar59, (*(uint *)(plVar58 + 1) & 0x100) != 0)) {
      lVar68 = lVar59 + 4;
    }
    cVar55 = *(char *)(*(longlong *)(param_1 + 200) + 0x3058);
    uStack_268 = 0;
    pcStack_270 = (code *)0x0;
    local_278._0_1_ = 1;
    lStack_260 = 0;
    local_258 = 0xf;
    uVar54 = FUN_14017dfc0();
    local_278 = (undefined **)CONCAT71(local_278._1_7_,uVar54);
    if (cVar55 != '\0') {
      local_2b8 = &local_278;
      cVar55 = FUN_14027a260(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1898),0,lVar68,
                             &local_res8);
      if (cVar55 != '\0') {
        local_2b8 = local_res8;
        FUN_14017d9b0(*(undefined8 *)(param_1 + 200),1,lVar68,0);
        FUN_140017240(&pcStack_270);
        goto LAB_14021aeb8;
      }
    }
    auVar81._0_8_ = FUN_1401d5a40(*(longlong *)(param_1 + 200) + 0x1a60,lVar68);
    *(undefined8 *)(param_1 + 0x2f0) = auVar81._0_8_;
    FUN_140017240(&pcStack_270);
  }
  else if (uVar56 - 1 < 3) {
    uVar57 = FUN_140085f70(plVar58);
    lVar59 = *(longlong *)(param_1 + 200);
    local_res8 = (undefined ***)CONCAT44(local_res8._4_4_,uVar57);
    FUN_1401607e0(lVar59 + 0x1bf8,&local_res18,&local_res8);
    if (local_res18 != *(ulonglong *)(lVar59 + 0x1c00)) {
      piVar20 = (int *)(*(longlong *)(local_res18 + 0x18) + 0x230);
      *piVar20 = *piVar20 + 1;
      lVar68 = *(longlong *)(local_res18 + 0x18);
    }
    *(longlong *)(param_1 + 0x2f0) = lVar68;
  }
LAB_14021aeb8:
  pppuVar79 = *(undefined ****)(param_1 + 0x2f0);
  if (pppuVar79 != (undefined ***)0x0) {
    lVar68 = *(longlong *)(param_1 + 200);
    *(undefined ****)(param_1 + 0x2e8) = pppuVar79 + 2;
    local_278 = &PTR_FUN_140491308;
    pcStack_270 = FUN_140225410;
    uStack_268 = CONCAT71(uStack_268._1_7_,local_res8._0_1_);
    pppuStack_240 = &local_278;
    *(int *)(lVar68 + 0x1c80) = *(int *)(lVar68 + 0x1c80) + 1;
    local_res8 = pppuVar79;
    lStack_260 = param_1;
    local_res18 = FUN_14007c330(pppuVar79,&local_res8);
    FUN_1401618d0(lVar68 + 0x1c40,&local_298,&local_res8,local_res18);
    plVar58 = plStack_290;
    if (plStack_290 == (longlong *)0x0) {
      if (*(longlong *)(lVar68 + 0x1c50) == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      plVar58 = (longlong *)FUN_14028af20(0x58);
      plVar58[2] = (longlong)local_res8;
      *(undefined4 *)(plVar58 + 3) = 0;
      plVar58[4] = 0;
      plVar58[5] = 0;
      lVar59 = FUN_14028af20(0x58);
      *(longlong *)lVar59 = lVar59;
      *(longlong *)(lVar59 + 8) = lVar59;
      plVar58[4] = lVar59;
      plVar58[6] = 0;
      plVar58[7] = 0;
      plVar58[8] = 0;
      plVar58[10] = 8;
      plVar58[9] = 7;
      *(undefined4 *)(plVar58 + 3) = 0x3f800000;
      FUN_14003e510(plVar58 + 6,0x10,plVar58[4]);
      fVar84 = (float)(*(longlong *)(lVar68 + 0x1c50) + 1);
      uVar72 = *(ulonglong *)(lVar68 + 0x1c78);
      uVar62 = local_res18;
      if (*(float *)(lVar68 + 0x1c40) < fVar84 / (float)uVar72) {
        auVar81._0_8_ = FUN_140419fa0(fVar84 / *(float *)(lVar68 + 0x1c40));
        auVar81._8_8_ = extraout_XMM0_Qb;
        lVar59 = 0;
        if ((DAT_140492974 <= (float)auVar81._0_8_) &&
           (auVar82._4_12_ = auVar81._4_12_, auVar82._0_4_ = (float)auVar81._0_8_ - DAT_140492974,
           auVar81._0_8_ = auVar82._0_8_, auVar82._0_4_ < DAT_140492974)) {
          lVar59 = -0x8000000000000000;
        }
        uVar60 = (longlong)(float)auVar81._0_8_ + lVar59;
        uVar62 = 8;
        if (8 < uVar60) {
          uVar62 = uVar60;
        }
        uVar60 = uVar72;
        if ((uVar72 < uVar62) && ((0x1ff < uVar72 || (uVar60 = uVar72 * 8, uVar72 * 8 < uVar62)))) {
          uVar60 = uVar62;
        }
        FUN_1401dc7b0(lVar68 + 0x1c40,uVar60);
        uVar62 = local_res18;
        plVar61 = (longlong *)FUN_1401618d0(lVar68 + 0x1c40,&local_238,plVar58 + 2,local_res18);
        local_298 = *plVar61;
        plStack_290 = (longlong *)plVar61[1];
      }
      plVar61 = *(longlong **)(local_298 + 8);
      *(longlong *)(lVar68 + 0x1c50) = *(longlong *)(lVar68 + 0x1c50) + 1;
      *plVar58 = local_298;
      plVar58[1] = (longlong)plVar61;
      *plVar61 = (longlong)plVar58;
      *(longlong **)(local_298 + 8) = plVar58;
      lVar59 = *(longlong *)(lVar68 + 0x1c58);
      uVar62 = *(ulonglong *)(lVar68 + 0x1c70) & uVar62;
      lVar77 = *(longlong *)(lVar59 + uVar62 * 0x10);
      if (lVar77 == *(longlong *)(lVar68 + 0x1c48)) {
        *(longlong **)(lVar59 + uVar62 * 0x10) = plVar58;
LAB_14021b14e:
        *(longlong **)(lVar59 + 8 + uVar62 * 0x10) = plVar58;
      }
      else if (lVar77 == local_298) {
        *(longlong **)(lVar59 + uVar62 * 0x10) = plVar58;
      }
      else if (*(longlong **)(lVar59 + 8 + uVar62 * 0x10) == plVar61) goto LAB_14021b14e;
    }
    plVar58 = (longlong *)FUN_1401dace0(plVar58 + 3,&local_238,lVar68 + 0x1c80);
    lVar59 = *plVar58;
    local_190 = (longlong *)0x0;
    plVar58 = (longlong *)(lVar59 + 0x18);
    if (pppuStack_240 != (undefined ***)0x0) {
      local_190 = (longlong *)(*(code *)**pppuStack_240)(pppuStack_240,local_1c8);
    }
    if ((local_190 == local_1c8) || (plVar61 = *(longlong **)(lVar59 + 0x50), plVar61 == plVar58)) {
      local_120 = (longlong *)0x0;
      FUN_140037830(local_158,local_1c8);
      FUN_140037830(local_1c8,plVar58);
      FUN_140037830(plVar58,local_158);
      if (local_120 != (longlong *)0x0) {
        (**(code **)(*local_120 + 0x20))
                  (local_120,CONCAT71((int7)((ulonglong)local_158 >> 8),local_120 != local_158));
      }
    }
    else {
      *(longlong **)(lVar59 + 0x50) = local_190;
      local_190 = plVar61;
    }
    if (local_190 != (longlong *)0x0) {
      (**(code **)(*local_190 + 0x20))
                (local_190,CONCAT71((int7)((ulonglong)local_1c8 >> 8),local_190 != local_1c8));
    }
    uVar57 = *(undefined4 *)(lVar68 + 0x1c80);
    FUN_1400190c0(&local_278);
    *(undefined4 *)(param_1 + 0x314) = uVar57;
  }
  FUN_140224c70(param_1);
  plVar58 = *(longlong **)(param_1 + 0x2e8);
  if (plVar58 == (longlong *)0x0) {
    return;
  }
  if (*plVar58 == 0) {
    return;
  }
  if (plVar58[6] == plVar58[7]) {
    return;
  }
  puVar63 = (undefined4 *)FUN_14028af20(0xb8);
  *(undefined8 *)(puVar63 + 6) = 0;
  *(undefined8 *)(puVar63 + 8) = 0;
  *(undefined8 *)(puVar63 + 10) = 0;
  *puVar63 = 0;
  *(undefined8 *)(puVar63 + 2) = 0;
  *(undefined8 *)(puVar63 + 4) = 0;
  *(undefined8 *)(puVar63 + 0xe) = 0;
  *(undefined8 *)(puVar63 + 0x10) = 0;
  *(undefined8 *)(puVar63 + 0xc) = 0;
  *(undefined8 *)(puVar63 + 0x12) = 0;
  *(undefined8 *)(puVar63 + 0x14) = 0;
  *(undefined8 *)(puVar63 + 0x16) = 0;
  *(undefined8 *)(puVar63 + 0x18) = 0;
  *(undefined8 *)(puVar63 + 0x1a) = 0;
  *(undefined8 *)(puVar63 + 0x1c) = 0;
  *(undefined8 *)(puVar63 + 0x1e) = 0;
  *(undefined8 *)(puVar63 + 0x20) = 0;
  *(undefined8 *)(puVar63 + 0x22) = 0;
  *(undefined8 *)(puVar63 + 0x24) = 0;
  *(undefined8 *)(puVar63 + 0x26) = 0;
  *(undefined8 *)(puVar63 + 0x28) = 0;
  *(undefined8 *)(puVar63 + 0x2a) = 0;
  *(undefined8 *)(puVar63 + 0x2c) = 0;
  *(undefined4 **)(param_1 + 0x2d8) = puVar63;
  uVar62 = (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x38) -
            *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x30) >> 4) * -0x1111111111111111;
  uVar80 = (uint)uVar62;
  uVar72 = uVar62 & 0xffffffff;
  FUN_1401d9660(puVar63 + 0xc,uVar62 & 0xffffffff);
  FUN_1401d9660(*(longlong *)(param_1 + 0x2d8) + 0x18,uVar62 & 0xffffffff);
  local_278 = _DAT_140492a60;
  pcStack_270 = _UNK_140492a68;
  uStack_268 = _DAT_140492a90;
  lStack_260 = _UNK_140492a98;
  local_258 = _DAT_140492b40;
  uStack_250 = _UNK_140492b48;
  local_248 = _DAT_140492de0;
  pppuStack_240 = (undefined ***)_UNK_140492de8;
  FUN_140215e70(*(longlong *)(param_1 + 0x2d8) + 0x48,uVar62 & 0xffffffff,&local_278);
  uVar56 = uVar80 & 0x80000003;
  if ((int)uVar56 < 0) {
    uVar56 = (uVar56 - 1 | 0xfffffffc) + 1;
  }
  iVar69 = 4 - uVar56;
  if (uVar56 == 0) {
    iVar69 = 0;
  }
  **(int **)(param_1 + 0x2d8) = iVar69 + uVar80;
  pvVar64 = _aligned_malloc((ulonglong)(uint)(**(int **)(param_1 + 0x2d8) * 0x28),0x10);
  *(void **)(*(longlong *)(param_1 + 0x2d8) + 8) = pvVar64;
  pvVar64 = _aligned_malloc((ulonglong)(uint)(**(int **)(param_1 + 0x2d8) * 0x28),0x10);
  *(void **)(*(longlong *)(param_1 + 0x2d8) + 0x10) = pvVar64;
  FUN_1404217a0(*(undefined8 *)(*(int **)(param_1 + 0x2d8) + 2),0,**(int **)(param_1 + 0x2d8) * 0x28
               );
  FUN_1404217a0(*(undefined8 *)(*(int **)(param_1 + 0x2d8) + 4),0,**(int **)(param_1 + 0x2d8) * 0x28
               );
  uVar56 = 0;
  bVar49 = false;
  bVar52 = false;
  if (uVar80 != 0) {
    do {
      bVar49 = bVar52;
      lVar59 = (longlong)(int)uVar56 * 0xf0;
      lVar68 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x30);
      lVar77 = (longlong)(int)uVar56 * 0x40;
      uVar19 = *(uint *)(lVar59 + 0x60 + lVar68);
      puVar74 = (undefined8 *)(lVar68 + 0x20 + lVar59);
      if (uVar19 == 0xffffffff) {
        auVar81._0_8_ = puVar74[1];
        uVar21 = puVar74[2];
        uVar22 = puVar74[3];
        lVar75 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x18);
        uVar45 = puVar74[4];
        uVar46 = puVar74[5];
        uVar47 = puVar74[6];
        uVar48 = puVar74[7];
        *(undefined8 *)(lVar75 + lVar77) = *puVar74;
        ((undefined8 *)(lVar75 + lVar77))[1] = auVar81._0_8_;
        puVar74 = (undefined8 *)(lVar75 + 0x10 + lVar77);
        *puVar74 = uVar21;
        puVar74[1] = uVar22;
        puVar74 = (undefined8 *)(lVar75 + 0x20 + lVar77);
        *puVar74 = uVar45;
        puVar74[1] = uVar46;
        puVar74 = (undefined8 *)(lVar75 + 0x30 + lVar77);
        *puVar74 = uVar47;
        puVar74[1] = uVar48;
      }
      else {
        puVar74 = (undefined8 *)
                  FUN_14005ecb0(&local_278,
                                (ulonglong)uVar19 * 0x40 +
                                *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x18));
        auVar81._0_8_ = puVar74[1];
        lVar75 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x18);
        uVar21 = puVar74[2];
        uVar22 = puVar74[3];
        uVar45 = puVar74[4];
        uVar46 = puVar74[5];
        uVar47 = puVar74[6];
        uVar48 = puVar74[7];
        *(undefined8 *)(lVar75 + lVar77) = *puVar74;
        ((undefined8 *)(lVar75 + lVar77))[1] = auVar81._0_8_;
        puVar74 = (undefined8 *)(lVar75 + 0x10 + lVar77);
        *puVar74 = uVar21;
        puVar74[1] = uVar22;
        puVar74 = (undefined8 *)(lVar75 + 0x20 + lVar77);
        *puVar74 = uVar45;
        puVar74[1] = uVar46;
        puVar74 = (undefined8 *)(lVar75 + 0x30 + lVar77);
        *puVar74 = uVar47;
        puVar74[1] = uVar48;
      }
      if ((*(uint *)(lVar59 + 0x68 + lVar68) & 0x3000) != 0) {
        bVar49 = true;
      }
      uVar56 = uVar56 + 1;
      bVar52 = bVar49;
    } while (uVar56 < uVar80);
  }
  uVar56 = 0;
  if (uVar80 != 0) {
    do {
      lVar59 = (longlong)(int)uVar56 * 0x40;
      FUN_14005f730(&local_278,*(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x18) + lVar59);
      uVar56 = uVar56 + 1;
      lVar68 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x18);
      *(undefined8 *)(lVar68 + lVar59) = local_278;
      ((undefined8 *)(lVar68 + lVar59))[1] = pcStack_270;
      puVar74 = (undefined8 *)(lVar68 + 0x10 + lVar59);
      *puVar74 = uStack_268;
      puVar74[1] = lStack_260;
      puVar74 = (undefined8 *)(lVar68 + 0x20 + lVar59);
      *puVar74 = local_258;
      puVar74[1] = uStack_250;
      puVar74 = (undefined8 *)(lVar68 + 0x30 + lVar59);
      *puVar74 = local_248;
      puVar74[1] = pppuStack_240;
    } while (uVar56 < uVar80);
    uVar62 = 0;
    do {
      iVar69 = (int)uVar62;
      lVar59 = (longlong)iVar69 * 0xf0;
      lVar68 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x30);
      puVar74 = (undefined8 *)(lVar68 + 0x20 + lVar59);
      local_288 = *puVar74;
      uStack_280 = puVar74[1];
      uVar57 = *(undefined4 *)(lVar68 + 0x50 + lVar59);
      uVar3 = *(undefined4 *)(lVar68 + 0x54 + lVar59);
      uVar4 = *(undefined4 *)(lVar68 + 0x58 + lVar59);
      puVar65 = (undefined8 *)FUN_140214eb0(&local_238,&local_288);
      puVar74 = (undefined8 *)(lVar68 + 0x30 + lVar59);
      local_288 = *puVar74;
      uStack_280 = puVar74[1];
      puVar66 = (undefined8 *)FUN_140214eb0(&local_1d8,&local_288);
      puVar74 = (undefined8 *)(lVar68 + 0x40 + lVar59);
      local_288 = *puVar74;
      uStack_280 = puVar74[1];
      puVar74 = (undefined8 *)FUN_140214eb0(&local_1e8,&local_288);
      local_278 = (undefined **)*puVar65;
      pcStack_270 = (code *)puVar65[1];
      uStack_268 = *puVar66;
      lStack_260 = puVar66[1];
      local_258 = *puVar74;
      uStack_250 = puVar74[1];
      puVar74 = (undefined8 *)(lVar68 + 0x50 + lVar59);
      local_248 = *puVar74;
      pppuStack_240 = (undefined ***)puVar74[1];
      FUN_140215730(&local_2a8,&local_278);
      uVar5 = *(undefined4 *)(lVar68 + 0x48 + lVar59);
      fVar84 = *(float *)(lVar68 + 0x40 + lVar59);
      fVar6 = *(float *)(lVar68 + 0x44 + lVar59);
      fVar7 = *(float *)(lVar68 + 0x4c + lVar59);
      fVar85 = *(float *)(lVar68 + 0x30 + lVar59);
      fVar8 = *(float *)(lVar68 + 0x34 + lVar59);
      fVar9 = *(float *)(lVar68 + 0x38 + lVar59);
      fVar10 = *(float *)(lVar68 + 0x3c + lVar59);
      fVar83 = *(float *)(lVar68 + 0x20 + lVar59);
      fVar11 = *(float *)(lVar68 + 0x24 + lVar59);
      fVar12 = *(float *)(lVar68 + 0x28 + lVar59);
      fVar13 = *(float *)(lVar68 + 0x2c + lVar59);
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x2d8) + 8) + uVar62 * 4) = uVar57;
      local_res8 = (undefined ***)CONCAT44(local_res8._4_4_,uVar5);
      *(undefined4 *)
       (*(longlong *)(*(int **)(param_1 + 0x2d8) + 2) +
       (ulonglong)(uint)(**(int **)(param_1 + 0x2d8) + iVar69) * 4) = uVar3;
      *(undefined4 *)
       (*(longlong *)(*(int **)(param_1 + 0x2d8) + 2) +
       (ulonglong)(uint)(iVar69 + **(int **)(param_1 + 0x2d8) * 2) * 4) = uVar4;
      *(float *)(*(longlong *)(*(int **)(param_1 + 0x2d8) + 2) +
                (ulonglong)(uint)(iVar69 + **(int **)(param_1 + 0x2d8) * 3) * 4) = local_2a8;
      *(float *)(*(longlong *)(*(int **)(param_1 + 0x2d8) + 2) +
                (ulonglong)(uint)(iVar69 + **(int **)(param_1 + 0x2d8) * 4) * 4) = fStack_2a4;
      *(float *)(*(longlong *)(*(int **)(param_1 + 0x2d8) + 2) +
                (ulonglong)(uint)(iVar69 + **(int **)(param_1 + 0x2d8) * 5) * 4) = fStack_2a0;
      *(float *)(*(longlong *)(*(int **)(param_1 + 0x2d8) + 2) +
                (ulonglong)(uint)(iVar69 + **(int **)(param_1 + 0x2d8) * 6) * 4) = fStack_29c;
      piVar20 = *(int **)(param_1 + 0x2d8);
      fVar83 = fVar83 * fVar83 + fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12;
      if (fVar83 < 0.0) {
        fVar83 = (float)FUN_14041ad10();
      }
      else {
        fVar83 = SQRT(fVar83);
      }
      *(float *)(*(longlong *)(piVar20 + 2) + (ulonglong)(uint)(*piVar20 * 7 + iVar69) * 4) = fVar83
      ;
      piVar20 = *(int **)(param_1 + 0x2d8);
      fVar85 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 + fVar85 * fVar85;
      if (fVar85 < 0.0) {
        fVar85 = (float)FUN_14041ad10();
      }
      else {
        fVar85 = SQRT(fVar85);
      }
      *(float *)(*(longlong *)(piVar20 + 2) + (ulonglong)(uint)(iVar69 + *piVar20 * 8) * 4) = fVar85
      ;
      piVar20 = *(int **)(param_1 + 0x2d8);
      fVar84 = fVar7 * fVar7 + local_res8._0_4_ * local_res8._0_4_ + fVar6 * fVar6 + fVar84 * fVar84
      ;
      if (fVar84 < 0.0) {
        fVar84 = (float)FUN_14041ad10();
      }
      else {
        fVar84 = SQRT(fVar84);
      }
      uVar62 = (ulonglong)(iVar69 + 1U);
      *(float *)(*(longlong *)(piVar20 + 2) + (ulonglong)(uint)(iVar69 + *piVar20 * 9) * 4) = fVar84
      ;
    } while (iVar69 + 1U < uVar80);
  }
  puVar74 = (undefined8 *)0x0;
  lVar68 = *(longlong *)(param_1 + 0x2d8);
  iVar69 = 0;
  if (*(longlong *)(lVar68 + 0x38) - *(longlong *)(lVar68 + 0x30) >> 6 != 0) {
    do {
      lVar77 = (longlong)iVar69;
      lVar75 = lVar77 * 0xf0;
      lVar59 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x30);
      uVar56 = *(uint *)(lVar59 + 0x60 + lVar75);
      if (uVar56 == 0xffffffff) {
        lVar68 = *(longlong *)(lVar68 + 0x30);
        puVar65 = (undefined8 *)(lVar59 + 0x20 + lVar75);
        auVar81._0_8_ = puVar65[1];
        lVar77 = lVar77 * 0x40;
        puVar66 = (undefined8 *)(lVar59 + 0x30 + lVar75);
        uVar21 = *puVar66;
        uVar22 = puVar66[1];
        puVar66 = (undefined8 *)(lVar59 + 0x40 + lVar75);
        uVar45 = *puVar66;
        uVar46 = puVar66[1];
        puVar66 = (undefined8 *)(lVar59 + 0x50 + lVar75);
        uVar47 = *puVar66;
        uVar48 = puVar66[1];
        *(undefined8 *)(lVar68 + lVar77) = *puVar65;
        ((undefined8 *)(lVar68 + lVar77))[1] = auVar81._0_8_;
        puVar65 = (undefined8 *)(lVar68 + 0x10 + lVar77);
        *puVar65 = uVar21;
        puVar65[1] = uVar22;
        puVar65 = (undefined8 *)(lVar68 + 0x20 + lVar77);
        *puVar65 = uVar45;
        puVar65[1] = uVar46;
        puVar65 = (undefined8 *)(lVar68 + 0x30 + lVar77);
        *puVar65 = uVar47;
        puVar65[1] = uVar48;
      }
      else {
        lVar71 = *(longlong *)(lVar68 + 0x30);
        fVar84 = *(float *)(lVar59 + 0x2c + lVar75);
        fVar6 = *(float *)(lVar59 + 0x28 + lVar75);
        fVar7 = *(float *)(lVar59 + 0x24 + lVar75);
        fVar85 = *(float *)(lVar59 + 0x20 + lVar75);
        lVar67 = (ulonglong)uVar56 * 0x40;
        pfVar1 = (float *)(lVar71 + lVar67);
        fVar25 = *pfVar1;
        fStack_2a4 = pfVar1[1];
        local_298 = *(longlong *)pfVar1;
        local_228 = pfVar1[2];
        local_1f8 = pfVar1[3];
        plStack_290 = *(longlong **)(pfVar1 + 2);
        pfVar2 = (float *)(lVar71 + 0x30 + lVar67);
        local_168 = pfVar2[1];
        local_1d8 = pfVar2[2];
        local_238 = pfVar2[3];
        lVar68 = lVar71 + 0x10 + lVar67;
        local_188 = *(float *)(lVar68 + 4);
        local_218 = *(float *)(lVar68 + 8);
        local_208 = *(float *)(lVar68 + 0xc);
        lVar68 = lVar71 + 0x20 + lVar67;
        local_178 = *(float *)(lVar68 + 4);
        local_1e8 = *(float *)(lVar68 + 8);
        fVar26 = *(float *)(lVar68 + 0xc);
        local_288 = CONCAT44(fVar26,fVar26);
        uStack_280 = CONCAT44(fVar26,fVar26);
        fVar27 = *(float *)(lVar71 + 0x10 + lVar67);
        fVar8 = *(float *)(lVar59 + 0x30 + lVar75);
        fVar9 = *(float *)(lVar59 + 0x38 + lVar75);
        fVar10 = *(float *)(lVar59 + 0x3c + lVar75);
        fVar83 = *(float *)(lVar59 + 0x34 + lVar75);
        fVar28 = *(float *)(lVar71 + 0x20 + lVar67);
        fVar29 = *(float *)(lVar71 + 0x30 + lVar67);
        fVar11 = *(float *)(lVar59 + 0x4c + lVar75);
        fVar30 = *(float *)(lVar71 + 0x10 + lVar67);
        fVar12 = *(float *)(lVar59 + 0x48 + lVar75);
        fVar31 = *(float *)(lVar71 + 0x30 + lVar67);
        fVar13 = *(float *)(lVar59 + 0x44 + lVar75);
        fVar14 = *(float *)(lVar59 + 0x40 + lVar75);
        fVar32 = *(float *)(lVar71 + 0x20 + lVar67);
        lVar77 = lVar77 * 0x40;
        fVar15 = *(float *)(lVar59 + 0x58 + lVar75);
        local_2a8 = fStack_2a4 * fVar14 + local_188 * fVar13 + local_178 * fVar12 +
                    local_168 * fVar11;
        pfVar1 = (float *)(lVar71 + 0x10 + lVar67);
        fVar33 = *pfVar1;
        fVar34 = pfVar1[1];
        fVar35 = pfVar1[2];
        fVar36 = pfVar1[3];
        fVar16 = *(float *)(lVar59 + 0x5c + lVar75);
        pfVar1 = (float *)(lVar71 + 0x20 + lVar67);
        fVar37 = *pfVar1;
        fVar38 = pfVar1[1];
        fVar39 = pfVar1[2];
        fVar40 = pfVar1[3];
        pfVar1 = (float *)(lVar71 + 0x30 + lVar67);
        fVar41 = *pfVar1;
        fVar42 = pfVar1[1];
        fVar43 = pfVar1[2];
        fVar44 = pfVar1[3];
        fVar17 = *(float *)(lVar59 + 0x50 + lVar75);
        fVar18 = *(float *)(lVar59 + 0x54 + lVar75);
        pfVar1 = (float *)(lVar71 + lVar77);
        *pfVar1 = fVar84 * *pfVar2 +
                  fVar6 * *(float *)(lVar71 + 0x20 + lVar67) +
                  fVar7 * *(float *)(lVar71 + 0x10 + lVar67) + fVar85 * fVar25;
        pfVar1[1] = fVar84 * local_168 + local_178 * fVar6 + local_188 * fVar7 + fVar85 * fStack_2a4
        ;
        pfVar1[2] = fVar84 * local_1d8 + local_218 * fVar7 + fVar85 * local_228 + fVar6 * local_1e8;
        pfVar1[3] = fVar84 * local_238 + fVar6 * fVar26 + fVar7 * local_208 + fVar85 * local_1f8;
        pfVar1 = (float *)(lVar71 + 0x10 + lVar77);
        *pfVar1 = fVar10 * fVar29 + fVar9 * fVar28 + fVar83 * fVar27 + fVar8 * fVar25;
        pfVar1[1] = local_168 * fVar10 + local_178 * fVar9 + fVar83 * local_188 + fStack_2a4 * fVar8
        ;
        pfVar1[2] = fVar10 * local_1d8 + local_1e8 * fVar9 + fVar8 * local_228 + fVar83 * local_218;
        pfVar1[3] = fVar10 * local_238 + fVar9 * fVar26 + fVar83 * local_208 + fVar8 * local_1f8;
        pfVar1 = (float *)(lVar71 + 0x20 + lVar77);
        *pfVar1 = fVar14 * fVar25 + fVar13 * fVar30 + fVar12 * fVar32 + fVar31 * fVar11;
        pfVar1[1] = local_2a8;
        pfVar1[2] = local_218 * fVar13 + local_228 * fVar14 + local_1e8 * fVar12 +
                    local_1d8 * fVar11;
        pfVar1[3] = local_1f8 * fVar14 + local_208 * fVar13 + fVar26 * fVar12 + local_238 * fVar11;
        pfVar1 = (float *)(lVar71 + 0x30 + lVar77);
        *pfVar1 = fVar25 * fVar17 + fVar33 * fVar18 + fVar37 * fVar15 + fVar41 * fVar16;
        pfVar1[1] = fStack_2a4 * fVar17 + fVar34 * fVar18 + fVar38 * fVar15 + fVar42 * fVar16;
        pfVar1[2] = local_228 * fVar17 + fVar35 * fVar18 + fVar39 * fVar15 + fVar43 * fVar16;
        pfVar1[3] = local_1f8 * fVar17 + fVar36 * fVar18 + fVar40 * fVar15 + fVar44 * fVar16;
        fStack_2a0 = fStack_2a4;
        fStack_29c = fStack_2a4;
        fStack_234 = local_238;
        fStack_230 = local_238;
        fStack_22c = local_238;
        fStack_224 = local_228;
        fStack_220 = local_228;
        fStack_21c = local_228;
        fStack_214 = local_218;
        fStack_210 = local_218;
        fStack_20c = local_218;
        fStack_204 = local_208;
        fStack_200 = local_208;
        fStack_1fc = local_208;
        fStack_1f4 = local_1f8;
        fStack_1f0 = local_1f8;
        fStack_1ec = local_1f8;
        fStack_1e4 = local_1e8;
        fStack_1e0 = local_1e8;
        fStack_1dc = local_1e8;
        fStack_1d4 = local_1d8;
        fStack_1d0 = local_1d8;
        fStack_1cc = local_1d8;
        fStack_184 = local_188;
        fStack_180 = local_188;
        fStack_17c = local_188;
        fStack_174 = local_178;
        fStack_170 = local_178;
        fStack_16c = local_178;
        fStack_164 = local_168;
        fStack_160 = local_168;
        fStack_15c = local_168;
      }
      lVar68 = *(longlong *)(param_1 + 0x2d8);
      iVar69 = iVar69 + 1;
    } while ((ulonglong)(longlong)iVar69 <
             (ulonglong)(*(longlong *)(lVar68 + 0x38) - *(longlong *)(lVar68 + 0x30) >> 6));
  }
  if (bVar49) {
    lVar59 = *(longlong *)(lVar68 + 0xa0);
    lVar77 = *(longlong *)(lVar68 + 0xa8) - lVar59 >> 4;
    if (uVar72 < (ulonglong)(lVar77 * -0x3333333333333333)) {
      lVar59 = uVar72 * 0x50 + lVar59;
LAB_14021bef7:
      *(longlong *)(lVar68 + 0xa8) = lVar59;
      goto LAB_14021befe;
    }
    if (uVar72 <= (ulonglong)(lVar77 * -0x3333333333333333)) goto LAB_14021befe;
    uVar62 = (*(longlong *)(lVar68 + 0xb0) - lVar59 >> 4) * -0x3333333333333333;
    if (uVar72 <= uVar62) {
      lVar59 = FUN_1402193d0(*(longlong *)(lVar68 + 0xa8),uVar72 + lVar77 * 0x3333333333333333);
      goto LAB_14021bef7;
    }
    uVar60 = 0x333333333333333 - (uVar62 >> 1);
    if ((uVar60 <= uVar62 && uVar62 - uVar60 != 0) ||
       ((uVar62 = (uVar62 >> 1) + uVar62, uVar60 = uVar72, uVar72 <= uVar62 &&
        (uVar60 = uVar62, 0x333333333333333 < uVar62)))) goto LAB_14021c46f;
    uVar62 = uVar60 * 0x50;
    puVar65 = puVar74;
    if (uVar62 == 0) {
LAB_14021be35:
      FUN_1402193d0(puVar65 + lVar77 * 2,uVar72 + lVar77 * 0x3333333333333333);
      FUN_1404210f0(puVar65,*(longlong *)(lVar68 + 0xa0),
                    *(longlong *)(lVar68 + 0xa8) - *(longlong *)(lVar68 + 0xa0));
      lVar59 = *(longlong *)(lVar68 + 0xa0);
      if (lVar59 != 0) {
        uVar62 = (*(longlong *)(lVar68 + 0xb0) - lVar59 >> 4) * 0x10;
        if (0xfff < uVar62) {
          if (0x1f < (lVar59 - *(longlong *)(lVar59 + -8)) - 8U) goto LAB_14021c398;
          uVar62 = uVar62 + 0x27;
          lVar59 = *(longlong *)(lVar59 + -8);
        }
        thunk_FUN_14028af80(lVar59,uVar62);
      }
      *(undefined8 **)(lVar68 + 0xa0) = puVar65;
      *(undefined8 **)(lVar68 + 0xa8) = puVar65 + uVar72 * 10;
      puVar74 = (undefined8 *)0x0;
      *(undefined8 **)(lVar68 + 0xb0) = puVar65 + uVar60 * 10;
      goto LAB_14021befe;
    }
    if (uVar62 < 0x1000) {
      puVar65 = (undefined8 *)FUN_14028af20(uVar62);
      goto LAB_14021be35;
    }
    if (uVar62 + 0x27 <= uVar62) goto LAB_14021c46f;
    lVar59 = FUN_14028af20();
    if (lVar59 != 0) {
      puVar65 = (undefined8 *)(lVar59 + 0x27U & 0xffffffffffffffe0);
      puVar65[-1] = lVar59;
      goto LAB_14021be35;
    }
LAB_14021c398:
    pcVar24 = (code *)swi(0x29);
    plVar58 = (longlong *)(*pcVar24)(5);
    puVar73 = auStack_2d0;
  }
  else {
LAB_14021befe:
    lVar68 = *(longlong *)(param_1 + 0x2d8);
    puVar65 = *(undefined8 **)(lVar68 + 0x68);
    lVar59 = *(longlong *)(lVar68 + 0x60);
    lVar77 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x18) -
             *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x10) >> 3;
    pppuVar79 = (undefined ***)(lVar77 * -0x70a3d70a3d70a3d7);
    local_res8 = (undefined ***)((longlong)puVar65 - lVar59 >> 5);
    if (pppuVar79 < local_res8) {
      puVar66 = (undefined8 *)(lVar77 * -0x147ae147ae147ae0 + lVar59);
      for (puVar74 = puVar66; puVar74 != puVar65; puVar74 = puVar74 + 4) {
        FUN_140031b80(puVar74 + 1);
      }
      *(undefined8 **)(lVar68 + 0x68) = puVar66;
    }
    else if ((longlong)pppuVar79 - (longlong)local_res8 != 0) {
      pppuVar70 = (undefined ***)(*(longlong *)(lVar68 + 0x70) - lVar59 >> 5);
      if (pppuVar79 < pppuVar70 || (longlong)pppuVar79 - (longlong)pppuVar70 == 0) {
        for (lVar59 = (longlong)pppuVar79 - (longlong)local_res8; lVar59 != 0; lVar59 = lVar59 + -1)
        {
          *puVar65 = puVar74;
          puVar65[1] = puVar74;
          puVar65[2] = puVar74;
          puVar65[3] = puVar74;
          puVar65 = puVar65 + 4;
        }
        *(undefined8 **)(lVar68 + 0x68) = puVar65;
      }
      else {
        if ((undefined ***)0x7ffffffffffffff < pppuVar79) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        if (((undefined ***)(0x7ffffffffffffff - ((ulonglong)pppuVar70 >> 1)) < pppuVar70) ||
           ((pppuVar70 = (undefined ***)(((ulonglong)pppuVar70 >> 1) + (longlong)pppuVar70),
            pppuVar78 = pppuVar79, pppuVar79 <= pppuVar70 &&
            (pppuVar78 = pppuVar70, (undefined ***)0x7ffffffffffffff < pppuVar70)))) {
LAB_14021c46f:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar72 = (longlong)pppuVar78 * 0x20;
        puVar66 = puVar74;
        if (uVar72 != 0) {
          if (uVar72 < 0x1000) {
            puVar66 = (undefined8 *)FUN_14028af20(uVar72);
          }
          else {
            if (uVar72 + 0x27 <= uVar72) goto LAB_14021c46f;
            lVar75 = FUN_14028af20();
            if (lVar75 == 0) goto LAB_14021c398;
            puVar66 = (undefined8 *)(lVar75 + 0x27U & 0xffffffffffffffe0);
            puVar66[-1] = lVar75;
          }
          puVar74 = (undefined8 *)0x0;
        }
        puVar65 = (undefined8 *)
                  (((longlong)puVar65 - lVar59 & 0xffffffffffffffe0U) + (longlong)puVar66);
        for (lVar59 = (longlong)pppuVar79 - (longlong)local_res8; lVar59 != 0; lVar59 = lVar59 + -1)
        {
          *puVar65 = puVar74;
          puVar65[1] = puVar74;
          puVar65[2] = puVar74;
          puVar65[3] = puVar74;
          puVar65 = puVar65 + 4;
        }
        puVar65 = *(undefined8 **)(lVar68 + 0x68);
        puVar51 = puVar66;
        for (puVar76 = *(undefined8 **)(lVar68 + 0x60); puVar76 != puVar65; puVar76 = puVar76 + 4) {
          *puVar51 = *puVar76;
          auVar81._0_8_ = puVar76[3];
          uVar21 = puVar76[2];
          uVar22 = puVar76[1];
          puVar76[3] = puVar74;
          puVar76[2] = puVar74;
          puVar76[1] = puVar74;
          puVar51[1] = uVar22;
          puVar51[2] = uVar21;
          puVar51[3] = auVar81._0_8_;
          puVar51 = puVar51 + 4;
        }
        lVar59 = *(longlong *)(lVar68 + 0x60);
        if (lVar59 != 0) {
          lVar75 = *(longlong *)(lVar68 + 0x68);
          for (; lVar59 != lVar75; lVar59 = lVar59 + 0x20) {
            FUN_140031b80(lVar59 + 8);
          }
          lVar59 = *(longlong *)(lVar68 + 0x60);
          uVar72 = *(longlong *)(lVar68 + 0x70) - lVar59 & 0xffffffffffffffe0;
          if (0xfff < uVar72) {
            if (0x1f < (lVar59 - *(longlong *)(lVar59 + -8)) - 8U) goto LAB_14021c398;
            uVar72 = uVar72 + 0x27;
            lVar59 = *(longlong *)(lVar59 + -8);
          }
          thunk_FUN_14028af80(lVar59,uVar72);
        }
        *(undefined8 **)(lVar68 + 0x60) = puVar66;
        *(undefined8 **)(lVar68 + 0x68) = puVar66 + lVar77 * -0x28f5c28f5c28f5c;
        *(undefined8 **)(lVar68 + 0x70) = puVar66 + (longlong)pppuVar78 * 4;
      }
    }
    lVar68 = *(longlong *)(param_1 + 0x2e8);
    iVar69 = 0;
    local_res8 = (undefined ***)((ulonglong)local_res8 & 0xffffffff00000000);
    if ((*(longlong *)(lVar68 + 0x18) - *(longlong *)(lVar68 + 0x10) >> 3) * -0x70a3d70a3d70a3d7 !=
        0) {
      do {
        lVar71 = (longlong)iVar69 * 200;
        lVar77 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x60);
        lVar67 = (longlong)iVar69 * 0x20;
        lVar75 = *(longlong *)(lVar67 + 0x10 + lVar77);
        lVar59 = *(longlong *)(lVar67 + 8 + lVar77);
        uVar72 = *(longlong *)(*(longlong *)(lVar68 + 0x10) + 0x70 + lVar71) -
                 *(longlong *)(*(longlong *)(lVar68 + 0x10) + 0x68 + lVar71) >> 6;
        uVar62 = lVar75 - lVar59 >> 2;
        if (uVar72 < uVar62) {
          lVar59 = lVar59 + uVar72 * 4;
LAB_14021c313:
          *(longlong *)(lVar67 + 0x10 + lVar77) = lVar59;
        }
        else if (uVar62 < uVar72) {
          uVar60 = *(longlong *)(lVar67 + 0x18 + lVar77) - lVar59 >> 2;
          if (uVar72 <= uVar60) {
            lVar59 = (uVar72 - uVar62) * 4;
            FUN_1404217a0(lVar75,0,lVar59);
            lVar59 = lVar59 + lVar75;
            goto LAB_14021c313;
          }
          if (0x3fffffffffffffff < uVar72) {
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          if ((0x3fffffffffffffff - (uVar60 >> 1) < uVar60) ||
             ((uVar60 = (uVar60 >> 1) + uVar60, local_res18 = uVar72, uVar72 <= uVar60 &&
              (local_res18 = uVar60, 0x3fffffffffffffff < uVar60)))) goto LAB_14021c46f;
          uVar60 = local_res18 * 4;
          if (uVar60 == 0) {
            uVar60 = 0;
          }
          else if (uVar60 < 0x1000) {
            uVar60 = FUN_14028af20();
          }
          else {
            if (uVar60 + 0x27 <= uVar60) goto LAB_14021c46f;
            lVar68 = FUN_14028af20(uVar60 + 0x27);
            if (lVar68 == 0) goto LAB_14021c398;
            uVar60 = lVar68 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar60 - 8) = lVar68;
          }
          FUN_1404217a0(uVar60 + (lVar75 - lVar59 & 0xfffffffffffffffcU),0,(uVar72 - uVar62) * 4);
          lVar68 = *(longlong *)(lVar67 + 8 + lVar77);
          FUN_1404210f0(uVar60,lVar68,*(longlong *)(lVar67 + 0x10 + lVar77) - lVar68);
          FUN_140038af0(lVar67 + lVar77 + 8,uVar60,uVar72,local_res18);
        }
        lVar68 = *(longlong *)(param_1 + 0x2e8);
        iVar69 = (int)local_res8._0_4_ + 1;
        local_res8 = (undefined ***)CONCAT44(local_res8._4_4_,iVar69);
      } while ((ulonglong)(longlong)iVar69 <
               (ulonglong)
               ((*(longlong *)(lVar68 + 0x18) - *(longlong *)(lVar68 + 0x10) >> 3) *
               -0x70a3d70a3d70a3d7));
    }
    plVar58 = (longlong *)FUN_140086de0(local_res10,"animationlayers","");
    if ((*(uint *)(plVar58 + 1) & 0xff) != 6) {
      return;
    }
    if ((undefined8 *)*plVar58 != (undefined8 *)0x0) {
      bVar49 = false;
      plVar61 = (longlong *)**(undefined8 **)*plVar58;
      puVar73 = auStack_2d8;
      goto LAB_14021c3a4;
    }
  }
  plVar61 = (longlong *)0x0;
  bVar49 = true;
LAB_14021c3a4:
  if ((undefined8 *)*plVar58 == (undefined8 *)0x0) {
    bVar52 = true;
    plVar58 = (longlong *)0x0;
  }
  else {
    plVar58 = *(longlong **)*plVar58;
    bVar52 = false;
  }
  while( true ) {
    bVar50 = bVar52;
    if (!bVar49) {
      bVar50 = plVar61 == plVar58;
    }
    if (bVar50) break;
    if ((char)plVar61[7] == '\a') {
      *(undefined8 *)(puVar73 + -8) = 0x14021c3de;
      FUN_1402230c0(param_1,plVar61 + 6);
    }
    plVar23 = (longlong *)plVar61[2];
    if (*(char *)((longlong)plVar23 + 0x19) == '\0') {
      cVar55 = *(char *)(*plVar23 + 0x19);
      plVar61 = plVar23;
      while (cVar55 == '\0') {
        plVar61 = (longlong *)*plVar61;
        cVar55 = *(char *)(*plVar61 + 0x19);
      }
    }
    else {
      cVar55 = *(char *)(plVar61[1] + 0x19);
      plVar53 = (longlong *)plVar61[1];
      plVar23 = plVar61;
      while ((plVar61 = plVar53, cVar55 == '\0' && (plVar23 == (longlong *)plVar61[2]))) {
        cVar55 = *(char *)(plVar61[1] + 0x19);
        plVar53 = (longlong *)plVar61[1];
        plVar23 = plVar61;
      }
    }
  }
  return;
}

