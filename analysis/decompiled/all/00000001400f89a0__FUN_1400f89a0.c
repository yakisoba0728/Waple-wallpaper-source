// Function: FUN_1400f89a0
// Addr: 1400f89a0
// Size: 783 bytes


longlong * FUN_1400f89a0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  if (param_1 == param_2) {
    return param_1;
  }
  puVar7 = (undefined4 *)*param_2;
  puVar12 = (undefined4 *)*param_1;
  uVar13 = param_2[1] - (longlong)puVar7;
  lVar4 = param_1[2] - (longlong)puVar12 >> 3;
  uVar10 = ((longlong)uVar13 >> 3) * 0x6db6db6db6db6db7;
  uVar5 = lVar4 * 0x6db6db6db6db6db7;
  if (uVar10 < uVar5 || uVar10 + lVar4 * -0x6db6db6db6db6db7 == 0) {
    puVar11 = (undefined4 *)param_1[1];
    lVar4 = (longlong)puVar11 - (longlong)puVar12 >> 3;
    if (uVar10 < (ulonglong)(lVar4 * 0x6db6db6db6db6db7) ||
        uVar10 + lVar4 * -0x6db6db6db6db6db7 == 0) {
      puVar11 = puVar12 + ((longlong)uVar13 >> 3) * 2;
      while (uVar13 != 0) {
        *puVar12 = *puVar7;
        if (puVar12 != puVar7) {
          plVar6 = (longlong *)(puVar7 + 2);
          if (0xf < *(ulonglong *)(puVar7 + 8)) {
            plVar6 = (longlong *)*plVar6;
          }
          FUN_14000f880(puVar12 + 2,plVar6,*(undefined8 *)(puVar7 + 6));
        }
        puVar12[10] = puVar7[10];
        *(undefined1 *)(puVar12 + 0xb) = *(undefined1 *)(puVar7 + 0xb);
        puVar1 = puVar7 + 0xc;
        puVar7 = puVar7 + 0xe;
        puVar12[0xc] = *puVar1;
        puVar12 = puVar12 + 0xe;
        uVar10 = uVar10 - 1;
        uVar13 = uVar10;
      }
      puVar7 = (undefined4 *)param_1[1];
      for (puVar12 = puVar11; puVar12 != puVar7; puVar12 = puVar12 + 0xe) {
        FUN_140017240(puVar12 + 2);
      }
    }
    else {
      if (puVar12 != puVar11) {
        do {
          *puVar12 = *puVar7;
          if (puVar12 != puVar7) {
            plVar6 = (longlong *)(puVar7 + 2);
            if (0xf < *(ulonglong *)(puVar7 + 8)) {
              plVar6 = (longlong *)*plVar6;
            }
            FUN_14000f880(puVar12 + 2,plVar6,*(undefined8 *)(puVar7 + 6));
          }
          puVar12[10] = puVar7[10];
          *(undefined1 *)(puVar12 + 0xb) = *(undefined1 *)(puVar7 + 0xb);
          puVar11 = puVar7 + 0xc;
          puVar7 = puVar7 + 0xe;
          puVar12[0xc] = *puVar11;
          puVar12 = puVar12 + 0xe;
          puVar11 = (undefined4 *)param_1[1];
        } while (puVar12 != puVar11);
      }
      for (lVar4 = uVar10 + lVar4 * -0x6db6db6db6db6db7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar11 = *puVar7;
        FUN_140016fc0(puVar11 + 2,puVar7 + 2);
        puVar11[10] = puVar7[10];
        *(undefined1 *)(puVar11 + 0xb) = *(undefined1 *)(puVar7 + 0xb);
        puVar11[0xc] = puVar7[0xc];
        puVar11 = puVar11 + 0xe;
        puVar7 = puVar7 + 0xe;
      }
    }
    goto LAB_1400f8c74;
  }
  if (0x492492492492492 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = 0x492492492492492 - (uVar5 >> 1);
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = (uVar5 >> 1) + uVar5;
    if (uVar5 < uVar10) {
      uVar5 = uVar10;
    }
  }
  else {
    uVar5 = 0x492492492492492;
  }
  if (puVar12 == (undefined4 *)0x0) {
LAB_1400f8aba:
    puVar11 = (undefined4 *)0x0;
    if (0x492492492492492 < uVar5) {
LAB_1400f8ca5:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    puVar12 = (undefined4 *)(uVar5 * 0x38);
    puVar9 = auStack_48;
    if (puVar12 != (undefined4 *)0x0) {
      if ((undefined4 *)0xfff < puVar12) {
        if ((undefined4 *)((longlong)puVar12 + 0x27U) <= puVar12) goto LAB_1400f8ca5;
        lVar4 = FUN_14028af20();
        if (lVar4 == 0) goto LAB_1400f8aec;
        goto LAB_1400f8af3;
      }
      puVar11 = (undefined4 *)FUN_14028af20(puVar12);
      puVar9 = auStack_48;
    }
  }
  else {
    puVar11 = (undefined4 *)param_1[1];
    for (; puVar12 != puVar11; puVar12 = puVar12 + 0xe) {
      FUN_140017240(puVar12 + 2);
    }
    lVar4 = *param_1;
    uVar3 = (param_1[2] - lVar4 >> 3) * 8;
    if (uVar3 < 0x1000) {
LAB_1400f8aa5:
      thunk_FUN_14028af80(lVar4,uVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_1400f8aba;
    }
    if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
      uVar3 = uVar3 + 0x27;
      lVar4 = *(longlong *)(lVar4 + -8);
      goto LAB_1400f8aa5;
    }
LAB_1400f8aec:
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
    puVar8 = auStack_40;
LAB_1400f8af3:
    puVar11 = (undefined4 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar11 + -2) = lVar4;
    puVar9 = puVar8;
  }
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)puVar11;
  param_1[2] = (longlong)puVar12 + (longlong)puVar11;
  while (uVar13 != 0) {
    *puVar11 = *puVar7;
    *(undefined8 *)(puVar9 + -8) = 0x1400f8b35;
    FUN_140016fc0(puVar11 + 2,puVar7 + 2);
    puVar11[10] = puVar7[10];
    *(undefined1 *)(puVar11 + 0xb) = *(undefined1 *)(puVar7 + 0xb);
    puVar11[0xc] = puVar7[0xc];
    puVar11 = puVar11 + 0xe;
    uVar10 = uVar10 - 1;
    puVar7 = puVar7 + 0xe;
    uVar13 = uVar10;
  }
LAB_1400f8c74:
  param_1[1] = (longlong)puVar11;
  return param_1;
}

