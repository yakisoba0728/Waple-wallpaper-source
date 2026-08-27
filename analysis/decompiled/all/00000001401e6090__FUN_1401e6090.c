// Function: FUN_1401e6090
// Addr: 1401e6090
// Size: 614 bytes


void FUN_1401e6090(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  FUN_140176f70(param_2 + 0x1708,param_1,0);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  for (lVar6 = *(longlong *)(param_1 + 0xd0); lVar6 != lVar2; lVar6 = lVar6 + 0x30) {
    if (*(longlong *)(lVar6 + 8) != 0) {
      FUN_140150ac0(param_2 + 0x1630);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0xd0);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar6 != lVar2) {
    do {
      FUN_14000d9e0(lVar6 + 0x18);
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar2);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
  }
  plVar5 = *(longlong **)(param_1 + 0xf0);
  for (plVar7 = *(longlong **)(param_1 + 0xe8); plVar7 != plVar5; plVar7 = plVar7 + 10) {
    lVar6 = *plVar7;
    if ((lVar6 != 0) &&
       (*(int *)(lVar6 + 0x2c) = *(int *)(lVar6 + 0x2c) + -1, *(int *)(lVar6 + 0x2c) < 1)) {
      FUN_1401ab5f0(param_2 + 0x16c0);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0xe8);
  lVar2 = *(longlong *)(param_1 + 0xf0);
  if (lVar6 != lVar2) {
    do {
      FUN_140017240(lVar6 + 0x28);
      lVar6 = lVar6 + 0x50;
    } while (lVar6 != lVar2);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xe8);
  }
  plVar5 = *(longlong **)(param_2 + 0x1480);
  if (plVar5 != *(longlong **)(param_2 + 0x1488)) {
    *plVar5 = param_1;
    *(longlong *)(param_2 + 0x1480) = *(longlong *)(param_2 + 0x1480) + 8;
    return;
  }
  uVar11 = (longlong)plVar5 - *(longlong *)(param_2 + 0x1478);
  lVar6 = (longlong)uVar11 >> 3;
  if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = (longlong)*(longlong **)(param_2 + 0x1488) - *(longlong *)(param_2 + 0x1478) >> 3;
  if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
    uVar1 = lVar6 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar1;
    if (uVar1 <= uVar4) {
      uVar10 = uVar4;
    }
    if (uVar10 < 0x2000000000000000) {
      uVar4 = uVar10 * 8;
      if (uVar4 == 0) {
        uVar4 = 0;
        puVar9 = auStack_48;
      }
      else if (uVar4 < 0x1000) {
        uVar4 = FUN_14028af20();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1401e62f2;
        lVar6 = FUN_14028af20(uVar4 + 0x27);
        if (lVar6 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar6 = (*pcVar3)(5);
          puVar8 = auStack_40;
        }
        uVar4 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar6;
        puVar9 = puVar8;
      }
      uVar11 = uVar11 & 0xfffffffffffffff8;
      *(longlong *)(uVar11 + uVar4) = param_1;
      plVar7 = *(longlong **)(param_2 + 0x1478);
      if (plVar5 == *(longlong **)(param_2 + 0x1480)) {
        lVar6 = (longlong)*(longlong **)(param_2 + 0x1480) - (longlong)plVar7;
        uVar11 = uVar4;
        plVar5 = plVar7;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x1401e62a5;
        FUN_1404210f0(uVar4,plVar7,(longlong)plVar5 - (longlong)plVar7);
        uVar11 = uVar11 + 8 + uVar4;
        lVar6 = *(longlong *)(param_2 + 0x1480) - (longlong)plVar5;
      }
      *(undefined8 *)(puVar9 + -8) = 0x1401e62be;
      FUN_1404210f0(uVar11,plVar5,lVar6);
      FUN_1400384c0(param_2 + 0x1478,uVar4,uVar1,uVar10);
      return;
    }
  }
LAB_1401e62f2:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

