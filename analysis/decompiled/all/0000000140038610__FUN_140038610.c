// Function: FUN_140038610
// Addr: 140038610
// Size: 35 bytes


/* WARNING: Possible PIC construction at 0x00014003864c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140038651) */
/* WARNING: Removing unreachable block (ram,0x000140038659) */
/* WARNING: Removing unreachable block (ram,0x000140038660) */

longlong FUN_140038610(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined *apuStack_30 [6];
  
  if (param_2 < 0x2000000000000000) {
    param_2 = param_2 * 8;
    if (param_2 == 0) {
      return 0;
    }
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) goto LAB_14003867a;
      register0x00000020 = (BADSPACEBASE *)apuStack_30;
      apuStack_30[0] = &UNK_140038651;
      param_2 = param_2 + 0x27;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028affe;
    lVar3 = thunk_FUN_1402da070();
    while( true ) {
      if (lVar3 != 0) {
        return lVar3;
      }
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028b00b;
      iVar2 = func_0x0001402d0b60(param_2);
      if (iVar2 == 0) break;
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028b017;
      lVar3 = thunk_FUN_1402da070(param_2);
    }
    if (param_2 != 0xffffffffffffffff) {
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
LAB_14003867a:
                    /* WARNING: Subroutine does not return */
  apuStack_30[0] = &UNK_14003867f;
  FUN_140017440();
}

