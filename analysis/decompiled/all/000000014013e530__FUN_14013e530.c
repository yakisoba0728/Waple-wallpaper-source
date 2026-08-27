// Function: FUN_14013e530
// Addr: 14013e530
// Size: 697 bytes


undefined8 * FUN_14013e530(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined8 *unaff_RSI;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)param_1[2]) {
    FUN_140016fc0(puVar1);
    FUN_140016fc0(puVar1 + 4,param_2 + 0x20);
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_2 + 0x40);
    puVar1 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar1 + 9);
    return puVar1;
  }
  lVar10 = (longlong)puVar1 - *param_1;
  lVar10 = lVar10 / 0x12 + (lVar10 >> 0x3f);
  puVar17 = (undefined8 *)((lVar10 >> 2) - (lVar10 >> 0x3f));
  if (puVar17 == (undefined8 *)0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar16 = (param_1[2] - *param_1 >> 3) * -0x71c71c71c71c71c7;
  uVar9 = 0x38e38e38e38e38e - (uVar16 >> 1);
  if (uVar9 <= uVar16 && uVar16 - uVar9 != 0) {
LAB_14013e7e5:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar16 = (uVar16 >> 1) + uVar16;
  uVar9 = (longlong)puVar17 + 1;
  uVar11 = uVar9;
  if (uVar9 <= uVar16) {
    uVar11 = uVar16;
  }
  if (0x38e38e38e38e38e < uVar11) goto LAB_14013e7e5;
  puVar15 = (undefined8 *)0x0;
  uVar16 = uVar11 * 0x48;
  if (uVar16 == 0) {
LAB_14013e655:
    puVar17 = puVar15 + (longlong)puVar17 * 9;
    FUN_140016fc0(puVar17,param_2);
    FUN_140016fc0(puVar17 + 4,param_2 + 0x20);
    *(undefined4 *)(puVar17 + 8) = *(undefined4 *)(param_2 + 0x40);
    puVar2 = (undefined8 *)param_1[1];
    puVar12 = (undefined8 *)*param_1;
    puVar8 = puVar15;
    if (puVar1 == puVar2) {
      for (; puVar12 != puVar2; puVar12 = puVar12 + 9) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        uVar7 = puVar12[1];
        *puVar8 = *puVar12;
        puVar8[1] = uVar7;
        uVar7 = puVar12[3];
        puVar8[2] = puVar12[2];
        puVar8[3] = uVar7;
        puVar12[2] = 0;
        puVar12[3] = 0xf;
        *(undefined1 *)puVar12 = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar5 = *(undefined4 *)(puVar12 + 5);
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar12 + 4);
        *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
        *(undefined4 *)(puVar8 + 5) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar6;
        uVar7 = puVar12[7];
        puVar8[6] = puVar12[6];
        puVar8[7] = uVar7;
        puVar12[6] = 0;
        puVar12[7] = 0xf;
        *(undefined1 *)(puVar12 + 4) = 0;
        *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(puVar12 + 8);
        puVar8 = puVar8 + 9;
      }
    }
    else {
      FUN_140141290(puVar12,puVar1,puVar15);
      FUN_140141290(puVar1,param_1[1],puVar17 + 9);
    }
    lVar10 = *param_1;
    if (lVar10 == 0) goto LAB_14013e7b4;
    lVar13 = param_1[1];
    for (; lVar10 != lVar13; lVar10 = lVar10 + 0x48) {
      FUN_140017240(lVar10 + 0x20);
      FUN_140017240(lVar10);
    }
    lVar10 = *param_1;
    lVar13 = lVar10;
    puVar14 = auStack_68;
    if ((0xfff < (ulonglong)((param_1[2] - lVar10 >> 3) * 8)) &&
       (lVar13 = *(longlong *)(lVar10 + -8), puVar14 = auStack_68, unaff_RSI = puVar15,
       0x1f < (lVar10 - lVar13) - 8U)) goto LAB_14013e7a2;
  }
  else {
    if (uVar16 < 0x1000) {
      puVar15 = (undefined8 *)FUN_14028af20(uVar16);
      goto LAB_14013e655;
    }
    if (uVar16 + 0x27 <= uVar16) goto LAB_14013e7e5;
    lVar10 = FUN_14028af20();
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
      puVar15[-1] = lVar10;
      goto LAB_14013e655;
    }
LAB_14013e7a2:
    lVar13 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar14 = auStack_60;
    puVar15 = unaff_RSI;
  }
  *(undefined8 *)(puVar14 + -8) = 0x14013e7b4;
  thunk_FUN_14028af80(lVar13);
LAB_14013e7b4:
  *param_1 = (longlong)puVar15;
  param_1[1] = (longlong)(puVar15 + uVar9 * 9);
  param_1[2] = (longlong)(puVar15 + uVar11 * 9);
  return puVar17;
}

