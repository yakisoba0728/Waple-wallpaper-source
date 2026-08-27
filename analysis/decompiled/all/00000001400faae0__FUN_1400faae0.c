// Function: FUN_1400faae0
// Addr: 1400faae0
// Size: 112 bytes


undefined8 FUN_1400faae0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x38);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x84) != 0x7fffffff) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x30);
    }
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_140290ea0(param_1 + 0x38);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

