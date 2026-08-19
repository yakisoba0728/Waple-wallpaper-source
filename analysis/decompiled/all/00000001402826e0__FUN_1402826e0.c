// Function: FUN_1402826e0
// Addr: 1402826e0
// Size: 6 bytes


void FUN_1402826e0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar8 = auStack_28;
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar7 = *(longlong *)(param_1 + 0x18); lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
    func_0x0001401b8030(lVar7);
  }
  uVar6 = *(ulonglong *)(param_1 + 8);
  uVar5 = uVar6;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x18)) {
    uVar5 = *(ulonglong *)(uVar6 - 8);
    uVar6 = (uVar6 - uVar5) - 8;
    if (uVar6 < 0x20) goto UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar8 = auStack_20;
    uVar5 = uVar6;
  }
  register0x00000020 = (BADSPACEBASE *)(puVar8 + 0x28);
UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog:
  if (uVar5 != 0) {
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar3 = (*DAT_1404264b8)(DAT_1404e4fa0,0,uVar5);
    if (iVar3 == 0) {
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d9136;
      uVar4 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar4);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return;
}

