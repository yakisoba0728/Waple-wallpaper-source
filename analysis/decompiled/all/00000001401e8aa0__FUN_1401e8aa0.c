// Function: FUN_1401e8aa0
// Addr: 1401e8aa0
// Size: 6185 bytes


void FUN_1401e8aa0(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  bool bVar39;
  bool bVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  char cVar43;
  char cVar44;
  undefined1 uVar45;
  float *pfVar46;
  longlong *plVar47;
  longlong lVar48;
  ulonglong uVar49;
  int iVar50;
  ulonglong uVar51;
  longlong lVar52;
  ulonglong uVar53;
  undefined1 *puVar54;
  undefined1 *puVar55;
  int iVar56;
  uint uVar57;
  ulonglong uVar58;
  uint uVar59;
  longlong lVar60;
  uint uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  char local_res8 [32];
  undefined8 uStack_170;
  undefined1 auStack_168 [32];
  undefined1 local_148 [36];
  uint local_124;
  uint local_120;
  float *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  puVar55 = auStack_168;
  cVar43 = (**(code **)(*param_1 + 0x68))();
  if (((*(byte *)(param_1 + 0x24) & 1) == 0) ||
     ((param_1[0x30] != 0 && (cVar44 = FUN_140185010(), cVar44 == '\0')))) {
    bVar39 = false;
    if (cVar43 == '\0') {
      return;
    }
  }
  else {
    bVar39 = true;
  }
  pfVar46 = (float *)(**(code **)(*param_1 + 0x80))(param_1);
  lVar52 = param_1[0x19];
  local_118 = pfVar46;
  if (((*(byte *)(lVar52 + 0x11c) & 2) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x304) & 0x1100) == 0)) {
    fVar64 = *(float *)(param_1 + 0x5e) * DAT_1404926c0;
    fVar63 = *(float *)((longlong)param_1 + 0x2f4) * DAT_1404926c0;
    fVar68 = pfVar46[2] * fVar64 + pfVar46[6] * fVar63 + pfVar46[10] * 0.0 + pfVar46[0xe] * 0.0;
    fVar69 = pfVar46[1] * fVar64 + pfVar46[5] * fVar63 + pfVar46[9] * 0.0 + pfVar46[0xd] * 0.0;
    fVar62 = *(float *)((longlong)param_1 + 0x2fc);
    fVar65 = *(float *)(param_1 + 0x5f);
    fVar64 = fVar64 * *pfVar46 + pfVar46[4] * fVar63 + pfVar46[8] * 0.0 + pfVar46[0xc] * 0.0;
    fVar63 = *(float *)(param_1 + 0x60);
    fVar67 = fVar65 * pfVar46[2] + fVar62 * pfVar46[6] + fVar63 * pfVar46[10] + pfVar46[0xe];
    fVar66 = fVar65 * pfVar46[1] + fVar62 * pfVar46[5] + fVar63 * pfVar46[9] + pfVar46[0xd];
    fVar65 = fVar65 * *pfVar46 + fVar62 * pfVar46[4] + fVar63 * pfVar46[8] + pfVar46[0xc];
    fVar62 = fVar69 * fVar69 + fVar64 * fVar64 + fVar68 * fVar68;
    if (fVar62 < 0.0) {
      fVar62 = (float)FUN_14041ad10(fVar62);
    }
    else {
      fVar62 = SQRT(fVar62);
    }
    fVar62 = (float)((uint)fVar62 ^ DAT_140492ff0);
    if (fVar66 * *(float *)(lVar52 + 0xec4) + fVar65 * *(float *)(lVar52 + 0xec0) +
        fVar67 * *(float *)(lVar52 + 0xec8) + *(float *)(lVar52 + 0xecc) < fVar62) {
      return;
    }
    if (fVar66 * *(float *)(lVar52 + 0xed4) + fVar65 * *(float *)(lVar52 + 0xed0) +
        fVar67 * *(float *)(lVar52 + 0xed8) + *(float *)(lVar52 + 0xedc) < fVar62) {
      return;
    }
    if (fVar66 * *(float *)(lVar52 + 0xee4) + fVar65 * *(float *)(lVar52 + 0xee0) +
        fVar67 * *(float *)(lVar52 + 0xee8) + *(float *)(lVar52 + 0xeec) < fVar62) {
      return;
    }
    if (fVar66 * *(float *)(lVar52 + 0xef4) + fVar65 * *(float *)(lVar52 + 0xef0) +
        fVar67 * *(float *)(lVar52 + 0xef8) + *(float *)(lVar52 + 0xefc) < fVar62) {
      return;
    }
    if (fVar66 * *(float *)(lVar52 + 0xf04) + fVar65 * *(float *)(lVar52 + 0xf00) +
        fVar67 * *(float *)(lVar52 + 0xf08) + *(float *)(lVar52 + 0xf0c) < fVar62) {
      return;
    }
    if (fVar66 * *(float *)(lVar52 + 0xf14) + fVar65 * *(float *)(lVar52 + 0xf10) +
        fVar67 * *(float *)(lVar52 + 0xf18) + *(float *)(lVar52 + 0xf1c) < fVar62) {
      return;
    }
  }
  local_124 = *(uint *)((longlong)param_1 + 0x304) >> 4 & 0xffffff01;
  cVar43 = (**(code **)(*param_1 + 0x118))();
  if ((cVar43 == '\0') &&
     ((*(int *)((longlong)param_1 + 0x32c) == 0 || (*(int *)((longlong)param_1 + 0x32c) == 0x1f))))
  {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  uVar59 = *(uint *)((longlong)param_1 + 0x304);
  local_120 = CONCAT31((uint3)(uVar59 >> 9),(char)(uVar59 >> 1)) & 0xffffff01;
  uVar59 = uVar59 >> 5;
  if (((uVar59 & 1) == 0) || (param_1[0x33] == param_1[0x34])) {
    bVar40 = false;
  }
  else {
    bVar40 = true;
  }
  if ((bVar10) &&
     ((((char)local_120 == '\0' ||
       (((*(int *)((longlong)param_1 + 0x32c) != 0 && (*(int *)((longlong)param_1 + 0x32c) != 0x1f))
        || (param_1[0x33] != param_1[0x34])))) &&
      ((param_1[0x30] == 0 || ((*(byte *)(param_1[0x30] + 0x120) & 4) == 0)))))) {
    plVar47 = (longlong *)FUN_1401ab410(param_1[0x19] + 0x16c0,"_rt_FullFrameBuffer");
    (**(code **)(*plVar47 + 8))(plVar47);
  }
  if (((int)param_1[100] < 1) && ((*(uint *)((longlong)param_1 + 0x304) >> 4 & 1) == 0)) {
    puVar55 = auStack_168;
    if (!bVar39) goto LAB_1401ea215;
    if ((uVar59 & 1) == 0) {
      if (bVar40) goto LAB_1401e8ff3;
    }
    else {
      puVar55 = auStack_168;
      if (!bVar40) goto LAB_1401ea215;
LAB_1401e8ff3:
      (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0xd8))
                (*(longlong **)(param_1[0x19] + 0x1518),1);
      FUN_1401e5cf0(param_1[0x19]);
      lVar52 = param_1[0x19];
      puVar4 = *(undefined8 **)(lVar52 + 0x40);
      uVar8 = *puVar4;
      uVar20 = puVar4[1];
      uVar21 = puVar4[2];
      uVar22 = puVar4[3];
      uVar23 = puVar4[4];
      uVar24 = puVar4[5];
      uVar25 = puVar4[6];
      uVar26 = puVar4[7];
      puVar4 = *(undefined8 **)(lVar52 + 0x38);
      uVar27 = *puVar4;
      uVar28 = puVar4[1];
      uVar29 = puVar4[2];
      uVar30 = puVar4[3];
      uVar31 = puVar4[4];
      uVar32 = puVar4[5];
      uVar33 = puVar4[6];
      uVar34 = puVar4[7];
      puVar4 = *(undefined8 **)(lVar52 + 0x30);
      local_f8 = puVar4[4];
      uStack_f0 = puVar4[5];
      uVar35 = *puVar4;
      uVar36 = puVar4[1];
      uVar37 = puVar4[2];
      uVar38 = puVar4[3];
      local_108 = *(undefined4 *)(puVar4 + 6);
      uStack_104 = *(undefined4 *)((longlong)puVar4 + 0x34);
      uStack_100 = *(undefined4 *)(puVar4 + 7);
      uStack_fc = *(undefined4 *)((longlong)puVar4 + 0x3c);
      FUN_1401ec720(param_1,0,pfVar46);
      puVar4 = *(undefined8 **)(param_1[0x19] + 0x40);
      *puVar4 = uVar8;
      puVar4[1] = uVar20;
      puVar4[2] = uVar21;
      puVar4[3] = uVar22;
      puVar4[4] = uVar23;
      puVar4[5] = uVar24;
      puVar4[6] = uVar25;
      puVar4[7] = uVar26;
      puVar4 = *(undefined8 **)(param_1[0x19] + 0x38);
      *puVar4 = uVar27;
      puVar4[1] = uVar28;
      puVar4[2] = uVar29;
      puVar4[3] = uVar30;
      puVar4[4] = uVar31;
      puVar4[5] = uVar32;
      puVar4[6] = uVar33;
      puVar4[7] = uVar34;
      puVar4 = *(undefined8 **)(param_1[0x19] + 0x30);
      *puVar4 = uVar35;
      puVar4[1] = uVar36;
      puVar4[2] = uVar37;
      puVar4[3] = uVar38;
      *(undefined4 *)(puVar4 + 4) = (undefined4)local_f8;
      *(undefined4 *)((longlong)puVar4 + 0x24) = local_f8._4_4_;
      *(undefined4 *)(puVar4 + 5) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_f0._4_4_;
      puVar4[6] = CONCAT44(uStack_104,local_108);
      puVar4[7] = CONCAT44(uStack_fc,uStack_100);
      (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0xd8))
                (*(longlong **)(param_1[0x19] + 0x1518),1,0);
      lVar52 = param_1[0x19];
      lVar60 = *(longlong *)(lVar52 + 0x1b8);
      *(longlong *)(lVar52 + 0x1b8) = lVar60 + -1;
      (**(code **)(**(longlong **)(lVar52 + 0x1518) + 0xb0))
                (*(longlong **)(lVar52 + 0x1518),*(undefined1 *)(lVar60 + -2));
    }
    lVar52 = param_1[0x19];
    puVar4 = *(undefined8 **)(lVar52 + 0x30);
    *(undefined1 *)(lVar52 + 0x1ca) = 1;
    *(undefined8 **)(lVar52 + 0x30) = puVar4 + 8;
    puVar4[8] = *puVar4;
    puVar4[9] = puVar4[1];
    puVar4[10] = puVar4[2];
    puVar4[0xb] = puVar4[3];
    *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)((longlong)puVar4 + 100) = *(undefined4 *)((longlong)puVar4 + 0x24);
    *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)(puVar4 + 5);
    *(undefined4 *)((longlong)puVar4 + 0x6c) = *(undefined4 *)((longlong)puVar4 + 0x2c);
    puVar4[0xe] = puVar4[6];
    puVar4[0xf] = puVar4[7];
    (**(code **)(*param_1 + 0xa8))(param_1,*(undefined8 *)(param_1[0x19] + 0x30));
    fVar62 = *pfVar46;
    fVar65 = pfVar46[1];
    fVar63 = pfVar46[2];
    pfVar5 = *(float **)(param_1[0x19] + 0x30);
    fVar64 = pfVar5[4];
    fVar66 = pfVar5[5];
    fVar67 = pfVar5[6];
    fVar68 = pfVar5[7];
    fVar69 = pfVar5[8];
    fVar11 = pfVar5[9];
    fVar12 = pfVar5[10];
    fVar13 = pfVar5[0xb];
    fVar14 = *pfVar5;
    fVar15 = pfVar5[1];
    fVar16 = pfVar5[2];
    fVar17 = pfVar5[3];
    *pfVar5 = fVar63 * fVar69 + fVar65 * fVar64 + fVar62 * fVar14;
    pfVar5[1] = fVar63 * fVar11 + fVar65 * fVar66 + fVar62 * fVar15;
    pfVar5[2] = fVar63 * fVar12 + fVar65 * fVar67 + fVar62 * fVar16;
    pfVar5[3] = fVar63 * fVar13 + fVar65 * fVar68 + fVar62 * fVar17;
    fVar62 = pfVar46[4];
    fVar65 = pfVar46[5];
    fVar63 = pfVar46[6];
    pfVar5[4] = fVar63 * fVar69 + fVar65 * fVar64 + fVar62 * fVar14;
    pfVar5[5] = fVar63 * fVar11 + fVar65 * fVar66 + fVar62 * fVar15;
    pfVar5[6] = fVar63 * fVar12 + fVar65 * fVar67 + fVar62 * fVar16;
    pfVar5[7] = fVar63 * fVar13 + fVar65 * fVar68 + fVar62 * fVar17;
    fVar62 = pfVar46[8];
    fVar65 = pfVar46[9];
    fVar63 = pfVar46[10];
    pfVar5[8] = fVar63 * fVar69 + fVar65 * fVar64 + fVar62 * fVar14;
    pfVar5[9] = fVar63 * fVar11 + fVar65 * fVar66 + fVar62 * fVar15;
    pfVar5[10] = fVar63 * fVar12 + fVar65 * fVar67 + fVar62 * fVar16;
    pfVar5[0xb] = fVar63 * fVar13 + fVar65 * fVar68 + fVar62 * fVar17;
    fVar62 = pfVar46[0xc];
    fVar65 = pfVar46[0xd];
    fVar63 = pfVar46[0xe];
    pfVar5[0xc] = fVar63 * fVar69 + pfVar5[0xc] + fVar65 * fVar64 + fVar62 * fVar14;
    pfVar5[0xd] = fVar63 * fVar11 + pfVar5[0xd] + fVar65 * fVar66 + fVar62 * fVar15;
    pfVar5[0xe] = fVar63 * fVar12 + pfVar5[0xe] + fVar65 * fVar67 + fVar62 * fVar16;
    pfVar5[0xf] = fVar63 * fVar13 + pfVar5[0xf] + fVar65 * fVar68 + fVar62 * fVar17;
    if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
      lVar52 = param_1[0x19];
      puVar4 = *(undefined8 **)(lVar52 + 0x40);
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
      *(undefined8 **)(lVar52 + 0x40) = puVar4 + 8;
      puVar4[8] = *puVar4;
      puVar4[9] = puVar4[1];
      puVar4[10] = puVar4[2];
      puVar4[0xb] = puVar4[3];
      puVar4[0xc] = puVar4[4];
      puVar4[0xd] = puVar4[5];
      puVar4[0xe] = puVar4[6];
      puVar4[0xf] = puVar4[7];
      lVar52 = param_1[0x19];
      puVar4 = *(undefined8 **)(lVar52 + 0x38);
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
      *(undefined8 **)(lVar52 + 0x38) = puVar4 + 8;
      puVar4[8] = *puVar4;
      puVar4[9] = puVar4[1];
      puVar4[10] = puVar4[2];
      puVar4[0xb] = puVar4[3];
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 4);
      *(undefined4 *)((longlong)puVar4 + 100) = *(undefined4 *)((longlong)puVar4 + 0x24);
      *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)(puVar4 + 5);
      *(undefined4 *)((longlong)puVar4 + 0x6c) = *(undefined4 *)((longlong)puVar4 + 0x2c);
      puVar4[0xe] = puVar4[6];
      puVar4[0xf] = puVar4[7];
      FUN_1401e5b60(param_1[0x19]);
    }
    (**(code **)(*param_1 + 0xf0))(param_1);
    if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
      lVar52 = param_1[0x19];
      plVar47 = (longlong *)(lVar52 + 0x38);
      *plVar47 = *plVar47 + -0x40;
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
      lVar52 = param_1[0x19];
      plVar47 = (longlong *)(lVar52 + 0x40);
      *plVar47 = *plVar47 + -0x40;
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
    }
    lVar52 = param_1[0x19];
    plVar47 = (longlong *)(lVar52 + 0x30);
    *plVar47 = *plVar47 + -0x40;
    *(undefined1 *)(lVar52 + 0x1ca) = 1;
    puVar55 = auStack_168;
    goto LAB_1401ea215;
  }
  lVar52 = param_1[0x19];
  puVar4 = *(undefined8 **)(lVar52 + 0x30);
  *(undefined1 *)(lVar52 + 0x1ca) = 1;
  *(undefined8 **)(lVar52 + 0x30) = puVar4 + 8;
  puVar4[8] = *puVar4;
  puVar4[9] = puVar4[1];
  puVar4[10] = puVar4[2];
  puVar4[0xb] = puVar4[3];
  puVar4[0xc] = puVar4[4];
  puVar4[0xd] = puVar4[5];
  puVar4[0xe] = puVar4[6];
  puVar4[0xf] = puVar4[7];
  lVar52 = param_1[0x19];
  puVar4 = *(undefined8 **)(lVar52 + 0x38);
  *(undefined1 *)(lVar52 + 0x1ca) = 1;
  *(undefined8 **)(lVar52 + 0x38) = puVar4 + 8;
  puVar4[8] = *puVar4;
  puVar4[9] = puVar4[1];
  puVar4[10] = puVar4[2];
  puVar4[0xb] = puVar4[3];
  puVar4[0xc] = puVar4[4];
  puVar4[0xd] = puVar4[5];
  puVar4[0xe] = puVar4[6];
  puVar4[0xf] = puVar4[7];
  lVar52 = param_1[0x19];
  puVar4 = *(undefined8 **)(lVar52 + 0x40);
  *(undefined1 *)(lVar52 + 0x1ca) = 1;
  *(undefined8 **)(lVar52 + 0x40) = puVar4 + 8;
  puVar4[8] = *puVar4;
  puVar4[9] = puVar4[1];
  puVar4[10] = puVar4[2];
  puVar4[0xb] = puVar4[3];
  *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)((longlong)puVar4 + 100) = *(undefined4 *)((longlong)puVar4 + 0x24);
  *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)(puVar4 + 5);
  *(undefined4 *)((longlong)puVar4 + 0x6c) = *(undefined4 *)((longlong)puVar4 + 0x2c);
  puVar4[0xe] = puVar4[6];
  puVar4[0xf] = puVar4[7];
  (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0xd8))
            (*(longlong **)(param_1[0x19] + 0x1518),1);
  lVar52 = param_1[0x19];
  puVar54 = *(undefined1 **)(lVar52 + 0x1b8);
  if (puVar54 == *(undefined1 **)(lVar52 + 0x1c0)) {
    lVar60 = (longlong)puVar54 - *(longlong *)(lVar52 + 0x1b0);
    uVar58 = 0x7fffffffffffffff;
    if (lVar60 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar51 = (longlong)*(undefined1 **)(lVar52 + 0x1c0) - *(longlong *)(lVar52 + 0x1b0);
    uVar49 = lVar60 + 1;
    uVar53 = uVar51 >> 1;
    puVar55 = auStack_168;
    if (uVar51 <= 0x7fffffffffffffff - uVar53) goto LAB_1401e9456;
    uVar51 = 0x8000000000000026;
    puVar55 = auStack_168;
    while( true ) {
      *(undefined8 *)(puVar55 + -8) = 0x1401e944a;
      lVar48 = FUN_14028af20(uVar51);
      if (lVar48 != 0) break;
      uVar51 = 5;
      pcVar9 = (code *)swi(0x29);
      (*pcVar9)();
      puVar55 = puVar55 + 8;
LAB_1401e9456:
      uVar58 = uVar49;
      if (uVar49 <= uVar53 + uVar51) {
        uVar58 = uVar53 + uVar51;
      }
      if (uVar58 == 0) {
        uVar49 = 0;
        goto LAB_1401e949e;
      }
      if (uVar58 < 0x1000) {
        *(undefined8 *)(puVar55 + -8) = 0x1401e949b;
        uVar49 = FUN_14028af20(uVar58);
        goto LAB_1401e949e;
      }
      uVar51 = uVar58 + 0x27;
      if (uVar51 <= uVar58) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar55 + -8) = &UNK_1401ea2cc;
        FUN_140017370();
      }
    }
    uVar49 = lVar48 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar49 - 8) = lVar48;
