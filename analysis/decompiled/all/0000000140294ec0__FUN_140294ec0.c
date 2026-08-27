// Function: FUN_140294ec0
// Addr: 140294ec0
// Size: 426 bytes


void FUN_140294ec0(longlong *param_1,undefined2 param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  puVar6 = auStack_38;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    else {
      plVar7 = param_1;
      for (uVar3 = param_3 & 0x7fffffffffffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined2 *)plVar7 = param_2;
        plVar7 = (longlong *)((longlong)plVar7 + 2);
      }
      *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
    }
  }
  else {
    uVar3 = param_3 | 7;
    puVar9 = (undefined2 *)0x0;
    if (uVar3 < 0x7fffffffffffffff) goto LAB_140294f75;
    uVar4 = 0xfffffffffffffffe;
    puVar6 = auStack_38;
    uVar3 = 0x7ffffffffffffffe;
    do {
      if (uVar4 < 0x1000) {
        *(undefined8 *)(puVar6 + -8) = 0x140294fc1;
        puVar9 = (undefined2 *)FUN_14028af20();
        break;
      }
      if (uVar4 + 0x27 <= uVar4) {
LAB_140295066:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_14029506b;
        FUN_140017370();
      }
      *(undefined8 *)(puVar6 + -8) = 0x140294f69;
      lVar2 = FUN_14028af20(uVar4 + 0x27);
      if (lVar2 != 0) {
        puVar9 = (undefined2 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar9 + -4) = lVar2;
        break;
      }
      pcVar1 = (code *)swi(0x29);
      uVar3 = (*pcVar1)(5);
      puVar6 = puVar6 + 8;
LAB_140294f75:
      if (uVar3 < 10) {
        uVar3 = 10;
      }
      if (0x7fffffffffffffff < uVar3 + 1) goto LAB_140295066;
      uVar4 = (uVar3 + 1) * 2;
    } while (uVar4 != 0);
    *param_1 = (longlong)puVar9;
    param_1[2] = param_3;
    param_1[3] = uVar3;
    puVar8 = puVar9;
    for (uVar3 = param_3; uVar4 = param_3, uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = param_2;
      puVar8 = puVar8 + 1;
    }
    do {
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    puVar9[param_3] = 0;
    uVar3 = param_1[3];
    if ((7 < uVar3) && (DAT_140472230 != '\0')) {
      lVar2 = *param_1;
      uVar4 = lVar2 + 2 + uVar3 * 2;
      uVar10 = lVar2 + (param_1[2] + 1) * 2;
      uVar5 = uVar3 * 2 + 9 + lVar2 & 0xfffffffffffffff8;
      uVar3 = uVar5;
      if (uVar4 <= uVar5) {
        uVar3 = uVar4;
      }
      if (uVar5 < uVar10) {
        uVar10 = uVar5;
      }
      *(undefined8 *)(puVar6 + -8) = 0x140295048;
      _guard_check_icall(lVar2,uVar5,uVar3,uVar10);
    }
  }
  return;
}

