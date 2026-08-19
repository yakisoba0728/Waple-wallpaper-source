// Function: FUN_140282870
// Addr: 140282870
// Size: 6 bytes


undefined8 FUN_140282870(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar9 = auStack_28;
  if (*(longlong *)(param_1 + 8) == 0) {
    return in_RAX;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  for (plVar8 = *(longlong **)(param_1 + 0x18); plVar8 != plVar1; plVar8 = plVar8 + 1) {
    puVar2 = (undefined8 *)*plVar8;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  lVar6 = *(longlong *)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) {
    lVar7 = *(longlong *)(lVar6 + -8);
    if ((lVar6 - lVar7) - 8U < 0x20) goto UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog;
    lVar6 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar9 = auStack_20;
  }
  register0x00000020 = (BADSPACEBASE *)(puVar9 + 0x28);
  lVar7 = lVar6;
UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog:
  uVar5 = 0;
  if (lVar7 != 0) {
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    uVar5 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lVar7);
    if ((int)uVar5 == 0) {
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d9136;
      uVar4 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar4);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return uVar5;
}

