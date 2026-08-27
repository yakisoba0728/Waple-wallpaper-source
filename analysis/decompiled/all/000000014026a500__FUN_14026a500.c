// Function: FUN_14026a500
// Addr: 14026a500
// Size: 573 bytes


void FUN_14026a500(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 *unaff_RBP;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar11 = auStack_38;
  if (0x3ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  lVar7 = param_1[1];
  puVar12 = (undefined4 *)0x0;
  lVar8 = *param_1;
  uVar9 = param_1[2] - lVar8 >> 6;
  if (0x3ffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar13 = 0xffffffffffffffc0;
    uVar9 = 0xffffffffffffffe7;
LAB_14026a5ae:
    lVar6 = FUN_14028af20(uVar9);
    puVar12 = unaff_RBP;
    if (lVar6 != 0) {
      puVar12 = (undefined4 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar12 + -2) = lVar6;
      goto LAB_14026a5d2;
    }
LAB_14026a6ed:
    pcVar4 = (code *)swi(0x29);
    lVar7 = (*pcVar4)(5);
    puVar11 = auStack_30;
  }
  else {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar13 = param_2;
    if ((param_2 <= uVar9) && (uVar13 = uVar9, 0x3ffffffffffffff < uVar9)) {
LAB_14026a739:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar13 = uVar13 * 0x40;
    if (uVar13 != 0) {
      if (0xfff < uVar13) {
        uVar9 = uVar13 | 0x27;
        if (uVar9 <= uVar13) goto LAB_14026a739;
        goto LAB_14026a5ae;
      }
      puVar12 = (undefined4 *)FUN_14028af20();
    }
LAB_14026a5d2:
    uVar9 = lVar7 - lVar8;
    puVar10 = (undefined4 *)((uVar9 & 0xffffffffffffffc0) + (longlong)puVar12);
    for (lVar7 = param_2 - ((longlong)uVar9 >> 6); lVar7 != 0; lVar7 = lVar7 + -1) {
      puVar10[1] = 0;
      *(undefined8 *)(puVar10 + 0xe) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *puVar10 = 0xffffffff;
      *(undefined8 *)(puVar10 + 8) = 0;
      *(undefined8 *)(puVar10 + 10) = 0;
      *(undefined8 *)(puVar10 + 0xc) = 0;
      puVar10 = puVar10 + 0x10;
    }
    puVar10 = (undefined4 *)param_1[1];
    puVar5 = puVar12;
    for (puVar14 = (undefined4 *)*param_1; puVar14 != puVar10; puVar14 = puVar14 + 0x10) {
      *puVar5 = *puVar14;
      uVar1 = *(undefined8 *)(puVar14 + 6);
      uVar2 = *(undefined8 *)(puVar14 + 4);
      uVar3 = *(undefined8 *)(puVar14 + 2);
      *(undefined8 *)(puVar14 + 6) = 0;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 2) = 0;
      *(undefined8 *)(puVar5 + 2) = uVar3;
      *(undefined8 *)(puVar5 + 4) = uVar2;
      *(undefined8 *)(puVar5 + 6) = uVar1;
      uVar1 = *(undefined8 *)(puVar14 + 8);
      uVar2 = *(undefined8 *)(puVar14 + 0xc);
      uVar3 = *(undefined8 *)(puVar14 + 10);
      *(undefined8 *)(puVar14 + 0xc) = 0;
      *(undefined8 *)(puVar14 + 10) = 0;
      *(undefined8 *)(puVar14 + 8) = 0;
      *(undefined8 *)(puVar5 + 8) = uVar1;
      *(undefined8 *)(puVar5 + 10) = uVar3;
      *(undefined8 *)(puVar5 + 0xc) = uVar2;
      puVar5[0xe] = puVar14[0xe];
      puVar5 = puVar5 + 0x10;
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_14026a6fc;
    lVar8 = param_1[1];
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x40) {
      FUN_140031b80(lVar7 + 0x20);
      FUN_1401dd290(lVar7 + 8);
    }
    lVar7 = *param_1;
    if ((0xfff < (param_1[2] - lVar7 & 0xffffffffffffffc0U)) &&
       (lVar8 = lVar7 - *(longlong *)(lVar7 + -8), lVar7 = *(longlong *)(lVar7 + -8),
       puVar11 = auStack_38, 0x1f < lVar8 - 8U)) goto LAB_14026a6ed;
  }
  *(undefined8 *)(puVar11 + -8) = 0x14026a6fc;
  thunk_FUN_14028af80(lVar7);
LAB_14026a6fc:
  *param_1 = (longlong)puVar12;
  param_1[1] = (longlong)(puVar12 + param_2 * 0x10);
  param_1[2] = uVar13 + (longlong)puVar12;
  return;
}

