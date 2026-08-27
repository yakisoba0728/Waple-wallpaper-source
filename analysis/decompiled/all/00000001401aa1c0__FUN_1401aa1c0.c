// Function: FUN_1401aa1c0
// Addr: 1401aa1c0
// Size: 609 bytes


undefined4 * FUN_1401aa1c0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined4 *unaff_RSI;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)param_1[2]) {
    *puVar1 = *param_2;
    FUN_140016fc0(puVar1 + 2,param_2 + 2);
    puVar1 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar1 + 10);
    return puVar1;
  }
  puVar17 = (undefined4 *)(((longlong)puVar1 - *param_1) / 0x28);
  if (puVar17 == (undefined4 *)0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar16 = (param_1[2] - *param_1 >> 3) * -0x3333333333333333;
  uVar9 = 0x666666666666666 - (uVar16 >> 1);
  if (uVar9 <= uVar16 && uVar16 - uVar9 != 0) {
LAB_1401aa41d:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar16 = (uVar16 >> 1) + uVar16;
  uVar9 = (longlong)puVar17 + 1;
  uVar10 = uVar9;
  if (uVar9 <= uVar16) {
    uVar10 = uVar16;
  }
  if (0x666666666666666 < uVar10) goto LAB_1401aa41d;
  puVar15 = (undefined4 *)0x0;
  uVar16 = uVar10 * 0x28;
  if (uVar16 == 0) {
LAB_1401aa2db:
    puVar17 = puVar15 + (longlong)puVar17 * 10;
    *puVar17 = *param_2;
    FUN_140016fc0(puVar17 + 2,param_2 + 2);
    puVar2 = (undefined4 *)param_1[1];
    puVar11 = (undefined4 *)*param_1;
    puVar8 = puVar15;
    if (puVar1 == puVar2) {
      for (; puVar11 != puVar2; puVar11 = puVar11 + 10) {
        *puVar8 = *puVar11;
        *(undefined8 *)(puVar8 + 2) = 0;
        *(undefined8 *)(puVar8 + 4) = 0;
        *(undefined8 *)(puVar8 + 6) = 0;
        *(undefined8 *)(puVar8 + 8) = 0;
        uVar4 = puVar11[3];
        uVar5 = puVar11[4];
        uVar6 = puVar11[5];
        puVar8[2] = puVar11[2];
        puVar8[3] = uVar4;
        puVar8[4] = uVar5;
        puVar8[5] = uVar6;
        uVar7 = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar11 + 6);
        *(undefined8 *)(puVar8 + 8) = uVar7;
        *(undefined8 *)(puVar11 + 6) = 0;
        *(undefined8 *)(puVar11 + 8) = 0xf;
        *(undefined1 *)(puVar11 + 2) = 0;
        puVar8 = puVar8 + 10;
      }
    }
    else {
      FUN_1401aacd0(puVar11,puVar1,puVar15);
      FUN_1401aacd0(puVar1,param_1[1],puVar17 + 10);
    }
    lVar13 = *param_1;
    if (lVar13 == 0) goto LAB_1401aa3ec;
    lVar12 = param_1[1];
    for (; lVar13 != lVar12; lVar13 = lVar13 + 0x28) {
      FUN_140017240(lVar13 + 8);
    }
    lVar13 = *param_1;
    lVar12 = lVar13;
    puVar14 = auStack_68;
    if ((0xfff < (ulonglong)((param_1[2] - lVar13 >> 3) * 8)) &&
       (lVar12 = *(longlong *)(lVar13 + -8), puVar14 = auStack_68, unaff_RSI = puVar15,
       0x1f < (lVar13 - lVar12) - 8U)) goto LAB_1401aa3da;
  }
  else {
    if (uVar16 < 0x1000) {
      puVar15 = (undefined4 *)FUN_14028af20(uVar16);
      goto LAB_1401aa2db;
    }
    if (uVar16 + 0x27 <= uVar16) goto LAB_1401aa41d;
    lVar13 = FUN_14028af20();
    if (lVar13 != 0) {
      puVar15 = (undefined4 *)(lVar13 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar15 + -2) = lVar13;
      goto LAB_1401aa2db;
    }
LAB_1401aa3da:
    lVar12 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar14 = auStack_60;
    puVar15 = unaff_RSI;
  }
  *(undefined8 *)(puVar14 + -8) = 0x1401aa3ec;
  thunk_FUN_14028af80(lVar12);
LAB_1401aa3ec:
  *param_1 = (longlong)puVar15;
  param_1[1] = (longlong)(puVar15 + uVar9 * 10);
  param_1[2] = (longlong)(puVar15 + uVar10 * 10);
  return puVar17;
}

