// Function: FUN_14012a270
// Addr: 14012a270
// Size: 1066 bytes


void FUN_14012a270(longlong param_1,undefined8 param_2)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  BOOL BVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  bVar2 = false;
  lVar6 = FUN_140086de0(param_2,"schemecolor","");
  if (*(char *)(lVar6 + 8) != '\a') goto LAB_14012a433;
  uVar7 = FUN_140086de0(param_2,"schemecolor","");
  lVar6 = FUN_140086de0(uVar7,"value","");
  if (*(char *)(lVar6 + 8) != '\x04') goto LAB_14012a433;
  uVar7 = FUN_140086de0(param_2,"schemecolor","");
  puVar8 = (undefined8 *)FUN_140086de0(uVar7,"value","");
  pcVar13 = (char *)*puVar8;
  if ((pcVar13 != (char *)0x0) &&
     ((((*(uint *)(puVar8 + 1) >> 8 & 1) == 0 || (pcVar13 = pcVar13 + 4, pcVar13 != (char *)0x0)) &&
      (*pcVar13 != '\0')))) {
    dVar1 = (double)FUN_1402d06ac(pcVar13);
    fVar16 = (float)dVar1;
    cVar3 = *pcVar13;
    while (cVar3 != '\0') {
      if (*pcVar13 == ' ') goto LAB_14012a369;
      pcVar13 = pcVar13 + 1;
      cVar3 = *pcVar13;
    }
    goto LAB_14012a371;
  }
  fVar17 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  goto LAB_14012a3ca;
  while (*pcVar13 == ' ') {
LAB_14012a369:
    pcVar13 = pcVar13 + 1;
    if (*pcVar13 == '\0') break;
  }
LAB_14012a371:
  dVar1 = (double)FUN_1402d06ac(pcVar13);
  fVar17 = (float)dVar1;
  if (*pcVar13 == '\0') goto LAB_14012a3b0;
  do {
    if (*pcVar13 == ' ') goto LAB_14012a3a8;
    pcVar13 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  dVar1 = (double)FUN_1402d06ac(pcVar13);
  fVar15 = (float)dVar1;
  goto LAB_14012a3ca;
  while (*pcVar13 == ' ') {
LAB_14012a3a8:
    pcVar13 = pcVar13 + 1;
    if (*pcVar13 == '\0') break;
  }
LAB_14012a3b0:
  dVar1 = (double)FUN_1402d06ac(pcVar13);
  fVar15 = (float)dVar1;
LAB_14012a3ca:
  bVar2 = true;
  iVar12 = (int)(fVar17 * DAT_14049290c);
  iVar14 = (int)(fVar16 * DAT_14049290c);
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  iVar10 = (int)(fVar15 * DAT_14049290c);
  if (0xff < iVar14) {
    iVar14 = 0xff;
  }
  *(char *)(param_1 + 0x176) = (char)iVar14;
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  uVar11 = (undefined1)iVar12;
  if (0xff < iVar12) {
    uVar11 = 0xff;
  }
  *(undefined1 *)(param_1 + 0x175) = uVar11;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  uVar11 = (undefined1)iVar10;
  if (0xff < iVar10) {
    uVar11 = 0xff;
  }
  *(undefined1 *)(param_1 + 0x174) = uVar11;
LAB_14012a433:
  lVar6 = FUN_140086de0(param_2,"alignment","");
  if (*(char *)(lVar6 + 8) == '\a') {
    uVar7 = FUN_140086de0(lVar6,"value","");
    cVar3 = FUN_1400886e0(uVar7);
    if (cVar3 != '\0') {
      uVar7 = FUN_140086de0(lVar6,"value","");
      uVar4 = FUN_140085ee0(uVar7);
      *(undefined4 *)(param_1 + 0x160) = uVar4;
      bVar2 = true;
    }
  }
  lVar6 = FUN_140086de0(param_2,"alignmentposition","");
  fVar16 = DAT_140492620;
  if ((*(char *)(lVar6 + 8) == '\a') &&
     (lVar9 = FUN_140086de0(lVar6,"value",""), *(byte *)(lVar9 + 8) - 1 < 3)) {
    uVar7 = FUN_140086de0(lVar6,"value","");
    fVar17 = (float)FUN_140086220(uVar7);
    bVar2 = true;
    *(float *)(param_1 + 0x170) = fVar17 * fVar16;
  }
  lVar6 = FUN_140086de0(param_2,"alignmentx","");
  if ((*(char *)(lVar6 + 8) == '\a') &&
     (lVar9 = FUN_140086de0(lVar6,"value",""), *(byte *)(lVar9 + 8) - 1 < 3)) {
    uVar7 = FUN_140086de0(lVar6,"value","");
    fVar17 = (float)FUN_140086220(uVar7);
    bVar2 = true;
    *(float *)(param_1 + 0x164) = fVar17 * fVar16;
  }
  lVar6 = FUN_140086de0(param_2,"alignmenty","");
  if ((*(char *)(lVar6 + 8) == '\a') &&
     (lVar9 = FUN_140086de0(lVar6,"value",""), *(byte *)(lVar9 + 8) - 1 < 3)) {
    uVar7 = FUN_140086de0(lVar6,"value","");
    fVar17 = (float)FUN_140086220(uVar7);
    bVar2 = true;
    *(float *)(param_1 + 0x168) = fVar17 * fVar16;
  }
  lVar6 = FUN_140086de0(param_2,"alignmentz","");
  if ((*(char *)(lVar6 + 8) == '\a') &&
     (lVar9 = FUN_140086de0(lVar6,"value",""), *(byte *)(lVar9 + 8) - 1 < 3)) {
    uVar7 = FUN_140086de0(lVar6,"value","");
    fVar17 = (float)FUN_140086220(uVar7);
    bVar2 = true;
    *(float *)(param_1 + 0x16c) = fVar17 * fVar16;
  }
  if ((bVar2) && (BVar5 = IsWindow(*(HWND *)(param_1 + 0x158)), BVar5 != 0)) {
    InvalidateRect(*(HWND *)(param_1 + 0x158),(RECT *)0x0,0);
  }
  FUN_140085440(param_2);
  return;
}

