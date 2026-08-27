// Function: FUN_14006e6d0
// Addr: 14006e6d0
// Size: 925 bytes


void FUN_14006e6d0(void)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  char *pcVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  uint local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60 [72];
  
  plVar6 = DAT_1404e5330;
  if (DAT_1404e53d8 == 0) {
    return;
  }
  if ((DAT_1404e52e4 >> 0xe & 1) != 0) {
    return;
  }
  uVar17 = 0xffffffff;
  local_80 = (local_80 >> 8 & 0xfffffe) << 8;
  local_78 = 0;
  uStack_70 = 0;
  plVar14 = (longlong *)*DAT_1404e5330;
  local_68 = 0;
  lVar10 = DAT_1404e5370;
  if (plVar14 == DAT_1404e5330) {
LAB_14006ea73:
    FUN_140085440(local_88);
    return;
  }
  do {
    plVar4 = plVar14 + 2;
    plVar13 = plVar4;
    if (0xf < (ulonglong)plVar14[5]) {
      plVar13 = (longlong *)*plVar4;
    }
    uVar12 = 0;
    uVar20 = 0xcbf29ce484222325;
    if (plVar14[4] != 0) {
      do {
        pbVar1 = (byte *)((longlong)plVar13 + uVar12);
        uVar12 = uVar12 + 1;
        uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
      } while (uVar12 < (ulonglong)plVar14[4]);
    }
    lVar7 = FUN_1400110a0(&DAT_1404e5368,local_98,plVar4,uVar20);
    lVar8 = lVar10;
    if (*(longlong *)(lVar7 + 8) != 0) {
      lVar8 = *(longlong *)(lVar7 + 8);
    }
    if (((lVar8 != lVar10) && (plVar4 = (longlong *)plVar14[6], plVar4 != (longlong *)0x0)) &&
       (bVar2 = *(byte *)(lVar8 + 0x51), bVar2 < uVar17)) {
      uVar9 = (**(code **)(*plVar4 + 0x98))(plVar4,local_60);
      uVar9 = FUN_140086de0(uVar9,"wproperties","");
      uVar9 = FUN_140086de0(uVar9,"schemecolor","");
      FUN_140085520(local_88,uVar9);
      FUN_140085440();
      lVar10 = DAT_1404e5370;
      uVar17 = (uint)bVar2;
    }
    plVar14 = (longlong *)*plVar14;
  } while (plVar14 != plVar6);
  if (((uVar17 == 0xffffffff) || ((byte)local_80 != '\a')) ||
     (lVar10 = FUN_140086de0(local_88,"value",""), *(char *)(lVar10 + 8) != '\x04'))
  goto LAB_14006ea73;
  puVar11 = (undefined8 *)FUN_140086de0(local_88,"value","");
  pcVar15 = (char *)*puVar11;
  if (pcVar15 == (char *)0x0) {
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar21 = 0.0;
    goto LAB_14006e961;
  }
  if ((*(uint *)(puVar11 + 1) >> 8 & 1) != 0) {
    pcVar15 = pcVar15 + 4;
  }
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar21 = 0.0;
  if ((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) goto LAB_14006e961;
  dVar5 = (double)FUN_1402d06ac(pcVar15);
  fVar22 = (float)dVar5;
  cVar3 = *pcVar15;
  while (cVar3 != '\0') {
    if (*pcVar15 == ' ') goto LAB_14006e908;
    pcVar15 = pcVar15 + 1;
    cVar3 = *pcVar15;
  }
  goto LAB_14006e915;
  while (pcVar15 = pcVar15 + 1, *pcVar15 != '\0') {
LAB_14006e945:
    if (*pcVar15 != ' ') break;
  }
  goto LAB_14006e952;
  while (pcVar15 = pcVar15 + 1, *pcVar15 != '\0') {
LAB_14006e908:
    if (*pcVar15 != ' ') break;
  }
LAB_14006e915:
  dVar5 = (double)FUN_1402d06ac(pcVar15);
  fVar23 = (float)dVar5;
  cVar3 = *pcVar15;
  while (cVar3 != '\0') {
    if (*pcVar15 == ' ') goto LAB_14006e945;
    pcVar15 = pcVar15 + 1;
    cVar3 = *pcVar15;
  }
LAB_14006e952:
  dVar5 = (double)FUN_1402d06ac(pcVar15);
  fVar21 = (float)dVar5;
LAB_14006e961:
  iVar19 = (int)(fVar22 * DAT_14049290c);
  if (iVar19 < 0) {
    iVar19 = 0;
  }
  iVar18 = (int)(fVar23 * DAT_14049290c);
  if (0xff < iVar19) {
    iVar19 = 0xff;
  }
  if (iVar18 < 0) {
    iVar18 = 0;
  }
  if (0xff < iVar18) {
    iVar18 = 0xff;
  }
  iVar16 = (int)(fVar21 * DAT_14049290c);
  if ((int)(fVar21 * DAT_14049290c) < 0) {
    iVar16 = 0;
  }
  if (0xff < iVar16) {
    iVar16 = 0xff;
  }
  if (7 < (byte)local_80) {
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar10 = local_78;
    if (local_78 != 0) {
      FUN_140017240(local_78 + 0x40);
      FUN_140017240(lVar10 + 0x20);
      FUN_140017240(lVar10);
      thunk_FUN_14028af80(lVar10,0x60);
    }
    FUN_14003d500(iVar19,iVar18,iVar16,DAT_1404e53d8 == 2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014006e9d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_14006eaa8 + (ulonglong)(byte)local_80 * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic +
             *(uint *)(&DAT_14006eaa8 + (ulonglong)(byte)local_80 * 4));
  return;
}

