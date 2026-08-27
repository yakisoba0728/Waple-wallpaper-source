// Function: FUN_140282920
// Addr: 140282920
// Size: 617 bytes


undefined8 FUN_140282920(undefined8 *param_1,double *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];
  
  puVar13 = auStack_98;
  puVar12 = auStack_98;
  plVar3 = (longlong *)param_2[4];
  if ((plVar3 == (longlong *)0x0) || (*plVar3 != plVar3[1])) {
    plVar3 = (longlong *)param_2[3];
    puVar10 = (undefined8 *)plVar3[1];
    lVar14 = *plVar3;
    lVar7 = (longlong)puVar10 - lVar14 >> 3;
    uVar8 = lVar7 * -0x5555555555555555;
    uVar1 = uVar8 + 1;
    if (uVar1 < uVar8) {
      puVar16 = (undefined8 *)(lVar14 + uVar1 * 0x18);
      for (puVar11 = puVar16; puVar11 != puVar10; puVar11 = puVar11 + 3) {
        FUN_1401b7f60(puVar11);
      }
      plVar3[1] = (longlong)puVar16;
    }
    else if (uVar8 < uVar1) {
      uVar8 = (plVar3[2] - lVar14 >> 3) * -0x5555555555555555;
      if (uVar8 < uVar1) {
        if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar9 = 0xaaaaaaaaaaaaaaa - (uVar8 >> 1);
        if ((uVar9 <= uVar8 && uVar8 - uVar9 != 0) ||
           ((uVar8 = (uVar8 >> 1) + uVar8, uVar9 = uVar1, uVar1 <= uVar8 &&
            (uVar9 = uVar8, 0xaaaaaaaaaaaaaaa < uVar8)))) {
LAB_140282b7f:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        puVar16 = (undefined8 *)0x0;
        uVar8 = uVar9 * 0x18;
        if (uVar8 != 0) {
          if (uVar8 < 0x1000) {
            puVar16 = (undefined8 *)FUN_14028af20();
            puVar13 = auStack_98;
          }
          else {
            if (uVar8 + 0x27 <= uVar8) goto LAB_140282b7f;
            lVar7 = FUN_14028af20(uVar8 + 0x27);
            if (lVar7 == 0) {
              pcVar6 = (code *)swi(0x29);
              lVar7 = (*pcVar6)(5);
              puVar12 = auStack_90;
            }
            puVar16 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
            puVar16[-1] = lVar7;
            puVar13 = puVar12;
          }
        }
        *(longlong **)(puVar13 + 0x20) = plVar3;
        lVar14 = (longlong)puVar10 - lVar14 >> 3;
        *(ulonglong *)(puVar13 + 0x30) = uVar9;
        puVar10 = puVar16 + lVar14;
        *(undefined8 **)(puVar13 + 0x38) = puVar10;
        for (lVar14 = uVar1 + lVar14 * 0x5555555555555555; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10 = puVar10 + 3;
        }
        puVar11 = (undefined8 *)plVar3[1];
        puVar15 = (undefined8 *)*plVar3;
        *(undefined8 **)(puVar13 + 0x40) = puVar10;
        puVar10 = puVar16;
        for (; puVar15 != puVar11; puVar15 = puVar15 + 3) {
          uVar2 = puVar15[2];
          uVar4 = puVar15[1];
          uVar5 = *puVar15;
          puVar15[2] = 0;
          puVar15[1] = 0;
          *puVar15 = 0;
          *puVar10 = uVar5;
          puVar10[1] = uVar4;
          puVar10[2] = uVar2;
          puVar10 = puVar10 + 3;
        }
        *(undefined8 *)(puVar13 + 0x28) = 0;
        *(undefined8 *)(puVar13 + -8) = 0x140282b15;
        FUN_1402826c0(plVar3,puVar16,uVar1,uVar9);
        *(undefined8 *)(puVar13 + -8) = 0x140282b1f;
        FUN_140282610(puVar13 + 0x20);
      }
      else {
        for (lVar14 = uVar1 + lVar7 * 0x5555555555555555; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10 = puVar10 + 3;
        }
        plVar3[1] = (longlong)puVar10;
      }
    }
    param_2[4] = (double)(plVar3[1] + -0x18);
  }
  uVar2 = *param_1;
  param_2[1] = (double)(int)uVar2 * *param_2;
  param_2[2] = (double)(int)((ulonglong)uVar2 >> 0x20) * *param_2;
  return 0;
}

