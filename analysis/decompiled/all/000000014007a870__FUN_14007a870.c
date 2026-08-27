// Function: FUN_14007a870
// Addr: 14007a870
// Size: 792 bytes


ulonglong * FUN_14007a870(ulonglong *param_1,ulonglong *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  puVar8 = auStack_48;
  if (param_1 == param_2) {
    return param_1;
  }
  puVar7 = (ulonglong *)*param_2;
  puVar10 = (ulonglong *)*param_1;
  uVar12 = param_2[1] - (longlong)puVar7;
  lVar4 = (longlong)(param_1[2] - (longlong)puVar10) >> 3;
  uVar13 = ((longlong)uVar12 >> 3) * -0x71c71c71c71c71c7;
  uVar5 = lVar4 * -0x71c71c71c71c71c7;
  if (uVar13 < uVar5 || uVar13 + lVar4 * 0x71c71c71c71c71c7 == 0) {
    puVar11 = (ulonglong *)param_1[1];
    lVar4 = (longlong)puVar11 - (longlong)puVar10 >> 3;
    if (uVar13 < (ulonglong)(lVar4 * -0x71c71c71c71c71c7) ||
        uVar13 + lVar4 * 0x71c71c71c71c71c7 == 0) {
      puVar11 = puVar10 + ((longlong)uVar12 >> 3);
      while (uVar12 != 0) {
        if (puVar10 == puVar7) {
          *(int *)(puVar10 + 4) = (int)puVar7[4];
        }
        else {
          puVar6 = puVar7;
          if (0xf < puVar7[3]) {
            puVar6 = (ulonglong *)*puVar7;
          }
          FUN_14000f880(puVar10,puVar6,puVar7[2]);
          puVar6 = puVar7 + 5;
          *(int *)(puVar10 + 4) = (int)puVar7[4];
          if (0xf < puVar7[8]) {
            puVar6 = (ulonglong *)*puVar6;
          }
          FUN_14000f880(puVar10 + 5,puVar6,puVar7[7]);
        }
        puVar10 = puVar10 + 9;
        puVar7 = puVar7 + 9;
        uVar13 = uVar13 - 1;
        uVar12 = uVar13;
      }
      puVar10 = (ulonglong *)param_1[1];
      for (puVar7 = puVar11; puVar7 != puVar10; puVar7 = puVar7 + 9) {
        FUN_140017240(puVar7 + 5);
        FUN_140017240(puVar7);
      }
    }
    else {
      if (puVar10 != puVar11) {
        do {
          FUN_140068f50(puVar10,puVar7);
          puVar11 = (ulonglong *)param_1[1];
          puVar10 = puVar10 + 9;
          puVar7 = puVar7 + 9;
        } while (puVar10 != puVar11);
      }
      for (lVar4 = uVar13 + lVar4 * 0x71c71c71c71c71c7; lVar4 != 0; lVar4 = lVar4 + -1) {
        FUN_140016fc0(puVar11,puVar7);
        *(int *)(puVar11 + 4) = (int)puVar7[4];
        FUN_140016fc0(puVar11 + 5,puVar7 + 5);
        puVar11 = puVar11 + 9;
        puVar7 = puVar7 + 9;
      }
    }
    goto LAB_14007ab4d;
  }
  if (0x38e38e38e38e38e < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar2 = 0x38e38e38e38e38e - (uVar5 >> 1);
  if (uVar5 < uVar2 || uVar5 - uVar2 == 0) {
    uVar5 = (uVar5 >> 1) + uVar5;
    if (uVar5 < uVar13) {
      uVar5 = uVar13;
    }
  }
  else {
    uVar5 = 0x38e38e38e38e38e;
  }
  if (puVar10 == (ulonglong *)0x0) {
LAB_14007a99d:
    puVar11 = (ulonglong *)0x0;
    if (0x38e38e38e38e38e < uVar5) {
LAB_14007ab7e:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    puVar10 = (ulonglong *)(uVar5 * 0x48);
    if (puVar10 != (ulonglong *)0x0) {
      if ((ulonglong *)0xfff < puVar10) {
        if ((ulonglong *)((longlong)puVar10 + 0x27U) <= puVar10) goto LAB_14007ab7e;
        uVar5 = FUN_14028af20();
        if (uVar5 == 0) goto LAB_14007a9dc;
        goto LAB_14007a9e3;
      }
      puVar11 = (ulonglong *)FUN_14028af20(puVar10);
      puVar9 = auStack_48;
    }
  }
  else {
    puVar11 = (ulonglong *)param_1[1];
    for (; puVar10 != puVar11; puVar10 = puVar10 + 9) {
      FUN_140017240(puVar10 + 5);
      FUN_140017240(puVar10);
    }
    uVar3 = *param_1;
    uVar2 = ((longlong)(param_1[2] - uVar3) >> 3) * 8;
    if (uVar2 < 0x1000) {
LAB_14007a988:
      thunk_FUN_14028af80(uVar3,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_14007a99d;
    }
    if ((uVar3 - *(ulonglong *)(uVar3 - 8)) - 8 < 0x20) {
      uVar2 = uVar2 + 0x27;
      uVar3 = *(ulonglong *)(uVar3 - 8);
      goto LAB_14007a988;
    }
LAB_14007a9dc:
    pcVar1 = (code *)swi(0x29);
    uVar5 = (*pcVar1)(5);
    puVar8 = auStack_40;
LAB_14007a9e3:
    puVar11 = (ulonglong *)(uVar5 + 0x27 & 0xffffffffffffffe0);
    puVar11[-1] = uVar5;
    puVar9 = puVar8;
  }
  *param_1 = (ulonglong)puVar11;
  param_1[1] = (ulonglong)puVar11;
  param_1[2] = (longlong)puVar10 + (longlong)puVar11;
  while (uVar12 != 0) {
    *(undefined8 *)(puVar9 + -8) = 0x14007aa1f;
    FUN_140016fc0(puVar11,puVar7);
    *(int *)(puVar11 + 4) = (int)puVar7[4];
    *(undefined8 *)(puVar9 + -8) = 0x14007aa32;
    FUN_140016fc0(puVar11 + 5,puVar7 + 5);
    puVar11 = puVar11 + 9;
    puVar7 = puVar7 + 9;
    uVar13 = uVar13 - 1;
    uVar12 = uVar13;
  }
LAB_14007ab4d:
  param_1[1] = (ulonglong)puVar11;
  return param_1;
}

