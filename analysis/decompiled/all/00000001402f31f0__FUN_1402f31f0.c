// Function: FUN_1402f31f0
// Addr: 1402f31f0
// Size: 79 bytes


undefined8 FUN_1402f31f0(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uStackX_10;
  
  if ((param_1 == (ushort *)0x0) || (param_1[1] == 0)) {
    return 0;
  }
  puVar4 = *(uint **)(param_1 + 4);
  uVar14 = *puVar4;
  uVar9 = puVar4[1];
  puVar20 = puVar4 + 2;
  uVar22 = uVar14;
  uVar16 = uVar9;
  if (puVar20 < puVar4 + (ulonglong)param_1[1] * 2) {
    do {
      uVar3 = *puVar20;
      uVar5 = uVar3;
      if ((int)uVar22 <= (int)uVar3) {
        uVar5 = uVar22;
      }
      uVar22 = puVar20[1];
      if ((int)uVar3 <= (int)uVar14) {
        uVar3 = uVar14;
      }
      uVar14 = uVar3;
      if ((int)uVar22 < (int)uVar16) {
        uVar16 = uVar22;
      }
      if ((int)uVar9 < (int)uVar22) {
        uVar9 = uVar22;
      }
      puVar20 = puVar20 + 2;
      uVar22 = uVar5;
    } while (puVar20 < puVar4 + (ulonglong)param_1[1] * 2);
    if ((((uVar5 != uVar14) && (uVar16 != uVar9)) && (-0x1000001 < (int)uVar5)) &&
       (((-0x1000001 < (int)uVar16 && ((int)uVar14 < 0x1000001)) && ((int)uVar9 < 0x1000001)))) {
      uVar22 = -uVar5;
      if ((int)-uVar5 < 0) {
        uVar22 = uVar5;
      }
      uVar3 = -uVar14;
      if ((int)-uVar14 < 0) {
        uVar3 = uVar14;
      }
      iVar12 = 0x1f;
      if ((uVar22 | uVar3) != 0) {
        for (; (uVar22 | uVar3) >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      iVar25 = 0;
      if (0 < iVar12 + -0xe) {
        iVar25 = iVar12 + -0xe;
      }
      iVar12 = 0x1f;
      if (uVar9 - uVar16 != 0) {
        for (; uVar9 - uVar16 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      iVar18 = 0;
      if (0 < iVar12 + -0xe) {
        iVar18 = iVar12 + -0xe;
      }
      if (*param_1 != 0) {
        iVar12 = 0;
        uVar15 = 0xffffffff;
        uVar13 = 0;
        uStackX_10 = 0;
        do {
          iVar6 = (int)uVar15 + 1;
          uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xc) + uVar13 * 2);
          uVar15 = (ulonglong)uVar2;
          uVar14 = (uint)uVar2;
          if (iVar6 <= (int)uVar14) {
            bVar7 = (byte)iVar25;
            iVar11 = (int)puVar4[uVar15 * 2] >> (bVar7 & 0x1f);
            iVar26 = 0;
            iVar24 = 0;
            bVar8 = (byte)iVar18;
            iVar23 = (int)puVar4[uVar15 * 2 + 1] >> (bVar8 & 0x1f);
            if ((int)(((uint)uVar2 - iVar6) + 1) < 2) {
code_r0x0001402f33d3:
              iVar12 = iVar12 + (((int)puVar4[(longlong)iVar6 * 2 + 1] >> (bVar8 & 0x1f)) - iVar23)
                                * (((int)puVar4[(longlong)iVar6 * 2] >> (bVar7 & 0x1f)) + iVar11);
            }
            else {
              do {
                lVar17 = (longlong)iVar6;
                iVar6 = iVar6 + 2;
                iVar21 = (int)puVar4[lVar17 * 2] >> (bVar7 & 0x1f);
                iVar19 = (int)puVar4[lVar17 * 2 + 1] >> (bVar8 & 0x1f);
                iVar10 = iVar19 - iVar23;
                iVar1 = iVar21 + iVar11;
                iVar11 = (int)puVar4[lVar17 * 2 + 2] >> (bVar7 & 0x1f);
                iVar23 = (int)puVar4[lVar17 * 2 + 3] >> (bVar8 & 0x1f);
                iVar26 = iVar26 + iVar10 * iVar1;
                iVar24 = iVar24 + (iVar23 - iVar19) * (iVar11 + iVar21);
              } while (iVar6 <= (int)(uVar2 - 1));
              uVar15 = (ulonglong)uVar14;
              uVar13 = (ulonglong)uStackX_10;
              if (iVar6 <= (int)uVar14) goto code_r0x0001402f33d3;
            }
            iVar12 = iVar12 + iVar24 + iVar26;
          }
          uStackX_10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uStackX_10;
        } while ((int)uStackX_10 < (int)(uint)*param_1);
        if (0 < iVar12) {
          return 1;
        }
        if (iVar12 < 0) {
          return 0;
        }
      }
    }
  }
  return 2;
}

