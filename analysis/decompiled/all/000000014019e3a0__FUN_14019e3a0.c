// Function: FUN_14019e3a0
// Addr: 14019e3a0
// Size: 570 bytes


undefined8 * FUN_14019e3a0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *unaff_RSI;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 != (undefined8 *)param_1[2]) {
    uVar7 = param_2[1];
    *puVar12 = *param_2;
    puVar12[1] = uVar7;
    uVar7 = param_2[3];
    puVar12[2] = param_2[2];
    puVar12[3] = uVar7;
    uVar7 = param_2[5];
    puVar12[4] = param_2[4];
    puVar12[5] = uVar7;
    uVar7 = param_2[7];
    puVar12[6] = param_2[6];
    puVar12[7] = uVar7;
    uVar7 = param_2[9];
    puVar12[8] = param_2[8];
    puVar12[9] = uVar7;
    uVar7 = param_2[0xb];
    puVar12[10] = param_2[10];
    puVar12[0xb] = uVar7;
    puVar12 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar12 + 0xc);
    return puVar12;
  }
  lVar9 = (longlong)puVar12 - *param_1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  puVar15 = (undefined8 *)((lVar9 >> 4) - (lVar9 >> 0x3f));
  if (puVar15 == (undefined8 *)0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140133d70();
  }
  uVar1 = (longlong)puVar15 + 1;
  uVar14 = (param_1[2] - *param_1 >> 5) * -0x5555555555555555;
  uVar8 = 0x2aaaaaaaaaaaaaa - (uVar14 >> 1);
  if (uVar14 < uVar8 || uVar14 - uVar8 == 0) {
    uVar14 = (uVar14 >> 1) + uVar14;
    uVar8 = uVar1;
    if (uVar1 <= uVar14) {
      uVar8 = uVar14;
    }
    if (0x2aaaaaaaaaaaaaa < uVar8) {
LAB_14019e5d6:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar8 = uVar8 * 0x60;
    if (uVar8 == 0) {
      unaff_RSI = (undefined8 *)0x0;
    }
    else {
      if (0xfff < uVar8) {
        uVar14 = uVar8 + 0x27;
        if (uVar14 <= uVar8) goto LAB_14019e5d6;
        goto LAB_14019e4b3;
      }
      unaff_RSI = (undefined8 *)FUN_14028af20(uVar8);
    }
LAB_14019e4da:
    uVar7 = param_2[1];
    puVar15 = unaff_RSI + (longlong)puVar15 * 0xc;
    *puVar15 = *param_2;
    puVar15[1] = uVar7;
    uVar7 = param_2[3];
    puVar15[2] = param_2[2];
    puVar15[3] = uVar7;
    uVar7 = param_2[5];
    puVar15[4] = param_2[4];
    puVar15[5] = uVar7;
    uVar7 = param_2[7];
    puVar15[6] = param_2[6];
    puVar15[7] = uVar7;
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar5 = *(undefined4 *)(param_2 + 9);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)(puVar15 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)puVar15 + 0x44) = uVar4;
    *(undefined4 *)(puVar15 + 9) = uVar5;
    *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar6;
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
    uVar5 = *(undefined4 *)(param_2 + 0xb);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x5c);
    *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)((longlong)puVar15 + 0x54) = uVar4;
    *(undefined4 *)(puVar15 + 0xb) = uVar5;
    *(undefined4 *)((longlong)puVar15 + 0x5c) = uVar6;
    puVar2 = (undefined8 *)*param_1;
    if (puVar12 == (undefined8 *)param_1[1]) {
      lVar9 = param_1[1] - (longlong)puVar2;
      puVar10 = unaff_RSI;
      puVar12 = puVar2;
    }
    else {
      FUN_1404210f0(unaff_RSI,puVar2,(longlong)puVar12 - (longlong)puVar2);
      puVar10 = puVar15 + 0xc;
      lVar9 = param_1[1] - (longlong)puVar12;
    }
    FUN_1404210f0(puVar10,puVar12,lVar9);
    lVar9 = *param_1;
    if (lVar9 == 0) goto LAB_14019e5a2;
    lVar11 = lVar9;
    puVar13 = auStack_68;
    if ((0xfff < (ulonglong)((param_1[2] - lVar9 >> 5) << 5)) &&
       (lVar11 = *(longlong *)(lVar9 + -8), puVar13 = auStack_68, 0x1f < (lVar9 - lVar11) - 8U))
    goto LAB_14019e590;
  }
  else {
    uVar8 = 0xffffffffffffffc0;
    uVar14 = 0xffffffffffffffe7;
LAB_14019e4b3:
    lVar9 = FUN_14028af20(uVar14);
    if (lVar9 != 0) {
      unaff_RSI = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar9;
      goto LAB_14019e4da;
    }
LAB_14019e590:
    lVar11 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar13 = auStack_60;
  }
  *(undefined8 *)(puVar13 + -8) = 0x14019e5a2;
  thunk_FUN_14028af80(lVar11);
LAB_14019e5a2:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar1 * 0xc);
  param_1[2] = uVar8 + (longlong)unaff_RSI;
  return puVar15;
}

