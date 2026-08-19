// Function: FUN_1401459d0
// Addr: 1401459d0
// Size: 46 bytes


/* WARNING: Possible PIC construction at 0x0001401459e2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001401459fe: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001401459e2) */

void FUN_1401459d0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *unaff_RBX;
  undefined8 auStack_30 [5];
  
  if ((longlong *)param_1[6] == (longlong *)0x0) {
    if (param_1[1] != 0) {
      auStack_30[0] = 0x1401459f5;
      FUN_1402d3ea0();
    }
    if ((longlong *)param_1[5] == (longlong *)0x0) {
      plVar3 = param_1;
      if (*param_1 != 0) {
        auStack_30[0] = 0x140145a10;
        func_0x0001402bf8e0();
      }
    }
    else {
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0x140145a03;
      plVar3 = (longlong *)param_1[5];
      unaff_RBX = param_1;
    }
  }
  else {
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x1401459e7;
    plVar3 = (longlong *)param_1[6];
    unaff_RBX = param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    *(longlong **)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar1 = (*DAT_1404264b8)(DAT_1404e4fa0,0,plVar3);
    if (iVar1 == 0) {
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d9136;
      uVar2 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return;
}

