// Function: FUN_14026b550
// Addr: 14026b550
// Size: 774 bytes


void FUN_14026b550(longlong *param_1,ulonglong param_2)

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
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined8 *unaff_RSI;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  if (0x111111111111111 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  lVar14 = *param_1;
  uVar12 = (param_1[2] - lVar14 >> 4) * -0x1111111111111111;
  uVar10 = 0x111111111111111 - (uVar12 >> 1);
  if ((uVar10 <= uVar12 && uVar12 - uVar10 != 0) ||
     ((uVar12 = (uVar12 >> 1) + uVar12, uVar10 = param_2, param_2 <= uVar12 &&
      (uVar10 = uVar12, 0x111111111111111 < uVar12)))) {
LAB_14026b852:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  lVar13 = param_1[1];
  puVar16 = (undefined8 *)0x0;
  uVar12 = uVar10 * 0xf0;
  if (uVar12 == 0) {
LAB_14026b62c:
    lVar14 = lVar13 - lVar14 >> 4;
    FUN_14026b860(puVar16 + lVar14 * 2,param_2 + lVar14 * 0x1111111111111111);
    puVar1 = (undefined8 *)param_1[1];
    puVar9 = puVar16;
    for (puVar17 = (undefined8 *)*param_1; puVar17 != puVar1; puVar17 = puVar17 + 0x1e) {
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
      uVar2 = puVar17[9];
      puVar9[8] = puVar17[8];
      puVar9[9] = uVar2;
      uVar2 = puVar17[0xb];
      puVar9[10] = puVar17[10];
      puVar9[0xb] = uVar2;
      *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar17 + 0xc);
      *(undefined4 *)((longlong)puVar9 + 100) = *(undefined4 *)((longlong)puVar17 + 100);
      uVar2 = puVar17[0xe];
      puVar9[0xd] = puVar17[0xd];
      puVar9[0xe] = uVar2;
      uVar2 = puVar17[0x10];
      puVar9[0xf] = puVar17[0xf];
      puVar9[0x10] = uVar2;
      uVar2 = puVar17[0x12];
      puVar9[0x11] = puVar17[0x11];
      puVar9[0x12] = uVar2;
      uVar2 = puVar17[0x14];
      puVar9[0x13] = puVar17[0x13];
      puVar9[0x14] = uVar2;
      uVar2 = puVar17[0x16];
      puVar9[0x15] = puVar17[0x15];
      puVar9[0x16] = uVar2;
      uVar2 = puVar17[0x18];
      puVar9[0x17] = puVar17[0x17];
      puVar9[0x18] = uVar2;
      uVar6 = *(undefined4 *)(puVar17 + 0x19);
      uVar7 = *(undefined4 *)((longlong)puVar17 + 0xcc);
      uVar8 = *(undefined4 *)(puVar17 + 0x1a);
      *(undefined4 *)((longlong)puVar9 + 0xc4) = *(undefined4 *)((longlong)puVar17 + 0xc4);
      *(undefined4 *)(puVar9 + 0x19) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xcc) = uVar7;
      *(undefined4 *)(puVar9 + 0x1a) = uVar8;
      *(undefined4 *)((longlong)puVar9 + 0xd4) = *(undefined4 *)((longlong)puVar17 + 0xd4);
      uVar2 = puVar17[0x1d];
      uVar3 = puVar17[0x1c];
      uVar4 = puVar17[0x1b];
      puVar17[0x1d] = 0;
      puVar17[0x1c] = 0;
      puVar17[0x1b] = 0;
      puVar9[0x1b] = uVar4;
      puVar9[0x1c] = uVar3;
      puVar9[0x1d] = uVar2;
      puVar9 = puVar9 + 0x1e;
    }
    lVar14 = *param_1;
    if (lVar14 == 0) goto LAB_14026b80d;
    lVar13 = param_1[1];
    for (; lVar14 != lVar13; lVar14 = lVar14 + 0xf0) {
      FUN_1401dd3b0(lVar14 + 0xd8);
      FUN_140017240(lVar14);
    }
    lVar14 = *param_1;
    lVar13 = lVar14;
    puVar15 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar14 >> 4) * 0x10)) &&
       (lVar13 = *(longlong *)(lVar14 + -8), puVar15 = auStack_48, unaff_RSI = puVar16,
       0x1f < (lVar14 - lVar13) - 8U)) goto LAB_14026b7fb;
  }
  else {
    if (uVar12 < 0x1000) {
      puVar16 = (undefined8 *)FUN_14028af20(uVar12);
      goto LAB_14026b62c;
    }
    if (uVar12 + 0x27 <= uVar12) goto LAB_14026b852;
    lVar11 = FUN_14028af20();
    if (lVar11 != 0) {
      puVar16 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      puVar16[-1] = lVar11;
      goto LAB_14026b62c;
    }
LAB_14026b7fb:
    lVar13 = 5;
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar15 = auStack_40;
    puVar16 = unaff_RSI;
  }
  *(undefined8 *)(puVar15 + -8) = 0x14026b80d;
  thunk_FUN_14028af80(lVar13);
LAB_14026b80d:
  *param_1 = (longlong)puVar16;
  param_1[1] = (longlong)(puVar16 + param_2 * 0x1e);
  param_1[2] = (longlong)(puVar16 + uVar10 * 0x1e);
  return;
}

