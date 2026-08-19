// Function: FUN_140119320
// Addr: 140119320
// Size: 10 bytes


void FUN_140119320(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 local_res10 [24];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  
  *(undefined1 *)(param_1 + 9) = param_2;
  uStack_18 = 0;
  uStack_10 = 0;
  puStack_20 = local_res10;
  uStack_28 = 5;
  uStack_24 = 1;
  local_res10[0] = param_2;
  iVar1 = func_0x000140290e50(param_1 + 0x4a0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x4ec) != 0x7fffffff) {
    FUN_1400183a0(param_1 + 0x158,&uStack_28);
    FUN_140290f70(param_1 + 0x4a0);
    func_0x00014028b040(0);
    return;
  }
  *(undefined4 *)(param_1 + 0x4ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

