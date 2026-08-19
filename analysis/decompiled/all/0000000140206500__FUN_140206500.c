// Function: FUN_140206500
// Addr: 140206500
// Size: 389 bytes


/* WARNING: Possible PIC construction at 0x00014020667f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140206684) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140206500(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  float *pfVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
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
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  bool bVar46;
  bool bVar47;
  undefined4 uVar48;
  char cVar49;
  undefined1 uVar50;
  char cVar51;
  int iVar52;
  float *pfVar53;
  longlong *plVar54;
  longlong lVar55;
  ulonglong uVar56;
  int iVar57;
  ulonglong uVar58;
  longlong lVar59;
  ulonglong uVar60;
  longlong *unaff_RBX;
  undefined1 *puVar61;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  uint uVar62;
  ulonglong uVar63;
  undefined8 unaff_RDI;
  uint uVar64;
  undefined8 unaff_R12;
  longlong lVar65;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  uint uVar66;
  undefined8 unaff_R15;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float fVar72;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined8 local_res8 [4];
  char acStack_178 [328];
  undefined8 uStack_30;
  char acStack_28 [8];
  char acStack_20 [24];
  
  if ((param_1[0x97] == 0) || (*(longlong *)(param_1[0x97] + 8) == 0)) {
    *(undefined1 *)(param_1[0x19] + 0x12e8) = 0;
  }
  else {
    uStack_30 = 0x14020652d;
    iVar52 = (**(code **)(*param_1 + 0xd8))();
    if (iVar52 != 0) {
      uStack_30 = 0x140206556;
      cVar51 = (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x138))
                         (*(longlong **)(param_1[0x19] + 0x1518),local_res8,iVar52 * 0x30);
      if (cVar51 != '\0') {
        lVar59 = *(longlong *)(param_1[0x97] + 0x2f8);
        uStack_30 = 0x140206593;
        (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x140))
                  (*(longlong **)(param_1[0x19] + 0x1518),local_res8[0],lVar59,
                   *(longlong *)(param_1[0x97] + 0x300) - lVar59 >> 6);
        uStack_30 = 0x1402065aa;
        (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x148))();
      }
    }
    *(undefined8 *)(param_1[0x19] + 0x11e0) = *(undefined8 *)(param_1[0x97] + 0x268);
    *(char *)(param_1[0x19] + 0x12e8) =
         (char)((longlong)
                (ulonglong)(uint)(*(int *)(param_1[0x97] + 0x300) - *(int *)(param_1[0x97] + 0x2f8))
               >> 6);
  }
  if ((char)param_1[0x96] != '\0') {
    lVar59 = param_1[0x19];
    if (*(char *)(lVar59 + 0x1ca) != '\0') {
      uStack_30 = 0x140206618;
      FUN_1400d42d0();
    }
    lVar65 = param_1[0x19];
    uVar22 = *(undefined4 *)(lVar59 + 0x934);
    uVar23 = *(undefined4 *)(lVar59 + 0x938);
    uVar13 = *(undefined4 *)(lVar59 + 0x93c);
    uVar16 = *(undefined8 *)(lVar59 + 0x940);
    uVar25 = *(undefined8 *)(lVar59 + 0x948);
    uVar26 = *(undefined8 *)(lVar59 + 0x950);
    uVar27 = *(undefined8 *)(lVar59 + 0x958);
    uVar28 = *(undefined8 *)(lVar59 + 0x960);
    uVar29 = *(undefined8 *)(lVar59 + 0x968);
    *(undefined4 *)(lVar65 + 0xab0) = *(undefined4 *)(lVar59 + 0x930);
    *(undefined4 *)(lVar65 + 0xab4) = uVar22;
    *(undefined4 *)(lVar65 + 0xab8) = uVar23;
    *(undefined4 *)(lVar65 + 0xabc) = uVar13;
    *(undefined8 *)(lVar65 + 0xac0) = uVar16;
    *(undefined8 *)(lVar65 + 0xac8) = uVar25;
    *(undefined8 *)(lVar65 + 0xad0) = uVar26;
    *(undefined8 *)(lVar65 + 0xad8) = uVar27;
    *(undefined8 *)(lVar65 + 0xae0) = uVar28;
    *(undefined8 *)(lVar65 + 0xae8) = uVar29;
  }
  lVar59 = param_1[0x98];
  if ((lVar59 != 0) && (*(char *)(lVar59 + 0x48) != '\0')) {
    *(undefined4 *)(param_1[0x19] + 0x132c) = *(undefined4 *)(lVar59 + 0xe8);
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    uStack_30 = 0x140206684;
    unaff_RBX = param_1;
  }
  *(longlong **)((longlong)register0x00000020 + -8) = unaff_RBX;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_R14;
  puVar61 = (undefined1 *)((longlong)register0x00000020 + -0x168);
  pcVar14 = *(code **)(*param_1 + 0x68);
  *(undefined8 *)((longlong)register0x00000020 + -0x170) = 0x1401e8b84;
  cVar51 = (*pcVar14)();
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
code_r0x0001401e8baa:
    bVar46 = false;
    if (cVar51 == '\0') {
      return;
    }
  }
  else {
    if (param_1[0x30] != 0) {
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e8ba1;
      cVar49 = FUN_1401850e0();
      if (cVar49 == '\0') goto code_r0x0001401e8baa;
    }
    bVar46 = true;
  }
  lVar59 = *param_1;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = unaff_RSI;
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = unaff_RDI;
  *(undefined4 *)((longlong)register0x00000020 + -0x58) = unaff_XMM6_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0x54) = unaff_XMM6_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0x50) = unaff_XMM6_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x4c) = unaff_XMM6_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -0x68) = unaff_XMM7_Da;
  *(undefined4 *)((longlong)register0x00000020 + -100) = unaff_XMM7_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0x60) = unaff_XMM7_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x5c) = unaff_XMM7_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -0x78) = unaff_XMM8_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0x74) = unaff_XMM8_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0x70) = unaff_XMM8_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x6c) = unaff_XMM8_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -0x88) = unaff_XMM9_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0x84) = unaff_XMM9_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0x80) = unaff_XMM9_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x7c) = unaff_XMM9_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -0x98) = unaff_XMM10_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0x94) = unaff_XMM10_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0x90) = unaff_XMM10_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x8c) = unaff_XMM10_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -0xa8) = unaff_XMM11_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xa4) = unaff_XMM11_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xa0) = unaff_XMM11_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x9c) = unaff_XMM11_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -0xb8) = unaff_XMM12_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xb4) = unaff_XMM12_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xb0) = unaff_XMM12_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0xac) = unaff_XMM12_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -200) = unaff_XMM13_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xc4) = unaff_XMM13_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xc0) = unaff_XMM13_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0xbc) = unaff_XMM13_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -0xd8) = unaff_XMM14_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xd4) = unaff_XMM14_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xd0) = unaff_XMM14_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0xcc) = unaff_XMM14_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -0xe8) = unaff_XMM15_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xe4) = unaff_XMM15_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xe0) = unaff_XMM15_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0xdc) = unaff_XMM15_Dd;
  pcVar14 = *(code **)(lVar59 + 0x80);
  *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e8c29;
  pfVar53 = (float *)(*pcVar14)(param_1);
  lVar59 = param_1[0x19];
  *(float **)((longlong)register0x00000020 + -0x118) = pfVar53;
  if (((*(byte *)(lVar59 + 0x11c) & 2) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x304) & 0x1100) == 0)) {
    fVar67 = pfVar53[10];
    fVar72 = pfVar53[0xe];
    fVar2 = pfVar53[2];
    fVar3 = pfVar53[6];
    fVar4 = pfVar53[9];
    fVar71 = pfVar53[0xd];
    fVar5 = pfVar53[1];
    fVar6 = pfVar53[5];
    fVar7 = pfVar53[8];
    fVar8 = pfVar53[4];
    fVar70 = pfVar53[0xc];
    fVar69 = *(float *)(param_1 + 0x5e) * DAT_140492790;
    fVar68 = *(float *)((longlong)param_1 + 0x2f4) * DAT_140492790;
    *(float *)((longlong)register0x00000020 + 0x18) =
         fVar2 * fVar69 + fVar3 * fVar68 + fVar67 * 0.0 + fVar72 * 0.0;
    fVar9 = *pfVar53;
    *(float *)((longlong)register0x00000020 + 8) =
         fVar5 * fVar69 + fVar6 * fVar68 + fVar4 * 0.0 + fVar71 * 0.0;
    fVar10 = *(float *)((longlong)param_1 + 0x2fc);
    fVar11 = *(float *)(param_1 + 0x5f);
    *(float *)((longlong)register0x00000020 + 0x20) =
         fVar69 * fVar9 + fVar8 * fVar68 + fVar7 * 0.0 + fVar70 * 0.0;
    fVar9 = *(float *)(param_1 + 0x60);
    fVar72 = fVar11 * fVar2 + fVar10 * fVar3 + fVar9 * fVar67 + fVar72;
    fVar71 = fVar11 * fVar5 + fVar10 * fVar6 + fVar9 * fVar4 + fVar71;
    fVar70 = fVar11 * *pfVar53 + fVar10 * fVar8 + fVar9 * fVar7 + fVar70;
    *(float *)((longlong)register0x00000020 + 0x10) = fVar70;
    fVar67 = *(float *)((longlong)register0x00000020 + 8) *
             *(float *)((longlong)register0x00000020 + 8) +
             *(float *)((longlong)register0x00000020 + 0x20) *
             *(float *)((longlong)register0x00000020 + 0x20) +
             *(float *)((longlong)register0x00000020 + 0x18) *
             *(float *)((longlong)register0x00000020 + 0x18);
    if (fVar67 < 0.0) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e8e35;
      FUN_14041ade0(fVar67);
    }
    fVar67 = (float)((uint)SQRT(fVar67) ^ DAT_1404930c0);
    if (fVar71 * *(float *)(lVar59 + 0xec4) + fVar70 * *(float *)(lVar59 + 0xec0) +
        fVar72 * *(float *)(lVar59 + 0xec8) + *(float *)(lVar59 + 0xecc) < fVar67) {
      return;
    }
    if (fVar71 * *(float *)(lVar59 + 0xed4) + fVar70 * *(float *)(lVar59 + 0xed0) +
        fVar72 * *(float *)(lVar59 + 0xed8) + *(float *)(lVar59 + 0xedc) < fVar67) {
      return;
    }
    if (fVar71 * *(float *)(lVar59 + 0xee4) + fVar70 * *(float *)(lVar59 + 0xee0) +
        fVar72 * *(float *)(lVar59 + 0xee8) + *(float *)(lVar59 + 0xeec) < fVar67) {
      return;
    }
    if (fVar71 * *(float *)(lVar59 + 0xef4) + fVar70 * *(float *)(lVar59 + 0xef0) +
        fVar72 * *(float *)(lVar59 + 0xef8) + *(float *)(lVar59 + 0xefc) < fVar67) {
      return;
    }
    if (fVar71 * *(float *)(lVar59 + 0xf04) + fVar70 * *(float *)(lVar59 + 0xf00) +
        fVar72 * *(float *)(lVar59 + 0xf08) + *(float *)(lVar59 + 0xf0c) < fVar67) {
      return;
    }
    if (fVar71 * *(float *)(lVar59 + 0xf14) + fVar70 * *(float *)(lVar59 + 0xf10) +
        fVar72 * *(float *)(lVar59 + 0xf18) + *(float *)(lVar59 + 0xf1c) < fVar67) {
      return;
    }
  }
  uVar64 = *(uint *)((longlong)param_1 + 0x304);
  *(undefined8 *)((longlong)register0x00000020 + -0x30) = unaff_R12;
  *(uint *)((longlong)register0x00000020 + -0x124) = uVar64 >> 4 & 0xffffff01;
  pcVar14 = *(code **)(*param_1 + 0x118);
  *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e8fbe;
  cVar51 = (*pcVar14)();
  if ((cVar51 == '\0') &&
     ((*(int *)((longlong)param_1 + 0x32c) == 0 || (*(int *)((longlong)param_1 + 0x32c) == 0x1f))))
  {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  uVar64 = *(uint *)((longlong)param_1 + 0x304);
  uVar62 = CONCAT31((uint3)(uVar64 >> 9),(char)(uVar64 >> 1)) & 0xffffff01;
  uVar64 = uVar64 >> 5;
  *(uint *)((longlong)register0x00000020 + -0x120) = uVar62;
  if (((uVar64 & 1) == 0) || (param_1[0x33] == param_1[0x34])) {
    bVar47 = false;
  }
  else {
    bVar47 = true;
  }
  if ((bVar21) &&
     ((((char)uVar62 == '\0' ||
       (((*(int *)((longlong)param_1 + 0x32c) != 0 && (*(int *)((longlong)param_1 + 0x32c) != 0x1f))
        || (param_1[0x33] != param_1[0x34])))) &&
      ((param_1[0x30] == 0 || ((*(byte *)(param_1[0x30] + 0x120) & 4) == 0)))))) {
    lVar59 = param_1[0x19];
    *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9062;
    plVar54 = (longlong *)FUN_1401ab4e0(lVar59 + 0x16c0,"_rt_FullFrameBuffer");
    pcVar14 = *(code **)(*plVar54 + 8);
    *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e906b;
    (*pcVar14)(plVar54);
  }
  lVar59 = param_1[100];
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = unaff_RBP;
  *(undefined8 *)((longlong)register0x00000020 + -0x38) = unaff_R13;
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = unaff_R15;
  if (((int)lVar59 < 1) && ((*(uint *)((longlong)param_1 + 0x304) >> 4 & 1) == 0)) {
    if (!bVar46) goto code_r0x0001401ea2e5;
    if ((uVar64 & 1) == 0) {
      if (bVar47) goto code_r0x0001401e90c3;
    }
    else {
      if (!bVar47) goto code_r0x0001401ea2e5;
code_r0x0001401e90c3:
      plVar54 = *(longlong **)(param_1[0x19] + 0x1518);
      pcVar14 = *(code **)(*plVar54 + 0xd8);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e90e1;
      (*pcVar14)(plVar54,1);
      lVar59 = param_1[0x19];
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e90ed;
      func_0x0001401e5dc0(lVar59);
      lVar59 = param_1[0x19];
      puVar15 = *(undefined8 **)(lVar59 + 0x40);
      uVar16 = *puVar15;
      uVar25 = puVar15[1];
      uVar26 = puVar15[2];
      uVar27 = puVar15[3];
      uVar28 = puVar15[4];
      uVar29 = puVar15[5];
      uVar30 = puVar15[6];
      uVar31 = puVar15[7];
      puVar15 = *(undefined8 **)(lVar59 + 0x38);
      uVar32 = *puVar15;
      uVar33 = puVar15[1];
      uVar34 = puVar15[2];
      uVar35 = puVar15[3];
      uVar36 = puVar15[4];
      uVar37 = puVar15[5];
      uVar38 = puVar15[6];
      uVar39 = puVar15[7];
      puVar15 = *(undefined8 **)(lVar59 + 0x30);
      uVar40 = puVar15[5];
      uVar41 = *puVar15;
      uVar42 = puVar15[1];
      uVar43 = puVar15[2];
      uVar44 = puVar15[3];
      *(undefined8 *)((longlong)register0x00000020 + -0xf8) = puVar15[4];
      *(undefined8 *)((longlong)register0x00000020 + -0xf0) = uVar40;
      uVar22 = *(undefined4 *)((longlong)puVar15 + 0x34);
      uVar23 = *(undefined4 *)(puVar15 + 7);
      uVar13 = *(undefined4 *)((longlong)puVar15 + 0x3c);
      *(undefined4 *)((longlong)register0x00000020 + -0x108) = *(undefined4 *)(puVar15 + 6);
      *(undefined4 *)((longlong)register0x00000020 + -0x104) = uVar22;
      *(undefined4 *)((longlong)register0x00000020 + -0x100) = uVar23;
      *(undefined4 *)((longlong)register0x00000020 + -0xfc) = uVar13;
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e914c;
      FUN_1401ec7f0(param_1,0,pfVar53);
      uVar22 = *(undefined4 *)((longlong)register0x00000020 + -0xf8);
      uVar23 = *(undefined4 *)((longlong)register0x00000020 + -0xf4);
      uVar13 = *(undefined4 *)((longlong)register0x00000020 + -0xf0);
      uVar24 = *(undefined4 *)((longlong)register0x00000020 + -0xec);
      uVar40 = *(undefined8 *)((longlong)register0x00000020 + -0x108);
      uVar45 = *(undefined8 *)((longlong)register0x00000020 + -0x100);
      puVar15 = *(undefined8 **)(param_1[0x19] + 0x40);
      *puVar15 = uVar16;
      puVar15[1] = uVar25;
      puVar15[2] = uVar26;
      puVar15[3] = uVar27;
      puVar15[4] = uVar28;
      puVar15[5] = uVar29;
      puVar15[6] = uVar30;
      puVar15[7] = uVar31;
      puVar15 = *(undefined8 **)(param_1[0x19] + 0x38);
      *puVar15 = uVar32;
      puVar15[1] = uVar33;
      puVar15[2] = uVar34;
      puVar15[3] = uVar35;
      puVar15[4] = uVar36;
      puVar15[5] = uVar37;
      puVar15[6] = uVar38;
      puVar15[7] = uVar39;
      puVar15 = *(undefined8 **)(param_1[0x19] + 0x30);
      *puVar15 = uVar41;
      puVar15[1] = uVar42;
      puVar15[2] = uVar43;
      puVar15[3] = uVar44;
      *(undefined4 *)(puVar15 + 4) = uVar22;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar23;
      *(undefined4 *)(puVar15 + 5) = uVar13;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar24;
      puVar15[6] = uVar40;
      puVar15[7] = uVar45;
      plVar54 = *(longlong **)(param_1[0x19] + 0x1518);
      pcVar14 = *(code **)(*plVar54 + 0xd8);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e91c8;
      (*pcVar14)(plVar54,1,0);
      lVar59 = param_1[0x19];
      lVar65 = *(longlong *)(lVar59 + 0x1b8);
      *(longlong *)(lVar59 + 0x1b8) = lVar65 + -1;
      plVar54 = *(longlong **)(lVar59 + 0x1518);
      uVar50 = *(undefined1 *)(lVar65 + -2);
      pcVar14 = *(code **)(*plVar54 + 0xb0);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e91f5;
      (*pcVar14)(plVar54,uVar50);
    }
    lVar59 = param_1[0x19];
    puVar15 = *(undefined8 **)(lVar59 + 0x30);
    *(undefined1 *)(lVar59 + 0x1ca) = 1;
    *(undefined8 **)(lVar59 + 0x30) = puVar15 + 8;
    puVar15[8] = *puVar15;
    puVar15[9] = puVar15[1];
    puVar15[10] = puVar15[2];
    puVar15[0xb] = puVar15[3];
    *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar15 + 4);
    *(undefined4 *)((longlong)puVar15 + 100) = *(undefined4 *)((longlong)puVar15 + 0x24);
    *(undefined4 *)(puVar15 + 0xd) = *(undefined4 *)(puVar15 + 5);
    *(undefined4 *)((longlong)puVar15 + 0x6c) = *(undefined4 *)((longlong)puVar15 + 0x2c);
    puVar15[0xe] = puVar15[6];
    puVar15[0xf] = puVar15[7];
    uVar16 = *(undefined8 *)(param_1[0x19] + 0x30);
    pcVar14 = *(code **)(*param_1 + 0xa8);
    *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9244;
    (*pcVar14)(param_1,uVar16);
    fVar67 = *pfVar53;
    fVar72 = pfVar53[1];
    fVar2 = pfVar53[2];
    pfVar17 = *(float **)(param_1[0x19] + 0x30);
    fVar3 = pfVar17[4];
    fVar4 = pfVar17[5];
    fVar71 = pfVar17[6];
    fVar5 = pfVar17[7];
    fVar6 = pfVar17[8];
    fVar7 = pfVar17[9];
    fVar8 = pfVar17[10];
    fVar70 = pfVar17[0xb];
    fVar9 = *pfVar17;
    fVar10 = pfVar17[1];
    fVar11 = pfVar17[2];
    fVar68 = pfVar17[3];
    *pfVar17 = fVar2 * fVar6 + fVar72 * fVar3 + fVar67 * fVar9;
    pfVar17[1] = fVar2 * fVar7 + fVar72 * fVar4 + fVar67 * fVar10;
    pfVar17[2] = fVar2 * fVar8 + fVar72 * fVar71 + fVar67 * fVar11;
    pfVar17[3] = fVar2 * fVar70 + fVar72 * fVar5 + fVar67 * fVar68;
    fVar67 = pfVar53[4];
    fVar72 = pfVar53[5];
    fVar2 = pfVar53[6];
    pfVar17[4] = fVar2 * fVar6 + fVar72 * fVar3 + fVar67 * fVar9;
    pfVar17[5] = fVar2 * fVar7 + fVar72 * fVar4 + fVar67 * fVar10;
    pfVar17[6] = fVar2 * fVar8 + fVar72 * fVar71 + fVar67 * fVar11;
    pfVar17[7] = fVar2 * fVar70 + fVar72 * fVar5 + fVar67 * fVar68;
    fVar67 = pfVar53[8];
    fVar72 = pfVar53[9];
    fVar2 = pfVar53[10];
    pfVar17[8] = fVar2 * fVar6 + fVar72 * fVar3 + fVar67 * fVar9;
    pfVar17[9] = fVar2 * fVar7 + fVar72 * fVar4 + fVar67 * fVar10;
    pfVar17[10] = fVar2 * fVar8 + fVar72 * fVar71 + fVar67 * fVar11;
    pfVar17[0xb] = fVar2 * fVar70 + fVar72 * fVar5 + fVar67 * fVar68;
    fVar67 = pfVar53[0xc];
    fVar72 = pfVar53[0xd];
    fVar2 = pfVar53[0xe];
    pfVar17[0xc] = fVar2 * fVar6 + pfVar17[0xc] + fVar72 * fVar3 + fVar67 * fVar9;
    pfVar17[0xd] = fVar2 * fVar7 + pfVar17[0xd] + fVar72 * fVar4 + fVar67 * fVar10;
    pfVar17[0xe] = fVar2 * fVar8 + pfVar17[0xe] + fVar72 * fVar71 + fVar67 * fVar11;
    pfVar17[0xf] = fVar2 * fVar70 + pfVar17[0xf] + fVar72 * fVar5 + fVar67 * fVar68;
    if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
      lVar59 = param_1[0x19];
      puVar15 = *(undefined8 **)(lVar59 + 0x40);
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
      *(undefined8 **)(lVar59 + 0x40) = puVar15 + 8;
      puVar15[8] = *puVar15;
      puVar15[9] = puVar15[1];
      puVar15[10] = puVar15[2];
      puVar15[0xb] = puVar15[3];
      puVar15[0xc] = puVar15[4];
      puVar15[0xd] = puVar15[5];
      puVar15[0xe] = puVar15[6];
      puVar15[0xf] = puVar15[7];
      lVar59 = param_1[0x19];
      puVar15 = *(undefined8 **)(lVar59 + 0x38);
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
      *(undefined8 **)(lVar59 + 0x38) = puVar15 + 8;
      puVar15[8] = *puVar15;
      puVar15[9] = puVar15[1];
      puVar15[10] = puVar15[2];
      puVar15[0xb] = puVar15[3];
      *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar15 + 4);
      *(undefined4 *)((longlong)puVar15 + 100) = *(undefined4 *)((longlong)puVar15 + 0x24);
      *(undefined4 *)(puVar15 + 0xd) = *(undefined4 *)(puVar15 + 5);
      *(undefined4 *)((longlong)puVar15 + 0x6c) = *(undefined4 *)((longlong)puVar15 + 0x2c);
      puVar15[0xe] = puVar15[6];
      puVar15[0xf] = puVar15[7];
      lVar59 = param_1[0x19];
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9388;
      FUN_1401e5c30(lVar59);
    }
    pcVar14 = *(code **)(*param_1 + 0xf0);
    *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9394;
    (*pcVar14)(param_1);
    if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
      lVar59 = param_1[0x19];
      plVar54 = (longlong *)(lVar59 + 0x38);
      *plVar54 = *plVar54 + -0x40;
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
      lVar59 = param_1[0x19];
      plVar54 = (longlong *)(lVar59 + 0x40);
      *plVar54 = *plVar54 + -0x40;
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
    }
    lVar59 = param_1[0x19];
    plVar54 = (longlong *)(lVar59 + 0x30);
    *plVar54 = *plVar54 + -0x40;
    *(undefined1 *)(lVar59 + 0x1ca) = 1;
    goto code_r0x0001401ea2e5;
  }
  lVar59 = param_1[0x19];
  puVar15 = *(undefined8 **)(lVar59 + 0x30);
  *(undefined1 *)(lVar59 + 0x1ca) = 1;
  *(undefined8 **)(lVar59 + 0x30) = puVar15 + 8;
  puVar15[8] = *puVar15;
  puVar15[9] = puVar15[1];
  puVar15[10] = puVar15[2];
  puVar15[0xb] = puVar15[3];
  puVar15[0xc] = puVar15[4];
  puVar15[0xd] = puVar15[5];
  puVar15[0xe] = puVar15[6];
  puVar15[0xf] = puVar15[7];
  lVar59 = param_1[0x19];
  puVar15 = *(undefined8 **)(lVar59 + 0x38);
  *(undefined1 *)(lVar59 + 0x1ca) = 1;
  *(undefined8 **)(lVar59 + 0x38) = puVar15 + 8;
  puVar15[8] = *puVar15;
  puVar15[9] = puVar15[1];
  puVar15[10] = puVar15[2];
  puVar15[0xb] = puVar15[3];
  puVar15[0xc] = puVar15[4];
  puVar15[0xd] = puVar15[5];
  puVar15[0xe] = puVar15[6];
  puVar15[0xf] = puVar15[7];
  lVar59 = param_1[0x19];
  puVar15 = *(undefined8 **)(lVar59 + 0x40);
  *(undefined1 *)(lVar59 + 0x1ca) = 1;
  *(undefined8 **)(lVar59 + 0x40) = puVar15 + 8;
  puVar15[8] = *puVar15;
  puVar15[9] = puVar15[1];
  puVar15[10] = puVar15[2];
  puVar15[0xb] = puVar15[3];
  *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar15 + 4);
  *(undefined4 *)((longlong)puVar15 + 100) = *(undefined4 *)((longlong)puVar15 + 0x24);
  *(undefined4 *)(puVar15 + 0xd) = *(undefined4 *)(puVar15 + 5);
  *(undefined4 *)((longlong)puVar15 + 0x6c) = *(undefined4 *)((longlong)puVar15 + 0x2c);
  puVar15[0xe] = puVar15[6];
  puVar15[0xf] = puVar15[7];
  plVar54 = *(longlong **)(param_1[0x19] + 0x1518);
  pcVar14 = *(code **)(*plVar54 + 0xd8);
  *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e94a1;
  (*pcVar14)(plVar54,1);
  lVar59 = param_1[0x19];
  puVar18 = *(undefined1 **)(lVar59 + 0x1b8);
  if (puVar18 == *(undefined1 **)(lVar59 + 0x1c0)) {
    lVar65 = (longlong)puVar18 - *(longlong *)(lVar59 + 0x1b0);
    if (lVar65 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea396;
      FUN_140013120();
    }
    uVar58 = (longlong)*(undefined1 **)(lVar59 + 0x1c0) - *(longlong *)(lVar59 + 0x1b0);
    uVar56 = lVar65 + 1;
    *(ulonglong *)((longlong)register0x00000020 + 8) = uVar56;
    uVar60 = uVar58 >> 1;
    if (uVar58 <= 0x7fffffffffffffff - uVar60) goto code_r0x0001401e9526;
    uVar58 = 0x8000000000000026;
    puVar61 = (undefined1 *)((longlong)register0x00000020 + -0x168);
    do {
      *(undefined **)(puVar61 + -8) = &UNK_1401e951a;
      lVar55 = func_0x00014028aff0(uVar58);
      if (lVar55 != 0) {
        uVar56 = lVar55 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar56 - 8) = lVar55;
code_r0x0001401e956e:
        *(undefined1 *)(uVar56 + lVar65) = 0;
        puVar19 = *(undefined1 **)(lVar59 + 0x1b8);
        lVar59 = *(longlong *)(lVar59 + 0x1b0);
        if (puVar18 == puVar19) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar61 + -8) = &UNK_1401e95b2;
          FUN_1404211c0(uVar56,lVar59,(longlong)puVar19 - lVar59);
        }
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar61 + -8) = &UNK_1401e9599;
        FUN_1404211c0(uVar56,lVar59,(longlong)puVar18 - lVar59);
      }
      uVar58 = 5;
      pcVar14 = (code *)swi(0x29);
      (*pcVar14)();
      puVar61 = puVar61 + 8;
code_r0x0001401e9526:
      uVar63 = uVar56;
      if (uVar56 <= uVar60 + uVar58) {
        uVar63 = uVar60 + uVar58;
      }
      if (uVar63 == 0) {
        uVar56 = 0;
        goto code_r0x0001401e956e;
      }
      if (uVar63 < 0x1000) {
        *(undefined **)(puVar61 + -8) = &UNK_1401e956b;
        uVar56 = func_0x00014028aff0(uVar63);
        goto code_r0x0001401e956e;
      }
      uVar58 = uVar63 + 0x27;
      if (uVar58 <= uVar63) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar61 + -8) = &UNK_1401ea39c;
        FUN_140017440();
      }
    } while( true );
  }
  *puVar18 = 0;
  *(longlong *)(lVar59 + 0x1b8) = *(longlong *)(lVar59 + 0x1b8) + 1;
  plVar54 = *(longlong **)(lVar59 + 0x1518);
  pcVar14 = *(code **)(*plVar54 + 0xb0);
  *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e95e3;
  (*pcVar14)(plVar54,0);
  uVar62 = *(uint *)(param_1 + 100);
  if ((*(byte *)((longlong)param_1 + 0x304) & 0x10) == 0) {
    uVar62 = uVar62 - 1;
    *(uint *)((longlong)register0x00000020 + 0x18) = uVar62;
  }
  else {
    *(uint *)((longlong)register0x00000020 + 0x18) = uVar62;
  }
  uVar62 = uVar62 & 0x80000001;
  if ((int)uVar62 < 0) {
    uVar62 = (uVar62 - 1 | 0xfffffffe) + 1;
  }
  lVar59 = param_1[0x19];
  puVar15 = *(undefined8 **)(lVar59 + 0x30);
  *(undefined1 *)(lVar59 + 0x1ca) = 1;
  *(undefined8 **)(lVar59 + 0x30) = puVar15 + 8;
  puVar15[8] = *puVar15;
  puVar15[9] = puVar15[1];
  puVar15[10] = puVar15[2];
  puVar15[0xb] = puVar15[3];
  puVar15[0xc] = puVar15[4];
  puVar15[0xd] = puVar15[5];
  puVar15[0xe] = puVar15[6];
  puVar15[0xf] = puVar15[7];
  uVar16 = *(undefined8 *)(pfVar53 + 2);
  puVar15 = *(undefined8 **)(param_1[0x19] + 0x30);
  *puVar15 = *(undefined8 *)pfVar53;
  puVar15[1] = uVar16;
  uVar16 = *(undefined8 *)(pfVar53 + 6);
  puVar15[2] = *(undefined8 *)(pfVar53 + 4);
  puVar15[3] = uVar16;
  uVar16 = *(undefined8 *)(pfVar53 + 10);
  puVar15[4] = *(undefined8 *)(pfVar53 + 8);
  puVar15[5] = uVar16;
  uVar16 = *(undefined8 *)(pfVar53 + 0xe);
  puVar15[6] = *(undefined8 *)(pfVar53 + 0xc);
  puVar15[7] = uVar16;
  lVar59 = param_1[0x19];
  uVar16 = *(undefined8 *)(pfVar53 + 2);
  *(undefined8 *)((longlong)param_1 + 900) = *(undefined8 *)pfVar53;
  *(undefined8 *)((longlong)param_1 + 0x38c) = uVar16;
  uVar16 = *(undefined8 *)(pfVar53 + 6);
  *(undefined8 *)((longlong)param_1 + 0x394) = *(undefined8 *)(pfVar53 + 4);
  *(undefined8 *)((longlong)param_1 + 0x39c) = uVar16;
  fVar67 = pfVar53[9];
  fVar72 = pfVar53[10];
  fVar2 = pfVar53[0xb];
  *(float *)((longlong)param_1 + 0x3a4) = pfVar53[8];
  *(float *)(param_1 + 0x75) = fVar67;
  *(float *)((longlong)param_1 + 0x3ac) = fVar72;
  *(float *)(param_1 + 0x76) = fVar2;
  uVar16 = *(undefined8 *)(pfVar53 + 0xe);
  *(undefined8 *)((longlong)param_1 + 0x3b4) = *(undefined8 *)(pfVar53 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0x3bc) = uVar16;
  if (*(char *)(lVar59 + 0x1ca) != '\0') {
    *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e96bb;
    FUN_1400d42d0();
  }
  uVar48 = _UNK_140492ae8;
  uVar24 = DAT_140492a14;
  uVar16 = *(undefined8 *)(lVar59 + 0x8f8);
  lVar65 = param_1[0x19];
  *(undefined8 *)((longlong)param_1 + 0x344) = *(undefined8 *)(lVar59 + 0x8f0);
  *(undefined8 *)((longlong)param_1 + 0x34c) = uVar16;
  uVar16 = *(undefined8 *)(lVar59 + 0x908);
  *(undefined8 *)((longlong)param_1 + 0x354) = *(undefined8 *)(lVar59 + 0x900);
  *(undefined8 *)((longlong)param_1 + 0x35c) = uVar16;
  uVar22 = *(undefined4 *)(lVar59 + 0x914);
  uVar23 = *(undefined4 *)(lVar59 + 0x918);
  uVar13 = *(undefined4 *)(lVar59 + 0x91c);
  *(undefined4 *)((longlong)param_1 + 0x364) = *(undefined4 *)(lVar59 + 0x910);
  *(undefined4 *)(param_1 + 0x6d) = uVar22;
  *(undefined4 *)((longlong)param_1 + 0x36c) = uVar23;
  *(undefined4 *)(param_1 + 0x6e) = uVar13;
  *(undefined1 (*) [16])((longlong)param_1 + 0x374) = *(undefined1 (*) [16])(lVar59 + 0x920);
  plVar54 = (longlong *)(lVar65 + 0x30);
  *plVar54 = *plVar54 + -0x40;
  *(undefined1 *)(lVar65 + 0x1ca) = 1;
  plVar54 = (longlong *)param_1[(longlong)(int)uVar62 + 0x59];
  if ((*(uint *)((longlong)param_1 + 0x304) >> 1 & 1) == 0) {
    uVar66 = *(uint *)(param_1[0x19] + 0x118);
    lVar59 = plVar54[1];
    plVar1 = (longlong *)(lVar59 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar59 + 0x50) = (longlong)plVar54;
    pcVar14 = *(code **)(*plVar54 + 0x48);
    *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9754;
    (*pcVar14)();
    pcVar14 = *(code **)(*param_1 + 0xe0);
    *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9760;
    (*pcVar14)(param_1);
    puVar15 = *(undefined8 **)(param_1[0x19] + 0x30);
    if ((*(uint *)((longlong)param_1 + 0x304) >> 5 & 1) == 0) {
      *puVar15 = 0x3f800000;
      puVar15[1] = 0;
      *(undefined4 *)(puVar15 + 2) = 0;
      *(undefined8 *)((longlong)puVar15 + 0x14) = 0x3f800000;
      *(undefined8 *)((longlong)puVar15 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x24) = 0;
      puVar15[5] = 0x3f800000;
      puVar15[6] = 0;
      *(undefined4 *)(puVar15 + 7) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x3c) = 0x3f800000;
      lVar59 = param_1[0x19];
      *(undefined4 *)((longlong)register0x00000020 + -0x130) = uVar24;
      *(undefined4 *)((longlong)register0x00000020 + -0x138) = uVar48;
      puVar15 = *(undefined8 **)(lVar59 + 0x30);
      puVar20 = *(undefined8 **)(lVar59 + 0x38);
      uVar16 = puVar15[1];
      *puVar20 = *puVar15;
      puVar20[1] = uVar16;
      uVar16 = puVar15[3];
      puVar20[2] = puVar15[2];
      puVar20[3] = uVar16;
      uVar16 = puVar15[5];
      puVar20[4] = puVar15[4];
      puVar20[5] = uVar16;
      uVar16 = puVar15[7];
      puVar20[6] = puVar15[6];
      puVar20[7] = uVar16;
      uVar12 = *(ushort *)(param_1[0x59] + 0x1a);
      plVar54 = *(longlong **)(param_1[0x19] + 0x1518);
      uVar16 = *(undefined8 *)(param_1[0x19] + 0x40);
      pcVar14 = *(code **)(*plVar54 + 0x18);
      if ((uVar66 & 1) == 0) {
        *(undefined4 *)((longlong)register0x00000020 + -0x140) = 0;
        *(float *)((longlong)register0x00000020 + -0x148) = (float)uVar12;
        *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e984c;
        (*pcVar14)(plVar54,uVar16,0);
      }
      else {
        *(float *)((longlong)register0x00000020 + -0x140) = (float)uVar12;
        *(undefined4 *)((longlong)register0x00000020 + -0x148) = 0;
        *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e983b;
        (*pcVar14)();
      }
    }
    else {
      puVar20 = *(undefined8 **)((longlong)register0x00000020 + -0x118);
      uVar16 = puVar20[1];
      *puVar15 = *puVar20;
      puVar15[1] = uVar16;
      uVar16 = puVar20[3];
      puVar15[2] = puVar20[2];
      puVar15[3] = uVar16;
      uVar22 = *(undefined4 *)((longlong)puVar20 + 0x24);
      uVar23 = *(undefined4 *)(puVar20 + 5);
      uVar13 = *(undefined4 *)((longlong)puVar20 + 0x2c);
      *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(puVar20 + 4);
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar22;
      *(undefined4 *)(puVar15 + 5) = uVar23;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar13;
      *(undefined1 (*) [16])(puVar15 + 6) = *(undefined1 (*) [16])(puVar20 + 6);
    }
    *(undefined1 *)(param_1[0x19] + 0x1ca) = 1;
    if (((*(ushort *)(param_1 + 0x24) & 4) == 0) || ((*(ushort *)(param_1 + 0x24) & 2) == 0)) {
      pcVar14 = *(code **)(*param_1 + 0xe8);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e99b2;
      (*pcVar14)(param_1);
    }
    else {
      lVar59 = param_1[0x19];
      puVar15 = *(undefined8 **)(lVar59 + 0x38);
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
      *(undefined8 **)(lVar59 + 0x38) = puVar15 + 8;
      puVar15[8] = *puVar15;
      puVar15[9] = puVar15[1];
      puVar15[10] = puVar15[2];
      puVar15[0xb] = puVar15[3];
      puVar15[0xc] = puVar15[4];
      puVar15[0xd] = puVar15[5];
      puVar15[0xe] = puVar15[6];
      puVar15[0xf] = puVar15[7];
      lVar59 = param_1[0x19];
      puVar15 = *(undefined8 **)(lVar59 + 0x40);
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
      *(undefined8 **)(lVar59 + 0x40) = puVar15 + 8;
      puVar15[8] = *puVar15;
      puVar15[9] = puVar15[1];
      puVar15[10] = puVar15[2];
      puVar15[0xb] = puVar15[3];
      puVar15[0xc] = puVar15[4];
      puVar15[0xd] = puVar15[5];
      puVar15[0xe] = puVar15[6];
      puVar15[0xf] = puVar15[7];
      lVar59 = param_1[0x19];
      puVar15 = *(undefined8 **)(lVar59 + 0x38);
      uVar16 = *(undefined8 *)(lVar59 + 0x1168);
      *puVar15 = *(undefined8 *)(lVar59 + 0x1160);
      puVar15[1] = uVar16;
      uVar16 = *(undefined8 *)(lVar59 + 0x1178);
      puVar15[2] = *(undefined8 *)(lVar59 + 0x1170);
      puVar15[3] = uVar16;
      uVar16 = *(undefined8 *)(lVar59 + 0x1188);
      puVar15[4] = *(undefined8 *)(lVar59 + 0x1180);
      puVar15[5] = uVar16;
      uVar16 = *(undefined8 *)(lVar59 + 0x1198);
      puVar15[6] = *(undefined8 *)(lVar59 + 0x1190);
      puVar15[7] = uVar16;
      lVar59 = param_1[0x19];
      puVar15 = *(undefined8 **)(lVar59 + 0x40);
      uVar16 = *(undefined8 *)(lVar59 + 0x11a8);
      *puVar15 = *(undefined8 *)(lVar59 + 0x11a0);
      puVar15[1] = uVar16;
      uVar16 = *(undefined8 *)(lVar59 + 0x11b8);
      puVar15[2] = *(undefined8 *)(lVar59 + 0x11b0);
      puVar15[3] = uVar16;
      uVar22 = *(undefined4 *)(lVar59 + 0x11c4);
      uVar23 = *(undefined4 *)(lVar59 + 0x11c8);
      uVar13 = *(undefined4 *)(lVar59 + 0x11cc);
      *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(lVar59 + 0x11c0);
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar22;
      *(undefined4 *)(puVar15 + 5) = uVar23;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar13;
      *(undefined1 (*) [16])(puVar15 + 6) = *(undefined1 (*) [16])(lVar59 + 0x11d0);
      pcVar14 = *(code **)(*param_1 + 0xe8);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e997e;
      (*pcVar14)(param_1);
      lVar59 = param_1[0x19];
      plVar54 = (longlong *)(lVar59 + 0x40);
      *plVar54 = *plVar54 + -0x40;
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
      lVar59 = param_1[0x19];
      plVar54 = (longlong *)(lVar59 + 0x38);
      *plVar54 = *plVar54 + -0x40;
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
    }
code_r0x0001401e99f0:
    plVar54 = (longlong *)param_1[(longlong)(int)uVar62 + 0x59];
    lVar59 = param_1[100];
    *(longlong *)(plVar54[1] + 0x50) = *(longlong *)(plVar54[1] + 0x50) + -8;
    if ((int)lVar59 < 2) {
      if ((longlong *)**(longlong **)(plVar54[1] + 0x50) == (longlong *)0x0) {
        pcVar14 = *(code **)(*plVar54 + 0x50);
        *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9a2d;
        (*pcVar14)(plVar54);
      }
      else {
        pcVar14 = *(code **)(*(longlong *)**(longlong **)(plVar54[1] + 0x50) + 0x48);
        *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9a22;
        (*pcVar14)();
      }
    }
  }
  else {
    pcVar14 = *(code **)(*plVar54 + 8);
    *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e99ba;
    (*pcVar14)();
    if (param_1[0x33] != param_1[0x34]) {
      plVar1 = (longlong *)param_1[(longlong)(int)uVar62 + 0x59];
      lVar59 = plVar1[1];
      plVar54 = (longlong *)(lVar59 + 0x50);
      *plVar54 = *plVar54 + 8;
      **(longlong **)(lVar59 + 0x50) = (longlong)plVar1;
      pcVar14 = *(code **)(*plVar1 + 0x48);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e99e8;
      (*pcVar14)();
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e99f0;
      func_0x0001401ecbf0(param_1);
      goto code_r0x0001401e99f0;
    }
  }
  if ((uVar64 & 1) != 0) {
    puVar15 = *(undefined8 **)(param_1[0x19] + 0x30);
    *puVar15 = 0x3f800000;
    puVar15[1] = 0;
    *(undefined4 *)(puVar15 + 2) = 0;
    *(undefined8 *)((longlong)puVar15 + 0x14) = 0x3f800000;
    *(undefined8 *)((longlong)puVar15 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x24) = 0;
    puVar15[5] = 0x3f800000;
    puVar15[6] = 0;
    *(undefined4 *)(puVar15 + 7) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x3c) = 0x3f800000;
    puVar15 = *(undefined8 **)(param_1[0x19] + 0x30);
    puVar20 = *(undefined8 **)(param_1[0x19] + 0x38);
    uVar16 = puVar15[1];
    *puVar20 = *puVar15;
    puVar20[1] = uVar16;
    uVar16 = puVar15[3];
    puVar20[2] = puVar15[2];
    puVar20[3] = uVar16;
    uVar22 = *(undefined4 *)((longlong)puVar15 + 0x24);
    uVar23 = *(undefined4 *)(puVar15 + 5);
    uVar13 = *(undefined4 *)((longlong)puVar15 + 0x2c);
    *(undefined4 *)(puVar20 + 4) = *(undefined4 *)(puVar15 + 4);
    *(undefined4 *)((longlong)puVar20 + 0x24) = uVar22;
    *(undefined4 *)(puVar20 + 5) = uVar23;
    *(undefined4 *)((longlong)puVar20 + 0x2c) = uVar13;
    *(undefined1 (*) [16])(puVar20 + 6) = *(undefined1 (*) [16])(puVar15 + 6);
  }
  uVar23 = DAT_140492a88;
  uVar22 = DAT_1404927d4;
  uVar56 = 0;
  lVar59 = param_1[0x19];
  *(undefined4 *)((longlong)register0x00000020 + -0x130) = uVar24;
  *(undefined4 *)((longlong)register0x00000020 + -0x138) = uVar48;
  plVar54 = *(longlong **)(lVar59 + 0x1518);
  uVar16 = *(undefined8 *)(lVar59 + 0x40);
  *(undefined4 *)((longlong)register0x00000020 + -0x140) = DAT_1404927d4;
  lVar59 = *plVar54;
  *(undefined4 *)((longlong)register0x00000020 + -0x148) = DAT_140492a88;
  pcVar14 = *(code **)(lVar59 + 0x18);
  *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9aee;
  (*pcVar14)(plVar54,uVar16,DAT_140492a88);
  lVar59 = param_1[0x19];
  cVar51 = '\0';
  iVar52 = -1;
  *(undefined8 *)((longlong)register0x00000020 + -0x108) = 0;
  *(undefined4 *)((longlong)register0x00000020 + -0x128) = 0xffffffff;
  *(undefined1 *)((longlong)register0x00000020 + 8) = 0;
  *(undefined1 *)(lVar59 + 0x1ca) = 1;
  lVar59 = param_1[0x62] - param_1[0x61] >> 3;
  *(longlong *)((longlong)register0x00000020 + -0xf8) = lVar59;
  *(undefined4 *)((longlong)register0x00000020 + 0x20) = 0;
  uVar58 = uVar56;
  if (0 < (int)lVar59) {
    do {
      lVar59 = *(longlong *)(param_1[0x61] + uVar56 * 8);
      if ((*(byte *)(lVar59 + 0x118) & 1) != 0) {
        lVar65 = *(longlong *)(lVar59 + 0xd0);
        cVar49 = '\0';
        lVar55 = *(longlong *)(lVar59 + 0xd8);
        *(undefined1 *)((longlong)register0x00000020 + 0x10) = 0;
        uVar64 = (uint)(uVar62 == 0);
        *(longlong *)((longlong)register0x00000020 + -0x110) = lVar65;
        iVar52 = 0;
        if ((lVar55 - lVar65 >> 4) * -0x5555555555555555 != 0) {
          while( true ) {
            if ((*(char *)((longlong)register0x00000020 + -0x124) == '\0') &&
               (iVar57 = *(int *)((longlong)register0x00000020 + 0x18), (int)uVar58 == iVar57)) {
              *(longlong *)((longlong)register0x00000020 + -0x108) = lVar59;
              *(int *)((longlong)register0x00000020 + -0x128) = iVar52;
              goto code_r0x0001401e9d24;
            }
            if (cVar49 == '\0') {
              *(undefined1 *)((longlong)register0x00000020 + 0x10) = 1;
              if (cVar51 == '\0') {
                if ((*(uint *)(lVar59 + 0x118) >> 1 & 1) == 0) {
                  *(undefined1 *)((longlong)register0x00000020 + 8) = 0;
                }
                else {
                  lVar65 = param_1[0x19];
                  *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9c08;
                  plVar54 = (longlong *)FUN_1401ab4e0(lVar65 + 0x16c0,"_rt_FullFrameBuffer");
                  pcVar14 = *(code **)(*plVar54 + 8);
                  *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9c11;
                  (*pcVar14)(plVar54);
                  *(undefined1 *)((longlong)register0x00000020 + 8) = 1;
                }
              }
              plVar1 = (longlong *)param_1[(longlong)(int)uVar64 + 0x59];
              lVar65 = plVar1[1];
              plVar54 = (longlong *)(lVar65 + 0x50);
              *plVar54 = *plVar54 + 8;
              **(longlong **)(lVar65 + 0x50) = (longlong)plVar1;
              pcVar14 = *(code **)(*plVar1 + 0x48);
              *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9c44;
              (*pcVar14)();
            }
            *(undefined1 *)((longlong)register0x00000020 + -0x148) = 0;
            *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9c5a;
            func_0x0001401ec030(param_1,lVar59,iVar52,uVar62);
            if (((*(uint *)(*(longlong *)((longlong)register0x00000020 + -0x110) + 0x14 +
                           (longlong)iVar52 * 0x30) >> 1 & 1) != 0) &&
               (uVar66 = (int)uVar58 + 1, uVar58 = (ulonglong)uVar66,
               (int)uVar66 < *(int *)((longlong)register0x00000020 + 0x18))) {
              plVar54 = (longlong *)
                        (*(longlong *)(param_1[(longlong)(int)uVar64 + 0x59] + 8) + 0x50);
              *plVar54 = *plVar54 + -8;
              uVar64 = (uint)(uVar62 != 0);
              plVar1 = (longlong *)param_1[(ulonglong)(uVar62 != 0) + 0x59];
              lVar65 = plVar1[1];
              plVar54 = (longlong *)(lVar65 + 0x50);
              *plVar54 = *plVar54 + 8;
              **(longlong **)(lVar65 + 0x50) = (longlong)plVar1;
              pcVar14 = *(code **)(*plVar1 + 0x48);
              *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9cb9;
              (*pcVar14)();
              uVar62 = (uint)(uVar62 == 0);
            }
            lVar65 = *(longlong *)(lVar59 + 0xd0);
            iVar52 = iVar52 + 1;
            lVar55 = *(longlong *)(lVar59 + 0xd8);
            cVar49 = *(char *)((longlong)register0x00000020 + 0x10);
            *(longlong *)((longlong)register0x00000020 + -0x110) = lVar65;
            if ((ulonglong)((lVar55 - lVar65 >> 4) * -0x5555555555555555) <=
                (ulonglong)(longlong)iVar52) break;
            cVar51 = *(char *)((longlong)register0x00000020 + 8);
          }
          iVar57 = *(int *)((longlong)register0x00000020 + 0x18);
code_r0x0001401e9d24:
          if (cVar49 != '\0') {
            uVar66 = (int)uVar58 + 1;
            uVar58 = (ulonglong)uVar66;
            plVar54 = (longlong *)param_1[(longlong)(int)uVar64 + 0x59];
            *(longlong *)(plVar54[1] + 0x50) = *(longlong *)(plVar54[1] + 0x50) + -8;
            uVar62 = uVar64;
            if (iVar57 <= (int)uVar66) {
              if ((longlong *)**(longlong **)(plVar54[1] + 0x50) == (longlong *)0x0) {
                pcVar14 = *(code **)(*plVar54 + 0x50);
                *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9d66;
                (*pcVar14)(plVar54);
              }
              else {
                pcVar14 = *(code **)(*(longlong *)**(longlong **)(plVar54[1] + 0x50) + 0x48);
                *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9d5b;
                (*pcVar14)();
              }
            }
          }
        }
      }
      uVar64 = *(int *)((longlong)register0x00000020 + 0x20) + 1;
      uVar56 = (ulonglong)uVar64;
      *(uint *)((longlong)register0x00000020 + 0x20) = uVar64;
      if (*(int *)((longlong)register0x00000020 + -0xf8) <= (int)uVar64) goto code_r0x0001401e9d90;
      cVar51 = *(char *)((longlong)register0x00000020 + 8);
    } while( true );
  }
code_r0x0001401e9d99:
  lVar59 = param_1[0x19];
  bVar21 = true;
  plVar54 = (longlong *)(lVar59 + 0x40);
  *plVar54 = *plVar54 + -0x40;
  *(undefined1 *)(lVar59 + 0x1ca) = 1;
  lVar59 = param_1[0x19];
  plVar54 = (longlong *)(lVar59 + 0x38);
  *plVar54 = *plVar54 + -0x40;
  *(undefined1 *)(lVar59 + 0x1ca) = 1;
  lVar59 = param_1[0x19];
  plVar54 = (longlong *)(lVar59 + 0x30);
  *plVar54 = *plVar54 + -0x40;
  *(undefined1 *)(lVar59 + 0x1ca) = 1;
  if (bVar46) {
    lVar59 = param_1[0x19];
    uVar13 = *(undefined4 *)((longlong)register0x00000020 + -0x120);
    puVar15 = *(undefined8 **)(lVar59 + 0x40);
    *(undefined1 *)(lVar59 + 0x1ca) = 1;
    *(undefined8 **)(lVar59 + 0x40) = puVar15 + 8;
    puVar15[8] = *puVar15;
    puVar15[9] = puVar15[1];
    puVar15[10] = puVar15[2];
    puVar15[0xb] = puVar15[3];
    puVar15[0xc] = puVar15[4];
    puVar15[0xd] = puVar15[5];
    puVar15[0xe] = puVar15[6];
    puVar15[0xf] = puVar15[7];
    lVar59 = param_1[0x19];
    puVar15 = *(undefined8 **)(lVar59 + 0x38);
    *(undefined1 *)(lVar59 + 0x1ca) = 1;
    *(undefined8 **)(lVar59 + 0x38) = puVar15 + 8;
    puVar15[8] = *puVar15;
    puVar15[9] = puVar15[1];
    puVar15[10] = puVar15[2];
    puVar15[0xb] = puVar15[3];
    puVar15[0xc] = puVar15[4];
    puVar15[0xd] = puVar15[5];
    puVar15[0xe] = puVar15[6];
    puVar15[0xf] = puVar15[7];
    lVar59 = param_1[0x19];
    puVar15 = *(undefined8 **)(lVar59 + 0x30);
    *(undefined1 *)(lVar59 + 0x1ca) = 1;
    *(undefined8 **)(lVar59 + 0x30) = puVar15 + 8;
    puVar15[8] = *puVar15;
    puVar15[9] = puVar15[1];
    puVar15[10] = puVar15[2];
    puVar15[0xb] = puVar15[3];
    *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar15 + 4);
    *(undefined4 *)((longlong)puVar15 + 100) = *(undefined4 *)((longlong)puVar15 + 0x24);
    *(undefined4 *)(puVar15 + 0xd) = *(undefined4 *)(puVar15 + 5);
    *(undefined4 *)((longlong)puVar15 + 0x6c) = *(undefined4 *)((longlong)puVar15 + 0x2c);
    puVar15[0xe] = puVar15[6];
    puVar15[0xf] = puVar15[7];
    lVar59 = param_1[0x19];
    if ((char)uVar13 == '\0') {
      uVar16 = *(undefined8 *)(lVar59 + 0x30);
      pcVar14 = *(code **)(*param_1 + 0xa8);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9eab;
      (*pcVar14)(param_1,uVar16);
      pfVar53 = *(float **)(param_1[0x19] + 0x30);
      pfVar17 = *(float **)((longlong)register0x00000020 + -0x118);
      fVar67 = pfVar53[4];
      fVar72 = pfVar53[5];
      fVar2 = pfVar53[6];
      fVar3 = pfVar53[7];
      fVar4 = *pfVar17;
      fVar71 = pfVar17[1];
      fVar5 = pfVar17[2];
      fVar6 = pfVar53[8];
      fVar7 = pfVar53[9];
      fVar8 = pfVar53[10];
      fVar70 = pfVar53[0xb];
      fVar9 = *pfVar53;
      fVar10 = pfVar53[1];
      fVar11 = pfVar53[2];
      fVar68 = pfVar53[3];
      *pfVar53 = fVar5 * fVar6 + fVar71 * fVar67 + fVar4 * fVar9;
      pfVar53[1] = fVar5 * fVar7 + fVar71 * fVar72 + fVar4 * fVar10;
      pfVar53[2] = fVar5 * fVar8 + fVar71 * fVar2 + fVar4 * fVar11;
      pfVar53[3] = fVar5 * fVar70 + fVar71 * fVar3 + fVar4 * fVar68;
      fVar4 = pfVar17[4];
      fVar71 = pfVar17[5];
      fVar5 = pfVar17[6];
      pfVar53[4] = fVar5 * fVar6 + fVar71 * fVar67 + fVar4 * fVar9;
      pfVar53[5] = fVar5 * fVar7 + fVar71 * fVar72 + fVar4 * fVar10;
      pfVar53[6] = fVar5 * fVar8 + fVar71 * fVar2 + fVar4 * fVar11;
      pfVar53[7] = fVar5 * fVar70 + fVar71 * fVar3 + fVar4 * fVar68;
      fVar4 = pfVar17[8];
      fVar71 = pfVar17[9];
      fVar5 = pfVar17[10];
      pfVar53[8] = fVar5 * fVar6 + fVar71 * fVar67 + fVar4 * fVar9;
      pfVar53[9] = fVar5 * fVar7 + fVar71 * fVar72 + fVar4 * fVar10;
      pfVar53[10] = fVar5 * fVar8 + fVar71 * fVar2 + fVar4 * fVar11;
      pfVar53[0xb] = fVar5 * fVar70 + fVar71 * fVar3 + fVar4 * fVar68;
      fVar4 = pfVar17[0xc];
      fVar71 = pfVar17[0xd];
      fVar5 = pfVar17[0xe];
      pfVar53[0xc] = fVar5 * fVar6 + pfVar53[0xc] + fVar71 * fVar67 + fVar4 * fVar9;
      pfVar53[0xd] = fVar5 * fVar7 + pfVar53[0xd] + fVar71 * fVar72 + fVar4 * fVar10;
      pfVar53[0xe] = fVar5 * fVar8 + pfVar53[0xe] + fVar71 * fVar2 + fVar4 * fVar11;
      pfVar53[0xf] = fVar5 * fVar70 + pfVar53[0xf] + fVar71 * fVar3 + fVar4 * fVar68;
      if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
        lVar59 = param_1[0x19];
        *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401e9f88;
        FUN_1401e5c30(lVar59);
      }
    }
    else {
      puVar15 = *(undefined8 **)(lVar59 + 0x38);
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
      *(undefined4 *)((longlong)register0x00000020 + -0x130) = uVar22;
      *(undefined4 *)((longlong)register0x00000020 + -0x138) = uVar23;
      *(undefined4 *)((longlong)register0x00000020 + -0x140) = uVar22;
      *(undefined8 **)(lVar59 + 0x38) = puVar15 + 8;
      uVar16 = *puVar15;
      uVar25 = puVar15[1];
      *(undefined4 *)((longlong)register0x00000020 + -0x148) = uVar23;
      puVar15[8] = uVar16;
      puVar15[9] = uVar25;
      puVar15[10] = puVar15[2];
      puVar15[0xb] = puVar15[3];
      *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar15 + 4);
      *(undefined4 *)((longlong)puVar15 + 100) = *(undefined4 *)((longlong)puVar15 + 0x24);
      *(undefined4 *)(puVar15 + 0xd) = *(undefined4 *)(puVar15 + 5);
      *(undefined4 *)((longlong)puVar15 + 0x6c) = *(undefined4 *)((longlong)puVar15 + 0x2c);
      puVar15[0xe] = puVar15[6];
      puVar15[0xf] = puVar15[7];
      puVar15 = *(undefined8 **)(param_1[0x19] + 0x30);
      *puVar15 = 0x3f800000;
      puVar15[1] = 0;
      *(undefined4 *)(puVar15 + 2) = 0;
      *(undefined8 *)((longlong)puVar15 + 0x14) = 0x3f800000;
      *(undefined8 *)((longlong)puVar15 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x24) = 0;
      puVar15[5] = 0x3f800000;
      puVar15[6] = 0;
      *(undefined4 *)(puVar15 + 7) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x3c) = 0x3f800000;
      puVar15 = *(undefined8 **)(param_1[0x19] + 0x38);
      *puVar15 = 0x3f800000;
      puVar15[1] = 0;
      *(undefined4 *)(puVar15 + 2) = 0;
      *(undefined8 *)((longlong)puVar15 + 0x14) = 0x3f800000;
      *(undefined8 *)((longlong)puVar15 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x24) = 0;
      puVar15[5] = 0x3f800000;
      puVar15[6] = 0;
      *(undefined4 *)(puVar15 + 7) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x3c) = 0x3f800000;
      plVar54 = *(longlong **)(param_1[0x19] + 0x1518);
      uVar16 = *(undefined8 *)(param_1[0x19] + 0x40);
      pcVar14 = *(code **)(*plVar54 + 0x18);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea0a0;
      (*pcVar14)(plVar54,uVar16,uVar23);
    }
    if (*(char *)((longlong)register0x00000020 + -0x124) == '\0') {
      if (uVar56 != 0) {
        if ((*(char *)((longlong)register0x00000020 + 8) == '\0') &&
           ((*(uint *)(uVar56 + 0x118) >> 1 & 1) != 0)) {
          lVar59 = param_1[0x19];
          *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea1de;
          plVar54 = (longlong *)FUN_1401ab4e0(lVar59 + 0x16c0,"_rt_FullFrameBuffer");
          pcVar14 = *(code **)(*plVar54 + 8);
          *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea1e7;
          (*pcVar14)(plVar54);
        }
        if ((ulonglong)(longlong)iVar52 <
            (ulonglong)
            ((*(longlong *)(uVar56 + 0xd8) - *(longlong *)(uVar56 + 0xd0) >> 4) *
            -0x5555555555555555)) {
          do {
            *(undefined1 *)((longlong)register0x00000020 + -0x148) = 1;
            *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea226;
            func_0x0001401ec030(param_1,uVar56,iVar52,uVar62);
            iVar52 = iVar52 + 1;
          } while ((ulonglong)(longlong)iVar52 <
                   (ulonglong)
                   ((*(longlong *)(uVar56 + 0xd8) - *(longlong *)(uVar56 + 0xd0) >> 4) *
                   -0x5555555555555555));
        }
      }
    }
    else {
      plVar54 = *(longlong **)(param_1[0x19] + 0x1518);
      pcVar14 = *(code **)(*plVar54 + 0xd8);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea0c9;
      (*pcVar14)(plVar54,1,0);
      lVar59 = param_1[0x19];
      lVar65 = *(longlong *)(lVar59 + 0x1b8);
      *(longlong *)(lVar59 + 0x1b8) = lVar65 + -1;
      plVar54 = *(longlong **)(lVar59 + 0x1518);
      uVar50 = *(undefined1 *)(lVar65 + -2);
      pcVar14 = *(code **)(*plVar54 + 0xb0);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea0f6;
      (*pcVar14)(plVar54,uVar50);
      bVar21 = false;
      *(undefined4 *)(param_1[0x19] + 300) = 0x3f800000;
      *(undefined4 *)(param_1[0x19] + 0x128) = 0x3f800000;
      *(undefined4 *)(param_1[0x19] + 0x124) = 0x3f800000;
      *(undefined4 *)(param_1[0x19] + 0x120) = 0x3f800000;
      *(undefined8 *)(param_1[0x58] + 0xd0) =
           *(undefined8 *)(param_1[(longlong)(int)uVar62 + 0x59] + 0x20);
      pcVar14 = *(code **)(*param_1 + 0x100);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea166;
      (*pcVar14)(param_1);
      lVar59 = param_1[0x58];
      if (*(int *)((longlong)param_1 + 0x32c) == 0x1f) {
        uVar50 = 2;
      }
      else {
        pcVar14 = *(code **)(*param_1 + 0x120);
        *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea186;
        uVar50 = (*pcVar14)(param_1);
      }
      *(undefined1 *)(lVar59 + 0x1f0) = uVar50;
      lVar59 = param_1[0x58];
      pcVar14 = *(code **)(*param_1 + 0xf8);
      *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea19f;
      (*pcVar14)(param_1,lVar59);
    }
    if ((char)uVar13 != '\0') {
      lVar59 = param_1[0x19];
      plVar54 = (longlong *)(lVar59 + 0x38);
      *plVar54 = *plVar54 + -0x40;
      *(undefined1 *)(lVar59 + 0x1ca) = 1;
    }
    lVar59 = param_1[0x19];
    plVar54 = (longlong *)(lVar59 + 0x30);
    *plVar54 = *plVar54 + -0x40;
    *(undefined1 *)(lVar59 + 0x1ca) = 1;
    lVar59 = param_1[0x19];
    plVar54 = (longlong *)(lVar59 + 0x38);
    *plVar54 = *plVar54 + -0x40;
    *(undefined1 *)(lVar59 + 0x1ca) = 1;
    lVar59 = param_1[0x19];
    plVar54 = (longlong *)(lVar59 + 0x40);
    *plVar54 = *plVar54 + -0x40;
    *(undefined1 *)(lVar59 + 0x1ca) = 1;
  }
  plVar54 = *(longlong **)(param_1[0x19] + 0x1518);
  pcVar14 = *(code **)(*plVar54 + 0xd8);
  *(undefined **)((longlong)register0x00000020 + -0x170) = &UNK_1401ea2b3;
  (*pcVar14)(plVar54,1,0);
  if (bVar21) {
    lVar59 = param_1[0x19];
    lVar65 = *(longlong *)(lVar59 + 0x1b8);
    *(longlong *)(lVar59 + 0x1b8) = lVar65 + -1;
    plVar54 = *(longlong **)(lVar59 + 0x1518);
    uVar50 = *(undefined1 *)(lVar65 + -2);
    pcVar14 = *(code **)(*plVar54 + 0xb0);
    *(undefined8 *)((longlong)register0x00000020 + -0x170) = 0x1401ea2e5;
    (*pcVar14)(plVar54,uVar50);
  }
code_r0x0001401ea2e5:
  plVar54 = *(longlong **)(param_1[0x19] + 0x1518);
  pcVar14 = *(code **)(*plVar54 + 0x128);
  *(undefined8 *)((longlong)register0x00000020 + -0x170) = 0x1401ea2fe;
  (*pcVar14)(plVar54,0);
  return;
code_r0x0001401e9d90:
  iVar52 = *(int *)((longlong)register0x00000020 + -0x128);
  uVar56 = *(ulonglong *)((longlong)register0x00000020 + -0x108);
  goto code_r0x0001401e9d99;
}

