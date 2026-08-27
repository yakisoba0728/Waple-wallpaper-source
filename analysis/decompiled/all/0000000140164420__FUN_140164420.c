// Function: FUN_140164420
// Addr: 140164420
// Size: 620 bytes


void FUN_140164420(ulonglong *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar7 = auStack_58;
  puVar8 = auStack_58;
  puVar10 = (undefined8 *)*param_1;
  uVar3 = (longlong)(param_1[2] - (longlong)puVar10) >> 5;
  if (param_3 <= uVar3) {
    puVar5 = (undefined8 *)param_1[1];
    uVar3 = (longlong)puVar5 - (longlong)puVar10 >> 5;
    if (uVar3 < param_3) {
      if (puVar10 != puVar5) {
        do {
          if (puVar10 != param_2) {
            puVar5 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar5 = (undefined8 *)*param_2;
            }
            FUN_14000f880(puVar10,puVar5,param_2[2]);
          }
          puVar5 = (undefined8 *)param_1[1];
          puVar10 = puVar10 + 4;
          param_2 = param_2 + 4;
        } while (puVar10 != puVar5);
      }
      for (lVar2 = param_3 - uVar3; lVar2 != 0; lVar2 = lVar2 + -1) {
        FUN_140016fc0(puVar5,param_2);
        puVar5 = puVar5 + 4;
        param_2 = param_2 + 4;
      }
    }
    else {
      puVar5 = puVar10 + param_3 * 4;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar10 != param_2) {
          puVar6 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar6 = (undefined8 *)*param_2;
          }
          FUN_14000f880(puVar10,puVar6,param_2[2]);
        }
        puVar10 = puVar10 + 4;
        param_2 = param_2 + 4;
      }
      puVar10 = (undefined8 *)param_1[1];
      puVar6 = puVar5;
      if (puVar5 != puVar10) {
        do {
          FUN_140017240(puVar6);
          puVar6 = puVar6 + 4;
        } while (puVar6 != puVar10);
        param_1[1] = (ulonglong)puVar5;
        return;
      }
    }
    param_1[1] = (ulonglong)puVar5;
    return;
  }
  if (0x7ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  if (0x7ffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x7ffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_3) {
      uVar3 = param_3;
    }
  }
  if (puVar10 == (undefined8 *)0x0) {
LAB_1401644f2:
    if (0x7ffffffffffffff < uVar3) {
LAB_140164682:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar3 = uVar3 * 0x20;
    if (uVar3 == 0) {
      uVar9 = 0;
      puVar8 = auStack_58;
      goto LAB_140164548;
    }
    if (uVar3 < 0x1000) {
      uVar9 = FUN_14028af20(uVar3);
      goto LAB_140164548;
    }
    if (uVar3 + 0x27 <= uVar3) goto LAB_140164682;
    lVar2 = FUN_14028af20();
    if (lVar2 == 0) goto LAB_140164528;
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    for (; puVar10 != puVar5; puVar10 = puVar10 + 4) {
      FUN_140017240(puVar10);
    }
    uVar9 = *param_1;
    uVar4 = param_1[2] - uVar9 & 0xffffffffffffffe0;
    if (uVar4 < 0x1000) {
LAB_1401644d6:
      thunk_FUN_14028af80(uVar9,uVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_1401644f2;
    }
    if ((uVar9 - *(ulonglong *)(uVar9 - 8)) - 8 < 0x20) {
      uVar4 = uVar4 + 0x27;
      uVar9 = *(ulonglong *)(uVar9 - 8);
      goto LAB_1401644d6;
    }
LAB_140164528:
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar7 = auStack_50;
  }
  uVar9 = lVar2 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar9 - 8) = lVar2;
  puVar8 = puVar7;
LAB_140164548:
  *param_1 = uVar9;
  param_1[1] = uVar9;
  param_1[2] = uVar3 + uVar9;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined8 *)(puVar8 + -8) = 0x14016456b;
    FUN_140016fc0(uVar9,param_2);
    uVar9 = uVar9 + 0x20;
    param_2 = param_2 + 4;
  }
  param_1[1] = uVar9;
  return;
}

