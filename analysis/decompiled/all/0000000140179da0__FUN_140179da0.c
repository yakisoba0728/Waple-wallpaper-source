// Function: FUN_140179da0
// Addr: 140179da0
// Size: 709 bytes


void FUN_140179da0(ulonglong *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar8 = auStack_58;
  puVar9 = auStack_58;
  puVar11 = (undefined8 *)*param_1;
  uVar3 = (longlong)(param_1[2] - (longlong)puVar11) >> 6;
  if (param_3 <= uVar3) {
    puVar5 = (undefined8 *)param_1[1];
    uVar3 = (longlong)puVar5 - (longlong)puVar11 >> 6;
    if (uVar3 < param_3) {
      if (puVar11 != puVar5) {
        do {
          if (puVar11 != param_2) {
            puVar5 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar5 = (undefined8 *)*param_2;
            }
            FUN_14000f880(puVar11,puVar5,param_2[2]);
            plVar7 = param_2 + 4;
            if (0xf < (ulonglong)param_2[7]) {
              plVar7 = (longlong *)*plVar7;
            }
            FUN_14000f880(puVar11 + 4,plVar7,param_2[6]);
          }
          puVar5 = (undefined8 *)param_1[1];
          puVar11 = puVar11 + 8;
          param_2 = param_2 + 8;
        } while (puVar11 != puVar5);
      }
      for (lVar2 = param_3 - uVar3; lVar2 != 0; lVar2 = lVar2 + -1) {
        FUN_140016fc0(puVar5,param_2);
        FUN_140016fc0(puVar5 + 4,param_2 + 4);
        puVar5 = puVar5 + 8;
        param_2 = param_2 + 8;
      }
    }
    else {
      puVar5 = puVar11 + param_3 * 8;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar11 != param_2) {
          puVar6 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar6 = (undefined8 *)*param_2;
          }
          FUN_14000f880(puVar11,puVar6,param_2[2]);
          plVar7 = param_2 + 4;
          if (0xf < (ulonglong)param_2[7]) {
            plVar7 = (longlong *)*plVar7;
          }
          FUN_14000f880(puVar11 + 4,plVar7,param_2[6]);
        }
        puVar11 = puVar11 + 8;
        param_2 = param_2 + 8;
      }
      puVar11 = (undefined8 *)param_1[1];
      puVar6 = puVar5;
      if (puVar5 != puVar11) {
        do {
          FUN_140017240(puVar6 + 4);
          FUN_140017240(puVar6);
          puVar6 = puVar6 + 8;
        } while (puVar6 != puVar11);
        param_1[1] = (ulonglong)puVar5;
        return;
      }
    }
    param_1[1] = (ulonglong)puVar5;
    return;
  }
  if (0x3ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  if (0x3ffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x3ffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_3) {
      uVar3 = param_3;
    }
  }
  if (puVar11 == (undefined8 *)0x0) {
LAB_140179e7b:
    if (0x3ffffffffffffff < uVar3) {
LAB_14017a05b:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar3 = uVar3 * 0x40;
    if (uVar3 == 0) {
      uVar10 = 0;
      puVar9 = auStack_58;
      goto LAB_140179ed1;
    }
    if (uVar3 < 0x1000) {
      uVar10 = FUN_14028af20();
      goto LAB_140179ed1;
    }
    if ((uVar3 | 0x27) <= uVar3) goto LAB_14017a05b;
    lVar2 = FUN_14028af20();
    if (lVar2 == 0) goto LAB_140179eb4;
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    for (; puVar11 != puVar5; puVar11 = puVar11 + 8) {
      FUN_140017240(puVar11 + 4);
      FUN_140017240(puVar11);
    }
    uVar10 = *param_1;
    uVar4 = param_1[2] - uVar10 & 0xffffffffffffffc0;
    if (uVar4 < 0x1000) {
LAB_140179e5f:
      thunk_FUN_14028af80(uVar10,uVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_140179e7b;
    }
    if ((uVar10 - *(ulonglong *)(uVar10 - 8)) - 8 < 0x20) {
      uVar4 = uVar4 | 0x27;
      uVar10 = *(ulonglong *)(uVar10 - 8);
      goto LAB_140179e5f;
    }
LAB_140179eb4:
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar8 = auStack_50;
  }
  uVar10 = lVar2 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar10 - 8) = lVar2;
  puVar9 = puVar8;
LAB_140179ed1:
  *param_1 = uVar10;
  param_1[1] = uVar10;
  param_1[2] = uVar3 + uVar10;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined8 *)(puVar9 + -8) = 0x140179ef0;
    FUN_140016fc0(uVar10,param_2);
    *(undefined8 *)(puVar9 + -8) = 0x140179efd;
    FUN_140016fc0(uVar10 + 0x20,param_2 + 4);
    uVar10 = uVar10 + 0x40;
    param_2 = param_2 + 8;
  }
  param_1[1] = uVar10;
  return;
}

