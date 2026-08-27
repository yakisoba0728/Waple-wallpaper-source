// Function: FUN_1400ea9f0
// Addr: 1400ea9f0
// Size: 616 bytes


void FUN_1400ea9f0(longlong param_1,int param_2,ulonglong param_3,int param_4)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];
  
  puVar7 = auStack_98;
  puVar10 = *(undefined8 **)(param_1 + 0x40);
  lVar11 = *(longlong *)(param_1 + 0x38);
  uVar9 = 0;
  uVar13 = (longlong)puVar10 - lVar11 >> 4;
  puVar8 = auStack_98;
  if ((ulonglong)(longlong)param_2 < uVar13) goto LAB_1400eabc5;
  uVar6 = (ulonglong)(param_2 + 1);
  if (uVar6 < uVar13) {
    *(ulonglong *)(param_1 + 0x40) = uVar6 * 0x10 + lVar11;
    puVar8 = auStack_98;
    goto LAB_1400eabc5;
  }
  puVar8 = auStack_98;
  if (uVar6 <= uVar13) goto LAB_1400eabc5;
  uVar5 = *(longlong *)(param_1 + 0x48) - lVar11 >> 4;
  if (uVar6 <= uVar5) {
    for (lVar11 = uVar6 - uVar13; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10 = puVar10 + 2;
    }
    *(undefined8 **)(param_1 + 0x40) = puVar10;
    puVar8 = auStack_98;
    goto LAB_1400eabc5;
  }
  if (0xfffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  if ((0xfffffffffffffff - (uVar5 >> 1) < uVar5) ||
     ((uVar5 = (uVar5 >> 1) + uVar5, uVar12 = uVar6, uVar6 <= uVar5 &&
      (uVar12 = uVar5, 0xfffffffffffffff < uVar5)))) {
LAB_1400eac4e:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar12 = uVar12 * 0x10;
  if (uVar12 == 0) {
LAB_1400eaaf4:
    puVar10 = (undefined8 *)(((longlong)puVar10 - lVar11 & 0xfffffffffffffff0U) + uVar9);
    for (lVar11 = uVar6 - uVar13; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10 = puVar10 + 2;
    }
    FUN_1404210f0(uVar9);
    lVar11 = *(longlong *)(param_1 + 0x38);
    if (lVar11 != 0) {
      lVar4 = lVar11;
      puVar7 = auStack_98;
      if ((0xfff < (*(longlong *)(param_1 + 0x48) - lVar11 & 0xfffffffffffffff0U)) &&
         (lVar4 = *(longlong *)(lVar11 + -8), puVar7 = auStack_98, param_3 = uVar9,
         0x1f < (lVar11 - lVar4) - 8U)) goto LAB_1400eab6c;
      goto LAB_1400eab76;
    }
  }
  else {
    if (uVar12 < 0x1000) {
      uVar9 = FUN_14028af20(uVar12);
      goto LAB_1400eaaf4;
    }
    if (uVar12 + 0x27 <= uVar12) goto LAB_1400eac4e;
    lVar4 = FUN_14028af20();
    if (lVar4 != 0) {
      uVar9 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar9 - 8) = lVar4;
      goto LAB_1400eaaf4;
    }
LAB_1400eab6c:
    pcVar3 = (code *)swi(0x29);
    lVar4 = (*pcVar3)(5);
    puVar7 = auStack_90;
    uVar9 = param_3;
LAB_1400eab76:
    *(undefined8 *)(puVar7 + -8) = 0x1400eab7b;
    thunk_FUN_14028af80(lVar4);
  }
  *(ulonglong *)(param_1 + 0x38) = uVar9;
  param_3 = *(ulonglong *)(puVar7 + 0xb0);
  *(ulonglong *)(param_1 + 0x40) = uVar6 * 0x10 + uVar9;
  *(ulonglong *)(param_1 + 0x48) = uVar12 + uVar9;
  puVar8 = puVar7;
LAB_1400eabc5:
  bVar1 = puVar8[0xc0];
  lVar11 = *(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x10;
  *(int *)(lVar11 + 8) = param_4;
  *(int *)(lVar11 + 0xc) = param_4;
  *(uint *)(puVar8 + 0x34) = ((bVar1 & 2) != 0) + 1;
  *(int *)(puVar8 + 0x30) = param_4 * 2;
  puVar10 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(puVar8 + 0x40) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0;
  *(undefined4 *)(puVar8 + 0x38) = 2;
  *(uint *)(puVar8 + 0x3c) = (bVar1 & 2) << 0xf;
  *(ulonglong *)(puVar8 + 0x20) = param_3;
  plVar2 = (longlong *)*puVar10;
  puVar7 = puVar8 + 0x20;
  if (param_3 == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  pcVar3 = *(code **)(*plVar2 + 0x18);
  *(undefined8 *)(puVar8 + -8) = 0x1400eac3d;
  (*pcVar3)(plVar2,puVar8 + 0x30,puVar7);
  return;
}

