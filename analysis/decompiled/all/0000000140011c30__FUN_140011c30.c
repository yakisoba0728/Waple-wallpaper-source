// Function: FUN_140011c30
// Addr: 140011c30
// Size: 798 bytes


void FUN_140011c30(float *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *_Buf1;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  float fVar17;
  
  uVar8 = *(ulonglong *)(param_1 + 0xe);
  fVar17 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar11 = 0;
  if ((DAT_140492974 <= fVar17) && (fVar17 = fVar17 - DAT_140492974, fVar17 < DAT_140492974)) {
    lVar11 = -0x8000000000000000;
  }
  uVar12 = 8;
  if (8 < (ulonglong)((longlong)fVar17 + lVar11)) {
    uVar12 = (longlong)fVar17 + lVar11;
  }
  uVar13 = uVar8;
  if ((uVar8 < uVar12) && ((0x1ff < uVar8 || (uVar13 = uVar8 * 8, uVar8 * 8 < uVar12)))) {
    uVar13 = uVar12;
  }
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 2);
  uVar8 = uVar13 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar10 = (char)lVar11 + 1;
  lVar11 = 1L << (bVar10 & 0x3f);
  FUN_140011f50(param_1 + 6,2L << (bVar10 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0xe) = lVar11;
  *(longlong *)(param_1 + 0xc) = lVar11 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x000140011d41:
  do {
    while( true ) {
      if (plVar6 == plVar2) {
        return;
      }
      uVar12 = plVar6[5];
      plVar9 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      uVar8 = plVar6[4];
      if (0xf < uVar12) {
        plVar9 = (longlong *)plVar6[2];
      }
      uVar13 = 0;
      uVar15 = 0xcbf29ce484222325;
      if (uVar8 != 0) {
        do {
          pbVar1 = (byte *)(uVar13 + (longlong)plVar9);
          uVar13 = uVar13 + 1;
          uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
        } while (uVar13 < uVar8);
      }
      lVar11 = *(longlong *)(param_1 + 6);
      uVar15 = *(ulonglong *)(param_1 + 0xc) & uVar15;
      plVar9 = *(longlong **)(lVar11 + uVar15 * 0x10);
      if (plVar9 != plVar2) break;
      *(longlong **)(lVar11 + uVar15 * 0x10) = plVar6;
      *(longlong **)(lVar11 + 8 + uVar15 * 0x10) = plVar6;
      plVar6 = plVar3;
    }
    plVar16 = *(longlong **)(lVar11 + 8 + uVar15 * 0x10);
    plVar14 = plVar16 + 2;
    if (0xf < (ulonglong)plVar16[5]) {
      plVar14 = (longlong *)*plVar14;
    }
    _Buf1 = plVar6 + 2;
    if (0xf < uVar12) {
      _Buf1 = (longlong *)plVar6[2];
    }
    if (uVar8 != plVar16[4]) {
LAB_140011e4f:
      if (plVar9 != plVar16) {
        do {
          plVar16 = (longlong *)plVar16[1];
          plVar9 = plVar16 + 2;
          if (0xf < (ulonglong)plVar16[5]) {
            plVar9 = (longlong *)*plVar9;
          }
          if (uVar12 < 0x10) {
            plVar14 = plVar6 + 2;
          }
          else {
            plVar14 = (longlong *)plVar6[2];
          }
          if (uVar8 == plVar16[4]) {
            if ((uVar8 == 0) || (iVar7 = memcmp(plVar14,plVar9,uVar8), iVar7 == 0)) {
              lVar11 = *plVar16;
              plVar9 = (longlong *)plVar6[1];
              *plVar9 = (longlong)plVar3;
              plVar14 = (longlong *)plVar3[1];
              *plVar14 = lVar11;
              puVar4 = *(undefined8 **)(lVar11 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar11 + 8) = plVar14;
              plVar3[1] = (longlong)plVar9;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar3;
              goto joined_r0x000140011d41;
            }
            uVar12 = plVar6[5];
          }
        } while (*(longlong **)(lVar11 + uVar15 * 0x10) != plVar16);
      }
      plVar9 = (longlong *)plVar6[1];
      *plVar9 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar16;
      puVar5 = (undefined8 *)plVar16[1];
      *puVar5 = plVar6;
      plVar16[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar9;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar11 + uVar15 * 0x10) = plVar6;
      plVar6 = plVar3;
      goto joined_r0x000140011d41;
    }
    if ((uVar8 != 0) && (iVar7 = memcmp(_Buf1,plVar14,uVar8), iVar7 != 0)) {
      plVar9 = *(longlong **)(lVar11 + uVar15 * 0x10);
      uVar12 = plVar6[5];
      goto LAB_140011e4f;
    }
    plVar16 = (longlong *)*plVar16;
    if (plVar16 != plVar6) {
      plVar9 = (longlong *)plVar6[1];
      *plVar9 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar16;
      puVar5 = (undefined8 *)plVar16[1];
      *puVar5 = plVar6;
      plVar16[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar9;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar11 + 8 + uVar15 * 0x10) = plVar6;
    plVar6 = plVar3;
  } while( true );
}

