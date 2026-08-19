// Function: FUN_1403b6900
// Addr: 1403b6900
// Size: 465 bytes


uint FUN_1403b6900(byte *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  
  uVar16 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
           (uint)param_1[3];
  uVar14 = (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 + (uint)param_1[8] * 0x1000000 +
           (uint)param_1[0xb];
  if (uVar14 != 0) {
    uVar15 = 0;
    do {
      lVar1 = uVar15 * 0xc;
      iVar13 = (uint)param_1[lVar1 + 0x11] + (uint)param_1[uVar15 * 0xc + 0x10] * 0x100;
      iVar9 = (uint)param_1[uVar15 * 0xc + 0x13] + (uint)param_1[uVar15 * 0xc + 0x12] * 0x100;
      iVar10 = *(int *)((longlong)param_2 + 0x3c) + -1;
      while( true ) {
        iVar12 = 0;
        iVar11 = iVar10;
        if (-1 < iVar10) {
          do {
            uVar3 = (uint)(iVar11 + iVar12) >> 1;
            iVar4 = *(int *)(param_2[8] + (ulonglong)uVar3 * 0x10);
            bVar17 = SBORROW4(iVar13,iVar4);
            iVar2 = iVar13 - iVar4;
            if (iVar13 == iVar4) {
              iVar4 = *(int *)(param_2[8] + 4 + (ulonglong)uVar3 * 0x10);
              bVar17 = SBORROW4(iVar9,iVar4);
              iVar2 = iVar9 - iVar4;
              if (iVar9 == iVar4) goto LAB_1403b6af3;
            }
            iVar4 = 1;
            if (bVar17 != iVar2 < 0) {
              iVar4 = -1;
            }
            if (iVar4 < 0) {
              iVar11 = uVar3 - 1;
            }
            else {
              if (iVar4 < 1) goto LAB_1403b6af3;
              iVar12 = uVar3 + 1;
            }
          } while (iVar12 <= iVar11);
        }
        if (iVar13 != 3) break;
        if (iVar9 != 3) goto LAB_1403b6b37;
        iVar9 = 1;
        iVar13 = 0x25;
      }
      if ((iVar13 == 0x27) && (iVar9 != 0)) {
        lVar6 = FUN_1403989f0(*param_2 + 0x180);
        if (iVar9 - 1U <
            (uint)*(byte *)(lVar6 + 9) * 0x10000 + (uint)*(byte *)(lVar6 + 10) * 0x100 +
            (uint)*(byte *)(lVar6 + 8) * 0x1000000 + (uint)*(byte *)(lVar6 + 0xb)) {
          pbVar8 = (byte *)(lVar6 + ((ulonglong)(iVar9 - 1U) + 3) * 4);
        }
        else {
          pbVar8 = (byte *)&DAT_14045dde0;
        }
        lVar7 = FUN_140416da0((ulonglong)*pbVar8 * 0x100 + (ulonglong)pbVar8[1] + lVar6,
                              (uint)pbVar8[2] * 0x100 + (uint)pbVar8[3]);
        lVar6 = param_2[2];
        if (lVar7 == lVar6) {
LAB_1403b6af3:
          uVar16 = uVar16 & (uint)param_1[lVar1 + 0x19] * 0x10000 +
                            (uint)param_1[lVar1 + 0x1a] * 0x100 +
                            (uint)param_1[lVar1 + 0x18] * 0x1000000 + (uint)param_1[lVar1 + 0x1b] |
                   (uint)param_1[lVar1 + 0x15] * 0x10000 + (uint)param_1[lVar1 + 0x16] * 0x100 +
                   (uint)param_1[lVar1 + 0x14] * 0x1000000 + (uint)param_1[lVar1 + 0x17];
        }
        else if ((lVar7 != 0) && (lVar6 != 0)) {
          uVar3 = func_0x000140421ed0(lVar7);
          uVar5 = func_0x000140421ed0(lVar6);
          if (((uVar3 <= uVar5) && (iVar9 = func_0x000140421dc0(lVar7,lVar6,uVar3), iVar9 == 0)) &&
             ((*(char *)((ulonglong)uVar3 + lVar6) == '\0' ||
              (*(char *)((ulonglong)uVar3 + lVar6) == '-')))) goto LAB_1403b6af3;
        }
      }
LAB_1403b6b37:
      uVar3 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar3;
    } while (uVar3 < uVar14);
  }
  return uVar16;
}

