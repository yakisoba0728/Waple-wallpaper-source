// Function: FUN_1400fb110
// Addr: 1400fb110
// Size: 121 bytes


undefined8 FUN_1400fb110(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x140);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x18c) != 0x7fffffff) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x13c);
    }
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_140290ea0(param_1 + 0x140);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