LAB_1401e949e:
    *(undefined1 *)(uVar49 + lVar60) = 0;
    puVar6 = *(undefined1 **)(lVar52 + 0x1b0);
    if (puVar54 == *(undefined1 **)(lVar52 + 0x1b8)) {
      lVar60 = (longlong)*(undefined1 **)(lVar52 + 0x1b8) - (longlong)puVar6;
      uVar51 = uVar49;
      puVar54 = puVar6;
    }
    else {
      *(undefined8 *)(puVar55 + -8) = 0x1401e94c9;
      FUN_1404210f0(uVar49,puVar6,(longlong)puVar54 - (longlong)puVar6);
      uVar51 = lVar60 + 1 + uVar49;
      lVar60 = *(longlong *)(lVar52 + 0x1b8) - (longlong)puVar54;
    }
    *(undefined8 *)(puVar55 + -8) = 0x1401e94e2;
    FUN_1404210f0(uVar51,puVar54,lVar60);
    *(undefined8 *)(puVar55 + -8) = 0x1401e94fc;
    FUN_14005b010(lVar52 + 0x1b0,uVar49,*(undefined8 *)(puVar55 + 0x170),uVar58);
    pfVar46 = *(float **)(puVar55 + 0x50);
  }
  else {
    *puVar54 = 0;
    *(longlong *)(lVar52 + 0x1b8) = *(longlong *)(lVar52 + 0x1b8) + 1;
  }
  plVar47 = *(longlong **)(lVar52 + 0x1518);
  pcVar9 = *(code **)(*plVar47 + 0xb0);
  *(undefined8 *)(puVar55 + -8) = 0x1401e9513;
  (*pcVar9)(plVar47,0);
  uVar57 = *(uint *)(param_1 + 100);
  if ((*(byte *)((longlong)param_1 + 0x304) & 0x10) == 0) {
    uVar57 = uVar57 - 1;
    *(uint *)(puVar55 + 0x180) = uVar57;
  }
  else {
    *(uint *)(puVar55 + 0x180) = uVar57;
  }
  uVar57 = uVar57 & 0x80000001;
  if ((int)uVar57 < 0) {
    uVar57 = (uVar57 - 1 | 0xfffffffe) + 1;
  }
  lVar52 = param_1[0x19];
  puVar4 = *(undefined8 **)(lVar52 + 0x30);
  *(undefined1 *)(lVar52 + 0x1ca) = 1;
  *(undefined8 **)(lVar52 + 0x30) = puVar4 + 8;
  puVar4[8] = *puVar4;
  puVar4[9] = puVar4[1];
  puVar4[10] = puVar4[2];
  puVar4[0xb] = puVar4[3];
  puVar4[0xc] = puVar4[4];
  puVar4[0xd] = puVar4[5];
  puVar4[0xe] = puVar4[6];
  puVar4[0xf] = puVar4[7];
  uVar8 = *(undefined8 *)(pfVar46 + 2);
  puVar4 = *(undefined8 **)(param_1[0x19] + 0x30);
  *puVar4 = *(undefined8 *)pfVar46;
  puVar4[1] = uVar8;
  uVar8 = *(undefined8 *)(pfVar46 + 6);
  puVar4[2] = *(undefined8 *)(pfVar46 + 4);
  puVar4[3] = uVar8;
  uVar8 = *(undefined8 *)(pfVar46 + 10);
  puVar4[4] = *(undefined8 *)(pfVar46 + 8);
  puVar4[5] = uVar8;
  uVar8 = *(undefined8 *)(pfVar46 + 0xe);
  puVar4[6] = *(undefined8 *)(pfVar46 + 0xc);
  puVar4[7] = uVar8;
  lVar52 = param_1[0x19];
  uVar8 = *(undefined8 *)(pfVar46 + 2);
  *(undefined8 *)((longlong)param_1 + 900) = *(undefined8 *)pfVar46;
  *(undefined8 *)((longlong)param_1 + 0x38c) = uVar8;
  uVar8 = *(undefined8 *)(pfVar46 + 6);
  *(undefined8 *)((longlong)param_1 + 0x394) = *(undefined8 *)(pfVar46 + 4);
  *(undefined8 *)((longlong)param_1 + 0x39c) = uVar8;
  fVar62 = pfVar46[9];
  fVar65 = pfVar46[10];
  fVar63 = pfVar46[0xb];
  *(float *)((longlong)param_1 + 0x3a4) = pfVar46[8];
  *(float *)(param_1 + 0x75) = fVar62;
  *(float *)((longlong)param_1 + 0x3ac) = fVar65;
  *(float *)(param_1 + 0x76) = fVar63;
  uVar8 = *(undefined8 *)(pfVar46 + 0xe);
  *(undefined8 *)((longlong)param_1 + 0x3b4) = *(undefined8 *)(pfVar46 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0x3bc) = uVar8;
  if (*(char *)(lVar52 + 0x1ca) != '\0') {
    *(undefined8 *)(puVar55 + -8) = 0x1401e95eb;
    FUN_1400d4200();
  }
  uVar42 = DAT_140492a18;
  uVar41 = DAT_140492944;
  uVar8 = *(undefined8 *)(lVar52 + 0x8f8);
  lVar60 = param_1[0x19];
  *(undefined8 *)((longlong)param_1 + 0x344) = *(undefined8 *)(lVar52 + 0x8f0);
  *(undefined8 *)((longlong)param_1 + 0x34c) = uVar8;
  uVar8 = *(undefined8 *)(lVar52 + 0x908);
  *(undefined8 *)((longlong)param_1 + 0x354) = *(undefined8 *)(lVar52 + 0x900);
  *(undefined8 *)((longlong)param_1 + 0x35c) = uVar8;
  uVar18 = *(undefined4 *)(lVar52 + 0x914);
  uVar19 = *(undefined4 *)(lVar52 + 0x918);
  uVar3 = *(undefined4 *)(lVar52 + 0x91c);
  *(undefined4 *)((longlong)param_1 + 0x364) = *(undefined4 *)(lVar52 + 0x910);
  *(undefined4 *)(param_1 + 0x6d) = uVar18;
  *(undefined4 *)((longlong)param_1 + 0x36c) = uVar19;
  *(undefined4 *)(param_1 + 0x6e) = uVar3;
  *(undefined1 (*) [16])((longlong)param_1 + 0x374) = *(undefined1 (*) [16])(lVar52 + 0x920);
  plVar47 = (longlong *)(lVar60 + 0x30);
  *plVar47 = *plVar47 + -0x40;
  *(undefined1 *)(lVar60 + 0x1ca) = 1;
  plVar47 = (longlong *)param_1[(longlong)(int)uVar57 + 0x59];
  if ((*(uint *)((longlong)param_1 + 0x304) >> 1 & 1) == 0) {
    uVar61 = *(uint *)(param_1[0x19] + 0x118);
    lVar52 = plVar47[1];
    plVar1 = (longlong *)(lVar52 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar52 + 0x50) = (longlong)plVar47;
    pcVar9 = *(code **)(*plVar47 + 0x48);
    *(undefined8 *)(puVar55 + -8) = 0x1401e9684;
    (*pcVar9)();
    pcVar9 = *(code **)(*param_1 + 0xe0);
    *(undefined8 *)(puVar55 + -8) = 0x1401e9690;
    (*pcVar9)(param_1);
    puVar4 = *(undefined8 **)(param_1[0x19] + 0x30);
    if ((*(uint *)((longlong)param_1 + 0x304) >> 5 & 1) == 0) {
      *puVar4 = 0x3f800000;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0x3f800000;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
      puVar4[5] = 0x3f800000;
      puVar4[6] = 0;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3f800000;
      lVar52 = param_1[0x19];
      *(undefined4 *)(puVar55 + 0x38) = uVar41;
      *(undefined4 *)(puVar55 + 0x30) = uVar42;
      puVar4 = *(undefined8 **)(lVar52 + 0x30);
      puVar7 = *(undefined8 **)(lVar52 + 0x38);
      uVar8 = puVar4[1];
      *puVar7 = *puVar4;
      puVar7[1] = uVar8;
      uVar8 = puVar4[3];
      puVar7[2] = puVar4[2];
      puVar7[3] = uVar8;
      uVar8 = puVar4[5];
      puVar7[4] = puVar4[4];
      puVar7[5] = uVar8;
      uVar8 = puVar4[7];
      puVar7[6] = puVar4[6];
      puVar7[7] = uVar8;
      uVar2 = *(ushort *)(param_1[0x59] + 0x1a);
      plVar47 = *(longlong **)(param_1[0x19] + 0x1518);
      uVar8 = *(undefined8 *)(param_1[0x19] + 0x40);
      pcVar9 = *(code **)(*plVar47 + 0x18);
      if ((uVar61 & 1) == 0) {
        *(undefined4 *)(puVar55 + 0x28) = 0;
        *(float *)(puVar55 + 0x20) = (float)uVar2;
        *(undefined8 *)(puVar55 + -8) = 0x1401e977c;
        (*pcVar9)(plVar47,uVar8,0);
      }
      else {
        *(float *)(puVar55 + 0x28) = (float)uVar2;
        *(undefined4 *)(puVar55 + 0x20) = 0;
        *(undefined8 *)(puVar55 + -8) = 0x1401e976b;
        (*pcVar9)();
      }
    }
    else {
      puVar7 = *(undefined8 **)(puVar55 + 0x50);
      uVar8 = puVar7[1];
      *puVar4 = *puVar7;
      puVar4[1] = uVar8;
      uVar8 = puVar7[3];
      puVar4[2] = puVar7[2];
      puVar4[3] = uVar8;
      uVar18 = *(undefined4 *)((longlong)puVar7 + 0x24);
      uVar19 = *(undefined4 *)(puVar7 + 5);
      uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar7 + 4);
      *(undefined4 *)((longlong)puVar4 + 0x24) = uVar18;
      *(undefined4 *)(puVar4 + 5) = uVar19;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar3;
      *(undefined1 (*) [16])(puVar4 + 6) = *(undefined1 (*) [16])(puVar7 + 6);
    }
    *(undefined1 *)(param_1[0x19] + 0x1ca) = 1;
    if (((*(ushort *)(param_1 + 0x24) & 4) == 0) || ((*(ushort *)(param_1 + 0x24) & 2) == 0)) {
      pcVar9 = *(code **)(*param_1 + 0xe8);
      *(undefined8 *)(puVar55 + -8) = 0x1401e98e2;
      (*pcVar9)(param_1);
    }
    else {
      lVar52 = param_1[0x19];
      puVar4 = *(undefined8 **)(lVar52 + 0x38);
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
      *(undefined8 **)(lVar52 + 0x38) = puVar4 + 8;
      puVar4[8] = *puVar4;
      puVar4[9] = puVar4[1];
      puVar4[10] = puVar4[2];
      puVar4[0xb] = puVar4[3];
      puVar4[0xc] = puVar4[4];
      puVar4[0xd] = puVar4[5];
      puVar4[0xe] = puVar4[6];
      puVar4[0xf] = puVar4[7];
      lVar52 = param_1[0x19];
      puVar4 = *(undefined8 **)(lVar52 + 0x40);
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
      *(undefined8 **)(lVar52 + 0x40) = puVar4 + 8;
      puVar4[8] = *puVar4;
      puVar4[9] = puVar4[1];
      puVar4[10] = puVar4[2];
      puVar4[0xb] = puVar4[3];
      puVar4[0xc] = puVar4[4];
      puVar4[0xd] = puVar4[5];
      puVar4[0xe] = puVar4[6];
      puVar4[0xf] = puVar4[7];
      lVar52 = param_1[0x19];
      puVar4 = *(undefined8 **)(lVar52 + 0x38);
      uVar8 = *(undefined8 *)(lVar52 + 0x1168);
      *puVar4 = *(undefined8 *)(lVar52 + 0x1160);
      puVar4[1] = uVar8;
      uVar8 = *(undefined8 *)(lVar52 + 0x1178);
      puVar4[2] = *(undefined8 *)(lVar52 + 0x1170);
      puVar4[3] = uVar8;
      uVar8 = *(undefined8 *)(lVar52 + 0x1188);
      puVar4[4] = *(undefined8 *)(lVar52 + 0x1180);
      puVar4[5] = uVar8;
      uVar8 = *(undefined8 *)(lVar52 + 0x1198);
      puVar4[6] = *(undefined8 *)(lVar52 + 0x1190);
      puVar4[7] = uVar8;
      lVar52 = param_1[0x19];
      puVar4 = *(undefined8 **)(lVar52 + 0x40);
      uVar8 = *(undefined8 *)(lVar52 + 0x11a8);
      *puVar4 = *(undefined8 *)(lVar52 + 0x11a0);
      puVar4[1] = uVar8;
      uVar8 = *(undefined8 *)(lVar52 + 0x11b8);
      puVar4[2] = *(undefined8 *)(lVar52 + 0x11b0);
      puVar4[3] = uVar8;
      uVar18 = *(undefined4 *)(lVar52 + 0x11c4);
      uVar19 = *(undefined4 *)(lVar52 + 0x11c8);
      uVar3 = *(undefined4 *)(lVar52 + 0x11cc);
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(lVar52 + 0x11c0);
      *(undefined4 *)((longlong)puVar4 + 0x24) = uVar18;
      *(undefined4 *)(puVar4 + 5) = uVar19;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar3;
      *(undefined1 (*) [16])(puVar4 + 6) = *(undefined1 (*) [16])(lVar52 + 0x11d0);
      pcVar9 = *(code **)(*param_1 + 0xe8);
      *(undefined8 *)(puVar55 + -8) = 0x1401e98ae;
      (*pcVar9)(param_1);
      lVar52 = param_1[0x19];
      plVar47 = (longlong *)(lVar52 + 0x40);
      *plVar47 = *plVar47 + -0x40;
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
      lVar52 = param_1[0x19];
      plVar47 = (longlong *)(lVar52 + 0x38);
      *plVar47 = *plVar47 + -0x40;
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
    }
