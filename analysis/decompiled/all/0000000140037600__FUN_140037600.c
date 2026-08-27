// Function: FUN_140037600
// Addr: 140037600
// Size: 358 bytes


void FUN_140037600(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *unaff_RDI;
  undefined8 *puVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar1 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  if (param_2 <= (ulonglong)((longlong)puVar1 - (longlong)puVar8 >> 3)) {
    uVar5 = ((longlong)puVar1 - (longlong)puVar8) + 7;
    uVar6 = uVar5 >> 3;
    if (puVar1 < puVar8) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      return;
    }
    uVar5 = uVar5 & 0xfffffffffffffff8;
    if (puVar1 < puVar8) {
      uVar5 = 0;
    }
    for (uVar5 = uVar5 / 8; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = param_3;
      puVar8 = puVar8 + 1;
    }
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_140037761:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar5 = param_2 * 8;
  if (uVar5 == 0) {
    unaff_RDI = (undefined8 *)0x0;
LAB_140037695:
    uVar6 = *param_1;
    if (param_1[2] - uVar6 < 8) goto LAB_1400376e0;
    uVar4 = uVar6;
    puVar7 = auStack_28;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar6) >> 3) * 8)) &&
       (uVar4 = *(ulonglong *)(uVar6 - 8), puVar7 = auStack_28, 0x1f < (uVar6 - uVar4) - 8))
    goto LAB_1400376d1;
  }
  else {
    if (uVar5 < 0x1000) {
      unaff_RDI = (undefined8 *)FUN_14028af20(uVar5);
      goto LAB_140037695;
    }
    if (uVar5 + 0x27 <= uVar5) goto LAB_140037761;
    lVar3 = FUN_14028af20();
    if (lVar3 != 0) {
      unaff_RDI = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar3;
      goto LAB_140037695;
    }
LAB_1400376d1:
    pcVar2 = (code *)swi(0x29);
    uVar4 = (*pcVar2)(5);
    puVar7 = auStack_20;
  }
  *(undefined8 *)(puVar7 + -8) = 0x1400376e0;
  thunk_FUN_14028af80(uVar4);
LAB_1400376e0:
  *param_1 = (ulonglong)unaff_RDI;
  puVar1 = unaff_RDI + param_2;
  param_1[1] = (ulonglong)puVar1;
  param_1[2] = (ulonglong)puVar1;
  if (uVar5 != 0) {
    do {
      *unaff_RDI = param_3;
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != puVar1);
  }
  return;
}

