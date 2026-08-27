// Function: FUN_14032c830
// Addr: 14032c830
// Size: 2316 bytes


int FUN_14032c830(undefined8 param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  short *psVar9;
  char *pcVar10;
  short *psVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  short sVar16;
  short *psVar17;
  int iVar18;
  short sVar19;
  longlong local_res10 [2];
  int local_res20 [2];
  undefined8 *local_48;
  undefined8 local_40;
  
  uVar3 = param_2[0x13];
  sVar19 = 0;
  local_res20[0] = 0;
  local_res10[0] = 0;
  local_res20[0] = FUN_1402f5c50(param_1,0);
  if (local_res20[0] != 0) {
    return local_res20[0];
  }
  local_res20[0] = FUN_14032e040(param_1,uVar3,0x5000,local_res10);
  lVar4 = local_res10[0];
  if ((char)local_res20[0] == -0x50) {
    FUN_14032c760(param_2);
    return 2;
  }
  if (local_res20[0] != 0) {
    return local_res20[0];
  }
  param_2[0x1d] = local_res10[0];
  if ((0 < param_3) && ((short)param_3 != 0)) {
    FUN_14032c760(param_2);
    return 6;
  }
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x12;
  *param_2 = 1;
  if (((((local_res10[0] != 0) && (*(int *)(local_res10[0] + 0x50) != 0)) &&
       (s_SPACING_140440d80[0] != '\0')) &&
      ((plVar7 = (longlong *)FUN_1402f7910("SPACING",*(undefined8 *)(local_res10[0] + 0x70)),
       plVar7 != (longlong *)0x0 &&
       (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 != 0)))) &&
     (pcVar10 = *(char **)(lVar1 + 0x10), pcVar10 != (char *)0x0)) {
    cVar2 = *pcVar10;
    if ((cVar2 + 0xb0U & 0xdf) == 0) {
      *(undefined4 *)(lVar4 + 0x20) = 8;
    }
    else if ((cVar2 + 0xb3U & 0xdf) == 0) {
      *(undefined4 *)(lVar4 + 0x20) = 0x10;
    }
    else if ((cVar2 + 0xbdU & 0xdf) == 0) {
      *(undefined4 *)(lVar4 + 0x20) = 0x20;
    }
  }
  if ((*(int *)(lVar4 + 0x20) - 0x10U & 0xffffffef) == 0) {
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 4;
  }
  if (((lVar4 == 0) || (*(int *)(lVar4 + 0x50) == 0)) ||
     ((s_FAMILY_NAME_14043ff60[0] == '\0' ||
      (((plVar7 = (longlong *)FUN_1402f7910("FAMILY_NAME",*(undefined8 *)(lVar4 + 0x70)),
        plVar7 == (longlong *)0x0 ||
        (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 == 0)) ||
       (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 == 0)))))) {
    param_2[3] = 0;
  }
  else {
    uVar8 = FUN_1402f8160(uVar3,lVar1,local_res20);
    param_2[3] = uVar8;
    if (local_res20[0] != 0) {
      return local_res20[0];
    }
  }
  local_res20[0] = FUN_14032dcf0(param_2);
  if (local_res20[0] != 0) {
    return local_res20[0];
  }
  *(int *)(param_2 + 2) = *(int *)(lVar4 + 0x30) + 1;
  *(undefined4 *)(param_2 + 5) = 1;
  psVar9 = (short *)FUN_1402f7e90(uVar3,0x10,local_res20);
  param_2[6] = psVar9;
  if (local_res20[0] != 0) {
    return local_res20[0];
  }
  if (((lVar4 == 0) || (*(int *)(lVar4 + 0x50) == 0)) ||
     ((s_FONT_ASCENT_140440a80[0] == '\0' ||
      ((plVar7 = (longlong *)FUN_1402f7910("FONT_ASCENT",*(undefined8 *)(lVar4 + 0x70)),
       plVar7 == (longlong *)0x0 ||
       (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 == 0)))))) {
    iVar5 = (int)*(short *)(lVar4 + 0x10);
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x10);
  }
  *(int *)(lVar4 + 0x28) = iVar5;
  if (iVar5 < 0x8000) {
    if (iVar5 < 0) {
      *(undefined4 *)(lVar4 + 0x28) = 0;
    }
  }
  else {
    *(undefined4 *)(lVar4 + 0x28) = 0x7fff;
  }
  if ((((lVar4 == 0) || (*(int *)(lVar4 + 0x50) == 0)) || (s_FONT_DESCENT_140440a90[0] == '\0')) ||
     ((plVar7 = (longlong *)FUN_1402f7910("FONT_DESCENT",*(undefined8 *)(lVar4 + 0x70)),
      plVar7 == (longlong *)0x0 ||
      (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 == 0)))) {
    iVar5 = (int)*(short *)(lVar4 + 0x12);
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x10);
  }
  *(int *)(lVar4 + 0x2c) = iVar5;
  if (iVar5 < 0x8000) {
    if (iVar5 < 0) {
      *(undefined4 *)(lVar4 + 0x2c) = 0;
      iVar5 = 0;
    }
  }
  else {
    *(undefined4 *)(lVar4 + 0x2c) = 0x7fff;
    iVar5 = 0x7fff;
  }
  *psVar9 = (short)iVar5 + *(short *)(lVar4 + 0x28);
  if (((lVar4 == 0) || (*(int *)(lVar4 + 0x50) == 0)) ||
     ((s_AVERAGE_WIDTH_14043ff70[0] == '\0' ||
      ((plVar7 = (longlong *)FUN_1402f7910("AVERAGE_WIDTH",*(undefined8 *)(lVar4 + 0x70)),
       plVar7 == (longlong *)0x0 ||
       (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 == 0)))))) {
    iVar5 = *psVar9 * 2 + 1;
    sVar16 = (short)(iVar5 / 3) + (short)(iVar5 >> 0x1f) +
             (short)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
    psVar17 = (short *)0x2;
    psVar11 = psVar9;
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x10);
    psVar17 = psVar9;
    if (iVar5 + 0x4fff1U < 0x9ffe3) {
      iVar5 = iVar5 + 5;
      sVar16 = (short)(iVar5 / 10);
      if (sVar16 < 0) {
        lVar1 = (longlong)iVar5 * -0x66666667;
        sVar16 = (short)(int)(lVar1 >> 0x22) - (short)(lVar1 >> 0x3f);
        psVar11 = (short *)0x2;
        goto LAB_14032cbb4;
      }
    }
    else {
      sVar16 = 0x7fff;
    }
    psVar11 = (short *)0x2;
  }
