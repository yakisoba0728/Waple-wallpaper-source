// Function: FUN_1401a21b0
// Addr: 1401a21b0
// Size: 630 bytes


undefined8 * FUN_1401a21b0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined8 *unaff_RSI;
  undefined8 *puVar13;
  undefined8 *unaff_R13;
  ulonglong uVar14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar11 = *param_1;
  if (param_1[1] - lVar11 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar10 = param_1[2] - lVar11 >> 5;
  if (0x7ffffffffffffff - (uVar10 >> 1) < uVar10) {
LAB_1401a2422:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar10 = (uVar10 >> 1) + uVar10;
  uVar1 = (param_1[1] - lVar11 >> 5) + 1;
  uVar14 = uVar1;
  if (uVar1 <= uVar10) {
    uVar14 = uVar10;
  }
  if (0x7ffffffffffffff < uVar14) goto LAB_1401a2422;
  uVar10 = uVar14 * 0x20;
  if (uVar10 == 0) {
    unaff_RSI = (undefined8 *)0x0;
LAB_1401a227e:
    unaff_R13 = (undefined8 *)
                (((longlong)param_2 - lVar11 & 0xffffffffffffffe0U) + (longlong)unaff_RSI);
    FUN_1401a2e50();
    puVar3 = (undefined8 *)param_1[1];
    puVar13 = (undefined8 *)*param_1;
    puVar8 = unaff_RSI;
    if (param_2 == puVar3) {
      for (; puVar13 != puVar3; puVar13 = puVar13 + 4) {
        uVar4 = *puVar13;
        uVar5 = puVar13[2];
        uVar6 = puVar13[1];
        puVar13[2] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        *puVar8 = uVar4;
        uVar2 = *(undefined4 *)(puVar13 + 3);
        puVar8[1] = uVar6;
        puVar8[2] = uVar5;
        *(undefined4 *)(puVar8 + 3) = uVar2;
        puVar8 = puVar8 + 4;
      }
    }
    else {
      for (; puVar13 != param_2; puVar13 = puVar13 + 4) {
        uVar4 = *puVar13;
        uVar5 = puVar13[2];
        uVar6 = puVar13[1];
        puVar13[2] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        *puVar8 = uVar4;
        uVar2 = *(undefined4 *)(puVar13 + 3);
        puVar8[1] = uVar6;
        puVar8[2] = uVar5;
        *(undefined4 *)(puVar8 + 3) = uVar2;
        puVar8 = puVar8 + 4;
      }
      puVar3 = (undefined8 *)param_1[1];
      puVar13 = unaff_R13;
      for (; param_2 != puVar3; param_2 = param_2 + 4) {
        uVar4 = *param_2;
        uVar5 = param_2[2];
        uVar6 = param_2[1];
        param_2[2] = 0;
        param_2[1] = 0;
        *param_2 = 0;
        puVar13[4] = uVar4;
        uVar2 = *(undefined4 *)(param_2 + 3);
        puVar13[5] = uVar6;
        puVar13[6] = uVar5;
        *(undefined4 *)(puVar13 + 7) = uVar2;
        puVar13 = puVar13 + 4;
      }
    }
    lVar11 = *param_1;
    if (lVar11 == 0) goto LAB_1401a23e5;
    lVar9 = param_1[1];
    for (; lVar11 != lVar9; lVar11 = lVar11 + 0x20) {
      FUN_14019ea80(lVar11);
    }
    lVar11 = *param_1;
    lVar9 = lVar11;
    puVar12 = auStack_48;
    if ((0xfff < (param_1[2] - lVar11 & 0xffffffffffffffe0U)) &&
       (lVar9 = *(longlong *)(lVar11 + -8), puVar12 = auStack_48, 0x1f < (lVar11 - lVar9) - 8U))
    goto LAB_1401a23d6;
  }
  else {
    if (uVar10 < 0x1000) {
      unaff_RSI = (undefined8 *)FUN_14028af20(uVar10);
      goto LAB_1401a227e;
    }
    if (uVar10 + 0x27 <= uVar10) goto LAB_1401a2422;
    lVar9 = FUN_14028af20();
    if (lVar9 != 0) {
      unaff_RSI = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar9;
      goto LAB_1401a227e;
    }
LAB_1401a23d6:
    pcVar7 = (code *)swi(0x29);
    lVar9 = (*pcVar7)(5);
    puVar12 = auStack_40;
  }
  *(undefined8 *)(puVar12 + -8) = 0x1401a23e5;
  thunk_FUN_14028af80(lVar9);
LAB_1401a23e5:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar1 * 4);
  param_1[2] = (longlong)(unaff_RSI + uVar14 * 4);
  return unaff_R13;
}

