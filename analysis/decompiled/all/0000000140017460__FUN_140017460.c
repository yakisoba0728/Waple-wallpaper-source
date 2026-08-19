// Function: FUN_140017460
// Addr: 140017460
// Size: 4 bytes


/* WARNING: Possible PIC construction at 0x000140017485: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014001748a) */
/* WARNING: Removing unreachable block (ram,0x000140017492) */
/* WARNING: Removing unreachable block (ram,0x000140017499) */

longlong FUN_140017460(ulonglong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined8 auStack_30 [6];
  
  if (param_1 == 0) {
    return 0;
  }
  if (0xfff < param_1) {
    if (param_1 + 0x27 <= param_1) {
                    /* WARNING: Subroutine does not return */
      auStack_30[0] = 0x1400174b8;
      FUN_140017440();
    }
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x14001748a;
    param_1 = param_1 + 0x27;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
  *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028affe;
  lVar3 = thunk_FUN_1402da070();
  while( true ) {
    if (lVar3 != 0) {
      return lVar3;
    }
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028b00b;
    iVar2 = func_0x0001402d0b60(param_1);
    if (iVar2 == 0) break;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x14028b017;
    lVar3 = thunk_FUN_1402da070(param_1);
  }
  if (param_1 != 0xffffffffffffffff) {
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

