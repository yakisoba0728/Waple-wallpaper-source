// Function: FUN_14010f660
// Addr: 14010f660
// Size: 776 bytes


undefined4
FUN_14010f660(longlong param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong local_58;
  
  puVar10 = auStack_78;
  uVar11 = (ulonglong)param_3;
  uVar5 = thunk_FUN_14028af20(param_2 * param_3 * 3);
  local_58 = param_1 + 0x2f0;
  iVar4 = FUN_140290d80(local_58);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x33c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x33c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1;
  puVar9 = *(undefined4 **)(param_1 + 0x2d8);
  uVar1 = *(undefined4 *)(param_1 + 0x2e8);
  if (puVar9 != *(undefined4 **)(param_1 + 0x2e0)) {
    *(undefined8 *)(puVar9 + 6) = param_5;
    *puVar9 = uVar1;
    puVar9[1] = param_2;
    puVar9[2] = param_3;
    puVar9[3] = 0;
    *(undefined8 *)(puVar9 + 4) = param_4;
    *(undefined8 *)(puVar9 + 8) = uVar5;
    *(longlong *)(param_1 + 0x2d8) = *(longlong *)(param_1 + 0x2d8) + 0x28;
    puVar10 = auStack_78;
    goto LAB_14010f91a;
  }
  lVar13 = ((longlong)puVar9 - *(longlong *)(param_1 + 0x2d0)) / 0x28;
  if (lVar13 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar12 = ((longlong)*(undefined4 **)(param_1 + 0x2e0) - *(longlong *)(param_1 + 0x2d0) >> 3) *
           -0x3333333333333333;
  uVar6 = 0x666666666666666 - (uVar12 >> 1);
  if (uVar6 <= uVar12 && uVar12 - uVar6 != 0) {
LAB_14010f948:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar12 = (uVar12 >> 1) + uVar12;
  uVar6 = lVar13 + 1;
  uVar7 = uVar6;
  if (uVar6 <= uVar12) {
    uVar7 = uVar12;
  }
  if (0x666666666666666 < uVar7) goto LAB_14010f948;
  uVar7 = uVar7 * 0x28;
  if (uVar7 == 0) {
    uVar11 = 0;
LAB_14010f7ff:
    *(int *)(uVar11 + 4 + lVar13 * 0x28) = param_2;
    *(uint *)(uVar11 + 8 + lVar13 * 0x28) = param_3;
    *(undefined8 *)(uVar11 + 0x10 + lVar13 * 0x28) = param_4;
    *(undefined8 *)(uVar11 + 0x18 + lVar13 * 0x28) = param_5;
    *(undefined8 *)(uVar11 + 0x20 + lVar13 * 0x28) = uVar5;
    *(undefined4 *)(uVar11 + lVar13 * 0x28) = uVar1;
    *(undefined4 *)(uVar11 + 0xc + lVar13 * 0x28) = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x2d0);
    if (puVar9 == *(undefined4 **)(param_1 + 0x2d8)) {
      lVar13 = (longlong)*(undefined4 **)(param_1 + 0x2d8) - (longlong)puVar2;
      uVar12 = uVar11;
      puVar9 = puVar2;
    }
    else {
      FUN_1404210f0(uVar11,puVar2,(longlong)puVar9 - (longlong)puVar2);
      uVar12 = uVar11 + (lVar13 * 5 + 5) * 8;
      lVar13 = *(longlong *)(param_1 + 0x2d8) - (longlong)puVar9;
    }
    FUN_1404210f0(uVar12,puVar9,lVar13);
    lVar13 = *(longlong *)(param_1 + 0x2d0);
    if (lVar13 != 0) {
      lVar8 = lVar13;
      puVar10 = auStack_78;
      if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0x2e0) - lVar13 >> 3) * 8)) &&
         (lVar8 = *(longlong *)(lVar13 + -8), puVar10 = auStack_78, 0x1f < (lVar13 - lVar8) - 8U))
      goto LAB_14010f8e0;
      goto LAB_14010f8ea;
    }
  }
  else {
    if (uVar7 < 0x1000) {
      uVar11 = FUN_14028af20(uVar7);
      goto LAB_14010f7ff;
    }
    if (uVar7 + 0x27 <= uVar7) goto LAB_14010f948;
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      uVar11 = lVar8 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar11 - 8) = lVar8;
      goto LAB_14010f7ff;
    }
LAB_14010f8e0:
    lVar8 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar10 = auStack_70;
LAB_14010f8ea:
    *(undefined8 *)(puVar10 + -8) = 0x14010f8f2;
    thunk_FUN_14028af80(lVar8);
  }
  *(ulonglong *)(param_1 + 0x2d0) = uVar11;
  *(ulonglong *)(param_1 + 0x2d8) = uVar11 + uVar6 * 0x28;
  *(ulonglong *)(param_1 + 0x2e0) = uVar7 + uVar11;
LAB_14010f91a:
  *(undefined8 *)(puVar10 + -8) = 0x14010f924;
  FUN_140290ea0(*(undefined8 *)(puVar10 + 0x20));
  return uVar1;
}

