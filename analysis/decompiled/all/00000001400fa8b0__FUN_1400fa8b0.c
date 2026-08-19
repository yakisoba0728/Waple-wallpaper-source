// Function: FUN_1400fa8b0
// Addr: 1400fa8b0
// Size: 44 bytes


undefined8 FUN_1400fa8b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = func_0x000140290e50(param_1 + 0x38);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x84) != 0x7fffffff) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x28);
    }
    FUN_140290f70(param_1 + 0x38);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

