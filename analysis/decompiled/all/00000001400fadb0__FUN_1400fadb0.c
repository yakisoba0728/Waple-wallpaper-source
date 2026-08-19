// Function: FUN_1400fadb0
// Addr: 1400fadb0
// Size: 37 bytes


undefined8 FUN_1400fadb0(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  
  iVar1 = func_0x000140290e50(param_1 + 0x140);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x18c) != 0x7fffffff) {
    if (param_2 != (ulonglong *)0x0) {
      *param_2 = (ulonglong)*(uint *)(param_1 + 0x128);
    }
    FUN_140290f70(param_1 + 0x140);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

