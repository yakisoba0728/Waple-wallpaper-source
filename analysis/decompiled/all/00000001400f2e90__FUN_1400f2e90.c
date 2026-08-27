// Function: FUN_1400f2e90
// Addr: 1400f2e90
// Size: 188 bytes


void FUN_1400f2e90(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0xd8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x124) != 0x7fffffff) {
    *(undefined4 *)(param_1 + 0xc4) = param_5;
    *(undefined4 *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xbc) = param_3;
    *(undefined4 *)(param_1 + 0xc0) = param_4;
    LOCK();
    *(undefined1 *)(param_1 + 0x92) = 1;
    UNLOCK();
    FUN_140290ea0(param_1 + 0xd8);
    return;
  }
  *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

