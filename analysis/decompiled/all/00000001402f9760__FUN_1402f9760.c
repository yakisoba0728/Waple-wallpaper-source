// Function: FUN_1402f9760
// Addr: 1402f9760
// Size: 76 bytes


void FUN_1402f9760(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (*param_1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001402f97a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}

