// Function: FUN_1403c0740
// Addr: 1403c0740
// Size: 1292 bytes


void FUN_1403c0740(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x70);
  uVar4 = 0;
  iVar15 = 0;
  uVar9 = 0;
  uVar6 = 0x1f;
  iVar14 = 1;
  uVar12 = 0;
  if (uVar2 != 0) goto LAB_1403c0780;
  uVar7 = 0;
LAB_1403c0c28:
  if (*(short *)(&DAT_140456df0 + uVar6 * 2) < 1) {
    return;
  }
  uVar5 = (int)*(short *)(&DAT_140456df0 + uVar6 * 2) - 1;
  do {
    uVar8 = (uint)uVar9;
    uVar6 = (ulonglong)(byte)(&DAT_140456b90)[(int)uVar5];
    uVar11 = (uint)uVar7;
    if ((&DAT_140456c30)[(int)uVar5] == '\0') goto switchD_1403c081e_caseD_9;
    cVar13 = (char)iVar14;
    switch((&DAT_140456c30)[(int)uVar5]) {
    case 1:
      uVar5 = uVar4 - 1;
      if (uVar11 < uVar4) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(char *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
      break;
    case 2:
      goto switchD_1403c081e_caseD_2;
    case 3:
      uVar5 = uVar4 - 1;
      if (uVar11 < uVar4) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
      break;
    case 4:
      uVar5 = uVar4 - 1;
      if (uVar4 <= uVar11) goto LAB_1403c0964;
      uVar12 = uVar7;
      do {
        uVar11 = (int)uVar12 + 1;
        *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 4;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < uVar4);
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
      break;
    case 5:
      iVar15 = 6;
      goto switchD_1403c081e_caseD_2;
    case 6:
      if (iVar15 == 1) {
        uVar5 = uVar4 - 1;
        if (uVar11 < uVar4) {
          uVar12 = uVar7;
          do {
            uVar11 = (int)uVar12 + 1;
            *(char *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4;
            uVar12 = (ulonglong)uVar11;
          } while (uVar11 < uVar4);
        }
      }
      else if (iVar15 == 5) {
        uVar5 = uVar4 - 1;
        if (uVar11 < uVar4) {
          uVar12 = uVar7;
          do {
            uVar11 = (int)uVar12 + 1;
            *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 5;
            uVar12 = (ulonglong)uVar11;
          } while (uVar11 < uVar4);
        }
      }
      else if (iVar15 == 6) {
        uVar5 = uVar4 - 1;
        if (uVar4 <= uVar11) goto LAB_1403c0964;
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 4;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
        *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
      }
      else {
        if (iVar15 != 7) goto switchD_1403c081e_caseD_9;
        uVar5 = uVar4 - 1;
        if (uVar11 < uVar4) {
          uVar12 = uVar7;
          do {
            uVar11 = (int)uVar12 + 1;
            *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 5;
            uVar12 = (ulonglong)uVar11;
          } while (uVar11 < uVar4);
        }
      }
      break;
    case 7:
      uVar5 = uVar4 - 1;
      if (uVar11 < uVar4) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 2;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
      break;
    case 8:
      uVar5 = uVar4 - 1;
      if (uVar11 < uVar4) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 3;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
      break;
    default:
      goto switchD_1403c081e_caseD_9;
    case 0xb:
      uVar4 = uVar8 + 1;
      uVar5 = uVar8;
      if (uVar11 < uVar4) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 5;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
      break;
    case 0xc:
      iVar15 = 7;
      goto switchD_1403c081e_caseD_2;
    case 0xd:
      iVar15 = 5;
      goto switchD_1403c081e_caseD_2;
    case 0xe:
      uVar4 = uVar8;
      uVar5 = uVar8 - 1;
      if (uVar11 < uVar8) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(char *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar8);
      }
      break;
    case 0xf:
      uVar4 = uVar8;
      uVar5 = uVar8 - 1;
      if (uVar11 < uVar8) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar8);
      }
      break;
    case 0x10:
      uVar5 = uVar8 - 1;
      uVar4 = uVar8;
      if (uVar11 < uVar8) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 4;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar8);
      }
LAB_1403c0964:
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
      break;
    case 0x11:
      uVar4 = uVar8;
      uVar5 = uVar8 - 1;
      if (uVar11 < uVar8) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 5;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar8);
      }
      break;
    case 0x12:
      uVar4 = uVar8;
      uVar5 = uVar8 - 1;
      if (uVar11 < uVar8) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 2;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar8);
      }
      break;
    case 0x13:
      iVar15 = 1;
switchD_1403c081e_caseD_2:
      uVar4 = uVar8 + 1;
      goto switchD_1403c081e_caseD_9;
    case 0x14:
      uVar4 = uVar8;
      uVar5 = uVar8 - 1;
      if (uVar11 < uVar8) {
        uVar12 = uVar7;
        do {
          uVar11 = (int)uVar12 + 1;
          *(byte *)(lVar3 + 0xf + uVar12 * 0x14) = cVar13 << 4 | 3;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar8);
      }
    }
    uVar8 = uVar5;
    bVar16 = iVar14 != 0xf;
    iVar10 = iVar14 + 1;
    iVar14 = 1;
    if (bVar16) {
      iVar14 = iVar10;
    }
switchD_1403c081e_caseD_9:
    uVar12 = 0;
    if ((&DAT_140456cd0)[uVar6] != '\t') {
      uVar12 = uVar7;
    }
    uVar7 = uVar12;
    uVar9 = (ulonglong)(uVar8 + 1);
    uVar12 = uVar7;
    if (uVar8 + 1 == uVar2) goto LAB_1403c0c28;
LAB_1403c0780:
    uVar7 = uVar9;
    if ((&DAT_140456d60)[uVar6] != '\n') {
      uVar7 = uVar12;
    }
    iVar10 = (int)(char)(&DAT_140454f70)[uVar6];
    if (0 < iVar10) {
      uVar5 = (int)uVar6 * 2;
      bVar1 = *(byte *)(lVar3 + 0x12 + uVar9 * 0x14);
      if (((byte)(&DAT_140454e50)[uVar5] <= bVar1) && (bVar1 <= (byte)(&DAT_140454e51)[uVar5])) {
        iVar10 = (uint)bVar1 - (uint)(byte)(&DAT_140454e50)[uVar5];
      }
    }
    uVar5 = (uint)(byte)(&DAT_140455120)
                        [(longlong)iVar10 + (longlong)*(short *)(&DAT_140455000 + uVar6 * 2)];
  } while( true );
}

