// Function: FUN_1401aaac0
// Addr: 1401aaac0
// Size: 526 bytes


undefined4 * FUN_1401aaac0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 *unaff_RDI;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *unaff_R12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar5 = *param_1;
  lVar8 = (param_1[1] - lVar5 >> 3) * -0x3333333333333333;
  if (lVar8 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = (param_1[2] - lVar5 >> 3) * -0x3333333333333333;
  uVar2 = 0x666666666666666 - (uVar3 >> 1);
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
LAB_1401aacca:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = (uVar3 >> 1) + uVar3;
  uVar2 = lVar8 + 1;
  uVar4 = uVar2;
  if (uVar2 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x666666666666666 < uVar4) goto LAB_1401aacca;
  uVar3 = uVar4 * 0x28;
  if (uVar3 == 0) {
    unaff_RDI = (undefined4 *)0x0;
LAB_1401aaba7:
    unaff_R12 = unaff_RDI + ((param_2 - lVar5) / 0x28) * 10;
    *unaff_R12 = *param_3;
    FUN_140016fc0(unaff_R12 + 2,param_3 + 2);
    lVar5 = param_1[1];
    lVar8 = *param_1;
    puVar7 = unaff_RDI;
    if (param_2 != lVar5) {
      FUN_1401aacd0(*param_1,param_2,unaff_RDI);
      lVar5 = param_1[1];
      puVar7 = unaff_R12 + 10;
      lVar8 = param_2;
    }
    FUN_1401aacd0(lVar8,lVar5,puVar7);
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_1401aac8c;
    lVar8 = param_1[1];
    for (; lVar5 != lVar8; lVar5 = lVar5 + 0x28) {
      FUN_140017240(lVar5 + 8);
    }
    lVar5 = *param_1;
    lVar8 = lVar5;
    puVar6 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar5 >> 3) * 8)) &&
       (lVar8 = *(longlong *)(lVar5 + -8), puVar6 = auStack_48, 0x1f < (lVar5 - lVar8) - 8U))
    goto LAB_1401aac7a;
  }
  else {
    if (uVar3 < 0x1000) {
      unaff_RDI = (undefined4 *)FUN_14028af20(uVar3);
      goto LAB_1401aaba7;
    }
    if (uVar3 + 0x27 <= uVar3) goto LAB_1401aacca;
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      unaff_RDI = (undefined4 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_RDI + -2) = lVar8;
      goto LAB_1401aaba7;
    }
LAB_1401aac7a:
    lVar8 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_40;
  }
  *(undefined8 *)(puVar6 + -8) = 0x1401aac8c;
  thunk_FUN_14028af80(lVar8);
LAB_1401aac8c:
  *param_1 = (longlong)unaff_RDI;
  param_1[1] = (longlong)(unaff_RDI + uVar2 * 10);
  param_1[2] = (longlong)(unaff_RDI + uVar4 * 10);
  return unaff_R12;
}

