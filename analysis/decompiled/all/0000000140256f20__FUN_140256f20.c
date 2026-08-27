// Function: FUN_140256f20
// Addr: 140256f20
// Size: 2230 bytes


void FUN_140256f20(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  longlong lVar8;
  undefined *puVar9;
  float fVar10;
  undefined1 uVar11;
  int iVar12;
  size_t sVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  ushort local_74;
  
  plVar19 = param_1 + 0x8a;
  if ((ulonglong)param_1[0x91] < 0x10) {
    plVar17 = param_1 + 0x8e;
  }
  else {
    plVar17 = (longlong *)param_1[0x8e];
  }
  uVar15 = param_1[0x8d];
  sVar7 = param_1[0x8c];
  plVar16 = plVar19;
  if (0xf < uVar15) {
    plVar16 = (longlong *)*plVar19;
  }
  if ((sVar7 == param_1[0x90]) &&
     (((sVar7 == 0 || (iVar12 = memcmp(plVar16,plVar17,sVar7), iVar12 == 0)) &&
      (*(float *)(param_1 + 0x9c) == *(float *)((longlong)param_1 + 0x4e4))))) {
    plVar17 = param_1 + 0x96;
    plVar16 = param_1 + 0x92;
    if (0xf < (ulonglong)param_1[0x99]) {
      plVar17 = (longlong *)*plVar17;
    }
    sVar13 = param_1[0x94];
    if (0xf < (ulonglong)param_1[0x95]) {
      plVar16 = (longlong *)*plVar16;
    }
    if (((((sVar13 == param_1[0x98]) &&
          ((sVar13 == 0 || (iVar12 = memcmp(plVar16,plVar17,sVar13), iVar12 == 0)))) &&
         (*(int *)((longlong)param_1 + 0x594) == (int)param_1[0xb3])) &&
        ((((*(char *)((longlong)param_1 + 0x59c) == *(char *)((longlong)param_1 + 0x59d) &&
           (*(char *)((longlong)param_1 + 0x59e) == *(char *)((longlong)param_1 + 0x59f))) &&
          ((*(float *)(param_1 + 0x9d) == *(float *)(param_1 + 0x9e) &&
           ((((*(float *)((longlong)param_1 + 0x4ec) == *(float *)((longlong)param_1 + 0x4f4) &&
              (*(float *)(param_1 + 0x9f) == *(float *)(param_1 + 0xa0))) &&
             (*(float *)((longlong)param_1 + 0x4fc) == *(float *)((longlong)param_1 + 0x504))) &&
            ((*(float *)(param_1 + 0xa1) == *(float *)((longlong)param_1 + 0x50c) &&
             ((int)param_1[0xa2] == *(int *)((longlong)param_1 + 0x514))))))))) &&
         (*(char *)((longlong)param_1 + 0x5a1) == (char)param_1[0xb4])))) &&
       (((int)param_1[0xa3] == 0) == (*(int *)((longlong)param_1 + 0x51c) == 0))) {
      return;
    }
  }
  if (param_1 == param_1 + -4) {
    *(int *)((longlong)param_1 + 0x4e4) = (int)param_1[0x9c];
  }
  else {
    if (0xf < uVar15) {
      plVar19 = (longlong *)*plVar19;
    }
    FUN_14000f880(param_1 + 0x8e,plVar19,sVar7);
    plVar19 = param_1 + 0x92;
    *(int *)((longlong)param_1 + 0x4e4) = (int)param_1[0x9c];
    if (0xf < (ulonglong)param_1[0x95]) {
      plVar19 = (longlong *)*plVar19;
    }
    FUN_14000f880(param_1 + 0x96,plVar19,param_1[0x94]);
  }
  plVar19 = param_1 + 0x92;
  lVar14 = param_1[0x19];
  *(undefined4 *)(param_1 + 0xb3) = *(undefined4 *)((longlong)param_1 + 0x594);
  *(undefined1 *)((longlong)param_1 + 0x59d) = *(undefined1 *)((longlong)param_1 + 0x59c);
  *(undefined1 *)((longlong)param_1 + 0x59f) = *(undefined1 *)((longlong)param_1 + 0x59e);
  param_1[0x9e] = param_1[0x9d];
  param_1[0xa0] = param_1[0x9f];
  *(int *)((longlong)param_1 + 0x50c) = (int)param_1[0xa1];
  *(int *)((longlong)param_1 + 0x514) = (int)param_1[0xa2];
  *(char *)((longlong)param_1 + 0x5a1) = (char)param_1[0xb4];
  *(int *)((longlong)param_1 + 0x51c) = (int)param_1[0xa3];
  FUN_1401b3240();
  puVar9 = PTR_s_systemfont_arial_140484cc8;
  sVar7 = param_1[0x94];
  uVar15 = param_1[0x95];
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_7c = 0;
  local_c8 = 0;
  local_bc = 0x41800000;
  local_b0 = 0x1000001;
  local_74 = 1;
  local_c0 = 8;
  sVar13 = strlen(PTR_s_systemfont_arial_140484cc8);
  plVar17 = plVar19;
  if (0xf < uVar15) {
    plVar17 = (longlong *)*plVar19;
  }
  if ((sVar7 == sVar13) && ((sVar7 == 0 || (iVar12 = memcmp(plVar17,puVar9,sVar7), iVar12 == 0)))) {
    local_c0 = 0;
  }
  puVar9 = PTR_s_systemfont_calibri_140484ce0;
  sVar13 = strlen(PTR_s_systemfont_calibri_140484ce0);
  plVar17 = plVar19;
  if (0xf < uVar15) {
    plVar17 = (longlong *)*plVar19;
  }
  if ((sVar7 == sVar13) && ((sVar7 == 0 || (iVar12 = memcmp(plVar17,puVar9,sVar7), iVar12 == 0)))) {
    local_c0 = 1;
  }
  puVar9 = PTR_s_systemfont_cambria_140484cf8;
  sVar13 = strlen(PTR_s_systemfont_cambria_140484cf8);
  plVar17 = plVar19;
  if (0xf < uVar15) {
    plVar17 = (longlong *)*plVar19;
  }
  if ((sVar7 == sVar13) && ((sVar7 == 0 || (iVar12 = memcmp(plVar17,puVar9,sVar7), iVar12 == 0)))) {
    local_c0 = 2;
  }
  puVar9 = PTR_s_systemfont_comicsans_140484d10;
  sVar13 = strlen(PTR_s_systemfont_comicsans_140484d10);
  if (0xf < uVar15) {
    plVar19 = (longlong *)*plVar19;
  }
  if ((sVar7 == sVar13) && ((sVar7 == 0 || (iVar12 = memcmp(plVar19,puVar9,sVar7), iVar12 == 0)))) {
    local_c0 = 3;
  }
  puVar9 = PTR_s_systemfont_consolas_140484d28;
  plVar19 = param_1 + 0x92;
  sVar13 = strlen(PTR_s_systemfont_consolas_140484d28);
  if (0xf < uVar15) {
    plVar19 = (longlong *)*plVar19;
  }
  if ((sVar7 == sVar13) && ((sVar7 == 0 || (iVar12 = memcmp(plVar19,puVar9,sVar7), iVar12 == 0)))) {
    local_c0 = 4;
  }
  puVar9 = PTR_s_systemfont_sansserif_140484d40;
  plVar19 = param_1 + 0x92;
  sVar13 = strlen(PTR_s_systemfont_sansserif_140484d40);
  if (0xf < uVar15) {
    plVar19 = (longlong *)*plVar19;
  }
  if ((sVar7 == sVar13) && ((sVar7 == 0 || (iVar12 = memcmp(plVar19,puVar9,sVar7), iVar12 == 0)))) {
    local_c0 = 5;
  }
  puVar9 = PTR_s_systemfont_segoe_140484d58;
  plVar19 = param_1 + 0x92;
  sVar13 = strlen(PTR_s_systemfont_segoe_140484d58);
  if (0xf < uVar15) {
    plVar19 = (longlong *)*plVar19;
  }
  if ((sVar7 == sVar13) && ((sVar7 == 0 || (iVar12 = memcmp(plVar19,puVar9,sVar7), iVar12 == 0)))) {
    local_c0 = 6;
  }
  puVar9 = PTR_s_systemfont_verdana_140484d70;
  plVar19 = param_1 + 0x92;
  sVar13 = strlen(PTR_s_systemfont_verdana_140484d70);
  if (0xf < uVar15) {
    plVar19 = (longlong *)*plVar19;
  }
  if ((sVar7 == sVar13) && ((sVar7 == 0 || (iVar12 = memcmp(plVar19,puVar9,sVar7), iVar12 == 0)))) {
    local_c0 = 7;
  }
  local_c8 = (longlong)(param_1 + 0x92);
  if (0xf < (ulonglong)param_1[0x95]) {
    local_c8 = *(longlong *)local_c8;
  }
  local_bc = (undefined4)param_1[0x9c];
  local_b8 = param_1[0x9f];
  if (((*(uint *)(param_1[0x19] + 0x118) & 0x400) == 0) && ((char)param_1[0xb4] == '\0')) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x594);
  if ((uVar5 & 4) != 0) {
    local_7c = CONCAT44(local_7c._4_4_,(int)param_1[0xa1]);
  }
  if ((uVar5 & 8) != 0) {
    local_7c = CONCAT44((int)param_1[0xa2],(undefined4)local_7c);
  }
  uVar6 = *(uint *)(param_1 + 0xa3);
  local_74 = CONCAT11((char)(uVar5 >> 5),(char)(uVar5 >> 4)) & 0x101;
  local_b0 = (ulonglong)
             CONCAT52(CONCAT41((int)(local_b0 >> 0x20),*(undefined1 *)((longlong)param_1 + 0x59c)),
                      CONCAT11(uVar6 != 0,uVar11)) << 8;
  if (uVar6 != 0) {
    if ((uVar6 & 2) == 0) {
      local_b0 = local_b0 & 0xffffffff;
    }
    else if (*(float *)(param_1 + 0xa4) <= DAT_140492704) {
      local_b0 = CONCAT44(0x3f800000,(undefined4)local_b0);
    }
    else {
      local_b0 = CONCAT44(*(float *)(param_1 + 0xa4),(undefined4)local_b0);
    }
    local_a8 = *(undefined8 *)((longlong)param_1 + 0x524);
    uVar5 = *(uint *)((longlong)param_1 + 0x52c);
    if ((uVar6 & 4) == 0) {
      local_a0 = (ulonglong)uVar5;
    }
    else if (*(float *)(param_1 + 0xa6) <= DAT_140492620) {
      local_a0 = CONCAT44(0x3c23d70a,uVar5);
    }
    else {
      local_a0 = CONCAT44(*(float *)(param_1 + 0xa6),uVar5);
    }
    if ((uVar6 & 8) == 0) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = *(float *)((longlong)param_1 + 0x534);
      if (fVar23 <= DAT_140492620) {
        fVar23 = 0.01;
      }
    }
    local_90 = *(undefined8 *)((longlong)param_1 + 0x544);
    local_88 = *(undefined4 *)((longlong)param_1 + 0x54c);
    local_98 = CONCAT44((int)param_1[0xa7],fVar23);
    local_84 = 0;
    if ((uVar6 & 8) != 0) {
      local_84 = *(undefined8 *)((longlong)param_1 + 0x53c);
    }
  }
  plVar19 = param_1 + 0x8a;
  if (0xf < (ulonglong)param_1[0x8d]) {
    plVar19 = (longlong *)*plVar19;
  }
  lVar14 = FUN_1401b0410(lVar14 + 0x18a0,&local_c8,plVar19,0);
  param_1[0xb5] = lVar14;
  uVar21 = (**(code **)(*param_1 + 0x110))(param_1);
  lVar14 = param_1[0xb5];
  if (lVar14 == 0) {
    param_1[0x5f] = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    return;
  }
  fVar23 = *(float *)(lVar14 + 0x98);
  fVar22 = *(float *)(lVar14 + 0x9c);
  lVar20 = *(longlong *)(lVar14 + 0x100);
  fVar1 = *(float *)(lVar14 + 0x90);
  uVar15 = FUN_1401b55d0(uVar21,lVar14 + 0xa8);
  fVar10 = DAT_1404926c0;
  uVar15 = uVar15 & *(ulonglong *)(lVar20 + 0x60);
  lVar8 = *(longlong *)(lVar20 + 0x38);
  lVar18 = *(longlong *)(*(longlong *)(lVar20 + 0x48) + 8 + uVar15 * 0x10);
  if (lVar18 != lVar8) {
    for (; *(float *)(lVar14 + 0xa8) != *(float *)(lVar18 + 0x10);
        lVar18 = *(longlong *)(lVar18 + 8)) {
      if (lVar18 == *(longlong *)(*(longlong *)(lVar20 + 0x48) + uVar15 * 0x10)) goto LAB_1402576b3;
    }
    if (lVar18 == 0) {
      lVar18 = lVar8;
    }
    if ((lVar18 != lVar8) && (*(longlong *)(lVar18 + 0x18) != *(longlong *)(lVar18 + 0x20))) {
      lVar20 = *(longlong *)(*(longlong *)(*(longlong *)(lVar18 + 0x18) + 8) + 0x80);
      fVar25 = (float)(*(int *)(lVar20 + 0x28) >> 6);
      fVar24 = (float)(*(int *)(lVar20 + 0x24) >> 6);
      goto LAB_1402576b9;
    }
  }
