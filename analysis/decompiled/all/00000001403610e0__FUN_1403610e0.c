// Function: FUN_1403610e0
// Addr: 1403610e0
// Size: 58 bytes


/* WARNING: Possible PIC construction at 0x000140361103: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140361103) */

void FUN_1403610e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong unaff_RBX;
  undefined8 auStack_30 [5];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    auStack_30[0] = 0x140361100;
    func_0x0001403b11a0(*(undefined8 *)(lVar1 + 0x20));
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x140361108;
    param_1 = lVar1;
    unaff_RBX = lVar1;
  }
  if (param_1 != 0) {
    *(longlong *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,param_1);
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

