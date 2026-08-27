// Function: FUN_1401e6b40
// Addr: 1401e6b40
// Size: 1025 bytes


void FUN_1401e6b40(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  *param_1 = &PTR_FUN_140490488;
  if (*(longlong *)(param_1[0x19] + 0x60) == param_1[0x59]) {
    *(undefined8 *)(param_1[0x19] + 0x60) = 0;
  }
  lVar2 = param_1[0x59];
  if (lVar2 != 0) {
    lVar14 = param_1[0x19];
    *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + -1;
    if (*(int *)(lVar2 + 0x2c) < 1) {
      FUN_1401ab5f0(lVar14 + 0x16c0);
    }
  }
  lVar2 = param_1[0x5a];
  if (lVar2 != 0) {
    lVar14 = param_1[0x19];
    *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + -1;
    if (*(int *)(lVar2 + 0x2c) < 1) {
      FUN_1401ab5f0(lVar14 + 0x16c0);
    }
  }
  puVar3 = (undefined8 *)param_1[0x5b];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x5c];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x5d];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x58] != 0) {
    FUN_140150ac0(param_1[0x19] + 0x1630);
  }
  plVar7 = (longlong *)param_1[0x61];
  plVar4 = (longlong *)param_1[0x62];
  do {
    if (plVar7 == plVar4) {
      FUN_14000d9e0(param_1 + 0x61);
      FUN_14000d9e0(param_1 + 0x53);
      FUN_14015a700(param_1 + 0x51);
      FUN_14000d9e0(param_1 + 0x4b);
      FUN_14015a780(param_1 + 0x49);
      FUN_1401de1e0(param_1);
      return;
    }
    lVar2 = param_1[0x19];
    lVar14 = *plVar7;
    FUN_140176f70(lVar2 + 0x1708,lVar14,0);
    lVar5 = *(longlong *)(lVar14 + 0xd8);
    for (lVar10 = *(longlong *)(lVar14 + 0xd0); lVar10 != lVar5; lVar10 = lVar10 + 0x30) {
      if (*(longlong *)(lVar10 + 8) != 0) {
        FUN_140150ac0(lVar2 + 0x1630);
      }
    }
    lVar10 = *(longlong *)(lVar14 + 0xd0);
    lVar5 = *(longlong *)(lVar14 + 0xd8);
    if (lVar10 != lVar5) {
      do {
        FUN_14000d9e0(lVar10 + 0x18);
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != lVar5);
      *(undefined8 *)(lVar14 + 0xd8) = *(undefined8 *)(lVar14 + 0xd0);
    }
    plVar9 = *(longlong **)(lVar14 + 0xf0);
    for (plVar11 = *(longlong **)(lVar14 + 0xe8); plVar11 != plVar9; plVar11 = plVar11 + 10) {
      lVar10 = *plVar11;
      if ((lVar10 != 0) &&
         (*(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + -1, *(int *)(lVar10 + 0x2c) < 1)) {
        FUN_1401ab5f0(lVar2 + 0x16c0);
      }
    }
    lVar10 = *(longlong *)(lVar14 + 0xe8);
    lVar5 = *(longlong *)(lVar14 + 0xf0);
    if (lVar10 != lVar5) {
      do {
        FUN_140017240(lVar10 + 0x28);
        lVar10 = lVar10 + 0x50;
      } while (lVar10 != lVar5);
      *(undefined8 *)(lVar14 + 0xf0) = *(undefined8 *)(lVar14 + 0xe8);
    }
    plVar9 = *(longlong **)(lVar2 + 0x1480);
    if (plVar9 == *(longlong **)(lVar2 + 0x1488)) {
      uVar15 = (longlong)plVar9 - *(longlong *)(lVar2 + 0x1478);
      lVar10 = (longlong)uVar15 >> 3;
      if (lVar10 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar8 = (longlong)*(longlong **)(lVar2 + 0x1488) - *(longlong *)(lVar2 + 0x1478) >> 3;
      puVar12 = auStack_58;
      if (0x1fffffffffffffff - (uVar8 >> 1) < uVar8) {
LAB_1401e6f37:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar12 + -8) = &UNK_1401e6f3c;
        FUN_140017370();
      }
      uVar8 = (uVar8 >> 1) + uVar8;
      uVar1 = lVar10 + 1;
      uVar13 = uVar1;
      if (uVar1 <= uVar8) {
        uVar13 = uVar8;
      }
      puVar12 = auStack_58;
      if (0x1fffffffffffffff < uVar13) goto LAB_1401e6f37;
      uVar8 = uVar13 * 8;
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else if (uVar8 < 0x1000) {
        uVar8 = FUN_14028af20();
      }
      else {
        puVar12 = auStack_58;
        if (uVar8 + 0x27 <= uVar8) goto LAB_1401e6f37;
        lVar10 = FUN_14028af20(uVar8 + 0x27);
        if (lVar10 == 0) {
          pcVar6 = (code *)swi(0x29);
          (*pcVar6)(5);
          puVar12 = auStack_50;
          goto LAB_1401e6f37;
        }
        uVar8 = lVar10 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar8 - 8) = lVar10;
      }
      uVar15 = uVar15 & 0xfffffffffffffff8;
      *(longlong *)(uVar15 + uVar8) = lVar14;
      plVar11 = *(longlong **)(lVar2 + 0x1478);
      if (plVar9 == *(longlong **)(lVar2 + 0x1480)) {
        lVar14 = (longlong)*(longlong **)(lVar2 + 0x1480) - (longlong)plVar11;
        uVar15 = uVar8;
        plVar9 = plVar11;
      }
      else {
        FUN_1404210f0(uVar8,plVar11,(longlong)plVar9 - (longlong)plVar11);
        uVar15 = uVar8 + 8 + uVar15;
        lVar14 = *(longlong *)(lVar2 + 0x1480) - (longlong)plVar9;
      }
      FUN_1404210f0(uVar15,plVar9,lVar14);
      FUN_1400384c0(lVar2 + 0x1478,uVar8,uVar1,uVar13);
    }
    else {
      *plVar9 = lVar14;
      *(longlong *)(lVar2 + 0x1480) = *(longlong *)(lVar2 + 0x1480) + 8;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}

