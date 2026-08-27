// Function: FUN_14004d590
// Addr: 14004d590
// Size: 687 bytes


undefined8 * FUN_14004d590(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined8 *unaff_RSI;
  undefined8 *puVar15;
  undefined8 *unaff_R13;
  ulonglong uVar16;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar13 = *param_1;
  if (param_1[1] - lVar13 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar11 = param_1[2] - lVar13 >> 5;
  if (0x7ffffffffffffff - (uVar11 >> 1) < uVar11) {
LAB_14004d83b:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar11 = (uVar11 >> 1) + uVar11;
  uVar1 = (param_1[1] - lVar13 >> 5) + 1;
  uVar16 = uVar1;
  if (uVar1 <= uVar11) {
    uVar16 = uVar11;
  }
  if (0x7ffffffffffffff < uVar16) goto LAB_14004d83b;
  uVar11 = uVar16 * 0x20;
  puVar15 = (undefined8 *)0x0;
  if (uVar11 == 0) {
LAB_14004d665:
    unaff_R13 = (undefined8 *)
                (((longlong)param_2 - lVar13 & 0xffffffffffffffe0U) + (longlong)puVar15);
    *unaff_R13 = 0;
    unaff_R13[1] = 0;
    unaff_R13[2] = 0;
    unaff_R13[3] = 0;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)unaff_R13 = *param_3;
    *(undefined4 *)((longlong)unaff_R13 + 4) = uVar4;
    *(undefined4 *)(unaff_R13 + 1) = uVar5;
    *(undefined4 *)((longlong)unaff_R13 + 0xc) = uVar6;
    uVar7 = *(undefined8 *)(param_3 + 6);
    unaff_R13[2] = *(undefined8 *)(param_3 + 4);
    unaff_R13[3] = uVar7;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 7;
    *(undefined2 *)param_3 = 0;
    puVar2 = (undefined4 *)param_1[1];
    puVar9 = (undefined4 *)*param_1;
    puVar8 = puVar15;
    if (param_2 == puVar2) {
      for (; puVar9 != puVar2; puVar9 = puVar9 + 8) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        *(undefined4 *)puVar8 = *puVar9;
        *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
        *(undefined4 *)(puVar8 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
        uVar7 = *(undefined8 *)(puVar9 + 6);
        puVar8[2] = *(undefined8 *)(puVar9 + 4);
        puVar8[3] = uVar7;
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 6) = 7;
        *(undefined2 *)puVar9 = 0;
        puVar8 = puVar8 + 4;
      }
    }
    else {
      for (; puVar9 != param_2; puVar9 = puVar9 + 8) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        *(undefined4 *)puVar8 = *puVar9;
        *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
        *(undefined4 *)(puVar8 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
        uVar7 = *(undefined8 *)(puVar9 + 6);
        puVar8[2] = *(undefined8 *)(puVar9 + 4);
        puVar8[3] = uVar7;
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 6) = 7;
        *(undefined2 *)puVar9 = 0;
        puVar8 = puVar8 + 4;
      }
      puVar2 = (undefined4 *)param_1[1];
      puVar8 = unaff_R13;
      for (; param_2 != puVar2; param_2 = param_2 + 8) {
        puVar12 = puVar8 + 4;
        *puVar12 = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        uVar4 = param_2[1];
        uVar5 = param_2[2];
        uVar6 = param_2[3];
        *(undefined4 *)puVar12 = *param_2;
        *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
        *(undefined4 *)(puVar8 + 5) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar6;
        uVar7 = *(undefined8 *)(param_2 + 6);
        puVar8[6] = *(undefined8 *)(param_2 + 4);
        puVar8[7] = uVar7;
        *(undefined8 *)(param_2 + 4) = 0;
        *(undefined8 *)(param_2 + 6) = 7;
        *(undefined2 *)param_2 = 0;
        puVar8 = puVar12;
      }
    }
    lVar13 = *param_1;
    if (lVar13 == 0) goto LAB_14004d7fe;
    lVar10 = param_1[1];
    for (; lVar13 != lVar10; lVar13 = lVar13 + 0x20) {
      FUN_140016770(lVar13);
    }
    lVar13 = *param_1;
    lVar10 = lVar13;
    puVar14 = auStack_48;
    if ((0xfff < (param_1[2] - lVar13 & 0xffffffffffffffe0U)) &&
       (lVar10 = *(longlong *)(lVar13 + -8), puVar14 = auStack_48, unaff_RSI = puVar15,
       0x1f < (lVar13 - lVar10) - 8U)) goto LAB_14004d7ef;
  }
  else {
    if (uVar11 < 0x1000) {
      puVar15 = (undefined8 *)FUN_14028af20(uVar11);
      goto LAB_14004d665;
    }
    if (uVar11 + 0x27 <= uVar11) goto LAB_14004d83b;
    lVar10 = FUN_14028af20();
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
      puVar15[-1] = lVar10;
      goto LAB_14004d665;
    }
LAB_14004d7ef:
    pcVar3 = (code *)swi(0x29);
    lVar10 = (*pcVar3)(5);
    puVar14 = auStack_40;
    puVar15 = unaff_RSI;
  }
  *(undefined8 *)(puVar14 + -8) = 0x14004d7fe;
  thunk_FUN_14028af80(lVar10);
LAB_14004d7fe:
  *param_1 = (longlong)puVar15;
  param_1[1] = (longlong)(puVar15 + uVar1 * 4);
  param_1[2] = (longlong)(puVar15 + uVar16 * 4);
  return unaff_R13;
}

