// Function: FUN_14026aeb0
// Addr: 14026aeb0
// Size: 495 bytes


void FUN_14026aeb0(longlong *param_1,ulonglong param_2)

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
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *unaff_R14;
  undefined4 *puVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  lVar7 = *param_1;
  uVar9 = param_1[2] - lVar7 >> 5;
  if ((0x7ffffffffffffff - (uVar9 >> 1) < uVar9) ||
     ((uVar9 = (uVar9 >> 1) + uVar9, uVar12 = param_2, param_2 <= uVar9 &&
      (uVar12 = uVar9, 0x7ffffffffffffff < uVar9)))) {
LAB_14026b09b:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  lVar8 = param_1[1];
  puVar14 = (undefined4 *)0x0;
  uVar9 = uVar12 * 0x20;
  if (uVar9 == 0) {
LAB_14026af75:
    uVar9 = lVar8 - lVar7;
    puVar10 = (undefined4 *)((uVar9 & 0xffffffffffffffe0) + (longlong)puVar14);
    for (lVar7 = param_2 - ((longlong)uVar9 >> 5); lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0;
      puVar10[1] = 0x3f800000;
      *(undefined8 *)(puVar10 + 2) = 0;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      puVar10 = puVar10 + 8;
    }
    puVar10 = (undefined4 *)param_1[1];
    puVar5 = puVar14;
    for (puVar13 = (undefined4 *)*param_1; puVar13 != puVar10; puVar13 = puVar13 + 8) {
      *puVar5 = *puVar13;
      puVar5[1] = puVar13[1];
      uVar1 = *(undefined8 *)(puVar13 + 6);
      uVar2 = *(undefined8 *)(puVar13 + 4);
      uVar3 = *(undefined8 *)(puVar13 + 2);
      *(undefined8 *)(puVar13 + 6) = 0;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 2) = 0;
      *(undefined8 *)(puVar5 + 2) = uVar3;
      *(undefined8 *)(puVar5 + 4) = uVar2;
      *(undefined8 *)(puVar5 + 6) = uVar1;
      puVar5 = puVar5 + 8;
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_14026b05f;
    lVar8 = param_1[1];
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x20) {
      FUN_14003df80(lVar7 + 8);
    }
    lVar7 = *param_1;
    lVar8 = lVar7;
    puVar11 = auStack_38;
    if ((0xfff < (param_1[2] - lVar7 & 0xffffffffffffffe0U)) &&
       (lVar8 = *(longlong *)(lVar7 + -8), puVar11 = auStack_38, unaff_R14 = puVar14,
       0x1f < (lVar7 - lVar8) - 8U)) goto LAB_14026b050;
  }
  else {
    if (uVar9 < 0x1000) {
      puVar14 = (undefined4 *)FUN_14028af20(uVar9);
      goto LAB_14026af75;
    }
    if (uVar9 + 0x27 <= uVar9) goto LAB_14026b09b;
    lVar6 = FUN_14028af20();
    if (lVar6 != 0) {
      puVar14 = (undefined4 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar14 + -2) = lVar6;
      goto LAB_14026af75;
    }
LAB_14026b050:
    pcVar4 = (code *)swi(0x29);
    lVar8 = (*pcVar4)(5);
    puVar11 = auStack_30;
    puVar14 = unaff_R14;
  }
  *(undefined8 *)(puVar11 + -8) = 0x14026b05f;
  thunk_FUN_14028af80(lVar8);
LAB_14026b05f:
  *param_1 = (longlong)puVar14;
  param_1[1] = (longlong)(puVar14 + param_2 * 8);
  param_1[2] = (longlong)(puVar14 + uVar12 * 8);
  return;
}

