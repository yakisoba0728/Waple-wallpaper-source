// Function: FUN_140119250
// Addr: 140119250
// Size: 162 bytes


void FUN_140119250(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 local_res10 [24];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 9) = param_2;
  local_18 = 0;
  local_10 = 0;
  local_20 = local_res10;
  local_28 = 5;
  local_24 = 1;
  local_res10[0] = param_2;
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

