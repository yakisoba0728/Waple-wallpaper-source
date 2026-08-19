// Function: FUN_1401e6c10
// Addr: 1401e6c10
// Size: 44 bytes


/* WARNING: Removing unreachable block (ram,0x0001401de3c8) */
/* WARNING: Removing unreachable block (ram,0x0001401de388) */
/* WARNING: Removing unreachable block (ram,0x0001401de390) */
/* WARNING: Removing unreachable block (ram,0x0001401de3e0) */
/* WARNING: Removing unreachable block (ram,0x0001401de3f1) */
/* WARNING: Removing unreachable block (ram,0x0001401de3f7) */
/* WARNING: Removing unreachable block (ram,0x0001401de3fe) */
/* WARNING: Removing unreachable block (ram,0x0001401de401) */

void FUN_1401e6c10(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  *param_1 = &PTR_UNWIND_INFO_1401e6af9_UnwindCodes_1__UnwindOpCode_140490558;
  if (*(longlong *)(param_1[0x19] + 0x60) == param_1[0x59]) {
    *(undefined8 *)(param_1[0x19] + 0x60) = 0;
  }
  lVar7 = param_1[0x59];
  if (lVar7 != 0) {
    lVar1 = param_1[0x19];
    *(int *)(lVar7 + 0x2c) = *(int *)(lVar7 + 0x2c) + -1;
    if (*(int *)(lVar7 + 0x2c) < 1) {
      func_0x0001401ab6c0(lVar1 + 0x16c0);
    }
  }
  lVar7 = param_1[0x5a];
  if (lVar7 != 0) {
    lVar1 = param_1[0x19];
    *(int *)(lVar7 + 0x2c) = *(int *)(lVar7 + 0x2c) + -1;
    if (*(int *)(lVar7 + 0x2c) < 1) {
      func_0x0001401ab6c0(lVar1 + 0x16c0);
    }
  }
  puVar2 = (undefined8 *)param_1[0x5b];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x5c];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x5d];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1[0x58] != 0) {
    FUN_140150b90(param_1[0x19] + 0x1630);
  }
  plVar9 = (longlong *)param_1[0x61];
  plVar3 = (longlong *)param_1[0x62];
  while( true ) {
    if (plVar9 == plVar3) {
      func_0x00014000dab0(param_1 + 0x61);
      func_0x00014000dab0(param_1 + 0x53);
      func_0x00014015a7d0(param_1 + 0x51);
      func_0x00014000dab0(param_1 + 0x4b);
      func_0x00014015a850(param_1 + 0x49);
      *param_1 = &PTR_PTR_140490488;
      if (param_1[0x33] != param_1[0x34]) {
        lVar7 = param_1[0x34] - param_1[0x33];
        if (lVar7 != 0) {
          uVar8 = lVar7 >> 3;
          if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_140013120();
          }
          uVar8 = uVar8 * 8;
          if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(0,param_1[0x33],param_1[0x34] - param_1[0x33]);
          }
          if (uVar8 < 0x1000) {
            func_0x00014028aff0(uVar8);
            return;
          }
          if (uVar8 < uVar8 + 0x27) {
            func_0x00014028aff0();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        if (param_1[0x33] != param_1[0x34]) {
          param_1[0x34] = param_1[0x33];
        }
      }
      lVar7 = param_1[0x30];
      if (lVar7 != 0) {
        lVar7 = func_0x00014028f030(*(undefined8 *)(lVar7 + 0x198),*(undefined8 *)(lVar7 + 0x1a0),
                                    param_1);
        if (lVar7 != *(longlong *)(param_1[0x30] + 0x1a0)) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar7,lVar7 + 8,*(longlong *)(param_1[0x30] + 0x1a0) - (lVar7 + 8));
        }
        param_1[0x30] = 0;
        *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
      }
      plVar9 = *(longlong **)(param_1[0x19] + 0x1830);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x68))(plVar9,param_1);
      }
      FUN_140177040(param_1[0x19] + 0x1708,param_1,0);
      func_0x00014000dab0(param_1 + 0x42);
      func_0x000140049410(param_1 + 0x40);
                    /* WARNING: Subroutine does not return */
      FUN_140017310(param_1 + 0x3b);
    }
    lVar7 = param_1[0x19];
    lVar1 = *plVar9;
    FUN_140177040(lVar7 + 0x1708,lVar1,0);
    lVar4 = *(longlong *)(lVar1 + 0xd8);
    for (lVar11 = *(longlong *)(lVar1 + 0xd0); lVar11 != lVar4; lVar11 = lVar11 + 0x30) {
      if (*(longlong *)(lVar11 + 8) != 0) {
        FUN_140150b90(lVar7 + 0x1630);
      }
    }
    lVar11 = *(longlong *)(lVar1 + 0xd0);
    lVar4 = *(longlong *)(lVar1 + 0xd8);
    if (lVar11 != lVar4) {
      do {
        func_0x00014000dab0(lVar11 + 0x18);
        lVar11 = lVar11 + 0x30;
      } while (lVar11 != lVar4);
      *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(lVar1 + 0xd0);
    }
    plVar5 = *(longlong **)(lVar1 + 0xf0);
    for (plVar12 = *(longlong **)(lVar1 + 0xe8); plVar12 != plVar5; plVar12 = plVar12 + 10) {
      lVar11 = *plVar12;
      if ((lVar11 != 0) &&
         (*(int *)(lVar11 + 0x2c) = *(int *)(lVar11 + 0x2c) + -1, *(int *)(lVar11 + 0x2c) < 1)) {
        func_0x0001401ab6c0(lVar7 + 0x16c0);
      }
    }
    if (*(longlong *)(lVar1 + 0xe8) != *(longlong *)(lVar1 + 0xf0)) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(*(longlong *)(lVar1 + 0xe8) + 0x28);
    }
    plVar5 = *(longlong **)(lVar7 + 0x1480);
    if (plVar5 == *(longlong **)(lVar7 + 0x1488)) break;
    *plVar5 = lVar1;
    *(longlong *)(lVar7 + 0x1480) = *(longlong *)(lVar7 + 0x1480) + 8;
    plVar9 = plVar9 + 1;
  }
  uVar8 = (longlong)plVar5 - *(longlong *)(lVar7 + 0x1478);
  lVar11 = (longlong)uVar8 >> 3;
  if (lVar11 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar10 = (longlong)*(longlong **)(lVar7 + 0x1488) - *(longlong *)(lVar7 + 0x1478) >> 3;
  puVar13 = auStack_58;
  if (uVar10 <= 0x1fffffffffffffff - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar14 = lVar11 + 1;
    if (uVar14 <= uVar10) {
      uVar14 = uVar10;
    }
    puVar13 = auStack_58;
    if (uVar14 < 0x2000000000000000) {
      uVar14 = uVar14 * 8;
      if (uVar14 == 0) {
        uVar10 = 0;
      }
      else {
        if (0xfff < uVar14) {
          puVar13 = auStack_58;
          if (uVar14 < uVar14 + 0x27) {
            lVar11 = func_0x00014028aff0(uVar14 + 0x27);
            if (lVar11 != 0) {
              uVar10 = lVar11 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(uVar10 - 8) = lVar11;
              goto code_r0x0001401e6f0f;
            }
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            puVar13 = auStack_50;
          }
          goto code_r0x0001401e7007;
        }
        uVar10 = func_0x00014028aff0();
      }
code_r0x0001401e6f0f:
      *(longlong *)((uVar8 & 0xfffffffffffffff8) + uVar10) = lVar1;
      lVar1 = *(longlong *)(lVar7 + 0x1478);
      if (plVar5 == *(longlong **)(lVar7 + 0x1480)) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(uVar10,lVar1,(longlong)*(longlong **)(lVar7 + 0x1480) - lVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uVar10,lVar1,(longlong)plVar5 - lVar1);
    }
  }
code_r0x0001401e7007:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar13 + -8) = &UNK_1401e700c;
  FUN_140017440();
}

