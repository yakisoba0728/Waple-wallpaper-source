// Function: FUN_140277770
// Addr: 140277770
// Size: 233 bytes


void FUN_140277770(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar8 = auStack_48;
  puVar7 = auStack_48;
  lVar2 = param_2[2];
  if (0x7ffffffffffffffeU - lVar2 < *(ulonglong *)(param_3 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar9 = (undefined8 *)0x0;
  uVar1 = lVar2 + *(ulonglong *)(param_3 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (uVar1 < 8) {
    uVar4 = 7;
    puVar9 = param_1;
  }
  else {
    uVar4 = uVar1 | 7;
    if (uVar4 < 0x7fffffffffffffff) goto LAB_14027782b;
    uVar6 = 0xfffffffffffffffe;
    uVar4 = 0x7ffffffffffffffe;
    puVar8 = auStack_48;
    do {
      if (uVar6 < 0x1000) {
        *(undefined **)(puVar8 + -8) = &UNK_140277878;
        func_0x00014028aff0();
        return;
      }
      puVar7 = puVar8;
      if (uVar6 + 0x27 <= uVar6) {
UNWIND_INFO_14027788d_UnwindCodes_37__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar7 + -8) = 0x1402778e1;
        FUN_140017440();
      }
      *(undefined8 *)(puVar8 + -8) = 0x14027781f;
      lVar5 = func_0x00014028aff0(uVar6 + 0x27);
      if (lVar5 != 0) {
        puVar9 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
        puVar9[-1] = lVar5;
        *param_1 = puVar9;
        goto LAB_140277888;
      }
      pcVar3 = (code *)swi(0x29);
      uVar4 = (*pcVar3)(5);
      puVar7 = puVar8 + 8;
LAB_14027782b:
      if (uVar4 < 10) {
        uVar4 = 10;
      }
      if (0x7fffffffffffffff < uVar4 + 1) goto UNWIND_INFO_14027788d_UnwindCodes_37__UnwindOpCode;
      uVar6 = (uVar4 + 1) * 2;
      puVar8 = puVar7;
    } while (uVar6 != 0);
    *param_1 = puVar9;
  }
LAB_140277888:
  param_1[3] = uVar4;
  param_1[2] = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar8 + -8) = 0x1402778a2;
  FUN_1404211c0(puVar9,param_2,lVar2 * 2);
}

