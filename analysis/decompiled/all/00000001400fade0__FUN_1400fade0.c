// Function: FUN_1400fade0
// Addr: 1400fade0
// Size: 150 bytes


undefined8 FUN_1400fade0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x140);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x18c) != 0x7fffffff) {
    if (*(uint *)(param_1 + 0x128) < param_2) {
      param_2 = (ulonglong)*(uint *)(param_1 + 0x128);
    }
    *(ulonglong *)(param_1 + 0x130) = param_2;
    FUN_14004a920(param_1 + 0x18,*(uint *)(param_1 + 0x138) + param_2,0);
    FUN_140290ea0(param_1 + 0x140);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

