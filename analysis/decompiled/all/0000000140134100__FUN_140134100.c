// Function: FUN_140134100
// Addr: 140134100
// Size: 11 bytes


void FUN_140134100(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined1 *puVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar6 = auStack_28;
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(*(longlong *)(param_1 + 0x18) + 0x58);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x88)) {
    lVar5 = *(longlong *)(lVar4 + -8);
    if ((lVar4 - lVar5) - 8U < 0x20) goto UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog;
    pcVar1 = (code *)swi(0x29);
    lVar4 = (*pcVar1)(5);
    puVar6 = auStack_20;
  }
  register0x00000020 = (BADSPACEBASE *)(puVar6 + 0x28);
  lVar5 = lVar4;
UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog:
  if (lVar5 != 0) {
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lVar5);
    if (iVar2 == 0) {
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d9136;
      uVar3 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return;
}

