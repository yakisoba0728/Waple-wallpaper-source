// Function: FUN_14011a0f0
// Addr: 14011a0f0
// Size: 142 bytes


void FUN_14011a0f0(longlong param_1)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_28 = 0x18;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  iVar1 = FUN_140290d80(param_1 + 0x4a0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x4ec) != 0x7fffffff) {
    FUN_1400182d0(param_1 + 0x158,&local_28);
    FUN_140290ea0(param_1 + 0x4a0);
    thunk_FUN_14028af80(0);
    return;
  }
  *(undefined4 *)(param_1 + 0x4ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

