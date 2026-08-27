// Function: FUN_14016e270
// Addr: 14016e270
// Size: 724 bytes


ulonglong * FUN_14016e270(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  *param_1 = 0;
  plVar12 = (longlong *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar11 = *(ulonglong *)(param_2 + 0x10);
  if (uVar11 != 0) {
    if (0x1fffffffffffffff < uVar11) {
LAB_14016e53a:
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar5 = uVar11 * 8;
    if (uVar5 != 0) {
      if (uVar5 < 0x1000) {
        plVar12 = (longlong *)FUN_14028af20(uVar5);
        goto LAB_14016e30b;
      }
      if (uVar5 + 0x27 <= uVar5) {
LAB_14016e540:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      lVar4 = FUN_14028af20();
      if (lVar4 != 0) {
        plVar12 = (longlong *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        plVar12[-1] = lVar4;
        goto LAB_14016e30b;
      }
LAB_14016e504:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar10 = auStack_60;
      goto LAB_14016e50b;
    }
LAB_14016e30b:
    FUN_1404210f0(plVar12,*param_1,param_1[1] - *param_1);
    uVar5 = *param_1;
    if (uVar5 != 0) {
      uVar6 = ((longlong)(param_1[2] - uVar5) >> 3) * 8;
      if (0xfff < uVar6) {
        if (0x1f < (uVar5 - *(ulonglong *)(uVar5 - 8)) - 8) goto LAB_14016e504;
        uVar6 = uVar6 + 0x27;
        uVar5 = *(ulonglong *)(uVar5 - 8);
      }
      thunk_FUN_14028af80(uVar5,uVar6);
    }
    *param_1 = (ulonglong)plVar12;
    param_1[1] = (ulonglong)plVar12;
    param_1[2] = (ulonglong)(plVar12 + uVar11);
  }
  puVar1 = *(undefined8 **)(param_2 + 8);
  for (puVar2 = (undefined8 *)*puVar1; puVar10 = auStack_68, puVar2 != puVar1;
      puVar2 = (undefined8 *)*puVar2) {
    if (plVar12 == (longlong *)param_1[2]) {
      uVar11 = (longlong)plVar12 - *param_1;
      lVar4 = (longlong)uVar11 >> 3;
      if (lVar4 == 0x1fffffffffffffff) goto LAB_14016e53a;
      uVar5 = (longlong)((longlong)param_1[2] - *param_1) >> 3;
      if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) goto LAB_14016e540;
      uVar7 = lVar4 + 1;
      uVar5 = (uVar5 >> 1) + uVar5;
      uVar6 = uVar7;
      if (uVar7 <= uVar5) {
        uVar6 = uVar5;
      }
      if (0x1fffffffffffffff < uVar6) goto LAB_14016e540;
      uVar6 = uVar6 * 8;
      if (uVar6 == 0) {
        uVar5 = 0;
      }
      else if (uVar6 < 0x1000) {
        uVar5 = FUN_14028af20(uVar6);
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_14016e540;
        lVar4 = FUN_14028af20();
        if (lVar4 == 0) goto LAB_14016e504;
        uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar4;
      }
      uVar11 = uVar11 & 0xfffffffffffffff8;
      *(undefined8 **)(uVar5 + uVar11) = puVar2 + 2;
      plVar8 = (longlong *)*param_1;
      if (plVar12 == (longlong *)param_1[1]) {
        lVar4 = (longlong)param_1[1] - (longlong)plVar8;
        uVar11 = uVar5;
      }
      else {
        FUN_1404210f0(uVar5,plVar8,(longlong)plVar12 - (longlong)plVar8);
        uVar11 = uVar11 + 8 + uVar5;
        lVar4 = param_1[1] - (longlong)plVar12;
        plVar8 = plVar12;
      }
      FUN_1404210f0(uVar11,plVar8,lVar4);
      uVar11 = *param_1;
      if (uVar11 != 0) {
        uVar9 = ((longlong)(param_1[2] - uVar11) >> 3) * 8;
        if (0xfff < uVar9) {
          if (0x1f < (uVar11 - *(ulonglong *)(uVar11 - 8)) - 8) goto LAB_14016e504;
          uVar9 = uVar9 + 0x27;
          uVar11 = *(ulonglong *)(uVar11 - 8);
        }
        thunk_FUN_14028af80(uVar11,uVar9);
      }
      *param_1 = uVar5;
      plVar12 = (longlong *)(uVar5 + uVar7 * 8);
      param_1[1] = (ulonglong)plVar12;
      param_1[2] = uVar5 + uVar6;
    }
    else {
      *plVar12 = (longlong)(puVar2 + 2);
      param_1[1] = param_1[1] + 8;
      plVar12 = (longlong *)param_1[1];
    }
  }
LAB_14016e50b:
  uVar11 = *param_1;
  *(undefined8 *)(puVar10 + -8) = 0x14016e526;
  FUN_14016ead0(uVar11,plVar12,(longlong)((longlong)plVar12 - uVar11) >> 3,puVar10[0x70]);
  return param_1;
}

