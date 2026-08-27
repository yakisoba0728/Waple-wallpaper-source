// Function: FUN_1401347a0
// Addr: 1401347a0
// Size: 657 bytes


void FUN_1401347a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong unaff_RSI;
  ulonglong uVar10;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  puVar9 = auStack_98;
  FUN_140016600(&local_78);
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  if (puVar1 != *(undefined8 **)(param_1 + 0x148)) {
    *puVar1 = local_78;
    puVar1[1] = local_70;
    puVar1[2] = local_68;
    puVar1[3] = local_60;
    *(undefined4 *)(puVar1 + 4) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x24) = param_4;
    *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + 0x28;
    puVar9 = auStack_98;
    goto LAB_140134a0a;
  }
  lVar8 = ((longlong)puVar1 - *(longlong *)(param_1 + 0x138)) / 0x28;
  if (lVar8 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar10 = ((longlong)*(undefined8 **)(param_1 + 0x148) - *(longlong *)(param_1 + 0x138) >> 3) *
           -0x3333333333333333;
  uVar3 = 0x666666666666666 - (uVar10 >> 1);
  if (uVar3 <= uVar10 && uVar10 - uVar3 != 0) {
LAB_140134a2d:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar10 = (uVar10 >> 1) + uVar10;
  uVar3 = lVar8 + 1;
  uVar4 = uVar3;
  if (uVar3 <= uVar10) {
    uVar4 = uVar10;
  }
  if (0x666666666666666 < uVar4) goto LAB_140134a2d;
  uVar4 = uVar4 * 0x28;
  if (uVar4 == 0) {
    unaff_RSI = 0;
LAB_1401348e7:
    lVar6 = lVar8 * 5;
    *(undefined8 *)(unaff_RSI + lVar8 * 0x28) = local_78;
    *(undefined8 *)(unaff_RSI + 8 + lVar8 * 0x28) = local_70;
    *(undefined8 *)(unaff_RSI + 0x10 + lVar8 * 0x28) = local_68;
    *(undefined8 *)(unaff_RSI + 0x18 + lVar8 * 0x28) = local_60;
    *(undefined4 *)(unaff_RSI + 0x20 + lVar8 * 0x28) = param_3;
    *(undefined4 *)(unaff_RSI + 0x24 + lVar8 * 0x28) = param_4;
    puVar7 = *(undefined8 **)(param_1 + 0x140);
    puVar5 = *(undefined8 **)(param_1 + 0x138);
    uVar10 = unaff_RSI;
    if (puVar1 != puVar7) {
      FUN_140137570(*(undefined8 **)(param_1 + 0x138),puVar1,unaff_RSI);
      puVar7 = *(undefined8 **)(param_1 + 0x140);
      uVar10 = unaff_RSI + (lVar6 + 5) * 8;
      puVar5 = puVar1;
    }
    FUN_140137570(puVar5,puVar7,uVar10);
    lVar8 = *(longlong *)(param_1 + 0x138);
    if (lVar8 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x140);
      for (; lVar8 != lVar6; lVar8 = lVar8 + 0x28) {
        FUN_140016770(lVar8);
      }
      lVar8 = *(longlong *)(param_1 + 0x138);
      lVar6 = lVar8;
      puVar9 = auStack_98;
      if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0x148) - lVar8 >> 3) * 8)) &&
         (lVar6 = *(longlong *)(lVar8 + -8), puVar9 = auStack_98, 0x1f < (lVar8 - lVar6) - 8U))
      goto LAB_1401349d0;
      goto LAB_1401349da;
    }
  }
  else {
    if (uVar4 < 0x1000) {
      unaff_RSI = FUN_14028af20(uVar4);
      goto LAB_1401348e7;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_140134a2d;
    lVar6 = FUN_14028af20();
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar6;
      goto LAB_1401348e7;
    }
LAB_1401349d0:
    lVar6 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar9 = auStack_90;
LAB_1401349da:
    *(undefined8 *)(puVar9 + -8) = 0x1401349e2;
    thunk_FUN_14028af80(lVar6);
  }
  *(ulonglong *)(param_1 + 0x138) = unaff_RSI;
  *(ulonglong *)(param_1 + 0x140) = unaff_RSI + uVar3 * 0x28;
  *(ulonglong *)(param_1 + 0x148) = uVar4 + unaff_RSI;
LAB_140134a0a:
  FUN_140016770(*(undefined8 *)(puVar9 + 0xa8));
  return;
}

