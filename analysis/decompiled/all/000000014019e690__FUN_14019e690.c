// Function: FUN_14019e690
// Addr: 14019e690
// Size: 413 bytes


undefined8 * FUN_14019e690(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 *unaff_RDI;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)param_1[2]) {
    *puVar7 = *param_2;
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 1);
    return puVar7;
  }
  puVar11 = (undefined8 *)((longlong)puVar7 - *param_1);
  if ((longlong)puVar11 >> 3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140133d70();
  }
  uVar4 = param_1[2] - *param_1 >> 3;
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
LAB_14019e829:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar1 = ((longlong)puVar11 >> 3) + 1;
  uVar4 = (uVar4 >> 1) + uVar4;
  uVar9 = uVar1;
  if (uVar1 <= uVar4) {
    uVar9 = uVar4;
  }
  if (0x1fffffffffffffff < uVar9) goto LAB_14019e829;
  uVar4 = uVar9 * 8;
  if (uVar4 == 0) {
    unaff_RDI = (undefined8 *)0x0;
LAB_14019e771:
    puVar11 = (undefined8 *)(((ulonglong)puVar11 & 0xfffffffffffffff8) + (longlong)unaff_RDI);
    *puVar11 = *param_2;
    puVar2 = (undefined8 *)*param_1;
    if (puVar7 == (undefined8 *)param_1[1]) {
      lVar10 = param_1[1] - (longlong)puVar2;
      puVar5 = unaff_RDI;
      puVar7 = puVar2;
    }
    else {
      FUN_1404210f0(unaff_RDI,puVar2,(longlong)puVar7 - (longlong)puVar2);
      puVar5 = puVar11 + 1;
      lVar10 = param_1[1] - (longlong)puVar7;
    }
    FUN_1404210f0(puVar5,puVar7,lVar10);
    lVar10 = *param_1;
    if (lVar10 == 0) goto LAB_14019e7fe;
    lVar6 = lVar10;
    puVar8 = auStack_58;
    if ((0xfff < (ulonglong)((param_1[2] - lVar10 >> 3) * 8)) &&
       (lVar6 = *(longlong *)(lVar10 + -8), puVar8 = auStack_58, 0x1f < (lVar10 - lVar6) - 8U))
    goto LAB_14019e7ec;
  }
  else {
    if (uVar4 < 0x1000) {
      unaff_RDI = (undefined8 *)FUN_14028af20(uVar4);
      goto LAB_14019e771;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_14019e829;
    lVar10 = FUN_14028af20();
    if (lVar10 != 0) {
      unaff_RDI = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar10;
      goto LAB_14019e771;
    }
LAB_14019e7ec:
    lVar6 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar8 = auStack_50;
  }
  *(undefined8 *)(puVar8 + -8) = 0x14019e7fe;
  thunk_FUN_14028af80(lVar6);
LAB_14019e7fe:
  *param_1 = (longlong)unaff_RDI;
  param_1[1] = (longlong)(unaff_RDI + uVar1);
  param_1[2] = (longlong)(unaff_RDI + uVar9);
  return puVar11;
}