LAB_1401e9920:
    plVar47 = (longlong *)param_1[(longlong)(int)uVar57 + 0x59];
    lVar52 = param_1[100];
    *(longlong *)(plVar47[1] + 0x50) = *(longlong *)(plVar47[1] + 0x50) + -8;
    if ((int)lVar52 < 2) {
      if ((longlong *)**(longlong **)(plVar47[1] + 0x50) == (longlong *)0x0) {
        pcVar9 = *(code **)(*plVar47 + 0x50);
        *(undefined8 *)(puVar55 + -8) = 0x1401e995d;
        (*pcVar9)(plVar47);
      }
      else {
        pcVar9 = *(code **)(*(longlong *)**(longlong **)(plVar47[1] + 0x50) + 0x48);
        *(undefined8 *)(puVar55 + -8) = 0x1401e9952;
        (*pcVar9)();
      }
    }
  }
  else {
    pcVar9 = *(code **)(*plVar47 + 8);
    *(undefined8 *)(puVar55 + -8) = 0x1401e98ea;
    (*pcVar9)();
    if (param_1[0x33] != param_1[0x34]) {
      plVar1 = (longlong *)param_1[(longlong)(int)uVar57 + 0x59];
      lVar52 = plVar1[1];
      plVar47 = (longlong *)(lVar52 + 0x50);
      *plVar47 = *plVar47 + 8;
      **(longlong **)(lVar52 + 0x50) = (longlong)plVar1;
      pcVar9 = *(code **)(*plVar1 + 0x48);
      *(undefined8 *)(puVar55 + -8) = 0x1401e9918;
      (*pcVar9)();
      *(undefined8 *)(puVar55 + -8) = 0x1401e9920;
      FUN_1401ecb20(param_1);
      goto LAB_1401e9920;
    }
  }
  if ((uVar59 & 1) != 0) {
    puVar4 = *(undefined8 **)(param_1[0x19] + 0x30);
    *puVar4 = 0x3f800000;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0x3f800000;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    puVar4[5] = 0x3f800000;
    puVar4[6] = 0;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3f800000;
    puVar4 = *(undefined8 **)(param_1[0x19] + 0x30);
    puVar7 = *(undefined8 **)(param_1[0x19] + 0x38);
    uVar8 = puVar4[1];
    *puVar7 = *puVar4;
    puVar7[1] = uVar8;
    uVar8 = puVar4[3];
    puVar7[2] = puVar4[2];
    puVar7[3] = uVar8;
    uVar18 = *(undefined4 *)((longlong)puVar4 + 0x24);
    uVar19 = *(undefined4 *)(puVar4 + 5);
    uVar3 = *(undefined4 *)((longlong)puVar4 + 0x2c);
    *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar18;
    *(undefined4 *)(puVar7 + 5) = uVar19;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined1 (*) [16])(puVar7 + 6) = *(undefined1 (*) [16])(puVar4 + 6);
  }
  uVar19 = DAT_1404929b8;
  uVar18 = DAT_140492704;
  uVar58 = 0;
  lVar52 = param_1[0x19];
  *(undefined4 *)(puVar55 + 0x38) = uVar41;
  *(undefined4 *)(puVar55 + 0x30) = uVar42;
  plVar47 = *(longlong **)(lVar52 + 0x1518);
  uVar8 = *(undefined8 *)(lVar52 + 0x40);
  *(undefined4 *)(puVar55 + 0x28) = DAT_140492704;
  lVar52 = *plVar47;
  *(undefined4 *)(puVar55 + 0x20) = DAT_1404929b8;
  pcVar9 = *(code **)(lVar52 + 0x18);
  *(undefined8 *)(puVar55 + -8) = 0x1401e9a1e;
  (*pcVar9)(plVar47,uVar8,DAT_1404929b8);
  lVar52 = param_1[0x19];
  cVar43 = '\0';
  iVar56 = -1;
  *(undefined8 *)(puVar55 + 0x60) = 0;
  *(undefined4 *)(puVar55 + 0x40) = 0xffffffff;
  puVar55[0x170] = 0;
  *(undefined1 *)(lVar52 + 0x1ca) = 1;
  lVar52 = param_1[0x62] - param_1[0x61] >> 3;
  *(longlong *)(puVar55 + 0x70) = lVar52;
  *(undefined4 *)(puVar55 + 0x188) = 0;
  uVar49 = uVar58;
  if (0 < (int)lVar52) {
    do {
      lVar52 = *(longlong *)(param_1[0x61] + uVar58 * 8);
      if ((*(byte *)(lVar52 + 0x118) & 1) != 0) {
        lVar60 = *(longlong *)(lVar52 + 0xd0);
        cVar44 = '\0';
        lVar48 = *(longlong *)(lVar52 + 0xd8);
        puVar55[0x178] = 0;
        uVar59 = (uint)(uVar57 == 0);
        *(longlong *)(puVar55 + 0x58) = lVar60;
        iVar56 = 0;
        if ((lVar48 - lVar60 >> 4) * -0x5555555555555555 != 0) {
          while( true ) {
            if ((puVar55[0x44] == '\0') &&
               (iVar50 = *(int *)(puVar55 + 0x180), (int)uVar49 == iVar50)) {
              *(longlong *)(puVar55 + 0x60) = lVar52;
              *(int *)(puVar55 + 0x40) = iVar56;
              goto LAB_1401e9c54;
            }
            if (cVar44 == '\0') {
              puVar55[0x178] = 1;
              if (cVar43 == '\0') {
                if ((*(uint *)(lVar52 + 0x118) >> 1 & 1) == 0) {
                  puVar55[0x170] = 0;
                }
                else {
                  lVar60 = param_1[0x19];
                  *(undefined8 *)(puVar55 + -8) = 0x1401e9b38;
                  plVar47 = (longlong *)FUN_1401ab410(lVar60 + 0x16c0,"_rt_FullFrameBuffer");
                  pcVar9 = *(code **)(*plVar47 + 8);
                  *(undefined8 *)(puVar55 + -8) = 0x1401e9b41;
                  (*pcVar9)(plVar47);
                  puVar55[0x170] = 1;
                }
              }
              plVar1 = (longlong *)param_1[(longlong)(int)uVar59 + 0x59];
              lVar60 = plVar1[1];
              plVar47 = (longlong *)(lVar60 + 0x50);
              *plVar47 = *plVar47 + 8;
              **(longlong **)(lVar60 + 0x50) = (longlong)plVar1;
              pcVar9 = *(code **)(*plVar1 + 0x48);
              *(undefined8 *)(puVar55 + -8) = 0x1401e9b74;
              (*pcVar9)();
            }
            puVar55[0x20] = 0;
            *(undefined8 *)(puVar55 + -8) = 0x1401e9b8a;
            FUN_1401ebf60(param_1,lVar52,iVar56,uVar57);
            if (((*(uint *)(*(longlong *)(puVar55 + 0x58) + 0x14 + (longlong)iVar56 * 0x30) >> 1 & 1
                 ) != 0) &&
               (uVar61 = (int)uVar49 + 1, uVar49 = (ulonglong)uVar61,
               (int)uVar61 < *(int *)(puVar55 + 0x180))) {
              plVar47 = (longlong *)
                        (*(longlong *)(param_1[(longlong)(int)uVar59 + 0x59] + 8) + 0x50);
              *plVar47 = *plVar47 + -8;
              uVar59 = (uint)(uVar57 != 0);
              plVar1 = (longlong *)param_1[(ulonglong)(uVar57 != 0) + 0x59];
              lVar60 = plVar1[1];
              plVar47 = (longlong *)(lVar60 + 0x50);
              *plVar47 = *plVar47 + 8;
              **(longlong **)(lVar60 + 0x50) = (longlong)plVar1;
              pcVar9 = *(code **)(*plVar1 + 0x48);
              *(undefined8 *)(puVar55 + -8) = 0x1401e9be9;
              (*pcVar9)();
              uVar57 = (uint)(uVar57 == 0);
            }
            lVar60 = *(longlong *)(lVar52 + 0xd0);
            iVar56 = iVar56 + 1;
            lVar48 = *(longlong *)(lVar52 + 0xd8);
            cVar44 = puVar55[0x178];
            *(longlong *)(puVar55 + 0x58) = lVar60;
            if ((ulonglong)((lVar48 - lVar60 >> 4) * -0x5555555555555555) <=
                (ulonglong)(longlong)iVar56) break;
            cVar43 = puVar55[0x170];
          }
          iVar50 = *(int *)(puVar55 + 0x180);
LAB_1401e9c54:
          if (cVar44 != '\0') {
            uVar61 = (int)uVar49 + 1;
            uVar49 = (ulonglong)uVar61;
            plVar47 = (longlong *)param_1[(longlong)(int)uVar59 + 0x59];
            *(longlong *)(plVar47[1] + 0x50) = *(longlong *)(plVar47[1] + 0x50) + -8;
            uVar57 = uVar59;
            if (iVar50 <= (int)uVar61) {
              if ((longlong *)**(longlong **)(plVar47[1] + 0x50) == (longlong *)0x0) {
                pcVar9 = *(code **)(*plVar47 + 0x50);
                *(undefined8 *)(puVar55 + -8) = 0x1401e9c96;
                (*pcVar9)(plVar47);
              }
              else {
                pcVar9 = *(code **)(*(longlong *)**(longlong **)(plVar47[1] + 0x50) + 0x48);
                *(undefined8 *)(puVar55 + -8) = 0x1401e9c8b;
                (*pcVar9)();
              }
            }
          }
        }
      }
      uVar59 = *(int *)(puVar55 + 0x188) + 1;
      uVar58 = (ulonglong)uVar59;
      *(uint *)(puVar55 + 0x188) = uVar59;
      if (*(int *)(puVar55 + 0x70) <= (int)uVar59) goto code_r0x0001401e9cc0;
      cVar43 = puVar55[0x170];
    } while( true );
  }
