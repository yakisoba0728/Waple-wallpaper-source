// Function: FUN_14015ab00
// Addr: 14015ab00
// Size: 306 bytes


void FUN_14015ab00(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar1 = *param_1;
  if (param_2 <= (ulonglong)((longlong)(param_1[2] - uVar1) >> 3)) {
    return;
  }
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar6 = param_1[1];
  param_2 = param_2 * 8;
  if (param_2 == 0) {
    unaff_RBX = 0;
LAB_14015ab95:
    uVar6 = uVar6 - uVar1;
    FUN_1404210f0(unaff_RBX,*param_1,param_1[1] - *param_1);
    uVar1 = *param_1;
    if (uVar1 == 0) goto LAB_14015abf7;
    uVar4 = uVar1;
    puVar5 = auStack_28;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar1) >> 3) * 8)) &&
       (uVar4 = *(ulonglong *)(uVar1 - 8), puVar5 = auStack_28, 0x1f < (uVar1 - uVar4) - 8))
    goto LAB_14015abe5;
  }
  else {
    if (param_2 < 0x1000) {
      unaff_RBX = FUN_14028af20(param_2);
      goto LAB_14015ab95;
    }
    if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar3 = FUN_14028af20();
    if (lVar3 != 0) {
      unaff_RBX = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar3;
      goto LAB_14015ab95;
    }
LAB_14015abe5:
    uVar4 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar5 = auStack_20;
  }
  *(undefined8 *)(puVar5 + -8) = 0x14015abf7;
  thunk_FUN_14028af80(uVar4);
LAB_14015abf7:
  *param_1 = unaff_RBX;
  param_1[1] = (uVar6 & 0xfffffffffffffff8) + unaff_RBX;
  param_1[2] = param_2 + unaff_RBX;
  return;
}

