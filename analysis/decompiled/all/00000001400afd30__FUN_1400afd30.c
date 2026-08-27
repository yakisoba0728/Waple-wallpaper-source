// Function: FUN_1400afd30
// Addr: 1400afd30
// Size: 1331 bytes


char * FUN_1400afd30(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  ushort *puVar14;
  ushort *puVar15;
  byte *pbVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  longlong local_res8;
  
  puVar14 = (ushort *)0x0;
  puVar15 = (ushort *)0x0;
  bVar13 = 0;
  cVar17 = '\0';
  cVar18 = '\0';
  cVar19 = '\0';
  cVar20 = '\0';
  local_res8 = 0;
  if ((param_2 != (longlong *)0x0) && (lVar2 = *param_2, lVar2 != 0)) {
    puVar14 = (ushort *)(param_2[3] + lVar2);
    puVar15 = (ushort *)(param_2[2] + lVar2);
    local_res8 = lVar2;
  }
  iVar12 = *(int *)(param_1 + 0x100);
  if (iVar12 == 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      pcVar6 = "@base: metadata reported";
      *(undefined4 *)(param_1 + 0x100) = 0;
      goto LAB_1400afec0;
    }
    iVar12 = 1;
switchD_1400afdf9_caseD_1:
    if (puVar14 != puVar15) {
      bVar13 = (byte)*puVar14;
      uVar8 = (ulonglong)bVar13;
      if (bVar13 == 0) {
        pcVar6 = (char *)0x0;
        *(undefined4 *)(param_1 + 0x100) = 0;
        puVar14 = (ushort *)((longlong)puVar14 + 1);
        goto LAB_1400afec0;
      }
      if (bVar13 != 0xb) {
        iVar12 = 2;
        puVar14 = (ushort *)((longlong)puVar14 + 1);
        goto LAB_1400afe56;
      }
      cVar17 = '\x01';
      uVar8 = 0;
      cVar18 = '\x01';
      cVar20 = '\x01';
      cVar19 = '\x01';
      while( true ) {
        puVar14 = (ushort *)((longlong)puVar14 + 1);
        bVar13 = (byte)uVar8;
        if (10 < bVar13) break;
        iVar12 = 3;
switchD_1400afdf9_caseD_3:
        bVar13 = (byte)uVar8;
        if (puVar14 == puVar15) goto LAB_1400afe83;
        bVar1 = (byte)*puVar14;
        if ((cVar17 == '\0') || (bVar1 != "ANIMEXTS1.0"[uVar8])) {
          cVar17 = '\0';
        }
        else {
          cVar17 = '\x01';
        }
        if ((cVar18 == '\0') || (bVar1 != "NETSCAPE2.0"[uVar8])) {
          cVar18 = '\0';
        }
        else {
          cVar18 = '\x01';
        }
        if ((cVar20 == '\0') || (bVar1 != "ICCRGBG1012"[uVar8])) {
          cVar20 = '\0';
        }
        else {
          cVar20 = '\x01';
        }
        if ((cVar19 == '\0') || (bVar1 != "XMP DataXMP"[uVar8])) {
          cVar19 = '\0';
          uVar8 = (ulonglong)(byte)(bVar13 + 1);
        }
        else {
          cVar19 = '\x01';
          uVar8 = (ulonglong)(byte)(bVar13 + 1);
        }
      }
      if (cVar17 != '\0' || cVar18 != '\0') {
        iVar12 = 4;
        goto switchD_1400afdf9_caseD_4;
      }
      if (*(byte *)(param_1 + 0x30) < 0x20) {
        if ((cVar20 == '\0') || (*(char *)(param_1 + 0x31) == '\0')) {
          if ((cVar19 == '\0') || (*(char *)(param_1 + 0x32) == '\0')) goto LAB_1400b00d3;
          *(undefined4 *)(param_1 + 0x34) = 0x584d5020;
          local_res8 = (longlong)puVar14 - local_res8;
          if (param_2 == (longlong *)0x0) goto LAB_1400afff2;
          uVar8 = param_2[4];
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 0x49434350;
          local_res8 = (longlong)puVar14 - local_res8;
          if (param_2 == (longlong *)0x0) {
LAB_1400afff2:
            uVar8 = 0;
          }
          else {
            uVar8 = param_2[4];
          }
        }
        uVar7 = local_res8 + uVar8;
        *(undefined1 *)(param_1 + 0x30) = 0x10;
        *(undefined4 *)(param_1 + 0x100) = 0;
        if (uVar7 < uVar8) {
          uVar7 = 0xffffffffffffffff;
        }
        *(ulonglong *)(param_1 + 0x38) = uVar7;
        pcVar6 = "@base: metadata reported";
        goto LAB_1400afec0;
      }
      goto LAB_1400b00d3;
    }
    goto LAB_1400afe83;
  }
  bVar13 = *(byte *)(param_1 + 0xfdc0);
  uVar8 = (ulonglong)bVar13;
  pcVar6 = (char *)0x0;
  cVar17 = *(char *)(param_1 + 0xfdc1);
  cVar18 = *(char *)(param_1 + 0xfdc2);
  cVar20 = *(char *)(param_1 + 0xfdc3);
  cVar19 = *(char *)(param_1 + 0xfdc4);
  switch(iVar12) {
  case 1:
    goto switchD_1400afdf9_caseD_1;
  case 2:
  case 5:
  case 7:
    break;
  case 3:
    goto switchD_1400afdf9_caseD_3;
  case 4:
switchD_1400afdf9_caseD_4:
    if (puVar14 == puVar15) goto LAB_1400afe83;
    uVar5 = *puVar14;
    uVar8 = (ulonglong)(byte)uVar5;
    puVar14 = (ushort *)((longlong)puVar14 + 1);
    if ((byte)uVar5 == 3) {
      iVar12 = 6;
      goto switchD_1400afdf9_caseD_6;
    }
    iVar12 = 5;
LAB_1400afe56:
    *(ulonglong *)(param_1 + 0xfdc8) = uVar8;
    break;
  case 6:
switchD_1400afdf9_caseD_6:
    bVar13 = (byte)uVar8;
    if (puVar14 == puVar15) goto LAB_1400afe83;
    uVar5 = *puVar14;
    puVar14 = (ushort *)((longlong)puVar14 + 1);
    if ((byte)uVar5 == 1) goto switchD_1400afdf9_caseD_8;
    *(undefined8 *)(param_1 + 0xfdc8) = 2;
    iVar12 = 7;
    break;
  case 8:
switchD_1400afdf9_caseD_8:
    if (1 < (longlong)puVar15 - (longlong)puVar14) {
      uVar8 = (ulonglong)*puVar14;
      puVar14 = puVar14 + 1;
LAB_1400b00bc:
      iVar12 = (int)uVar8;
      *(int *)(param_1 + 0x50) = iVar12;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      if (iVar12 - 1U < 0xffff) {
        *(int *)(param_1 + 0x50) = iVar12 + 1;
      }
      goto LAB_1400b00d3;
    }
    *(undefined8 *)(param_1 + 0xfdc8) = 0;
    iVar12 = 9;
  case 9:
    while (puVar14 != puVar15) {
      uVar7 = *(ulonglong *)(param_1 + 0xfdc8);
      uVar8 = uVar7 & 0xffffffffffffff;
      *(ulonglong *)(param_1 + 0xfdc8) = uVar8;
      bVar1 = (byte)(uVar7 >> 0x38);
      uVar5 = *puVar14;
      puVar14 = (ushort *)((longlong)puVar14 + 1);
      uVar8 = (ulonglong)(byte)uVar5 << (bVar1 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xfdc8) = uVar8;
      if (bVar1 == 8) goto LAB_1400b00bc;
      *(ulonglong *)(param_1 + 0xfdc8) = (ulonglong)(bVar1 + 8) << 0x38 | uVar8;
    }
    goto LAB_1400afe83;
  case 10:
    goto switchD_1400afdf9_caseD_a;
  default:
    goto switchD_1400afdf9_default;
  }
  bVar13 = (byte)uVar8;
  uVar8 = *(ulonglong *)(param_1 + 0xfdc8);
  if ((ulonglong)((longlong)puVar15 - (longlong)puVar14) < uVar8) {
    *(byte **)(param_1 + 0xfdc8) = (byte *)((uVar8 - (longlong)puVar15) + (longlong)puVar14);
    puVar14 = puVar15;
LAB_1400afe83:
    bVar3 = true;
    pcVar6 = "$base: short read";
  }
  else {
    puVar14 = (ushort *)((longlong)puVar14 + uVar8);
LAB_1400b00d3:
    if (param_2 != (longlong *)0x0) {
      param_2[3] = (longlong)puVar14 - *param_2;
    }
    iVar12 = 10;
switchD_1400afdf9_caseD_a:
    pbVar10 = (byte *)0x0;
    pbVar16 = (byte *)0x0;
    if ((param_2 != (longlong *)0x0) && (lVar2 = *param_2, lVar2 != 0)) {
      pbVar10 = (byte *)(param_2[3] + lVar2);
      pbVar16 = (byte *)(param_2[2] + lVar2);
    }
    iVar9 = *(int *)(param_1 + 0xfc);
    bVar3 = true;
    if (iVar9 == 0) goto LAB_1400b01c2;
    if (iVar9 == 1) goto LAB_1400b01c5;
    if (iVar9 == 2) {
      while (uVar8 = *(ulonglong *)(param_1 + 0xfdb8),
            uVar8 <= (ulonglong)((longlong)pbVar16 - (longlong)pbVar10)) {
        pbVar10 = pbVar10 + uVar8;
LAB_1400b01c2:
        iVar9 = 1;
LAB_1400b01c5:
        if (pbVar10 == pbVar16) goto LAB_1400b020c;
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (bVar1 == 0) {
          pcVar6 = (char *)0x0;
          iVar11 = 0;
          goto LAB_1400b021f;
        }
        *(ulonglong *)(param_1 + 0xfdb8) = (ulonglong)bVar1;
        iVar9 = 2;
      }
      *(byte **)(param_1 + 0xfdb8) = pbVar10 + (uVar8 - (longlong)pbVar16);
      pbVar10 = pbVar16;
LAB_1400b020c:
      bVar4 = true;
      pcVar6 = "$base: short read";
    }
    else {
      pcVar6 = (char *)0x0;
      bVar4 = false;
    }
    iVar11 = 0;
    if (bVar4) {
      iVar11 = iVar9;
    }
LAB_1400b021f:
    *(int *)(param_1 + 0xfc) = iVar11;
    if (param_2 != (longlong *)0x0) {
      lVar2 = *param_2;
      if (lVar2 != 0) {
        param_2[3] = (longlong)pbVar10 - lVar2;
      }
      puVar14 = (ushort *)(param_2[3] + lVar2);
    }
    if (pcVar6 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      goto LAB_1400afec0;
    }
    if (*pcVar6 != '$') {
switchD_1400afdf9_default:
      bVar3 = false;
    }
  }
  *(byte *)(param_1 + 0xfdc0) = bVar13;
  *(char *)(param_1 + 0xfdc1) = cVar17;
  *(char *)(param_1 + 0xfdc2) = cVar18;
  iVar9 = 0;
  if (bVar3) {
    iVar9 = iVar12;
  }
  *(char *)(param_1 + 0xfdc3) = cVar20;
  *(int *)(param_1 + 0x100) = iVar9;
  *(char *)(param_1 + 0xfdc4) = cVar19;
LAB_1400afec0:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar14 - *param_2;
  }
  return pcVar6;
}

