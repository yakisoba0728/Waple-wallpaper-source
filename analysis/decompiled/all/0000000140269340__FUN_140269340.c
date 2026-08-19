// Function: FUN_140269340
// Addr: 140269340
// Size: 33 bytes


void FUN_140269340(longlong *param_1,ulonglong param_2)

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
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *unaff_RBP;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_38 [8];
  undefined8 auStack_30 [3];
  
  lVar11 = param_1[1];
  lVar12 = *param_1;
  uVar13 = lVar11 - lVar12 >> 7;
  if (param_2 < uVar13) {
    lVar12 = param_2 * 0x80 + lVar12;
    if (lVar12 == lVar11) {
      param_1[1] = lVar12;
      return;
    }
    auStack_30[0] = 0x140269389;
    FUN_1401dd480(lVar12 + 0x68);
                    /* WARNING: Subroutine does not return */
    auStack_30[0] = 0x140269391;
    FUN_140017310(lVar12);
  }
  if (param_2 <= uVar13) {
    return;
  }
  if (param_2 <= (ulonglong)(param_1[2] - lVar12 >> 7)) {
    auStack_30[0] = 0x1402693e2;
    lVar12 = func_0x00014026b5a0(lVar11,param_2 - uVar13);
    param_1[1] = lVar12;
    return;
  }
  puVar14 = (undefined8 *)auStack_38;
  if (0x1ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  lVar12 = param_1[1];
  puVar15 = (undefined8 *)0x0;
  lVar11 = *param_1;
  uVar13 = param_1[2] - lVar11 >> 7;
  if (0x1ffffffffffffff - (uVar13 >> 1) < uVar13) {
    uVar16 = 0xffffffffffffff80;
    uVar13 = 0xffffffffffffffa7;
code_r0x00014026b3ee:
    lVar10 = func_0x00014028aff0(uVar13);
    puVar15 = unaff_RBP;
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
      puVar15[-1] = lVar10;
      goto code_r0x00014026b412;
    }
code_r0x00014026b54a:
    pcVar5 = (code *)swi(0x29);
    lVar12 = (*pcVar5)(5);
    puVar14 = auStack_30;
  }
  else {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar16 = param_2;
    if ((param_2 <= uVar13) && (uVar16 = uVar13, 0x1ffffffffffffff < uVar13)) {
code_r0x00014026b596:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    uVar16 = uVar16 * 0x80;
    if (uVar16 != 0) {
      if (0xfff < uVar16) {
        uVar13 = uVar16 | 0x27;
        if (uVar13 <= uVar16) goto code_r0x00014026b596;
        goto code_r0x00014026b3ee;
      }
      puVar15 = (undefined8 *)func_0x00014028aff0();
    }
code_r0x00014026b412:
    uVar13 = lVar12 - lVar11;
    func_0x00014026b5a0((uVar13 & 0xffffffffffffff80) + (longlong)puVar15,
                        param_2 - ((longlong)uVar13 >> 7));
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
    lVar12 = *param_1;
    if (lVar12 == 0) goto code_r0x00014026b559;
    if (lVar12 != param_1[1]) {
      FUN_1401dd480(lVar12 + 0x68);
                    /* WARNING: Subroutine does not return */
      FUN_140017310(lVar12);
    }
    lVar12 = *param_1;
    if ((0xfff < (param_1[2] - lVar12 & 0xffffffffffffff80U)) &&
       (lVar11 = lVar12 - *(longlong *)(lVar12 + -8), lVar12 = *(longlong *)(lVar12 + -8),
       puVar14 = (undefined8 *)auStack_38, 0x1f < lVar11 - 8U)) goto code_r0x00014026b54a;
  }
  *(undefined8 *)((longlong)puVar14 + -8) = 0x14026b559;
  func_0x00014028b040(lVar12);
code_r0x00014026b559:
  *param_1 = (longlong)puVar15;
  param_1[1] = (longlong)(puVar15 + param_2 * 0x10);
  param_1[2] = uVar16 + (longlong)puVar15;
  return;
}

