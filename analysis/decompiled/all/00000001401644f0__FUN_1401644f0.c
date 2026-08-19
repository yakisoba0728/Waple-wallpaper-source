// Function: FUN_1401644f0
// Addr: 1401644f0
// Size: 193 bytes


void FUN_1401644f0(ulonglong *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_58;
  puVar7 = auStack_58;
  puVar9 = (undefined8 *)*param_1;
  uVar3 = (longlong)(param_1[2] - (longlong)puVar9) >> 5;
  if (param_3 <= uVar3) {
    puVar5 = (undefined8 *)param_1[1];
    uVar3 = (longlong)puVar5 - (longlong)puVar9 >> 5;
    if (uVar3 < param_3) {
      if (puVar9 != puVar5) {
        do {
          if (puVar9 != param_2) {
            puVar5 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar5 = (undefined8 *)*param_2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_14000f950(puVar9,puVar5,param_2[2]);
          }
          puVar5 = (undefined8 *)param_1[1];
          puVar9 = puVar9 + 4;
          param_2 = param_2 + 4;
        } while (puVar9 != puVar5);
      }
      if (param_3 != uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_140017090(puVar5,param_2);
      }
    }
    else {
      puVar5 = puVar9 + param_3 * 4;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar9 != param_2) {
          puVar5 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar5 = (undefined8 *)*param_2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_14000f950(puVar9,puVar5,param_2[2]);
        }
        puVar9 = puVar9 + 4;
        param_2 = param_2 + 4;
      }
      if (puVar5 != (undefined8 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(puVar5);
      }
    }
    param_1[1] = (ulonglong)puVar5;
    return;
  }
  if (0x7ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  if (0x7ffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x7ffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_3) {
      uVar3 = param_3;
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
UNWIND_INFO_14016458f_UnwindCodes_23__UnwindOpCode:
    if (0x7ffffffffffffff < uVar3) {
code_r0x000140164752:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    uVar3 = uVar3 * 0x20;
    if (uVar3 == 0) {
      uVar8 = 0;
      puVar7 = auStack_58;
      goto code_r0x000140164618;
    }
    if (uVar3 < 0x1000) {
      uVar8 = func_0x00014028aff0(uVar3);
      goto code_r0x000140164618;
    }
    if (uVar3 + 0x27 <= uVar3) goto code_r0x000140164752;
    lVar2 = func_0x00014028aff0();
    if (lVar2 == 0) goto code_r0x0001401645f8;
  }
  else {
    if (puVar9 != (undefined8 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(puVar9);
    }
    uVar8 = *param_1;
    uVar4 = param_1[2] - uVar8 & 0xffffffffffffffe0;
    if (uVar4 < 0x1000) {
code_r0x0001401645a6:
      func_0x00014028b040(uVar8,uVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto UNWIND_INFO_14016458f_UnwindCodes_23__UnwindOpCode;
    }
    if ((uVar8 - *(ulonglong *)(uVar8 - 8)) - 8 < 0x20) {
      uVar4 = uVar4 + 0x27;
      uVar8 = *(ulonglong *)(uVar8 - 8);
      goto code_r0x0001401645a6;
    }
code_r0x0001401645f8:
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar6 = auStack_50;
  }
  uVar8 = lVar2 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar8 - 8) = lVar2;
  puVar7 = puVar6;
code_r0x000140164618:
  *param_1 = uVar8;
  param_1[1] = uVar8;
  param_1[2] = uVar3 + uVar8;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_14016463b;
    FUN_140017090(uVar8,param_2);
  }
  param_1[1] = uVar8;
  return;
}

