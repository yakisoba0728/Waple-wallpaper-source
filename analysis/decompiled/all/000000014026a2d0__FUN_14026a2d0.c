// Function: FUN_14026a2d0
// Addr: 14026a2d0
// Size: 456 bytes


ulonglong FUN_14026a2d0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong unaff_RDI;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar11 = *param_1;
  if (param_1[1] - uVar11 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar10 = (longlong)(param_1[2] - uVar11) >> 6;
  uVar1 = ((longlong)(param_1[1] - uVar11) >> 6) + 1;
  if (0x3ffffffffffffff - (uVar10 >> 1) < uVar10) {
    uVar12 = 0xffffffffffffffc0;
    uVar10 = 0xffffffffffffffe7;
LAB_14026a386:
    lVar8 = FUN_14028af20(uVar10);
    if (lVar8 != 0) {
      unaff_RDI = lVar8 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar8;
      goto LAB_14026a3aa;
    }
LAB_14026a447:
    pcVar3 = (code *)swi(0x29);
    uVar9 = (*pcVar3)(5);
    puVar13 = auStack_30;
  }
  else {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (0x3ffffffffffffff < uVar12) {
LAB_14026a494:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar12 = uVar12 * 0x40;
    if (uVar12 == 0) {
      unaff_RDI = 0;
    }
    else {
      if (0xfff < uVar12) {
        uVar10 = uVar12 | 0x27;
        if (uVar10 <= uVar12) goto LAB_14026a494;
        goto LAB_14026a386;
      }
      unaff_RDI = FUN_14028af20();
    }
LAB_14026a3aa:
    uVar7 = param_3[1];
    uVar11 = param_2 - uVar11 & 0xffffffffffffffc0;
    puVar2 = (undefined8 *)(uVar11 + unaff_RDI);
    *puVar2 = *param_3;
    puVar2[1] = uVar7;
    uVar11 = uVar11 + unaff_RDI;
    uVar7 = param_3[3];
    *(undefined8 *)(uVar11 + 0x10) = param_3[2];
    *(undefined8 *)(uVar11 + 0x18) = uVar7;
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar5 = *(undefined4 *)(param_3 + 5);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined4 *)(uVar11 + 0x20) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(uVar11 + 0x24) = uVar4;
    *(undefined4 *)(uVar11 + 0x28) = uVar5;
    *(undefined4 *)(uVar11 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x34);
    uVar5 = *(undefined4 *)(param_3 + 7);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(undefined4 *)(uVar11 + 0x30) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)(uVar11 + 0x34) = uVar4;
    *(undefined4 *)(uVar11 + 0x38) = uVar5;
    *(undefined4 *)(uVar11 + 0x3c) = uVar6;
    uVar10 = *param_1;
    if (param_2 == param_1[1]) {
      lVar8 = param_1[1] - uVar10;
      uVar9 = unaff_RDI;
      param_2 = uVar10;
    }
    else {
      FUN_1404210f0(unaff_RDI,uVar10,param_2 - uVar10);
      uVar9 = uVar11 + 0x40;
      lVar8 = param_1[1] - param_2;
    }
    FUN_1404210f0(uVar9,param_2,lVar8);
    uVar10 = *param_1;
    if (uVar10 == 0) goto LAB_14026a456;
    uVar9 = uVar10;
    puVar13 = auStack_38;
    if ((0xfff < (param_1[2] - uVar10 & 0xffffffffffffffc0)) &&
       (uVar9 = *(ulonglong *)(uVar10 - 8), puVar13 = auStack_38, 0x1f < (uVar10 - uVar9) - 8))
    goto LAB_14026a447;
  }
  *(undefined8 *)(puVar13 + -8) = 0x14026a456;
  thunk_FUN_14028af80(uVar9);
LAB_14026a456:
  *param_1 = unaff_RDI;
  param_1[1] = uVar1 * 0x40 + unaff_RDI;
  param_1[2] = uVar12 + unaff_RDI;
  return uVar11;
}

