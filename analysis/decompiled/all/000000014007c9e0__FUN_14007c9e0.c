// Function: FUN_14007c9e0
// Addr: 14007c9e0
// Size: 7 bytes


/* WARNING: Possible PIC construction at 0x00014007ca1e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014007ca23) */
/* WARNING: Removing unreachable block (ram,0x00014007ca2b) */
/* WARNING: Removing unreachable block (ram,0x00014007ca32) */

longlong FUN_14007c9e0(undefined8 param_1,ulonglong *param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined *apuStack_30 [6];
  
  if (*param_2 < 0x400000000000000) {
    uVar4 = *param_2 << 6;
    if (uVar4 == 0) {
      return 0;
    }
    if (0xfff < uVar4) {
      if ((uVar4 | 0x27) <= uVar4) goto code_r0x00014007ca4c;
      register0x00000020 = (BADSPACEBASE *)apuStack_30;
      apuStack_30[0] = &UNK_14007ca23;
      uVar4 = uVar4 | 0x27;
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
code_r0x00014007ca4c:
                    /* WARNING: Subroutine does not return */
  apuStack_30[0] = &UNK_14007ca51;
  FUN_140017440();
}