LAB_1402576b3:
  fVar25 = 0.0;
  fVar24 = 0.0;
LAB_1402576b9:
  iVar12 = *(int *)(lVar14 + 0xa4);
  fVar2 = *(float *)(lVar14 + 0x94);
  fVar3 = *(float *)(lVar14 + 0xa0);
  *(undefined4 *)(param_1 + 0x5f) = 0;
  fVar22 = fVar22 - (fVar22 - fVar2) * fVar10;
  *(float *)((longlong)param_1 + 0x2fc) = fVar22;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)((longlong)param_1 + 0x59c) == '\0') {
    *(float *)(param_1 + 0x5f) = (fVar23 - fVar1) * fVar10 + 0.0;
  }
  else if (*(char *)((longlong)param_1 + 0x59c) == '\x02') {
    *(float *)(param_1 + 0x5f) = 0.0 - (fVar23 - fVar1) * fVar10;
  }
  cVar4 = *(char *)((longlong)param_1 + 0x59e);
  if (cVar4 == '\0') {
    fVar24 = fVar25 - ((float)iVar12 - DAT_140492704) * fVar3;
  }
  else if (cVar4 == '\x01') {
    fVar24 = (fVar24 - ((float)iVar12 - DAT_140492704) * fVar3) * fVar10;
  }
  else if (cVar4 != '\x02') {
    return;
  }
  *(float *)((longlong)param_1 + 0x2fc) = fVar22 - fVar24;
  return;
}