LAB_1401e9cc9:
  lVar52 = param_1[0x19];
  bVar10 = true;
  plVar47 = (longlong *)(lVar52 + 0x40);
  *plVar47 = *plVar47 + -0x40;
  *(undefined1 *)(lVar52 + 0x1ca) = 1;
  lVar52 = param_1[0x19];
  plVar47 = (longlong *)(lVar52 + 0x38);
  *plVar47 = *plVar47 + -0x40;
  *(undefined1 *)(lVar52 + 0x1ca) = 1;
  lVar52 = param_1[0x19];
  plVar47 = (longlong *)(lVar52 + 0x30);
  *plVar47 = *plVar47 + -0x40;
  *(undefined1 *)(lVar52 + 0x1ca) = 1;
  if (bVar39) {
    lVar52 = param_1[0x19];
    uVar3 = *(undefined4 *)(puVar55 + 0x48);
    puVar4 = *(undefined8 **)(lVar52 + 0x40);
    *(undefined1 *)(lVar52 + 0x1ca) = 1;
    *(undefined8 **)(lVar52 + 0x40) = puVar4 + 8;
    puVar4[8] = *puVar4;
    puVar4[9] = puVar4[1];
    puVar4[10] = puVar4[2];
    puVar4[0xb] = puVar4[3];
    puVar4[0xc] = puVar4[4];
    puVar4[0xd] = puVar4[5];
    puVar4[0xe] = puVar4[6];
    puVar4[0xf] = puVar4[7];
    lVar52 = param_1[0x19];
    puVar4 = *(undefined8 **)(lVar52 + 0x38);
    *(undefined1 *)(lVar52 + 0x1ca) = 1;
    *(undefined8 **)(lVar52 + 0x38) = puVar4 + 8;
    puVar4[8] = *puVar4;
    puVar4[9] = puVar4[1];
    puVar4[10] = puVar4[2];
    puVar4[0xb] = puVar4[3];
    puVar4[0xc] = puVar4[4];
    puVar4[0xd] = puVar4[5];
    puVar4[0xe] = puVar4[6];
    puVar4[0xf] = puVar4[7];
    lVar52 = param_1[0x19];
    puVar4 = *(undefined8 **)(lVar52 + 0x30);
    *(undefined1 *)(lVar52 + 0x1ca) = 1;
    *(undefined8 **)(lVar52 + 0x30) = puVar4 + 8;
    puVar4[8] = *puVar4;
    puVar4[9] = puVar4[1];
    puVar4[10] = puVar4[2];
    puVar4[0xb] = puVar4[3];
    *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)((longlong)puVar4 + 100) = *(undefined4 *)((longlong)puVar4 + 0x24);
    *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)(puVar4 + 5);
    *(undefined4 *)((longlong)puVar4 + 0x6c) = *(undefined4 *)((longlong)puVar4 + 0x2c);
    puVar4[0xe] = puVar4[6];
    puVar4[0xf] = puVar4[7];
    lVar52 = param_1[0x19];
    if ((char)uVar3 == '\0') {
      uVar8 = *(undefined8 *)(lVar52 + 0x30);
      pcVar9 = *(code **)(*param_1 + 0xa8);
      *(undefined8 *)(puVar55 + -8) = 0x1401e9ddb;
      (*pcVar9)(param_1,uVar8);
      pfVar46 = *(float **)(param_1[0x19] + 0x30);
      pfVar5 = *(float **)(puVar55 + 0x50);
      fVar62 = pfVar46[4];
      fVar65 = pfVar46[5];
      fVar63 = pfVar46[6];
      fVar64 = pfVar46[7];
      fVar66 = *pfVar5;
      fVar67 = pfVar5[1];
      fVar68 = pfVar5[2];
      fVar69 = pfVar46[8];
      fVar11 = pfVar46[9];
      fVar12 = pfVar46[10];
      fVar13 = pfVar46[0xb];
      fVar14 = *pfVar46;
      fVar15 = pfVar46[1];
      fVar16 = pfVar46[2];
      fVar17 = pfVar46[3];
      *pfVar46 = fVar68 * fVar69 + fVar67 * fVar62 + fVar66 * fVar14;
      pfVar46[1] = fVar68 * fVar11 + fVar67 * fVar65 + fVar66 * fVar15;
      pfVar46[2] = fVar68 * fVar12 + fVar67 * fVar63 + fVar66 * fVar16;
      pfVar46[3] = fVar68 * fVar13 + fVar67 * fVar64 + fVar66 * fVar17;
      fVar66 = pfVar5[4];
      fVar67 = pfVar5[5];
      fVar68 = pfVar5[6];
      pfVar46[4] = fVar68 * fVar69 + fVar67 * fVar62 + fVar66 * fVar14;
      pfVar46[5] = fVar68 * fVar11 + fVar67 * fVar65 + fVar66 * fVar15;
      pfVar46[6] = fVar68 * fVar12 + fVar67 * fVar63 + fVar66 * fVar16;
      pfVar46[7] = fVar68 * fVar13 + fVar67 * fVar64 + fVar66 * fVar17;
      fVar66 = pfVar5[8];
      fVar67 = pfVar5[9];
      fVar68 = pfVar5[10];
      pfVar46[8] = fVar68 * fVar69 + fVar67 * fVar62 + fVar66 * fVar14;
      pfVar46[9] = fVar68 * fVar11 + fVar67 * fVar65 + fVar66 * fVar15;
      pfVar46[10] = fVar68 * fVar12 + fVar67 * fVar63 + fVar66 * fVar16;
      pfVar46[0xb] = fVar68 * fVar13 + fVar67 * fVar64 + fVar66 * fVar17;
      fVar66 = pfVar5[0xc];
      fVar67 = pfVar5[0xd];
      fVar68 = pfVar5[0xe];
      pfVar46[0xc] = fVar68 * fVar69 + pfVar46[0xc] + fVar67 * fVar62 + fVar66 * fVar14;
      pfVar46[0xd] = fVar68 * fVar11 + pfVar46[0xd] + fVar67 * fVar65 + fVar66 * fVar15;
      pfVar46[0xe] = fVar68 * fVar12 + pfVar46[0xe] + fVar67 * fVar63 + fVar66 * fVar16;
      pfVar46[0xf] = fVar68 * fVar13 + pfVar46[0xf] + fVar67 * fVar64 + fVar66 * fVar17;
      if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
        lVar52 = param_1[0x19];
        *(undefined8 *)(puVar55 + -8) = 0x1401e9eb8;
        FUN_1401e5b60(lVar52);
      }
    }
    else {
      puVar4 = *(undefined8 **)(lVar52 + 0x38);
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
      *(undefined4 *)(puVar55 + 0x38) = uVar18;
      *(undefined4 *)(puVar55 + 0x30) = uVar19;
      *(undefined4 *)(puVar55 + 0x28) = uVar18;
      *(undefined8 **)(lVar52 + 0x38) = puVar4 + 8;
      uVar8 = *puVar4;
      uVar20 = puVar4[1];
      *(undefined4 *)(puVar55 + 0x20) = uVar19;
      puVar4[8] = uVar8;
      puVar4[9] = uVar20;
      puVar4[10] = puVar4[2];
      puVar4[0xb] = puVar4[3];
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 4);
      *(undefined4 *)((longlong)puVar4 + 100) = *(undefined4 *)((longlong)puVar4 + 0x24);
      *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)(puVar4 + 5);
      *(undefined4 *)((longlong)puVar4 + 0x6c) = *(undefined4 *)((longlong)puVar4 + 0x2c);
      puVar4[0xe] = puVar4[6];
      puVar4[0xf] = puVar4[7];
      puVar4 = *(undefined8 **)(param_1[0x19] + 0x30);
      *puVar4 = 0x3f800000;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0x3f800000;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
      puVar4[5] = 0x3f800000;
      puVar4[6] = 0;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3f800000;
      puVar4 = *(undefined8 **)(param_1[0x19] + 0x38);
      *puVar4 = 0x3f800000;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0x3f800000;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
      puVar4[5] = 0x3f800000;
      puVar4[6] = 0;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3f800000;
      plVar47 = *(longlong **)(param_1[0x19] + 0x1518);
      uVar8 = *(undefined8 *)(param_1[0x19] + 0x40);
      pcVar9 = *(code **)(*plVar47 + 0x18);
      *(undefined8 *)(puVar55 + -8) = 0x1401e9fd0;
      (*pcVar9)(plVar47,uVar8,uVar19);
    }
    if (puVar55[0x44] == '\0') {
      if (uVar58 != 0) {
        if ((puVar55[0x170] == '\0') && ((*(uint *)(uVar58 + 0x118) >> 1 & 1) != 0)) {
          lVar52 = param_1[0x19];
          *(undefined8 *)(puVar55 + -8) = 0x1401ea10e;
          plVar47 = (longlong *)FUN_1401ab410(lVar52 + 0x16c0,"_rt_FullFrameBuffer");
          pcVar9 = *(code **)(*plVar47 + 8);
          *(undefined8 *)(puVar55 + -8) = 0x1401ea117;
          (*pcVar9)(plVar47);
        }
        if ((ulonglong)(longlong)iVar56 <
            (ulonglong)
            ((*(longlong *)(uVar58 + 0xd8) - *(longlong *)(uVar58 + 0xd0) >> 4) *
            -0x5555555555555555)) {
          do {
            puVar55[0x20] = 1;
            *(undefined8 *)(puVar55 + -8) = 0x1401ea156;
            FUN_1401ebf60(param_1,uVar58,iVar56,uVar57);
            iVar56 = iVar56 + 1;
          } while ((ulonglong)(longlong)iVar56 <
                   (ulonglong)
                   ((*(longlong *)(uVar58 + 0xd8) - *(longlong *)(uVar58 + 0xd0) >> 4) *
                   -0x5555555555555555));
        }
      }
    }
    else {
      plVar47 = *(longlong **)(param_1[0x19] + 0x1518);
      pcVar9 = *(code **)(*plVar47 + 0xd8);
      *(undefined8 *)(puVar55 + -8) = 0x1401e9ff9;
      (*pcVar9)(plVar47,1,0);
      lVar52 = param_1[0x19];
      lVar60 = *(longlong *)(lVar52 + 0x1b8);
      *(longlong *)(lVar52 + 0x1b8) = lVar60 + -1;
      plVar47 = *(longlong **)(lVar52 + 0x1518);
      uVar45 = *(undefined1 *)(lVar60 + -2);
      pcVar9 = *(code **)(*plVar47 + 0xb0);
      *(undefined8 *)(puVar55 + -8) = 0x1401ea026;
      (*pcVar9)(plVar47,uVar45);
      bVar10 = false;
      *(undefined4 *)(param_1[0x19] + 300) = 0x3f800000;
      *(undefined4 *)(param_1[0x19] + 0x128) = 0x3f800000;
      *(undefined4 *)(param_1[0x19] + 0x124) = 0x3f800000;
      *(undefined4 *)(param_1[0x19] + 0x120) = 0x3f800000;
      *(undefined8 *)(param_1[0x58] + 0xd0) =
           *(undefined8 *)(param_1[(longlong)(int)uVar57 + 0x59] + 0x20);
      pcVar9 = *(code **)(*param_1 + 0x100);
      *(undefined8 *)(puVar55 + -8) = 0x1401ea096;
      (*pcVar9)(param_1);
      lVar52 = param_1[0x58];
      if (*(int *)((longlong)param_1 + 0x32c) == 0x1f) {
        uVar45 = 2;
      }
      else {
        pcVar9 = *(code **)(*param_1 + 0x120);
        *(undefined8 *)(puVar55 + -8) = 0x1401ea0b6;
        uVar45 = (*pcVar9)(param_1);
      }
      *(undefined1 *)(lVar52 + 0x1f0) = uVar45;
      lVar52 = param_1[0x58];
      pcVar9 = *(code **)(*param_1 + 0xf8);
      *(undefined8 *)(puVar55 + -8) = 0x1401ea0cf;
      (*pcVar9)(param_1,lVar52);
    }
    if ((char)uVar3 != '\0') {
      lVar52 = param_1[0x19];
      plVar47 = (longlong *)(lVar52 + 0x38);
      *plVar47 = *plVar47 + -0x40;
      *(undefined1 *)(lVar52 + 0x1ca) = 1;
    }
    lVar52 = param_1[0x19];
    plVar47 = (longlong *)(lVar52 + 0x30);
    *plVar47 = *plVar47 + -0x40;
    *(undefined1 *)(lVar52 + 0x1ca) = 1;
    lVar52 = param_1[0x19];
    plVar47 = (longlong *)(lVar52 + 0x38);
    *plVar47 = *plVar47 + -0x40;
    *(undefined1 *)(lVar52 + 0x1ca) = 1;
    lVar52 = param_1[0x19];
    plVar47 = (longlong *)(lVar52 + 0x40);
    *plVar47 = *plVar47 + -0x40;
    *(undefined1 *)(lVar52 + 0x1ca) = 1;
  }
  plVar47 = *(longlong **)(param_1[0x19] + 0x1518);
  pcVar9 = *(code **)(*plVar47 + 0xd8);
  *(undefined8 *)(puVar55 + -8) = 0x1401ea1e3;
  (*pcVar9)(plVar47,1,0);
  if (bVar10) {
    lVar52 = param_1[0x19];
    lVar60 = *(longlong *)(lVar52 + 0x1b8);
    *(longlong *)(lVar52 + 0x1b8) = lVar60 + -1;
    plVar47 = *(longlong **)(lVar52 + 0x1518);
    uVar45 = *(undefined1 *)(lVar60 + -2);
    pcVar9 = *(code **)(*plVar47 + 0xb0);
    *(undefined8 *)(puVar55 + -8) = 0x1401ea215;
    (*pcVar9)(plVar47,uVar45);
  }
LAB_1401ea215:
  plVar47 = *(longlong **)(param_1[0x19] + 0x1518);
  pcVar9 = *(code **)(*plVar47 + 0x128);
  *(undefined8 *)(puVar55 + -8) = 0x1401ea22e;
  (*pcVar9)(plVar47,0);
  return;
code_r0x0001401e9cc0:
  iVar56 = *(int *)(puVar55 + 0x40);
  uVar58 = *(ulonglong *)(puVar55 + 0x60);
  goto LAB_1401e9cc9;
}

