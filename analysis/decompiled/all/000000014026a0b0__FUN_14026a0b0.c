// Function: FUN_14026a0b0
// Addr: 14026a0b0
// Size: 529 bytes


longlong FUN_14026a0b0(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong unaff_RSI;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar9 = *param_1;
  lVar13 = 0x4ec4ec4ec4ec4ec5;
  lVar11 = ((longlong)(param_1[1] - uVar9) >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (lVar11 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar7 = ((longlong)(param_1[2] - uVar9) >> 3) * 0x4ec4ec4ec4ec4ec5;
  uVar6 = 0x276276276276276 - (uVar7 >> 1);
  if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
LAB_14026a2bd:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar6 = lVar11 + 1;
  uVar12 = uVar6;
  if (uVar6 <= uVar7) {
    uVar12 = uVar7;
  }
  if (0x276276276276276 < uVar12) goto LAB_14026a2bd;
  uVar12 = uVar12 * 0x68;
  if (uVar12 == 0) {
    unaff_RSI = 0;
LAB_14026a18c:
    lVar13 = ((longlong)(param_2 - uVar9) / 0x68) * 0x68 + unaff_RSI;
    FUN_140016fc0(lVar13,param_3);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(lVar13 + 0x28) = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(lVar13 + 0x38) = uVar5;
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar3 = *(undefined4 *)(param_3 + 0x48);
    uVar4 = *(undefined4 *)(param_3 + 0x4c);
    *(undefined4 *)(lVar13 + 0x40) = *(undefined4 *)(param_3 + 0x40);
    *(undefined4 *)(lVar13 + 0x44) = uVar2;
    *(undefined4 *)(lVar13 + 0x48) = uVar3;
    *(undefined4 *)(lVar13 + 0x4c) = uVar4;
    uVar2 = *(undefined4 *)(param_3 + 0x54);
    uVar3 = *(undefined4 *)(param_3 + 0x58);
    uVar4 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(lVar13 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(lVar13 + 0x54) = uVar2;
    *(undefined4 *)(lVar13 + 0x58) = uVar3;
    *(undefined4 *)(lVar13 + 0x5c) = uVar4;
    *(undefined4 *)(lVar13 + 0x60) = *(undefined4 *)(param_3 + 0x60);
    uVar7 = param_1[1];
    uVar8 = *param_1;
    uVar9 = unaff_RSI;
    if (param_2 != uVar7) {
      FUN_14026bd80(*param_1,param_2,unaff_RSI);
      uVar7 = param_1[1];
      uVar9 = lVar13 + 0x68;
      uVar8 = param_2;
    }
    FUN_14026bd80(uVar8,uVar7,uVar9);
    uVar9 = *param_1;
    if (uVar9 == 0) goto LAB_14026a283;
    uVar7 = param_1[1];
    for (; uVar9 != uVar7; uVar9 = uVar9 + 0x68) {
      FUN_140017240(uVar9);
    }
    uVar9 = *param_1;
    uVar7 = uVar9;
    puVar10 = auStack_48;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar9) >> 3) * 8)) &&
       (uVar7 = *(ulonglong *)(uVar9 - 8), puVar10 = auStack_48, 0x1f < (uVar9 - uVar7) - 8))
    goto LAB_14026a271;
  }
  else {
    if (uVar12 < 0x1000) {
      unaff_RSI = FUN_14028af20(uVar12);
      goto LAB_14026a18c;
    }
    if (uVar12 + 0x27 <= uVar12) goto LAB_14026a2bd;
    lVar11 = FUN_14028af20();
    if (lVar11 != 0) {
      unaff_RSI = lVar11 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar11;
      goto LAB_14026a18c;
    }
LAB_14026a271:
    uVar7 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar10 = auStack_40;
  }
  *(undefined8 *)(puVar10 + -8) = 0x14026a283;
  thunk_FUN_14028af80(uVar7);
LAB_14026a283:
  *param_1 = unaff_RSI;
  param_1[1] = uVar6 * 0x68 + unaff_RSI;
  param_1[2] = uVar12 + unaff_RSI;
  return lVar13;
}

