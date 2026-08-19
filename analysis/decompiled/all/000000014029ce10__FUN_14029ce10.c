// Function: FUN_14029ce10
// Addr: 14029ce10
// Size: 295 bytes


ulonglong *
FUN_14029ce10(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined2 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined8 local_28;
  undefined2 local_20;
  
  puVar10 = auStack_48;
  puVar11 = auStack_48;
  uVar13 = param_1[2];
  if (0x7ffffffffffffffe - uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar3 = param_1[3];
  uVar7 = uVar13 + param_2 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar9 = uVar3 + (uVar3 >> 1);
    if (uVar7 < uVar9) {
      uVar7 = uVar9;
    }
    if (0x7fffffffffffffff < uVar7 + 1) goto UNWIND_INFO_14029cf51_UnwindCodes_105__OffsetInProlog;
    uVar9 = (uVar7 + 1) * 2;
    if (uVar9 == 0) {
      if ((7 < param_1[3]) && (DAT_140472300 != '\0')) {
        uVar4 = *param_1;
        uVar9 = uVar4 + (param_1[3] + 1) * 2;
        uVar8 = uVar9 + 7 & 0xfffffffffffffff8;
        uVar2 = uVar4 + (param_1[2] + 1) * 2;
        uVar12 = uVar8;
        if (uVar2 <= uVar8) {
          uVar12 = uVar2;
        }
        if (uVar8 < uVar9) {
          uVar9 = uVar8;
        }
        func_0x00014000ed00(uVar4,uVar8,uVar12,uVar9);
      }
      local_20 = param_6;
      local_28 = param_5;
      param_1[2] = uVar13 + param_2;
      param_1[3] = uVar7;
      if (uVar3 < 8) {
        func_0x00014029df10(0,param_1,uVar13,param_4);
      }
      else {
        uVar7 = *param_1;
        func_0x00014029df10(0,uVar7,uVar13,param_4);
        if (0xfff < uVar3 * 2 + 2) {
          plVar1 = (longlong *)(uVar7 - 8);
          uVar7 = (uVar7 - *plVar1) - 8;
          if (uVar7 < 0x20) {
            func_0x00014028b040(*plVar1,uVar3 * 2 + 0x29);
            puVar11 = auStack_48;
            goto code_r0x00014029cfac;
          }
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar10 = auStack_40;
        }
        *(undefined8 *)(puVar10 + -8) = 0x14029cfa2;
        func_0x00014028b040(uVar7);
        puVar11 = puVar10;
      }
code_r0x00014029cfac:
      *param_1 = 0;
      uVar13 = param_1[3];
      if ((7 < uVar13) && (DAT_140472300 != '\0')) {
        uVar3 = (uVar13 + 1) * 2;
        uVar9 = uVar13 * 2 + 9 & 0xfffffffffffffff8;
        uVar13 = (param_1[2] + 1) * 2;
        uVar7 = uVar9;
        if (uVar3 <= uVar9) {
          uVar7 = uVar3;
        }
        if (uVar9 < uVar13) {
          uVar13 = uVar9;
        }
        *(undefined8 *)(puVar11 + -8) = 0x14029d000;
        func_0x00014000ed00(0,uVar9,uVar7,uVar13);
      }
      return param_1;
    }
  }
  else {
    uVar9 = 0xfffffffffffffffe;
  }
  if (uVar9 < 0x1000) {
    puVar6 = (ulonglong *)func_0x00014028aff0();
    return puVar6;
  }
  if (uVar9 < uVar9 + 0x27) {
    puVar6 = (ulonglong *)func_0x00014028aff0(uVar9 + 0x27);
    return puVar6;
  }
UNWIND_INFO_14029cf51_UnwindCodes_105__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

