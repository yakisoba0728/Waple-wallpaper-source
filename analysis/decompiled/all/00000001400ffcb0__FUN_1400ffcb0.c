// Function: FUN_1400ffcb0
// Addr: 1400ffcb0
// Size: 2552 bytes


ulonglong FUN_1400ffcb0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 local_70 [16];
  undefined8 local_60;
  ulonglong local_58;
  undefined4 local_50;
  
  lVar7 = FUN_140087490(param_2,&DAT_14048867c,&DAT_140488681);
  if ((lVar7 == 0) && (lVar7 = FUN_140087490(param_2,&DAT_140488688,&DAT_14048868f), lVar7 == 0)) {
    uVar15 = 0;
    lVar7 = FUN_140087490(param_2,"alignmentfliph","");
    if (lVar7 != 0) goto LAB_1400ffd21;
  }
  else {
LAB_1400ffd21:
    uVar15 = 0x200;
  }
  lVar7 = FUN_140086de0(param_2,"volume","");
  fVar19 = DAT_1404928f8;
  if (*(char *)(lVar7 + 8) == '\a') {
    uVar8 = FUN_140086de0(param_2,"volume","");
    uVar8 = FUN_140086de0(uVar8,"value","");
    cVar3 = FUN_1400886e0(uVar8);
    if (cVar3 != '\0') {
      uVar8 = FUN_140086de0(param_2,"volume","");
      uVar8 = FUN_140086de0(uVar8,"value","");
      iVar5 = FUN_140085ee0(uVar8);
      uVar15 = uVar15 | 2;
      fVar17 = (float)iVar5 / fVar19;
      *(float *)(param_1 + 0x174) = fVar17;
      *(float *)(param_1 + 0x170) = fVar17;
    }
  }
  lVar7 = FUN_140086de0(param_2,&DAT_1404884a4,&DAT_1404884a8);
  if (*(char *)(lVar7 + 8) == '\a') {
    uVar8 = FUN_140086de0(param_2,&DAT_1404884a4,&DAT_1404884a8);
    uVar8 = FUN_140086de0(uVar8,"value","");
    cVar3 = FUN_1400886e0(uVar8);
    if (cVar3 != '\0') {
      uVar8 = FUN_140086de0(param_2,&DAT_1404884a4,&DAT_1404884a8);
      uVar8 = FUN_140086de0(uVar8,"value","");
      iVar5 = FUN_140085ee0(uVar8);
      *(float *)(param_1 + 0x178) = (float)iVar5 / fVar19;
      if (*(longlong *)(param_1 + 0x160) != 0) {
        KillTimer(*(HWND *)(param_1 + 0x168),100);
        SetTimer(*(HWND *)(param_1 + 0x168),100,400,(TIMERPROC)0x0);
      }
    }
  }
  lVar7 = FUN_140086de0(param_2,"schemecolor","");
  if (*(char *)(lVar7 + 8) != '\a') goto LAB_140100058;
  uVar8 = FUN_140086de0(param_2,"schemecolor","");
  lVar7 = FUN_140086de0(uVar8,"value","");
  if (*(char *)(lVar7 + 8) != '\x04') goto LAB_140100058;
  uVar8 = FUN_140086de0(param_2,"schemecolor","");
  puVar9 = (undefined8 *)FUN_140086de0(uVar8,"value","");
  pcVar14 = (char *)*puVar9;
  if (pcVar14 == (char *)0x0) {
    fVar17 = 0.0;
    fVar20 = 0.0;
    fVar19 = 0.0;
  }
  else {
    if ((*(uint *)(puVar9 + 1) >> 8 & 1) != 0) {
      pcVar14 = pcVar14 + 4;
    }
    fVar17 = 0.0;
    fVar20 = 0.0;
    fVar19 = 0.0;
    if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
      dVar18 = (double)FUN_1402d06ac(pcVar14);
      fVar17 = (float)dVar18;
      cVar3 = *pcVar14;
      while (cVar3 != '\0') {
        if (*pcVar14 == ' ') goto LAB_1400fffa0;
        pcVar14 = pcVar14 + 1;
        cVar3 = *pcVar14;
      }
      goto LAB_1400fffad;
    }
  }
  goto LAB_1400ffff4;
  while (pcVar14 = pcVar14 + 1, *pcVar14 != '\0') {
LAB_1400fffa0:
    if (*pcVar14 != ' ') break;
  }
