// Function: FUN_1400d0270
// Addr: 1400d0270
// Size: 87 bytes


void FUN_1400d0270(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong alStack_28 [3];
  ulonglong uStack_10;
  
  lVar8 = 0;
  lVar6 = param_1;
  if (param_2 == 0) {
LAB_1400d035c:
    if (*(longlong *)(lVar6 + 0x110) != lVar8) {
      return;
    }
  }
  else {
    if ((param_2 != 1) && (param_2 != 2)) {
      return;
    }
    if (*(longlong *)(param_1 + 0x110) == 0) {
UNWIND_INFO_1400d02ac_UnwindCodes_39__OffsetInProlog:
      bVar3 = false;
    }
    else {
      plVar9 = (longlong *)(param_1 + 0x100);
      lVar8 = 1;
      puVar5 = (undefined8 *)FUN_140005860(alStack_28,param_3);
      if (0xf < *(ulonglong *)(param_1 + 0x118)) {
        plVar9 = (longlong *)*plVar9;
      }
      plVar1 = puVar5 + 2;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      if ((*plVar1 != *(longlong *)(param_1 + 0x110)) ||
         ((*plVar1 != 0 && (iVar4 = func_0x0001404210c0(puVar5,plVar9), iVar4 != 0))))
      goto UNWIND_INFO_1400d02ac_UnwindCodes_39__OffsetInProlog;
      bVar3 = true;
    }
    if ((lVar8 != 0) && (0xf < uStack_10)) {
      uVar7 = uStack_10 + 1;
      lVar6 = alStack_28[0];
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(alStack_28[0] + -8);
        if (0x1f < (alStack_28[0] - lVar6) - 8U) {
          lVar6 = 5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)();
          goto LAB_1400d035c;
        }
        uVar7 = uStack_10 + 0x28;
      }
      func_0x00014028b040(lVar6,uVar7);
    }
    if (!bVar3) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x128) = 1;
  return;
}

