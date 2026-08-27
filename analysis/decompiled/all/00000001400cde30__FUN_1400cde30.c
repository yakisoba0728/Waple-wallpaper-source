// Function: FUN_1400cde30
// Addr: 1400cde30
// Size: 226 bytes


void FUN_1400cde30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_18;
  char local_10;
  
  plVar1 = (longlong *)**(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)((longlong)plVar1 + 0xbc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14009c000(3);
    }
    if (((char)(*(longlong **)(param_1 + 8))[1] == '\0') || ((char)plVar1[0x17] == '\0')) {
      if ((longlong *)plVar1[0x21] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2c0();
      }
      (**(code **)(*(longlong *)plVar1[0x21] + 0x10))();
      local_18 = plVar1 + 4;
      local_10 = 0;
      iVar2 = FUN_140290d80();
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)((longlong)plVar1 + 0x6c) == 0x7fffffff) {
        *(undefined4 *)((longlong)plVar1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      local_10 = '\x01';
      if (*(char *)((longlong)plVar1 + 0xc1) == '\0') {
        *(undefined4 *)((longlong)plVar1 + 0xc) = 1;
        (**(code **)(*plVar1 + 0x28))(plVar1,&local_18,0);
        if (local_10 != '\0') {
          FUN_140290ea0(local_18);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14009c000(3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14009c000(4);
}

