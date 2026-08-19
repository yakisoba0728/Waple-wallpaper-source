// Function: FUN_140255bc0
// Addr: 140255bc0
// Size: 242 bytes


void FUN_140255bc0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar9 = auStack_58;
  uVar7 = *param_1;
  uVar5 = (longlong)(param_1[2] - uVar7) >> 6;
  if (param_3 <= uVar5) {
    uVar5 = (longlong)(param_1[1] - uVar7) >> 6;
    if (uVar5 < param_3) {
      if (uVar7 != param_1[1]) {
        do {
          FUN_1400cb0e0(uVar7,param_2);
          uVar7 = uVar7 + 0x40;
          param_2 = param_2 + 0x40;
        } while (uVar7 != param_1[1]);
      }
      uVar5 = func_0x000140256260(param_2,param_3 - uVar5);
      param_1[1] = uVar5;
      return;
    }
    func_0x0001402562d0(param_2,param_3,uVar7);
    plVar1 = (longlong *)param_1[1];
    plVar12 = (longlong *)(param_3 * 0x40 + uVar7);
    for (plVar8 = plVar12; plVar8 != plVar1; plVar8 = plVar8 + 8) {
      plVar2 = (longlong *)plVar8[7];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar8);
        plVar8[7] = 0;
      }
    }
    param_1[1] = (ulonglong)plVar12;
    return;
  }
  if (0x3ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  if (0x3ffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = 0x3ffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    if (uVar5 < param_3) {
      uVar5 = param_3;
    }
  }
  uVar11 = 0;
  if (uVar7 == 0) {
UNWIND_INFO_140255c2f_UnwindCodes_35__UnwindOpCode:
    if (0x3ffffffffffffff < uVar5) {
code_r0x000140255db4:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    uVar5 = uVar5 * 0x40;
    puVar10 = auStack_58;
    if (uVar5 == 0) goto code_r0x000140255ccc;
    if (uVar5 < 0x1000) {
      uVar11 = func_0x00014028aff0();
      puVar10 = auStack_58;
      goto code_r0x000140255ccc;
    }
    if ((uVar5 | 0x27) <= uVar5) goto code_r0x000140255db4;
    lVar4 = func_0x00014028aff0();
    if (lVar4 == 0) goto code_r0x000140255caf;
  }
  else {
    func_0x000140035750(uVar7,param_1[1]);
    uVar7 = *param_1;
    uVar6 = param_1[2] - uVar7 & 0xffffffffffffffc0;
    if (uVar6 < 0x1000) {
code_r0x000140255c6a:
      func_0x00014028b040(uVar7,uVar6);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto UNWIND_INFO_140255c2f_UnwindCodes_35__UnwindOpCode;
    }
    if ((uVar7 - *(ulonglong *)(uVar7 - 8)) - 8 < 0x20) {
      uVar6 = uVar6 | 0x27;
      uVar7 = *(ulonglong *)(uVar7 - 8);
      goto code_r0x000140255c6a;
    }
code_r0x000140255caf:
    pcVar3 = (code *)swi(0x29);
    lVar4 = (*pcVar3)(5);
    puVar9 = auStack_50;
  }
  uVar11 = lVar4 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar11 - 8) = lVar4;
  puVar10 = puVar9;
code_r0x000140255ccc:
  *param_1 = uVar11;
  param_1[1] = uVar11;
  param_1[2] = uVar5 + uVar11;
  *(undefined8 *)(puVar10 + -8) = 0x140255ce9;
  uVar5 = func_0x000140256260(param_2,param_3,uVar11);
  param_1[1] = uVar5;
  return;
}

