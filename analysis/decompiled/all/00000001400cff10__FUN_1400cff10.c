// Function: FUN_1400cff10
// Addr: 1400cff10
// Size: 157 bytes


undefined8 FUN_1400cff10(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  iVar7 = func_0x000140290e50(param_1 + 0x48);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x94) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x94) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar8 = ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
            0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  plVar4 = *(longlong **)(lVar3 + 8 + uVar8 * 0x10);
  if (plVar4 == plVar2) {
UNWIND_INFO_1400cff99_UnwindCodes_25__UnwindOpCode:
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar4[2];
    plVar9 = plVar4;
    while ((int)param_2 != iVar7) {
      if (plVar9 == *(longlong **)(lVar3 + uVar8 * 0x10))
      goto UNWIND_INFO_1400cff99_UnwindCodes_25__UnwindOpCode;
      plVar9 = (longlong *)plVar9[1];
      iVar7 = (int)plVar9[2];
    }
  }
  if (plVar9 != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar3 + uVar8 * 0x10);
    if (plVar4 == plVar9) {
      if (plVar5 == plVar9) {
        *(longlong **)(lVar3 + uVar8 * 0x10) = plVar2;
        *(longlong **)(lVar3 + 8 + uVar8 * 0x10) = plVar2;
      }
      else {
        *(longlong *)(lVar3 + 8 + uVar8 * 0x10) = plVar9[1];
      }
    }
    else if (plVar5 == plVar9) {
      *(longlong *)(lVar3 + uVar8 * 0x10) = *plVar9;
    }
    lVar6 = *plVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    *(longlong *)plVar9[1] = lVar6;
    *(longlong *)(lVar6 + 8) = plVar9[1];
    plVar2 = (longlong *)plVar9[10];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))
                (plVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),plVar2 != plVar9 + 3));
      plVar9[10] = 0;
    }
    func_0x00014028b040(plVar9,0x58);
  }
  piVar1 = (int *)(param_1 + 0x94);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
    (*DAT_140426298)(param_1 + 0x58);
  }
  return 0;
}

