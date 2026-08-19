// Function: FUN_140294f90
// Addr: 140294f90
// Size: 206 bytes


void FUN_140294f90(longlong *param_1,undefined2 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    if (param_3 != 0) {
      plVar6 = param_1;
      for (uVar3 = param_3 & 0x7fffffffffffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined2 *)plVar6 = param_2;
        plVar6 = (longlong *)((longlong)plVar6 + 2);
      }
      *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
      return;
    }
    *(undefined2 *)param_1 = 0;
    return;
  }
  uVar3 = param_3 | 7;
  puVar2 = (undefined2 *)0x0;
  if (uVar3 < 0x7fffffffffffffff) {
    if (uVar3 < 10) {
      uVar3 = 10;
    }
    if (0x7fffffffffffffff < uVar3 + 1) goto LAB_140295136;
    uVar4 = (uVar3 + 1) * 2;
    if (uVar4 == 0) goto code_r0x00014029509a;
  }
  else {
    uVar4 = 0xfffffffffffffffe;
    uVar3 = 0x7ffffffffffffffe;
  }
  if (uVar4 < 0x1000) {
    puVar2 = (undefined2 *)func_0x00014028aff0();
code_r0x00014029509a:
    *param_1 = (longlong)puVar2;
    param_1[2] = param_3;
    param_1[3] = uVar3;
    puVar7 = puVar2;
    for (uVar3 = param_3; uVar4 = param_3, uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = param_2;
      puVar7 = puVar7 + 1;
    }
    do {
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    puVar2[param_3] = 0;
    uVar3 = param_1[3];
    if ((7 < uVar3) && (DAT_140472300 != '\0')) {
      lVar1 = *param_1;
      uVar4 = lVar1 + 2 + uVar3 * 2;
      uVar8 = lVar1 + (param_1[2] + 1) * 2;
      uVar5 = uVar3 * 2 + 9 + lVar1 & 0xfffffffffffffff8;
      uVar3 = uVar5;
      if (uVar4 <= uVar5) {
        uVar3 = uVar4;
      }
      if (uVar5 < uVar8) {
        uVar8 = uVar5;
      }
      func_0x00014000ed00(lVar1,uVar5,uVar3,uVar8);
    }
    return;
  }
  if (uVar4 < uVar4 + 0x27) {
    func_0x00014028aff0(uVar4 + 0x27);
    return;
  }
LAB_140295136:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

