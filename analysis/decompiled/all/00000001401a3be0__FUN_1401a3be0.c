// Function: FUN_1401a3be0
// Addr: 1401a3be0
// Size: 493 bytes


void FUN_1401a3be0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong unaff_RBP;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar11 = auStack_68;
  puVar10 = auStack_68;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != *(longlong *)(param_1 + 0x28)) {
    *(undefined8 *)(lVar6 + 0x38) = 0;
    FUN_140037830(lVar6);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 0x40;
    goto LAB_1401a3d99;
  }
  uVar14 = lVar6 - *(longlong *)(param_1 + 0x18);
  lVar5 = (longlong)uVar14 >> 6;
  if (lVar5 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar1 = lVar5 + 1;
  uVar7 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x18) >> 6;
  uVar12 = 0;
  if (0x3ffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar13 = 0xffffffffffffffc0;
    uVar7 = 0xffffffffffffffe7;
LAB_1401a3cae:
    lVar5 = FUN_14028af20(uVar7);
    uVar12 = unaff_RBP;
    if (lVar5 != 0) {
      uVar12 = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar12 - 8) = lVar5;
      goto LAB_1401a3cd2;
    }
LAB_1401a3d73:
    pcVar4 = (code *)swi(0x29);
    lVar6 = (*pcVar4)(5);
    puVar10 = auStack_60;
LAB_1401a3d7d:
    *(undefined8 *)(puVar10 + -8) = 0x1401a3d82;
    thunk_FUN_14028af80(lVar6);
    puVar11 = puVar10;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar13 = uVar1;
    if (uVar1 <= uVar7) {
      uVar13 = uVar7;
    }
    if (0x3ffffffffffffff < uVar13) {
LAB_1401a3dc9:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar13 = uVar13 * 0x40;
    if (uVar13 != 0) {
      if (0xfff < uVar13) {
        uVar7 = uVar13 | 0x27;
        if (uVar7 <= uVar13) goto LAB_1401a3dc9;
        goto LAB_1401a3cae;
      }
      uVar12 = FUN_14028af20();
    }
LAB_1401a3cd2:
    lVar15 = (uVar14 & 0xffffffffffffffc0) + uVar12;
    *(undefined8 *)(lVar15 + 0x38) = 0;
    FUN_140037830(lVar15,param_2);
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar8 = *(longlong *)(param_1 + 0x18);
    uVar14 = uVar12;
    if (lVar6 != lVar5) {
      FUN_1401a5bd0(*(longlong *)(param_1 + 0x18),lVar6,uVar12);
      lVar5 = *(longlong *)(param_1 + 0x20);
      uVar14 = lVar15 + 0x40;
      lVar8 = lVar6;
    }
    FUN_1401a5bd0(lVar8,lVar5,uVar14);
    plVar9 = *(longlong **)(param_1 + 0x18);
    puVar11 = auStack_68;
    if (plVar9 != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x20);
      for (; plVar9 != plVar2; plVar9 = plVar9 + 8) {
        plVar3 = (longlong *)plVar9[7];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar9);
          plVar9[7] = 0;
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x18);
      if ((0xfff < (*(longlong *)(param_1 + 0x28) - lVar6 & 0xffffffffffffffc0U)) &&
         (lVar5 = lVar6 - *(longlong *)(lVar6 + -8), lVar6 = *(longlong *)(lVar6 + -8),
         puVar10 = auStack_68, 0x1f < lVar5 - 8U)) goto LAB_1401a3d73;
      goto LAB_1401a3d7d;
    }
  }
  *(ulonglong *)(param_1 + 0x18) = uVar12;
  *(ulonglong *)(param_1 + 0x20) = uVar1 * 0x40 + uVar12;
  *(ulonglong *)(param_1 + 0x28) = uVar13 + uVar12;
LAB_1401a3d99:
  plVar9 = (longlong *)param_2[7];
  if (plVar9 != (longlong *)0x0) {
    pcVar4 = *(code **)(*plVar9 + 0x20);
    *(undefined8 *)(puVar11 + -8) = 0x1401a3dae;
    (*pcVar4)(plVar9,plVar9 != param_2);
    param_2[7] = 0;
  }
  return;
}

