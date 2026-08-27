// Function: FUN_14009c1a0
// Addr: 14009c1a0
// Size: 421 bytes


undefined4 * FUN_14009c1a0(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [40];
  
  puVar7 = auStack_58;
  puVar8 = (undefined8 *)0x0;
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar5 = FUN_14028af20(0x18);
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar5 + 8) = lVar5;
  *(longlong *)(param_1 + 2) = lVar5;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  uVar2 = *(undefined8 *)(param_1 + 2);
  uVar9 = *(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 6) >> 3;
  if (uVar9 <= (ulonglong)(*(longlong *)(param_1 + 8) >> 3)) {
    uVar9 = *(longlong *)(param_1 + 8) + 7;
    puVar7 = auStack_58;
    if (7 < uVar9) {
      for (uVar9 = (uVar9 & 0xfffffffffffffff8) / 8; puVar7 = auStack_58, uVar9 != 0;
          uVar9 = uVar9 - 1) {
        *puVar8 = uVar2;
        puVar8 = puVar8 + 1;
      }
    }
    goto LAB_14009c2ff;
  }
  if (0x1fffffffffffffff < uVar9) {
LAB_14009c340:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar1 = uVar9 * 8;
  if (uVar1 == 0) {
LAB_14009c26e:
    lVar5 = *(longlong *)(param_1 + 6);
    if (*(longlong *)(param_1 + 10) - lVar5 != 0) {
      lVar6 = lVar5;
      puVar7 = auStack_58;
      if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 10) - lVar5 >> 3) * 8)) &&
         (lVar6 = *(longlong *)(lVar5 + -8), puVar7 = auStack_58, 0x1f < (lVar5 - lVar6) - 8U))
      goto LAB_14009c2a7;
      goto LAB_14009c2b1;
    }
  }
  else {
    if (uVar1 < 0x1000) {
      puVar8 = (undefined8 *)FUN_14028af20(uVar1);
      goto LAB_14009c26e;
    }
    if (uVar1 + 0x27 <= uVar1) goto LAB_14009c340;
    lVar5 = FUN_14028af20();
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      puVar8[-1] = lVar5;
      goto LAB_14009c26e;
    }
LAB_14009c2a7:
    pcVar4 = (code *)swi(0x29);
    lVar6 = (*pcVar4)(5);
    puVar7 = auStack_50;
LAB_14009c2b1:
    *(undefined8 *)(puVar7 + -8) = 0x14009c2b6;
    thunk_FUN_14028af80(lVar6);
  }
  *(undefined8 **)(param_1 + 6) = puVar8;
  puVar3 = puVar8 + uVar9;
  *(undefined8 **)(param_1 + 8) = puVar3;
  *(undefined8 **)(param_1 + 10) = puVar3;
  if (uVar1 != 0) {
    do {
      *puVar8 = uVar2;
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar3);
  }
LAB_14009c2ff:
  puVar8 = *(undefined8 **)(param_2 + 2);
  for (puVar3 = (undefined8 *)*puVar8; puVar3 != puVar8; puVar3 = (undefined8 *)*puVar3) {
    *(undefined8 *)(puVar7 + -8) = 0x14009c321;
    FUN_1400cb3b0(param_1,puVar7 + 0x20,puVar3 + 2);
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  return param_1;
}

