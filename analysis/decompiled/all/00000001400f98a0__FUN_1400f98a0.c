// Function: FUN_1400f98a0
// Addr: 1400f98a0
// Size: 411 bytes


undefined4 * FUN_1400f98a0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined4 *unaff_RDI;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar12 = (undefined4 *)*param_1;
  if (param_1[1] - (longlong)puVar12 == -0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar7 = param_1[2] - (longlong)puVar12 >> 4;
  if (0xfffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_1400f9a37:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar1 = (param_1[1] - (longlong)puVar12 >> 4) + 1;
  uVar9 = uVar1;
  if (uVar1 <= uVar7) {
    uVar9 = uVar7;
  }
  if (0xfffffffffffffff < uVar9) goto LAB_1400f9a37;
  uVar7 = uVar9 * 0x10;
  if (uVar7 == 0) {
    unaff_RDI = (undefined4 *)0x0;
LAB_1400f996e:
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar12 = (undefined4 *)
              ((param_2 - (longlong)puVar12 & 0xfffffffffffffff0U) + (longlong)unaff_RDI);
    *puVar12 = *param_3;
    puVar12[1] = uVar3;
    puVar12[2] = uVar4;
    puVar12[3] = uVar5;
    lVar6 = *param_1;
    if (param_2 == param_1[1]) {
      lVar11 = param_1[1] - lVar6;
      puVar8 = unaff_RDI;
      param_2 = lVar6;
    }
    else {
      FUN_1404210f0(unaff_RDI,lVar6,param_2 - lVar6);
      puVar8 = puVar12 + 4;
      lVar11 = param_1[1] - param_2;
    }
    FUN_1404210f0(puVar8,param_2,lVar11);
    lVar6 = *param_1;
    if (lVar6 == 0) goto LAB_1400f99f9;
    lVar11 = lVar6;
    puVar10 = auStack_38;
    if ((0xfff < (param_1[2] - lVar6 & 0xfffffffffffffff0U)) &&
       (lVar11 = *(longlong *)(lVar6 + -8), puVar10 = auStack_38, 0x1f < (lVar6 - lVar11) - 8U))
    goto LAB_1400f99ea;
  }
  else {
    if (uVar7 < 0x1000) {
      unaff_RDI = (undefined4 *)FUN_14028af20(uVar7);
      goto LAB_1400f996e;
    }
    if (uVar7 + 0x27 <= uVar7) goto LAB_1400f9a37;
    lVar6 = FUN_14028af20();
    if (lVar6 != 0) {
      unaff_RDI = (undefined4 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_RDI + -2) = lVar6;
      goto LAB_1400f996e;
    }
LAB_1400f99ea:
    pcVar2 = (code *)swi(0x29);
    lVar11 = (*pcVar2)(5);
    puVar10 = auStack_30;
  }
  *(undefined8 *)(puVar10 + -8) = 0x1400f99f9;
  thunk_FUN_14028af80(lVar11);
LAB_1400f99f9:
  *param_1 = (longlong)unaff_RDI;
  param_1[1] = (longlong)(unaff_RDI + uVar1 * 4);
  param_1[2] = (longlong)(unaff_RDI + uVar9 * 4);
  return puVar12;
}

