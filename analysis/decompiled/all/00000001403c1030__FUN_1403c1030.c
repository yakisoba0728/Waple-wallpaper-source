// Function: FUN_1403c1030
// Addr: 1403c1030
// Size: 918 bytes


void FUN_1403c1030(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x70);
  lVar7 = 0;
  uVar15 = 0;
  uVar11 = 0;
  uVar4 = 0;
  iVar14 = 0;
  uVar9 = 0;
  iVar13 = 1;
  if (uVar2 != 0) goto LAB_1403c107c;
LAB_1403c13aa:
  if ((short)(&DAT_14045a600)[(int)lVar7] < 1) {
    return;
  }
  iVar6 = (short)(&DAT_14045a600)[(int)lVar7] + -1;
  do {
    uVar5 = (uint)uVar9;
    lVar7 = (longlong)(char)(&DAT_14045a508)[iVar6];
    uVar11 = (uint)uVar15;
    if ((&DAT_14045a548)[iVar6] == '\0') goto switchD_1403c1125_default;
    cVar12 = (char)iVar13;
    uVar8 = uVar5;
    switch((&DAT_14045a548)[iVar6]) {
    case 3:
      uVar4 = uVar5 + 1;
      if (uVar11 < uVar4) {
        uVar9 = uVar15;
        do {
          uVar11 = (int)uVar9 + 1;
          *(byte *)(lVar3 + 0xf + uVar9 * 0x14) = cVar12 << 4 | 2;
          uVar9 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
      break;
    case 4:
      uVar4 = uVar5 + 1;
      if (uVar11 < uVar4) {
        uVar9 = uVar15;
        do {
          uVar11 = (int)uVar9 + 1;
          *(byte *)(lVar3 + 0xf + uVar9 * 0x14) = cVar12 << 4 | 2;
          uVar9 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
      break;
    case 5:
      iVar14 = 3;
      goto LAB_1403c138e;
    case 6:
      iVar14 = 2;
LAB_1403c138e:
      uVar4 = uVar5 + 1;
      goto switchD_1403c1125_default;
    case 7:
      uVar4 = uVar5;
      uVar8 = uVar5 - 1;
      if (uVar11 < uVar5) {
        uVar9 = uVar15;
        do {
          uVar11 = (int)uVar9 + 1;
          *(char *)(lVar3 + 0xf + uVar9 * 0x14) = cVar12 << 4;
          uVar9 = (ulonglong)uVar11;
        } while (uVar11 < uVar5);
      }
      break;
    case 8:
      uVar4 = uVar5 + 1;
      if (uVar11 < uVar4) {
        uVar9 = uVar15;
        do {
          uVar11 = (int)uVar9 + 1;
          *(char *)(lVar3 + 0xf + uVar9 * 0x14) = cVar12 << 4;
          uVar9 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
      break;
    case 9:
      uVar4 = uVar5;
      uVar8 = uVar5 - 1;
      if (uVar5 <= uVar11) goto LAB_1403c11db;
      uVar9 = uVar15;
      do {
        uVar4 = (int)uVar9 + 1;
        *(byte *)(lVar3 + 0xf + uVar9 * 0x14) = cVar12 << 4 | 1;
        uVar9 = (ulonglong)uVar4;
      } while (uVar4 < uVar5);
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
      uVar4 = uVar5;
      break;
    case 10:
      uVar4 = uVar5 + 1;
      if (uVar11 < uVar4) {
        uVar9 = uVar15;
        do {
          uVar11 = (int)uVar9 + 1;
          *(byte *)(lVar3 + 0xf + uVar9 * 0x14) = cVar12 << 4 | 1;
          uVar9 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
LAB_1403c11db:
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
      break;
    case 0xb:
      if (iVar14 == 2) {
        uVar5 = uVar4 - 1;
        if (uVar11 < uVar4) {
          uVar9 = uVar15;
          do {
            uVar11 = (int)uVar9 + 1;
            *(byte *)(lVar3 + 0xf + uVar9 * 0x14) = cVar12 << 4 | 2;
            uVar9 = (ulonglong)uVar11;
          } while (uVar11 < uVar4);
        }
        iVar13 = iVar13 + 1;
        if (iVar13 == 0x10) {
          iVar13 = 1;
        }
      }
      else if (iVar14 == 3) {
        uVar8 = uVar4 - 1;
        if (uVar4 <= uVar11) goto LAB_1403c11db;
        uVar9 = uVar15;
        do {
          uVar11 = (int)uVar9 + 1;
          *(byte *)(lVar3 + 0xf + uVar9 * 0x14) = cVar12 << 4 | 1;
          uVar9 = (ulonglong)uVar11;
        } while (uVar11 < uVar4);
        *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
        break;
      }
      goto switchD_1403c1125_default;
    case 0xc:
      uVar4 = uVar5;
      uVar8 = uVar5 - 1;
      if (uVar11 < uVar5) {
        uVar9 = uVar15;
        do {
          uVar11 = (int)uVar9 + 1;
          *(byte *)(lVar3 + 0xf + uVar9 * 0x14) = cVar12 << 4 | 2;
          uVar9 = (ulonglong)uVar11;
        } while (uVar11 < uVar5);
      }
      break;
    default:
      goto switchD_1403c1125_default;
    }
    uVar5 = uVar8;
    bVar16 = iVar13 != 0xf;
    iVar6 = iVar13 + 1;
    iVar13 = 1;
    if (bVar16) {
      iVar13 = iVar6;
    }
switchD_1403c1125_default:
    if ((&DAT_14045a588)[lVar7] == '\x01') {
      uVar15 = 0;
    }
    uVar11 = (uint)uVar15;
    uVar9 = (ulonglong)(uVar5 + 1);
    if (uVar5 + 1 == uVar2) goto LAB_1403c13aa;
LAB_1403c107c:
    iVar6 = (int)lVar7;
    iVar10 = (int)(char)(&DAT_140459940)[iVar6];
    uVar5 = (uint)uVar9;
    if ((&DAT_14045a5c0)[iVar6] != '\x02') {
      uVar5 = uVar11;
    }
    uVar15 = (ulonglong)uVar5;
    if ('\0' < (char)(&DAT_140459940)[iVar6]) {
      bVar1 = *(byte *)(lVar3 + 0x12 + uVar9 * 0x14);
      if (((byte)(&DAT_1404598d0)[iVar6 * 2] <= bVar1) &&
         (bVar1 <= (byte)(&DAT_1404598d1)[iVar6 * 2])) {
        iVar10 = (uint)bVar1 - (uint)(byte)(&DAT_1404598d0)[iVar6 * 2];
      }
    }
    iVar6 = (int)(char)(&DAT_1404599f0)[(longlong)iVar10 + (longlong)(short)(&DAT_140459980)[iVar6]]
    ;
  } while( true );
}

