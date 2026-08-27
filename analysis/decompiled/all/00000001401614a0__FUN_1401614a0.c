// Function: FUN_1401614a0
// Addr: 1401614a0
// Size: 422 bytes


undefined4 * FUN_1401614a0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined4 *unaff_RDI;
  longlong lVar15;
  undefined4 *puVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar16 = (undefined4 *)*param_1;
  if (param_1[1] - (longlong)puVar16 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar11 = param_1[2] - (longlong)puVar16 >> 5;
  if (0x7ffffffffffffff - (uVar11 >> 1) < uVar11) {
LAB_140161642:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar11 = (uVar11 >> 1) + uVar11;
  uVar1 = (param_1[1] - (longlong)puVar16 >> 5) + 1;
  uVar13 = uVar1;
  if (uVar1 <= uVar11) {
    uVar13 = uVar11;
  }
  if (0x7ffffffffffffff < uVar13) goto LAB_140161642;
  uVar11 = uVar13 * 0x20;
  if (uVar11 == 0) {
    unaff_RDI = (undefined4 *)0x0;
LAB_14016156e:
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar16 = (undefined4 *)
              ((param_2 - (longlong)puVar16 & 0xffffffffffffffe0U) + (longlong)unaff_RDI);
    *puVar16 = *param_3;
    puVar16[1] = uVar3;
    puVar16[2] = uVar4;
    puVar16[3] = uVar5;
    puVar16[4] = uVar6;
    puVar16[5] = uVar7;
    puVar16[6] = uVar8;
    puVar16[7] = uVar9;
    lVar10 = *param_1;
    if (param_2 == param_1[1]) {
      lVar15 = param_1[1] - lVar10;
      puVar12 = unaff_RDI;
      param_2 = lVar10;
    }
    else {
      FUN_1404210f0(unaff_RDI,lVar10,param_2 - lVar10);
      puVar12 = puVar16 + 8;
      lVar15 = param_1[1] - param_2;
    }
    FUN_1404210f0(puVar12,param_2,lVar15);
    lVar10 = *param_1;
    if (lVar10 == 0) goto LAB_140161604;
    lVar15 = lVar10;
    puVar14 = auStack_38;
    if ((0xfff < (param_1[2] - lVar10 & 0xffffffffffffffe0U)) &&
       (lVar15 = *(longlong *)(lVar10 + -8), puVar14 = auStack_38, 0x1f < (lVar10 - lVar15) - 8U))
    goto LAB_1401615f5;
  }
  else {
    if (uVar11 < 0x1000) {
      unaff_RDI = (undefined4 *)FUN_14028af20(uVar11);
      goto LAB_14016156e;
    }
    if (uVar11 + 0x27 <= uVar11) goto LAB_140161642;
    lVar10 = FUN_14028af20();
    if (lVar10 != 0) {
      unaff_RDI = (undefined4 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_RDI + -2) = lVar10;
      goto LAB_14016156e;
    }
LAB_1401615f5:
    pcVar2 = (code *)swi(0x29);
    lVar15 = (*pcVar2)(5);
    puVar14 = auStack_30;
  }
  *(undefined8 *)(puVar14 + -8) = 0x140161604;
  thunk_FUN_14028af80(lVar15);
LAB_140161604:
  *param_1 = (longlong)unaff_RDI;
  param_1[1] = (longlong)(unaff_RDI + uVar1 * 8);
  param_1[2] = (longlong)(unaff_RDI + uVar13 * 8);
  return puVar16;
}

