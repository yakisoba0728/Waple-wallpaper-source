// Function: FUN_1400fa8e0
// Addr: 1400fa8e0
// Size: 122 bytes


undefined8 FUN_1400fa8e0(longlong param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x38);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x84) != 0x7fffffff) {
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)((ulonglong)*(uint *)(param_1 + 0x20) <= *(ulonglong *)(param_1 + 0x28));
    }
    FUN_140290ea0(param_1 + 0x38);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

