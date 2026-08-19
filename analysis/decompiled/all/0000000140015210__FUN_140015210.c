// Function: FUN_140015210
// Addr: 140015210
// Size: 25 bytes


void FUN_140015210(longlong param_1)

{
  int iVar1;
  
  iVar1 = func_0x000140290e50();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