LAB_14032cbb4:
  *(short *)((longlong)psVar17 + (longlong)psVar11) = sVar16;
  if ((((lVar4 == 0) || (*(int *)(lVar4 + 0x50) == 0)) || (s_POINT_SIZE_14043ff80[0] == '\0')) ||
     ((plVar7 = (longlong *)FUN_1402f7910("POINT_SIZE",*(undefined8 *)(lVar4 + 0x70)),
      plVar7 == (longlong *)0x0 ||
      (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 == 0)))) {
    uVar6 = *(uint *)(lVar4 + 0x14);
    if (uVar6 == 0) {
      uVar6 = (uint)psVar9[1];
LAB_14032cc46:
      iVar5 = uVar6 << 6;
    }
    else {
      if (uVar6 < 0x8000) goto LAB_14032cc46;
      iVar5 = 0x7fff;
    }
    psVar17 = (short *)&DAT_00000004;
    psVar11 = psVar9;
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x10);
    psVar17 = psVar9;
    if (iVar5 + 0x504c2U < 0xa0985) {
      iVar18 = -iVar5;
      if (-iVar5 < 0) {
        iVar18 = iVar5;
      }
      iVar5 = FUN_1402f20b0(iVar18,0x70800,0x11a4e);
      psVar11 = (short *)&DAT_00000004;
    }
    else {
      iVar5 = 0x7fff;
      psVar11 = (short *)&DAT_00000004;
    }
  }
  *(int *)((longlong)psVar17 + (longlong)psVar11) = iVar5;
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x50) == 0)) {
LAB_14032cd04:
    iVar5 = *(int *)(lVar4 + 0x18);
  }
  else {
    if ((s_PIXEL_SIZE_14043ff90[0] != '\0') &&
       ((plVar7 = (longlong *)FUN_1402f7910("PIXEL_SIZE",*(undefined8 *)(lVar4 + 0x70)),
        plVar7 != (longlong *)0x0 &&
        (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 != 0)))) {
      iVar5 = *(int *)(lVar1 + 0x10);
      if (iVar5 + 0x7fffU < 0xffff) {
        sVar16 = (short)iVar5;
        iVar5 = -(int)sVar16;
        if (-1 < sVar16) {
          iVar5 = (int)sVar16;
        }
        *(int *)(psVar9 + 6) = iVar5 << 6;
      }
      else {
        psVar9[6] = -0x40;
        psVar9[7] = 0x1f;
      }
    }
    if ((((*(int *)(lVar4 + 0x50) == 0) || (s_RESOLUTION_X_14043ffa0[0] == '\0')) ||
        (plVar7 = (longlong *)FUN_1402f7910("RESOLUTION_X",*(undefined8 *)(lVar4 + 0x70)),
        plVar7 == (longlong *)0x0)) ||
       (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 == 0)) goto LAB_14032cd04;
    iVar5 = *(int *)(lVar1 + 0x10);
  }
  sVar16 = sVar19;
  if (iVar5 != 0) {
    if (iVar5 + 0x7fffU < 0xffff) {
      iVar18 = -(int)(short)iVar5;
      if (iVar18 < 0) {
        iVar18 = (int)(short)iVar5;
      }
      sVar16 = (short)iVar18;
    }
    else {
      sVar16 = 0x7fff;
    }
  }
  if (((lVar4 == 0) || (*(int *)(lVar4 + 0x50) == 0)) ||
     ((s_RESOLUTION_Y_14043ffb0[0] == '\0' ||
      ((plVar7 = (longlong *)FUN_1402f7910("RESOLUTION_Y",*(undefined8 *)(lVar4 + 0x70)),
       plVar7 == (longlong *)0x0 ||
       (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 == 0)))))) {
    iVar5 = *(int *)(lVar4 + 0x1c);
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x10);
  }
  if (iVar5 != 0) {
    if (iVar5 + 0x7fffU < 0xffff) {
      iVar18 = -(int)(short)iVar5;
      if (iVar18 < 0) {
        iVar18 = (int)(short)iVar5;
      }
      sVar19 = (short)iVar18;
    }
    else {
      sVar19 = 0x7fff;
    }
  }
  iVar5 = *(int *)(psVar9 + 6);
  if (iVar5 == 0) {
    iVar5 = *(int *)(psVar9 + 2);
    *(int *)(psVar9 + 6) = iVar5;
    if (sVar19 != 0) {
      iVar5 = FUN_1402f20b0(iVar5,(int)sVar19,0x48);
      *(int *)(psVar9 + 6) = iVar5;
    }
  }
  if ((sVar16 != 0) && (sVar19 != 0)) {
    iVar5 = FUN_1402f20b0(iVar5,(int)sVar16,(int)sVar19);
  }
  *(int *)(psVar9 + 4) = iVar5;
  if ((((lVar4 == 0) || (*(int *)(lVar4 + 0x50) == 0)) || (s_DEFAULT_CHAR_1404409f8[0] == '\0')) ||
     ((plVar7 = (longlong *)FUN_1402f7910("DEFAULT_CHAR",*(undefined8 *)(lVar4 + 0x70)),
      plVar7 == (longlong *)0x0 ||
      (lVar1 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18, lVar1 == 0)))) {
    *(undefined4 *)(lVar4 + 0x24) = 0xffffffff;
  }
  else {
    *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(lVar4 + 0x38);
  uVar15 = 0;
  uVar8 = FUN_1402f7ff0(uVar3,8,0,*(undefined4 *)(lVar4 + 0x30),0,local_res20);
  param_2[0x1e] = uVar8;
  if (local_res20[0] != 0) {
    return local_res20[0];
  }
  *(undefined4 *)(param_2 + 0x1f) = 0;
  uVar14 = uVar15;
  if (*(int *)(lVar4 + 0x30) != 0) {
    do {
      iVar5 = (int)uVar14;
      *(undefined4 *)(uVar14 * 8 + param_2[0x1e]) = *(undefined4 *)(lVar1 + 8 + uVar14 * 0x30);
      *(short *)(uVar14 * 8 + 4 + param_2[0x1e]) = (short)uVar14;
      if ((*(int *)(lVar1 + 8 + uVar14 * 0x30) == *(int *)(lVar4 + 0x24)) && (iVar5 != -1)) {
        *(int *)(param_2 + 0x1f) = iVar5;
      }
      uVar14 = (ulonglong)(iVar5 + 1U);
    } while (iVar5 + 1U < *(uint *)(lVar4 + 0x30));
  }
  uVar14 = uVar15;
  if (((lVar4 == 0) || (*(int *)(lVar4 + 0x50) == 0)) || (s_CHARSET_REGISTRY_14043ffc0[0] == '\0'))
  {
    uVar13 = 0;
    uVar12 = uVar15;
    if (lVar4 != 0) goto LAB_14032cf14;
  }
  else {
    plVar7 = (longlong *)FUN_1402f7910("CHARSET_REGISTRY",*(undefined8 *)(lVar4 + 0x70));
    uVar13 = uVar15;
    if (plVar7 != (longlong *)0x0) {
      uVar13 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18;
    }
LAB_14032cf14:
    uVar12 = uVar13;
    if (((*(int *)(lVar4 + 0x50) != 0) && (s_CHARSET_ENCODING_14043ffd8[0] != '\0')) &&
       (plVar7 = (longlong *)FUN_1402f7910("CHARSET_ENCODING",*(undefined8 *)(lVar4 + 0x70)),
       plVar7 != (longlong *)0x0)) {
      uVar14 = *(longlong *)(lVar4 + 0x58) + *plVar7 * 0x18;
    }
  }
  local_48 = param_2;
  if (((uVar12 == 0) || (uVar14 == 0)) ||
     ((*(int *)(uVar12 + 8) != 1 ||
      (((*(int *)(uVar14 + 8) != 1 || (*(longlong *)(uVar12 + 0x10) == 0)) ||
       (*(longlong *)(uVar14 + 0x10) == 0)))))) {
    local_40 = 0x741444f42;
    iVar5 = FUN_1402ef870(&DAT_140440900,0,&local_48,0);
    if (*(int *)(param_2 + 7) == 0) {
      return iVar5;
    }
    param_2[0x11] = *(undefined8 *)param_2[8];
    return iVar5;
  }
  uVar8 = FUN_1402f8160(uVar3,*(longlong *)(uVar14 + 0x10),local_res20);
  param_2[0x1b] = uVar8;
  if (local_res20[0] != 0) {
    return local_res20[0];
  }
  pcVar10 = (char *)FUN_1402f8160(uVar3,*(undefined8 *)(uVar12 + 0x10),local_res20);
  param_2[0x1c] = pcVar10;
  if (local_res20[0] != 0) {
    return local_res20[0];
  }
  if ((((*pcVar10 + 0xb7U & 0xdf) == 0) && ((pcVar10[1] + 0xadU & 0xdf) == 0)) &&
     (uVar14 = uVar15, (pcVar10[2] + 0xb1U & 0xdf) == 0)) {
    do {
      uVar12 = uVar14 + 1;
      uVar13 = uVar15;
      if (pcVar10[uVar14 + 3] != (&DAT_14043ff00)[uVar14]) goto LAB_14032d050;
      uVar14 = uVar12;
    } while (uVar12 != 6);
    local_40 = 0x10003756e6963;
    goto LAB_14032d0c8;
  }
LAB_14032d0c4:
  local_40 = 0;
  goto LAB_14032d0c8;
  while (uVar13 = uVar14, uVar14 != 5) {
LAB_14032d050:
    uVar14 = uVar13 + 1;
    if (pcVar10[uVar13 + 3] != (&DAT_14043ff08)[uVar13]) goto LAB_14032d077;
  }
  if ((*(char *)param_2[0x1b] != '1') || (((char *)param_2[0x1b])[1] != '\0')) {
LAB_14032d077:
    iVar5 = strcmp(pcVar10 + 3,"646.1991");
    if (iVar5 != 0) goto LAB_14032d0c4;
    do {
      uVar14 = uVar15 + 1;
      if (*(char *)(param_2[0x1b] + uVar15) != (&DAT_14043ff1c)[uVar15]) goto LAB_14032d0c4;
      uVar15 = uVar14;
    } while (uVar14 != 4);
  }
  local_40 = 0x10003756e6963;
LAB_14032d0c8:
  iVar5 = FUN_1402ef870(&DAT_140440900,0,&local_48,0);
  return iVar5;
}

