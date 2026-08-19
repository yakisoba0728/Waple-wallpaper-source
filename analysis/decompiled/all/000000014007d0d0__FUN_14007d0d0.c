// Function: FUN_14007d0d0
// Addr: 14007d0d0
// Size: 67 bytes


void FUN_14007d0d0(float *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  float fVar18;
  undefined8 uStackX_10;
  
  uVar8 = *(ulonglong *)(param_1 + 0xe);
  fVar18 = (float)func_0x00014041a070((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar12 = 0;
  if ((DAT_140492a44 <= fVar18) && (fVar18 = fVar18 - DAT_140492a44, fVar18 < DAT_140492a44)) {
    lVar12 = -0x8000000000000000;
  }
  uVar13 = 8;
  if (8 < (ulonglong)((longlong)fVar18 + lVar12)) {
    uVar13 = (longlong)fVar18 + lVar12;
  }
  uVar9 = uVar8;
  if ((uVar8 < uVar13) && ((0x1ff < uVar8 || (uVar9 = uVar8 * 8, uVar8 * 8 < uVar13)))) {
    uVar9 = uVar13;
  }
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 2);
  uVar8 = uVar9 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar11 = (char)lVar12 + 1;
  lVar12 = 1L << (bVar11 & 0x3f);
  FUN_14003e5e0(param_1 + 6,2L << (bVar11 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0xe) = lVar12;
  *(longlong *)(param_1 + 0xc) = lVar12 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x00014007e332:
  do {
    while( true ) {
      if (plVar6 == plVar2) {
        uStackX_10 = 0;
        func_0x00014007ec70(&uStackX_10);
        return;
      }
      uVar13 = plVar6[5];
      plVar10 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      uVar8 = plVar6[4];
      if (0xf < uVar13) {
        plVar10 = (longlong *)plVar6[2];
      }
      uVar16 = 0xcbf29ce484222325;
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar10 + uVar9);
          uVar9 = uVar9 + 1;
          uVar16 = (uVar16 ^ *pbVar1) * 0x100000001b3;
        } while (uVar9 < uVar8);
      }
      lVar12 = *(longlong *)(param_1 + 6);
      uVar16 = *(ulonglong *)(param_1 + 0xc) & uVar16;
      plVar10 = *(longlong **)(lVar12 + uVar16 * 0x10);
      if (plVar10 != plVar2) break;
      *(longlong **)(lVar12 + uVar16 * 0x10) = plVar6;
      *(longlong **)(lVar12 + 8 + uVar16 * 0x10) = plVar6;
      plVar6 = plVar3;
    }
    plVar17 = *(longlong **)(lVar12 + 8 + uVar16 * 0x10);
    plVar15 = plVar17 + 2;
    if (0xf < (ulonglong)plVar17[5]) {
      plVar15 = (longlong *)*plVar15;
    }
    plVar14 = plVar6 + 2;
    if (0xf < uVar13) {
      plVar14 = (longlong *)plVar6[2];
    }
    if (uVar8 != plVar17[4]) {
LAB_14007e43f:
      if (plVar10 != plVar17) {
        do {
          plVar17 = (longlong *)plVar17[1];
          plVar10 = plVar17 + 2;
          if (0xf < (ulonglong)plVar17[5]) {
            plVar10 = (longlong *)*plVar10;
          }
          if (uVar13 < 0x10) {
            plVar15 = plVar6 + 2;
          }
          else {
            plVar15 = (longlong *)plVar6[2];
          }
          if (uVar8 == plVar17[4]) {
            if ((uVar8 == 0) || (iVar7 = func_0x0001404210c0(plVar15,plVar10,uVar8), iVar7 == 0)) {
              lVar12 = *plVar17;
              plVar10 = (longlong *)plVar6[1];
              *plVar10 = (longlong)plVar3;
              plVar15 = (longlong *)plVar3[1];
              *plVar15 = lVar12;
              puVar4 = *(undefined8 **)(lVar12 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar12 + 8) = plVar15;
              plVar3[1] = (longlong)plVar10;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar3;
              goto joined_r0x00014007e332;
            }
            uVar13 = plVar6[5];
          }
        } while (*(longlong **)(lVar12 + uVar16 * 0x10) != plVar17);
      }
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar17;
      puVar5 = (undefined8 *)plVar17[1];
      *puVar5 = plVar6;
      plVar17[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar12 + uVar16 * 0x10) = plVar6;
      plVar6 = plVar3;
      goto joined_r0x00014007e332;
    }
    if ((uVar8 != 0) && (iVar7 = func_0x0001404210c0(plVar14,plVar15,uVar8), iVar7 != 0)) {
      plVar10 = *(longlong **)(lVar12 + uVar16 * 0x10);
      uVar13 = plVar6[5];
      goto LAB_14007e43f;
    }
    plVar17 = (longlong *)*plVar17;
    if (plVar17 != plVar6) {
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar17;
      puVar5 = (undefined8 *)plVar17[1];
      *puVar5 = plVar6;
      plVar17[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar12 + 8 + uVar16 * 0x10) = plVar6;
    plVar6 = plVar3;
  } while( true );
}

