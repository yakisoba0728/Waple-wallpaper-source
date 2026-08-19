// Function: FUN_140017290
// Addr: 140017290
// Size: 20 bytes


void FUN_140017290(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  undefined1 auStackX_8 [32];
  
  uVar4 = param_2;
  if (0xfff < param_3) {
    uVar4 = *(ulonglong *)(param_2 - 8);
    uVar5 = (param_2 - uVar4) - 8;
    if (0x1f < uVar5) {
      pcVar1 = (code *)swi(0x29);
      uVar4 = uVar5;
      (*pcVar1)(5);
      register0x00000020 = (BADSPACEBASE *)auStackX_8;
    }
  }
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

