// Function: FUN_14026b980
// Addr: 14026b980
// Size: 872 bytes


void FUN_14026b980(float *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  longlong *unaff_RDI;
  float fVar16;
  longlong *local_res8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar15 = auStack_38;
  uVar9 = *(ulonglong *)(param_1 + 0xe);
  fVar16 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar12 = 0;
  if ((DAT_140492974 <= fVar16) && (fVar16 = fVar16 - DAT_140492974, fVar16 < DAT_140492974)) {
    lVar12 = -0x8000000000000000;
  }
  uVar13 = 8;
  if (8 < (ulonglong)((longlong)fVar16 + lVar12)) {
    uVar13 = (longlong)fVar16 + lVar12;
  }
  uVar14 = uVar9;
  if ((uVar9 < uVar13) && ((0x1ff < uVar9 || (uVar14 = uVar9 * 8, uVar9 * 8 < uVar13)))) {
    uVar14 = uVar13;
  }
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 2);
  uVar9 = uVar14 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar11 = (char)lVar12 + 1;
  uVar9 = 2L << (bVar11 & 0x3f);
  local_res8 = plVar2;
  if (uVar9 <= (ulonglong)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 6) >> 3)) {
    FUN_14000f7d0(*(longlong *)(param_1 + 6),*(longlong *)(param_1 + 8),&local_res8);
    puVar15 = auStack_38;
    goto LAB_14026bb6e;
  }
  if (0x1fffffffffffffff < uVar9) {
LAB_14026bcd7:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar9 = 0x10L << (bVar11 & 0x3f);
  if (uVar9 == 0) {
    unaff_RDI = (longlong *)0x0;
LAB_14026bae8:
    lVar12 = *(longlong *)(param_1 + 6);
    if (*(longlong *)(param_1 + 10) - lVar12 != 0) {
      lVar10 = lVar12;
      puVar15 = auStack_38;
      if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 10) - lVar12 >> 3) * 8)) &&
         (lVar10 = *(longlong *)(lVar12 + -8), puVar15 = auStack_38, 0x1f < (lVar12 - lVar10) - 8U))
      goto LAB_14026bb21;
      goto LAB_14026bb2b;
    }
  }
  else {
    if (uVar9 < 0x1000) {
      unaff_RDI = (longlong *)FUN_14028af20(uVar9);
      goto LAB_14026bae8;
    }
    if (uVar9 + 0x27 <= uVar9) goto LAB_14026bcd7;
    lVar12 = FUN_14028af20();
    if (lVar12 != 0) {
      unaff_RDI = (longlong *)(lVar12 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar12;
      goto LAB_14026bae8;
    }
LAB_14026bb21:
    pcVar8 = (code *)swi(0x29);
    lVar10 = (*pcVar8)(5);
    puVar15 = auStack_30;
LAB_14026bb2b:
    *(undefined8 *)(puVar15 + -8) = 0x14026bb30;
    thunk_FUN_14028af80(lVar10);
  }
  *(longlong **)(param_1 + 6) = unaff_RDI;
  plVar1 = (longlong *)(uVar9 + (longlong)unaff_RDI);
  *(longlong **)(param_1 + 8) = plVar1;
  *(longlong **)(param_1 + 10) = plVar1;
  if (uVar9 != 0) {
    do {
      *unaff_RDI = (longlong)plVar2;
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != plVar1);
  }
LAB_14026bb6e:
  lVar12 = 1L << (bVar11 & 0x3f);
  *(longlong *)(param_1 + 0xe) = lVar12;
  *(longlong *)(param_1 + 0xc) = lVar12 + -1;
  plVar1 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x00014026bb8d:
  do {
    while( true ) {
      while( true ) {
        if (plVar1 == plVar2) {
          *(undefined8 *)(puVar15 + 0x40) = 0;
          *(undefined8 *)(puVar15 + -8) = 0x14026bc99;
          FUN_1400500f0(puVar15 + 0x40);
          return;
        }
        lVar12 = *(longlong *)(param_1 + 6);
        plVar3 = (longlong *)*plVar1;
        uVar9 = *(ulonglong *)(param_1 + 0xc) &
                (((((ulonglong)*(byte *)(plVar1 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar1 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar1 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar1 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar12 + uVar9 * 0x10);
        if (plVar4 != plVar2) break;
        *(longlong **)(lVar12 + uVar9 * 0x10) = plVar1;
        *(longlong **)(lVar12 + 8 + uVar9 * 0x10) = plVar1;
        plVar1 = plVar3;
      }
      plVar5 = *(longlong **)(lVar12 + 8 + uVar9 * 0x10);
      if ((int)plVar1[2] != (int)plVar5[2]) break;
      plVar5 = (longlong *)*plVar5;
      if (plVar5 != plVar1) {
        plVar4 = (longlong *)plVar1[1];
        *plVar4 = (longlong)plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar5;
        puVar7 = (undefined8 *)plVar5[1];
        *puVar7 = plVar1;
        plVar5[1] = (longlong)puVar6;
        plVar3[1] = (longlong)plVar4;
        plVar1[1] = (longlong)puVar7;
      }
      *(longlong **)(lVar12 + 8 + uVar9 * 0x10) = plVar1;
      plVar1 = plVar3;
    }
    do {
      if (plVar4 == plVar5) {
        plVar4 = (longlong *)plVar1[1];
        *plVar4 = (longlong)plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar5;
        puVar7 = (undefined8 *)plVar5[1];
        *puVar7 = plVar1;
        plVar5[1] = (longlong)puVar6;
        plVar3[1] = (longlong)plVar4;
        plVar1[1] = (longlong)puVar7;
        *(longlong **)(lVar12 + uVar9 * 0x10) = plVar1;
        plVar1 = plVar3;
        goto joined_r0x00014026bb8d;
      }
      plVar5 = (longlong *)plVar5[1];
    } while ((int)plVar1[2] != (int)plVar5[2]);
    lVar12 = *plVar5;
    plVar4 = (longlong *)plVar1[1];
    *plVar4 = (longlong)plVar3;
    plVar5 = (longlong *)plVar3[1];
    *plVar5 = lVar12;
    puVar6 = *(undefined8 **)(lVar12 + 8);
    *puVar6 = plVar1;
    *(longlong **)(lVar12 + 8) = plVar5;
    plVar3[1] = (longlong)plVar4;
    plVar1[1] = (longlong)puVar6;
    plVar1 = plVar3;
  } while( true );
}

