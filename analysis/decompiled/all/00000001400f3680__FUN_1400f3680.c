// Function: FUN_1400f3680
// Addr: 1400f3680
// Size: 2 bytes


void FUN_1400f3680(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x21) != '\0') && (*(longlong *)(param_1 + 0x58) != 0)) {
    iVar1 = func_0x000140290e50(param_1 + 0xd8);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)(param_1 + 0x124) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x128))
              (*(longlong **)(param_1 + 0x58),
               (double)*(float *)(*(longlong *)(param_1 + 0x50) + 0x2d8));
    FUN_140290f70(param_1 + 0xd8);
  }
  return;
}

