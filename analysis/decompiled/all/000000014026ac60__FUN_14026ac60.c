// Function: FUN_14026ac60
// Addr: 14026ac60
// Size: 585 bytes


void FUN_14026ac60(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined4 *unaff_RSI;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  lVar11 = *param_1;
  uVar9 = (param_1[2] - lVar11 >> 3) * -0x3333333333333333;
  uVar7 = 0x666666666666666 - (uVar9 >> 1);
  if ((uVar7 <= uVar9 && uVar9 - uVar7 != 0) ||
     ((uVar9 = (uVar9 >> 1) + uVar9, uVar7 = param_2, param_2 <= uVar9 &&
      (uVar7 = uVar9, 0x666666666666666 < uVar9)))) {
LAB_14026aea5:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  lVar10 = param_1[1];
  uVar9 = uVar7 * 0x28;
  puVar13 = (undefined4 *)0x0;
  if (uVar9 == 0) {
LAB_14026ad41:
    lVar11 = lVar10 - lVar11 >> 3;
    puVar1 = puVar13 + lVar11 * 2;
    for (lVar11 = param_2 + lVar11 * 0x3333333333333333; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar1 = 0xffffffff;
      *(undefined8 *)(puVar1 + 1) = 0;
      puVar1[3] = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      puVar1 = puVar1 + 10;
    }
    puVar1 = (undefined4 *)param_1[1];
    puVar6 = puVar13;
    for (puVar14 = (undefined4 *)*param_1; puVar14 != puVar1; puVar14 = puVar14 + 10) {
      *puVar6 = *puVar14;
      puVar6[1] = puVar14[1];
      puVar6[2] = puVar14[2];
      puVar6[3] = puVar14[3];
      uVar2 = *(undefined8 *)(puVar14 + 8);
      uVar3 = *(undefined8 *)(puVar14 + 6);
      uVar4 = *(undefined8 *)(puVar14 + 4);
      *(undefined8 *)(puVar14 + 8) = 0;
      *(undefined8 *)(puVar14 + 6) = 0;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
      *(undefined8 *)(puVar6 + 6) = uVar3;
      *(undefined8 *)(puVar6 + 8) = uVar2;
      puVar6 = puVar6 + 10;
    }
    lVar11 = *param_1;
    if (lVar11 == 0) goto LAB_14026ae62;
    lVar10 = param_1[1];
    for (; lVar11 != lVar10; lVar11 = lVar11 + 0x28) {
      FUN_140031b80(lVar11 + 0x10);
    }
    lVar11 = *param_1;
    lVar10 = lVar11;
    puVar12 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar11 >> 3) * 8)) &&
       (lVar10 = *(longlong *)(lVar11 + -8), puVar12 = auStack_48, unaff_RSI = puVar13,
       0x1f < (lVar11 - lVar10) - 8U)) goto LAB_14026ae50;
  }
  else {
    if (uVar9 < 0x1000) {
      puVar13 = (undefined4 *)FUN_14028af20(uVar9);
      goto LAB_14026ad41;
    }
    if (uVar9 + 0x27 <= uVar9) goto LAB_14026aea5;
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      puVar13 = (undefined4 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar13 + -2) = lVar8;
      goto LAB_14026ad41;
    }
LAB_14026ae50:
    lVar10 = 5;
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar12 = auStack_40;
    puVar13 = unaff_RSI;
  }
  *(undefined8 *)(puVar12 + -8) = 0x14026ae62;
  thunk_FUN_14028af80(lVar10);
LAB_14026ae62:
  *param_1 = (longlong)puVar13;
  param_1[1] = (longlong)(puVar13 + param_2 * 10);
  param_1[2] = (longlong)(puVar13 + uVar7 * 10);
  return;
}

