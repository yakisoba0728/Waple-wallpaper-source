// Function: FUN_14009bde0
// Addr: 14009bde0
// Size: 378 bytes


void FUN_14009bde0(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = *param_1;
  uVar3 = (longlong)(param_1[2] - uVar4) >> 3;
  if ((0x1fffffffffffffff - (uVar3 >> 1) < uVar3) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar6 = param_2, param_2 <= uVar3 &&
      (uVar6 = uVar3, 0x1fffffffffffffff < uVar3)))) {
LAB_14009bf56:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = param_1[1];
  uVar6 = uVar6 * 8;
  if (uVar6 == 0) {
    unaff_RBX = 0;
LAB_14009bea0:
    uVar3 = uVar3 - uVar4;
    FUN_1404217a0(unaff_RBX + (uVar3 & 0xfffffffffffffff8),0,(param_2 - ((longlong)uVar3 >> 3)) * 8)
    ;
    FUN_1404210f0(unaff_RBX,*param_1,param_1[1] - *param_1);
    uVar3 = *param_1;
    if (uVar3 == 0) goto LAB_14009bf22;
    uVar4 = uVar3;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar3) >> 3) * 8)) &&
       (uVar4 = *(ulonglong *)(uVar3 - 8), puVar5 = auStack_38, 0x1f < (uVar3 - uVar4) - 8))
    goto LAB_14009bf10;
  }
  else {
    if (uVar6 < 0x1000) {
      unaff_RBX = FUN_14028af20(uVar6);
      goto LAB_14009bea0;
    }
    if (uVar6 + 0x27 <= uVar6) goto LAB_14009bf56;
    lVar2 = FUN_14028af20();
    if (lVar2 != 0) {
      unaff_RBX = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar2;
      goto LAB_14009bea0;
    }
LAB_14009bf10:
    uVar4 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar5 = auStack_30;
  }
  *(undefined8 *)(puVar5 + -8) = 0x14009bf22;
  thunk_FUN_14028af80(uVar4);
LAB_14009bf22:
  *param_1 = unaff_RBX;
  param_1[1] = unaff_RBX + param_2 * 8;
  param_1[2] = uVar6 + unaff_RBX;
  return;
}

