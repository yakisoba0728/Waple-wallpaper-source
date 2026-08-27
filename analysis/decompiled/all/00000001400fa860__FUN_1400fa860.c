// Function: FUN_1400fa860
// Addr: 1400fa860
// Size: 117 bytes


undefined8 FUN_1400fa860(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x38);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x84) != 0x7fffffff) {
    if (*(uint *)(param_1 + 0x20) < param_2) {
      param_2 = (ulonglong)*(uint *)(param_1 + 0x20);
    }
    *(ulonglong *)(param_1 + 0x28) = param_2;
    FUN_140290ea0(param_1 + 0x38);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

