// Function: FUN_14005f7a0
// Addr: 14005f7a0
// Size: 79 bytes


/* WARNING: Possible PIC construction at 0x00014005f7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014005f7d8) */

void FUN_14005f7a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 unaff_RBX;
  undefined *apuStack_30 [5];
  
  plVar1 = (longlong *)*param_1;
  *(undefined8 *)plVar1[1] = 0;
  puVar4 = (undefined8 *)*plVar1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*param_1;
  }
  else {
    unaff_RBX = *puVar4;
    register0x00000020 = (BADSPACEBASE *)apuStack_30;
    apuStack_30[0] = &UNK_14005f7dd;
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,puVar4);
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

