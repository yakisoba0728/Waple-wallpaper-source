// Function: FUN_1400eb220
// Addr: 1400eb220
// Size: 471 bytes


void FUN_1400eb220(ulonglong *param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong unaff_RBX;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar4 = (undefined8 *)param_1[1];
  iVar9 = param_3 * param_4 * param_5;
  if (puVar4 != (undefined8 *)param_1[2]) {
    *puVar4 = param_2;
    *(int *)(puVar4 + 1) = param_3 * param_5;
    *(int *)((longlong)puVar4 + 0xc) = iVar9;
    param_1[1] = param_1[1] + 0x10;
    return;
  }
  uVar10 = (longlong)puVar4 - *param_1;
  lVar6 = (longlong)uVar10 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = (longlong)((longlong)param_1[2] - *param_1) >> 4;
  if (0xfffffffffffffff - (uVar3 >> 1) < uVar3) {
LAB_1400eb3f3:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar7 = lVar6 + 1;
  uVar3 = (uVar3 >> 1) + uVar3;
  uVar8 = uVar7;
  if (uVar7 <= uVar3) {
    uVar8 = uVar3;
  }
  if (0xfffffffffffffff < uVar8) goto LAB_1400eb3f3;
  uVar8 = uVar8 * 0x10;
  if (uVar8 == 0) {
    unaff_RBX = 0;
LAB_1400eb329:
    uVar10 = uVar10 & 0xfffffffffffffff0;
    *(undefined8 *)(uVar10 + unaff_RBX) = param_2;
    *(int *)(uVar10 + 8 + unaff_RBX) = param_3 * param_5;
    *(int *)(uVar10 + 0xc + unaff_RBX) = iVar9;
    puVar1 = (undefined8 *)*param_1;
    if (puVar4 == (undefined8 *)param_1[1]) {
      lVar6 = (longlong)param_1[1] - (longlong)puVar1;
      uVar10 = unaff_RBX;
      puVar4 = puVar1;
    }
    else {
      FUN_1404210f0(unaff_RBX,puVar1,(longlong)puVar4 - (longlong)puVar1);
      uVar10 = uVar10 + 0x10 + unaff_RBX;
      lVar6 = param_1[1] - (longlong)puVar4;
    }
    FUN_1404210f0(uVar10,puVar4,lVar6);
    uVar10 = *param_1;
    if (uVar10 == 0) goto LAB_1400eb3b7;
    uVar3 = uVar10;
    puVar5 = auStack_48;
    if ((0xfff < (param_1[2] - uVar10 & 0xfffffffffffffff0)) &&
       (uVar3 = *(ulonglong *)(uVar10 - 8), puVar5 = auStack_48, 0x1f < (uVar10 - uVar3) - 8))
    goto LAB_1400eb3a8;
  }
  else {
    if (uVar8 < 0x1000) {
      unaff_RBX = FUN_14028af20(uVar8);
      goto LAB_1400eb329;
    }
    if (uVar8 + 0x27 <= uVar8) goto LAB_1400eb3f3;
    lVar6 = FUN_14028af20();
    if (lVar6 != 0) {
      unaff_RBX = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar6;
      goto LAB_1400eb329;
    }
LAB_1400eb3a8:
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar5 = auStack_40;
  }
  *(undefined8 *)(puVar5 + -8) = 0x1400eb3b7;
  thunk_FUN_14028af80(uVar3);
LAB_1400eb3b7:
  *param_1 = unaff_RBX;
  param_1[1] = uVar7 * 0x10 + unaff_RBX;
  param_1[2] = uVar8 + unaff_RBX;
  return;
}

