// Function: FUN_1401d8ec0
// Addr: 1401d8ec0
// Size: 442 bytes


undefined8 * FUN_1401d8ec0(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *unaff_RBP;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 != (undefined8 *)param_1[2]) {
    *(undefined4 *)((longlong)puVar6 + 0x13) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x17) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined2 *)(puVar6 + 2) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x12) = 0;
    puVar6[3] = 0;
    puVar6 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar6 + 4);
    return puVar6;
  }
  puVar12 = (undefined8 *)((longlong)puVar6 - *param_1);
  if ((longlong)puVar12 >> 5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = param_1[2] - *param_1 >> 5;
  if (0x7ffffffffffffff - (uVar4 >> 1) < uVar4) {
LAB_1401d9076:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar10 = ((longlong)puVar12 >> 5) + 1;
  uVar4 = (uVar4 >> 1) + uVar4;
  uVar11 = uVar10;
  if (uVar10 <= uVar4) {
    uVar11 = uVar4;
  }
  if (0x7ffffffffffffff < uVar11) goto LAB_1401d9076;
  uVar4 = uVar11 * 0x20;
  puVar8 = (undefined8 *)0x0;
  if (uVar4 == 0) {
LAB_1401d8fb1:
    puVar12 = (undefined8 *)(((ulonglong)puVar12 & 0xffffffffffffffe0) + (longlong)puVar8);
    *(undefined4 *)((longlong)puVar12 + 0x13) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x17) = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    *(undefined2 *)(puVar12 + 2) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x12) = 0;
    puVar12[3] = 0;
    puVar1 = (undefined8 *)*param_1;
    if (puVar6 == (undefined8 *)param_1[1]) {
      lVar9 = param_1[1] - (longlong)puVar1;
      puVar5 = puVar8;
      puVar6 = puVar1;
    }
    else {
      FUN_1404210f0(puVar8,puVar1,(longlong)puVar6 - (longlong)puVar1);
      puVar5 = puVar12 + 4;
      lVar9 = param_1[1] - (longlong)puVar6;
    }
    FUN_1404210f0(puVar5,puVar6,lVar9);
    lVar9 = *param_1;
    if (lVar9 == 0) goto LAB_1401d9048;
    lVar3 = lVar9;
    puVar7 = auStack_58;
    if ((0xfff < (param_1[2] - lVar9 & 0xffffffffffffffe0U)) &&
       (lVar3 = *(longlong *)(lVar9 + -8), puVar7 = auStack_58, unaff_RBP = puVar8,
       0x1f < (lVar9 - lVar3) - 8U)) goto LAB_1401d9039;
  }
  else {
    if (uVar4 < 0x1000) {
      puVar8 = (undefined8 *)FUN_14028af20(uVar4);
      goto LAB_1401d8fb1;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_1401d9076;
    lVar9 = FUN_14028af20();
    if (lVar9 != 0) {
      puVar8 = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
      puVar8[-1] = lVar9;
      goto LAB_1401d8fb1;
    }
LAB_1401d9039:
    pcVar2 = (code *)swi(0x29);
    lVar3 = (*pcVar2)(5);
    puVar7 = auStack_50;
    puVar8 = unaff_RBP;
  }
  *(undefined8 *)(puVar7 + -8) = 0x1401d9048;
  thunk_FUN_14028af80(lVar3);
LAB_1401d9048:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar10 * 4);
  param_1[2] = (longlong)(puVar8 + uVar11 * 4);
  return puVar12;
}

