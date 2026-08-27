// Function: FUN_1403c0ca0
// Addr: 1403c0ca0
// Size: 855 bytes


void FUN_1403c0ca0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x70);
  uVar11 = 0;
  uVar13 = 0;
  uVar12 = 0;
  iVar16 = 0;
  uVar10 = 0;
  lVar8 = 0x15;
  iVar15 = 1;
  if (uVar2 != 0) goto LAB_1403c0cee;
LAB_1403c0fdb:
  if (*(short *)(&DAT_140459870 + (longlong)(int)lVar8 * 2) < 1) {
    return;
  }
  iVar6 = *(short *)(&DAT_140459870 + (longlong)(int)lVar8 * 2) + -1;
  do {
    uVar5 = (uint)uVar10;
    lVar8 = (longlong)(char)(&DAT_1404597a0)[iVar6];
    uVar13 = (uint)uVar11;
    if ((&DAT_1404597d8)[iVar6] == '\0') goto switchD_1403c0d9d_caseD_6;
    cVar14 = (char)iVar15;
    switch((&DAT_1404597d8)[iVar6]) {
    case 1:
      uVar9 = uVar12 - 1;
      if (uVar13 < uVar12) {
        uVar10 = uVar11;
        do {
          uVar13 = (int)uVar10 + 1;
          *(char *)(lVar3 + 0xf + uVar10 * 0x14) = cVar14 << 4;
          uVar10 = (ulonglong)uVar13;
        } while (uVar13 < uVar12);
      }
      break;
    case 2:
      goto switchD_1403c0d9d_caseD_2;
    case 3:
      uVar9 = uVar12 - 1;
      uVar5 = uVar12;
      if (uVar12 <= uVar13) goto LAB_1403c0e5b;
      uVar10 = uVar11;
      do {
        uVar13 = (int)uVar10 + 1;
        *(byte *)(lVar3 + 0xf + uVar10 * 0x14) = cVar14 << 4 | 1;
        uVar10 = (ulonglong)uVar13;
      } while (uVar13 < uVar12);
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
      break;
    case 4:
      iVar16 = 2;
      goto switchD_1403c0d9d_caseD_2;
    case 5:
      if (iVar16 == 2) {
        uVar9 = uVar12 - 1;
        uVar5 = uVar12;
        if (uVar12 <= uVar13) goto LAB_1403c0e5b;
        uVar10 = uVar11;
        do {
          uVar13 = (int)uVar10 + 1;
          *(byte *)(lVar3 + 0xf + uVar10 * 0x14) = cVar14 << 4 | 1;
          uVar10 = (ulonglong)uVar13;
        } while (uVar13 < uVar12);
        *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
      }
      else {
        if (iVar16 != 3) goto switchD_1403c0d9d_caseD_6;
        uVar9 = uVar12 - 1;
        if (uVar13 < uVar12) {
          uVar10 = uVar11;
          do {
            uVar13 = (int)uVar10 + 1;
            *(byte *)(lVar3 + 0xf + uVar10 * 0x14) = cVar14 << 4 | 2;
            uVar10 = (ulonglong)uVar13;
          } while (uVar13 < uVar12);
        }
      }
      break;
    default:
      goto switchD_1403c0d9d_caseD_6;
    case 8:
      uVar12 = uVar5 + 1;
      uVar9 = uVar5;
      if (uVar13 < uVar12) {
        uVar10 = uVar11;
        do {
          uVar13 = (int)uVar10 + 1;
          *(byte *)(lVar3 + 0xf + uVar10 * 0x14) = cVar14 << 4 | 2;
          uVar10 = (ulonglong)uVar13;
        } while (uVar13 < uVar12);
      }
      break;
    case 9:
      iVar16 = 3;
switchD_1403c0d9d_caseD_2:
      uVar12 = uVar5 + 1;
      goto switchD_1403c0d9d_caseD_6;
    case 10:
      uVar12 = uVar5;
      uVar9 = uVar5 - 1;
      if (uVar13 < uVar5) {
        uVar10 = uVar11;
        do {
          uVar13 = (int)uVar10 + 1;
          *(char *)(lVar3 + 0xf + uVar10 * 0x14) = cVar14 << 4;
          uVar10 = (ulonglong)uVar13;
        } while (uVar13 < uVar5);
      }
      break;
    case 0xb:
      uVar9 = uVar5 - 1;
      if (uVar13 < uVar5) {
        uVar10 = uVar11;
        do {
          uVar12 = (int)uVar10 + 1;
          *(byte *)(lVar3 + 0xf + uVar10 * 0x14) = cVar14 << 4 | 1;
          uVar10 = (ulonglong)uVar12;
        } while (uVar12 < uVar5);
      }
LAB_1403c0e5b:
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
      uVar12 = uVar5;
      break;
    case 0xc:
      uVar12 = uVar5;
      uVar9 = uVar5 - 1;
      if (uVar13 < uVar5) {
        uVar10 = uVar11;
        do {
          uVar13 = (int)uVar10 + 1;
          *(byte *)(lVar3 + 0xf + uVar10 * 0x14) = cVar14 << 4 | 2;
          uVar10 = (ulonglong)uVar13;
        } while (uVar13 < uVar5);
      }
    }
    uVar5 = uVar9;
    bVar17 = iVar15 != 0xf;
    iVar6 = iVar15 + 1;
    iVar15 = 1;
    if (bVar17) {
      iVar15 = iVar6;
    }
switchD_1403c0d9d_caseD_6:
    if ((&DAT_140459810)[lVar8] == '\x06') {
      uVar11 = 0;
    }
    uVar13 = (uint)uVar11;
    uVar10 = (ulonglong)(uVar5 + 1);
    if (uVar5 + 1 == uVar2) goto LAB_1403c0fdb;
LAB_1403c0cee:
    lVar7 = (longlong)(int)lVar8;
    iVar6 = (int)(char)(&DAT_140459348)[lVar7];
    uVar5 = (uint)uVar10;
    if ((&DAT_140459840)[lVar7] != '\a') {
      uVar5 = uVar13;
    }
    uVar11 = (ulonglong)uVar5;
    if ('\0' < (char)(&DAT_140459348)[lVar7]) {
      iVar4 = (int)lVar8 * 2;
      bVar1 = *(byte *)(lVar3 + 0x12 + uVar10 * 0x14);
      if (((byte)(&DAT_1404592f0)[iVar4] <= bVar1) && (bVar1 <= (byte)(&DAT_1404592f1)[iVar4])) {
        iVar6 = (uint)bVar1 - (uint)(byte)(&DAT_1404592f0)[iVar4];
      }
    }
    iVar6 = (int)(char)(&DAT_1404593e0)
                       [(longlong)iVar6 + (longlong)*(short *)(&DAT_140459380 + lVar7 * 2)];
  } while( true );
}

