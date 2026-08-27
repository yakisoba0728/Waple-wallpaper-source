// Function: FUN_140255f60
// Addr: 140255f60
// Size: 407 bytes


void FUN_140255f60(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0x1f07c1f07c1f07c < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = *param_1;
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 2) * 0xf83e0f83e0f83e1;
  uVar2 = 0x1f07c1f07c1f07c - (uVar3 >> 1);
  if ((uVar2 <= uVar3 && uVar3 - uVar2 != 0) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar2 = param_2, param_2 <= uVar3 &&
      (uVar2 = uVar3, 0x1f07c1f07c1f07c < uVar3)))) {
LAB_1402560f3:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = param_1[1];
  uVar2 = uVar2 * 0x84;
  if (uVar2 == 0) {
    unaff_RBX = 0;
LAB_140256032:
    lVar6 = (longlong)(uVar3 - uVar4) >> 2;
    FUN_140256100(lVar6 * 4 + unaff_RBX,param_2 + lVar6 * -0xf83e0f83e0f83e1);
    FUN_1404210f0(unaff_RBX,*param_1,param_1[1] - *param_1);
    uVar3 = *param_1;
    if (uVar3 == 0) goto LAB_1402560b4;
    uVar4 = uVar3;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar3) >> 2) * 4)) &&
       (uVar4 = *(ulonglong *)(uVar3 - 8), puVar5 = auStack_38, 0x1f < (uVar3 - uVar4) - 8))
    goto LAB_1402560a2;
  }
  else {
    if (uVar2 < 0x1000) {
      unaff_RBX = FUN_14028af20(uVar2);
      goto LAB_140256032;
    }
    if (uVar2 + 0x27 <= uVar2) goto LAB_1402560f3;
    lVar6 = FUN_14028af20();
    if (lVar6 != 0) {
      unaff_RBX = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar6;
      goto LAB_140256032;
    }
LAB_1402560a2:
    uVar4 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar5 = auStack_30;
  }
  *(undefined8 *)(puVar5 + -8) = 0x1402560b4;
  thunk_FUN_14028af80(uVar4);
LAB_1402560b4:
  *param_1 = unaff_RBX;
  param_1[1] = param_2 * 0x84 + unaff_RBX;
  param_1[2] = uVar2 + unaff_RBX;
  return;
}