LAB_1400fffad:
  dVar18 = (double)FUN_1402d06ac(pcVar14);
  fVar20 = (float)dVar18;
  cVar3 = *pcVar14;
  while (cVar3 != '\0') {
    if (*pcVar14 == ' ') goto LAB_1400fffd8;
    pcVar14 = pcVar14 + 1;
    cVar3 = *pcVar14;
  }
  goto LAB_1400fffe5;
  while (pcVar14 = pcVar14 + 1, *pcVar14 != '\0') {
LAB_1400fffd8:
    if (*pcVar14 != ' ') break;
  }
LAB_1400fffe5:
  dVar18 = (double)FUN_1402d06ac(pcVar14);
  fVar19 = (float)dVar18;
LAB_1400ffff4:
  uVar16 = (uint)(fVar17 * DAT_14049290c);
  uVar12 = (uint)(fVar20 * DAT_14049290c);
  if ((int)uVar16 < 0) {
    uVar16 = 0;
  }
  if ((int)uVar12 < 0) {
    uVar12 = 0;
  }
  uVar11 = (int)(fVar19 * DAT_14049290c);
  if ((int)(fVar19 * DAT_14049290c) < 0) {
    uVar11 = 0;
  }
  if (0xff < (int)uVar16) {
    uVar16 = 0xff;
  }
  if (0xff < (int)uVar12) {
    uVar12 = 0xff;
  }
  if (0xff < (int)uVar11) {
    uVar11 = 0xff;
  }
  *(uint *)(param_1 + 0x194) = ((uVar11 | 0xffffff00) << 8 | uVar12) << 8 | uVar16;
  uVar15 = uVar15 | 1;
