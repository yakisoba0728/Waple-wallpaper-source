// Function: FUN_140119190
// Addr: 140119190
// Size: 184 bytes


void FUN_140119190(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_res10 [24];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 8) = param_2;
  local_18 = 0;
  lVar1 = param_1 + 0x4a0;
  local_10 = 0;
  local_20 = local_res10;
  local_28 = 4;
  local_24 = 1;
  local_res10[0] = param_2;
  iVar2 = FUN_140290d80(lVar1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x4ec) != 0x7fffffff) {
    FUN_1400182d0(param_1 + 0x158,&local_28);
    if (lVar1 != 0) {
      FUN_140290ea0(lVar1);
      FUN_14011ae10(param_1);
      thunk_FUN_14028af80(0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140052f30(1);
  }
  *(undefined4 *)(param_1 + 0x4ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

