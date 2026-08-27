// Function: FUN_1400fad60
// Addr: 1400fad60
// Size: 124 bytes


undefined8 FUN_1400fad60(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x140);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x18c) != 0x7fffffff) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x130);
    }
    FUN_140290ea0(param_1 + 0x140);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