LAB_140100058:
  lVar7 = FUN_140086de0(param_2,"alignment","");
  if (*(char *)(lVar7 + 8) == '\a') {
    uVar8 = FUN_140086de0(lVar7,"value","");
    cVar3 = FUN_1400886e0(uVar8);
    if (cVar3 != '\0') {
      uVar8 = FUN_140086de0(lVar7,"value","");
      uVar6 = FUN_140085ee0(uVar8);
      *(undefined4 *)(param_1 + 0x180) = uVar6;
      uVar15 = uVar15 | 1;
    }
  }
  lVar7 = FUN_140086de0(param_2,"alignmentposition","");
  fVar19 = DAT_140492620;
  if ((*(char *)(lVar7 + 8) == '\a') &&
     (lVar10 = FUN_140086de0(lVar7,"value",""), *(byte *)(lVar10 + 8) - 1 < 3)) {
    uVar8 = FUN_140086de0(lVar7,"value","");
    fVar17 = (float)FUN_140086220(uVar8);
    uVar15 = uVar15 | 1;
    *(float *)(param_1 + 400) = fVar17 * fVar19;
  }
  lVar7 = FUN_140086de0(param_2,"alignmentx","");
  if ((*(char *)(lVar7 + 8) == '\a') &&
     (lVar10 = FUN_140086de0(lVar7,"value",""), *(byte *)(lVar10 + 8) - 1 < 3)) {
    uVar8 = FUN_140086de0(lVar7,"value","");
    fVar17 = (float)FUN_140086220(uVar8);
    uVar15 = uVar15 | 1;
    *(float *)(param_1 + 0x184) = fVar17 * fVar19;
  }
  lVar7 = FUN_140086de0(param_2,"alignmenty","");
  if ((*(char *)(lVar7 + 8) == '\a') &&
     (lVar10 = FUN_140086de0(lVar7,"value",""), *(byte *)(lVar10 + 8) - 1 < 3)) {
    uVar8 = FUN_140086de0(lVar7,"value","");
    fVar17 = (float)FUN_140086220(uVar8);
    uVar15 = uVar15 | 1;
    *(float *)(param_1 + 0x188) = fVar17 * fVar19;
  }
  lVar7 = FUN_140086de0(param_2,"alignmentz","");
  if ((*(char *)(lVar7 + 8) == '\a') &&
     (lVar10 = FUN_140086de0(lVar7,"value",""), *(byte *)(lVar10 + 8) - 1 < 3)) {
    uVar8 = FUN_140086de0(lVar7,"value","");
    fVar17 = (float)FUN_140086220(uVar8);
    uVar15 = uVar15 | 1;
    *(float *)(param_1 + 0x18c) = fVar17 * fVar19;
  }
  lVar7 = FUN_140086de0(param_2,&DAT_140488714,&DAT_140488719);
  if (*(char *)(lVar7 + 8) == '\a') {
    uVar8 = FUN_140086de0(param_2,&DAT_140488714,&DAT_140488719);
    lVar7 = FUN_140086de0(uVar8,"value","");
    if (*(char *)(lVar7 + 8) == '\x05') {
      uVar8 = FUN_140086de0(param_2,&DAT_140488714,&DAT_140488719);
      uVar8 = FUN_140086de0(uVar8,"value","");
      uVar4 = FUN_140086300(uVar8);
      *(undefined1 *)(param_1 + 0x1e0) = uVar4;
    }
  }
  lVar7 = FUN_140086de0(param_2,"wec_con","");
  fVar17 = DAT_1404928cc;
  fVar19 = DAT_140492704;
  if (*(char *)(lVar7 + 8) == '\a') {
    uVar8 = FUN_140086de0(param_2,"wec_con","");
    lVar7 = FUN_140086de0(uVar8,"value","");
    if (*(byte *)(lVar7 + 8) - 1 < 3) {
      uVar8 = FUN_140086de0(param_2,"wec_con","");
      uVar8 = FUN_140086de0(uVar8,"value","");
      fVar20 = (float)FUN_140086220(uVar8);
      *(float *)(param_1 + 0x1e4) = fVar20 / fVar17 - fVar19;
    }
  }
  lVar7 = FUN_140086de0(param_2,&DAT_140488700,&DAT_140488707);
  if (*(char *)(lVar7 + 8) == '\a') {
    uVar8 = FUN_140086de0(param_2,&DAT_140488700,&DAT_140488707);
    lVar7 = FUN_140086de0(uVar8,"value","");
    if (*(byte *)(lVar7 + 8) - 1 < 3) {
      uVar8 = FUN_140086de0(param_2,&DAT_140488700,&DAT_140488707);
      uVar8 = FUN_140086de0(uVar8,"value","");
      fVar20 = (float)FUN_140086220(uVar8);
      *(float *)(param_1 + 0x1e8) = fVar20 / fVar17 - fVar19;
    }
  }
  lVar7 = FUN_140086de0(param_2,&DAT_140488754,&DAT_14048875a);
  if (*(char *)(lVar7 + 8) == '\a') {
    uVar8 = FUN_140086de0(param_2,&DAT_140488754,&DAT_14048875a);
    lVar7 = FUN_140086de0(uVar8,"value","");
    if (*(byte *)(lVar7 + 8) - 1 < 3) {
      uVar8 = FUN_140086de0(param_2,&DAT_140488754,&DAT_14048875a);
      uVar8 = FUN_140086de0(uVar8,"value","");
      fVar20 = (float)FUN_140086220(uVar8);
      *(float *)(param_1 + 0x1ec) = fVar20 / fVar17 - fVar19;
    }
  }
  lVar7 = FUN_140086de0(param_2,&DAT_140488760,&DAT_140488767);
  if (*(char *)(lVar7 + 8) == '\a') {
    uVar8 = FUN_140086de0(param_2,&DAT_140488760,&DAT_140488767);
    lVar7 = FUN_140086de0(uVar8,"value","");
    if (*(byte *)(lVar7 + 8) - 1 < 3) {
      uVar8 = FUN_140086de0(param_2,&DAT_140488760,&DAT_140488767);
      uVar8 = FUN_140086de0(uVar8,"value","");
      fVar20 = (float)FUN_140086220(uVar8);
      *(float *)(param_1 + 0x1f0) = fVar20 / fVar17 - fVar19;
    }
  }
  cVar3 = FUN_1400fdda0(param_1 + 0x1e0,param_1 + 0x1a0);
  if (cVar3 == '\0') {
    if (*(char *)(param_1 + 0x1e0) == '\0') {
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      local_58 = 0xf;
      auVar2._11_5_ = 0;
      auVar2._0_11_ = SUB1211(ZEXT812(0),1);
      local_70 = auVar2 << 8;
      local_50 = 0x3f800000;
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      FUN_14000de40(param_1 + 0x1b8,local_70);
      *(undefined4 *)(param_1 + 0x1d8) = local_50;
      if (0xf < local_58) {
        uVar13 = local_58 + 1;
        lVar7 = local_70._0_8_;
        if (0xfff < uVar13) {
          lVar7 = *(longlong *)(local_70._0_8_ + -8);
          if (0x1f < (local_70._0_8_ - lVar7) - 8U) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return uVar13;
          }
          uVar13 = local_58 + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar13);
      }
    }
    else {
      FUN_1401006b0(param_1 + 0x1a0,param_1 + 0x1e0);
    }
    uVar15 = uVar15 | 0x100;
  }
  if (uVar15 != 0) {
    FUN_140100720(param_1,uVar15,param_2);
  }
  FUN_140085440(param_2);
  return (ulonglong)uVar15;
}

