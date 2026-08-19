// Function: FUN_1401dc050
// Addr: 1401dc050
// Size: 26 bytes


/* WARNING: Possible PIC construction at 0x0001401dc08b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001401dc090) */
/* WARNING: Removing unreachable block (ram,0x0001401dc098) */
/* WARNING: Removing unreachable block (ram,0x0001401dc09f) */

longlong FUN_1401dc050(undefined8 param_1,ulonglong *param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined8 auStack_30 [6];
  
  if (*param_2 < 0x35e50d79435e50e) {
    uVar4 = *param_2 * 0x4c;
    if (uVar4 == 0) {
      return 0;
    }
    if (0xfff < uVar4) {
      if (uVar4 + 0x27 <= uVar4) goto UNWIND_INFO_1401dc06b_UnwindCodes_37__OffsetInProlog;
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0x1401dc090;
      uVar4 = uVar4 + 0x27;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028affe;
    lVar3 = thunk_FUN_1402da070();
    while( true ) {
      if (lVar3 != 0) {
        return lVar3;
      }
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028b00b;
      iVar2 = func_0x0001402d0b60(uVar4);
      if (iVar2 == 0) break;
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028b017;
      lVar3 = thunk_FUN_1402da070(uVar4);
    }
    if (uVar4 != 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028b02d;
      FUN_14028b990();
    }
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028b033;
    func_0x00014028b9b0();
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
UNWIND_INFO_1401dc06b_UnwindCodes_37__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
  auStack_30[0] = 0x1401dc0be;
  FUN_140017440();
}

