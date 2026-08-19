// Function: FUN_1400cdf00
// Addr: 1400cdf00
// Size: 33 bytes


void FUN_1400cdf00(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong *plStack_18;
  char cStack_10;
  
  plVar1 = (longlong *)**(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)((longlong)plVar1 + 0xbc) != 0) {
      func_0x00014009c0d0(3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((char)(*(longlong **)(param_1 + 8))[1] == '\0') || ((char)plVar1[0x17] == '\0')) {
      if ((longlong *)plVar1[0x21] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c390();
      }
      (**(code **)(*(longlong *)plVar1[0x21] + 0x10))();
      plStack_18 = plVar1 + 4;
      cStack_10 = 0;
      iVar3 = func_0x000140290e50();
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290e00(5);
      }
      if (*(int *)((longlong)plVar1 + 0x6c) == 0x7fffffff) {
        *(undefined4 *)((longlong)plVar1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290e00(6);
      }
      cStack_10 = '\x01';
      if (*(char *)((longlong)plVar1 + 0xc1) == '\0') {
        *(undefined4 *)((longlong)plVar1 + 0xc) = 1;
        (**(code **)(*plVar1 + 0x28))(plVar1,&plStack_18,0);
        if (cStack_10 != '\0') {
          FUN_140290f70(plStack_18);
        }
        return;
      }
      func_0x00014009c0d0(3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  func_0x00014009c0d0(4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

