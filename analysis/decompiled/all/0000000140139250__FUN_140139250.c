// Function: FUN_140139250
// Addr: 140139250
// Size: 20 bytes


void FUN_140139250(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong *plVar9;
  longlong alStack_28 [3];
  ulonglong uStack_10;
  
  bVar8 = false;
  if (param_2 == 0) goto code_r0x000140139319;
  if ((param_2 != 1) && (param_2 != 2)) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
code_r0x0001401392d2:
    bVar3 = false;
  }
  else {
    plVar9 = (longlong *)(param_1 + 0x18);
    bVar8 = true;
    puVar5 = (undefined8 *)FUN_140005860(alStack_28,param_3);
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      plVar9 = (longlong *)*plVar9;
    }
    plVar1 = puVar5 + 2;
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    if ((*plVar1 != *(longlong *)(param_1 + 0x28)) ||
       ((*plVar1 != 0 && (iVar4 = func_0x0001404210c0(puVar5,plVar9), iVar4 != 0))))
    goto code_r0x0001401392d2;
    bVar3 = true;
  }
  if ((bVar8) && (0xf < uStack_10)) {
    uVar7 = uStack_10 + 1;
    lVar6 = alStack_28[0];
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(alStack_28[0] + -8);
      if (0x1f < (alStack_28[0] - lVar6) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uStack_10 + 0x28;
    }
    func_0x00014028b040(lVar6,uVar7);
  }
  if (!bVar3) {
    return;
  }
code_r0x000140139319:
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

