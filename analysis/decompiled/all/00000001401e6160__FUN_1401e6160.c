// Function: FUN_1401e6160
// Addr: 1401e6160
// Size: 343 bytes


void FUN_1401e6160(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar7 = auStack_48;
  puVar8 = auStack_48;
  FUN_140177040(param_2 + 0x1708,param_1,0);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  for (lVar5 = *(longlong *)(param_1 + 0xd0); lVar5 != lVar1; lVar5 = lVar5 + 0x30) {
    if (*(longlong *)(lVar5 + 8) != 0) {
      FUN_140150b90(param_2 + 0x1630);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xd0);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if (lVar5 != lVar1) {
    do {
      func_0x00014000dab0(lVar5 + 0x18);
      lVar5 = lVar5 + 0x30;
    } while (lVar5 != lVar1);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
  }
  plVar2 = *(longlong **)(param_1 + 0xf0);
  for (plVar6 = *(longlong **)(param_1 + 0xe8); plVar6 != plVar2; plVar6 = plVar6 + 10) {
    lVar5 = *plVar6;
    if ((lVar5 != 0) &&
       (*(int *)(lVar5 + 0x2c) = *(int *)(lVar5 + 0x2c) + -1, *(int *)(lVar5 + 0x2c) < 1)) {
      func_0x0001401ab6c0(param_2 + 0x16c0);
    }
  }
  if (*(longlong *)(param_1 + 0xe8) != *(longlong *)(param_1 + 0xf0)) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(*(longlong *)(param_1 + 0xe8) + 0x28);
  }
  plVar2 = *(longlong **)(param_2 + 0x1480);
  if (plVar2 != *(longlong **)(param_2 + 0x1488)) {
    *plVar2 = param_1;
    *(longlong *)(param_2 + 0x1480) = *(longlong *)(param_2 + 0x1480) + 8;
    return;
  }
  uVar10 = (longlong)plVar2 - *(longlong *)(param_2 + 0x1478);
  lVar5 = (longlong)uVar10 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar4 = (longlong)*(longlong **)(param_2 + 0x1488) - *(longlong *)(param_2 + 0x1478) >> 3;
  if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
    uVar9 = lVar5 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 < 0x2000000000000000) {
      uVar9 = uVar9 * 8;
      if (uVar9 == 0) {
        uVar4 = 0;
        puVar8 = auStack_48;
      }
      else if (uVar9 < 0x1000) {
        uVar4 = func_0x00014028aff0();
      }
      else {
        if (uVar9 + 0x27 <= uVar9) goto LAB_1401e63c2;
        lVar5 = func_0x00014028aff0(uVar9 + 0x27);
        if (lVar5 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar5 = (*pcVar3)(5);
          puVar7 = auStack_40;
        }
        uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar5;
        puVar8 = puVar7;
      }
      *(longlong *)((uVar10 & 0xfffffffffffffff8) + uVar4) = param_1;
      plVar6 = *(longlong **)(param_2 + 0x1480);
      lVar5 = *(longlong *)(param_2 + 0x1478);
      if (plVar2 != plVar6) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar8 + -8) = 0x1401e6375;
        FUN_1404211c0(uVar4,lVar5,(longlong)plVar2 - lVar5);
      }
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar8 + -8) = 0x1401e638e;
      FUN_1404211c0(uVar4,lVar5,(longlong)plVar6 - lVar5);
    }
  }
LAB_1401e63c2:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

