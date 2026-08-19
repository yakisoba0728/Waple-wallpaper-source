// Function: FUN_14007d1d0
// Addr: 14007d1d0
// Size: 25 bytes


void FUN_14007d1d0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
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
    FUN_140017310(*(longlong *)(param_1 + 0x18) + 0x28);
  }
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = uVar5;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x48)) {
    uVar4 = *(ulonglong *)(uVar5 - 8);
    uVar5 = (uVar5 - uVar4) - 8;
    if (uVar5 < 0x20) goto UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_20;
    uVar4 = uVar5;
  }
  register0x00000020 = (BADSPACEBASE *)(puVar6 + 0x28);
UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog:
  if (uVar4 != 0) {
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,uVar4);
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

