// Function: FUN_14026b270
// Addr: 14026b270
// Size: 602 bytes


void FUN_14026b270(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined8 *unaff_RBP;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar14 = auStack_38;
  if (0x1ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  lVar13 = param_1[1];
  puVar15 = (undefined8 *)0x0;
  lVar11 = *param_1;
  uVar12 = param_1[2] - lVar11 >> 7;
  if (0x1ffffffffffffff - (uVar12 >> 1) < uVar12) {
    uVar16 = 0xffffffffffffff80;
    uVar12 = 0xffffffffffffffa7;
LAB_14026b31e:
    lVar10 = FUN_14028af20(uVar12);
    puVar15 = unaff_RBP;
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
      puVar15[-1] = lVar10;
      goto LAB_14026b342;
    }
LAB_14026b47a:
    pcVar5 = (code *)swi(0x29);
    lVar13 = (*pcVar5)(5);
    puVar14 = auStack_30;
  }
  else {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar16 = param_2;
    if ((param_2 <= uVar12) && (uVar16 = uVar12, 0x1ffffffffffffff < uVar12)) {
LAB_14026b4c6:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar16 = uVar16 * 0x80;
    if (uVar16 != 0) {
      if (0xfff < uVar16) {
        uVar12 = uVar16 | 0x27;
        if (uVar12 <= uVar16) goto LAB_14026b4c6;
        goto LAB_14026b31e;
      }
      puVar15 = (undefined8 *)FUN_14028af20();
    }
LAB_14026b342:
    uVar12 = lVar13 - lVar11;
    FUN_14026b4d0((uVar12 & 0xffffffffffffff80) + (longlong)puVar15,
                  param_2 - ((longlong)uVar12 >> 7));
    puVar1 = (undefined8 *)param_1[1];
    puVar9 = puVar15;
    for (puVar17 = (undefined8 *)*param_1; puVar17 != puVar1; puVar17 = puVar17 + 0x10) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar2 = puVar17[1];
      *puVar9 = *puVar17;
      puVar9[1] = uVar2;
      uVar2 = puVar17[3];
      puVar9[2] = puVar17[2];
      puVar9[3] = uVar2;
      puVar17[2] = 0;
      puVar17[3] = 0xf;
      *(undefined1 *)puVar17 = 0;
      uVar2 = puVar17[5];
      puVar9[4] = puVar17[4];
      puVar9[5] = uVar2;
      uVar2 = puVar17[7];
      puVar9[6] = puVar17[6];
      puVar9[7] = uVar2;
      uVar6 = *(undefined4 *)((longlong)puVar17 + 0x44);
      uVar7 = *(undefined4 *)(puVar17 + 9);
      uVar8 = *(undefined4 *)((longlong)puVar17 + 0x4c);
      *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar17 + 8);
      *(undefined4 *)((longlong)puVar9 + 0x44) = uVar6;
      *(undefined4 *)(puVar9 + 9) = uVar7;
      *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar8;
      uVar2 = puVar17[0xb];
      puVar9[10] = puVar17[10];
      puVar9[0xb] = uVar2;
      *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar17 + 0xc);
      *(undefined4 *)((longlong)puVar9 + 100) = *(undefined4 *)((longlong)puVar17 + 100);
      uVar2 = puVar17[0xf];
      uVar3 = puVar17[0xe];
      uVar4 = puVar17[0xd];
      puVar17[0xf] = 0;
      puVar17[0xe] = 0;
      puVar17[0xd] = 0;
      puVar9[0xd] = uVar4;
      puVar9[0xe] = uVar3;
      puVar9[0xf] = uVar2;
      puVar9 = puVar9 + 0x10;
    }
    lVar13 = *param_1;
    if (lVar13 == 0) goto LAB_14026b489;
    lVar11 = param_1[1];
    for (; lVar13 != lVar11; lVar13 = lVar13 + 0x80) {
      FUN_1401dd3b0(lVar13 + 0x68);
      FUN_140017240(lVar13);
    }
    lVar13 = *param_1;
    if ((0xfff < (param_1[2] - lVar13 & 0xffffffffffffff80U)) &&
       (lVar11 = lVar13 - *(longlong *)(lVar13 + -8), lVar13 = *(longlong *)(lVar13 + -8),
       puVar14 = auStack_38, 0x1f < lVar11 - 8U)) goto LAB_14026b47a;
  }
  *(undefined8 *)(puVar14 + -8) = 0x14026b489;
  thunk_FUN_14028af80(lVar13);
LAB_14026b489:
  *param_1 = (longlong)puVar15;
  param_1[1] = (longlong)(puVar15 + param_2 * 0x10);
  param_1[2] = uVar16 + (longlong)puVar15;
  return;
}

