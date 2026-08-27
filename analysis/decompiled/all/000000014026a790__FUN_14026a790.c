// Function: FUN_14026a790
// Addr: 14026a790
// Size: 569 bytes


void FUN_14026a790(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *unaff_RBP;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  if (0x3ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  lVar4 = param_1[1];
  puVar9 = (undefined4 *)0x0;
  lVar5 = *param_1;
  uVar6 = param_1[2] - lVar5 >> 6;
  if (0x3ffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar10 = 0xffffffffffffffc0;
    uVar6 = 0xffffffffffffffe7;
LAB_14026a83e:
    lVar3 = FUN_14028af20(uVar6);
    puVar9 = unaff_RBP;
    if (lVar3 != 0) {
      puVar9 = (undefined4 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar9 + -2) = lVar3;
      goto LAB_14026a862;
    }
LAB_14026a979:
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
    puVar8 = auStack_40;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar10 = param_2;
    if ((param_2 <= uVar6) && (uVar10 = uVar6, 0x3ffffffffffffff < uVar6)) {
LAB_14026a9c5:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar10 = uVar10 * 0x40;
    if (uVar10 != 0) {
      if (0xfff < uVar10) {
        uVar6 = uVar10 | 0x27;
        if (uVar6 <= uVar10) goto LAB_14026a9c5;
        goto LAB_14026a83e;
      }
      puVar9 = (undefined4 *)FUN_14028af20();
    }
LAB_14026a862:
    uVar6 = lVar4 - lVar5;
    FUN_14026a9d0((uVar6 & 0xffffffffffffffc0) + (longlong)puVar9,param_2 - ((longlong)uVar6 >> 6));
    puVar1 = (undefined4 *)param_1[1];
    puVar7 = puVar9;
    for (puVar11 = (undefined4 *)*param_1; puVar11 != puVar1; puVar11 = puVar11 + 0x10) {
      *puVar7 = *puVar11;
      *(undefined8 *)(puVar7 + 2) = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      lVar4 = FUN_14028af20(0x20);
      *(longlong *)lVar4 = lVar4;
      *(longlong *)(lVar4 + 8) = lVar4;
      *(longlong *)(puVar7 + 2) = lVar4;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 10) = 0;
      *(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(puVar11 + 0xc);
      *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)(puVar11 + 0xe);
      FUN_140011f50(puVar7 + 6,*(longlong *)(puVar11 + 8) - *(longlong *)(puVar11 + 6) >> 3,lVar4);
      FUN_14026c1c0(puVar7,**(undefined8 **)(puVar11 + 2),*(undefined8 **)(puVar11 + 2));
      puVar7 = puVar7 + 0x10;
    }
    lVar4 = *param_1;
    if (lVar4 == 0) goto LAB_14026a988;
    lVar5 = param_1[1];
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x40) {
      FUN_14000d9e0(lVar4 + 0x18);
      FUN_14003de70(lVar4 + 8);
    }
    lVar4 = *param_1;
    if ((0xfff < (param_1[2] - lVar4 & 0xffffffffffffffc0U)) &&
       (lVar5 = lVar4 - *(longlong *)(lVar4 + -8), lVar4 = *(longlong *)(lVar4 + -8),
       puVar8 = auStack_48, 0x1f < lVar5 - 8U)) goto LAB_14026a979;
  }
  *(undefined8 *)(puVar8 + -8) = 0x14026a988;
  thunk_FUN_14028af80(lVar4);
LAB_14026a988:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + param_2 * 0x10);
  param_1[2] = uVar10 + (longlong)puVar9;
  return;
}

