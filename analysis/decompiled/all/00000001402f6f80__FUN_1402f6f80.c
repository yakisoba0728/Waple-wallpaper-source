// Function: FUN_1402f6f80
// Addr: 1402f6f80
// Size: 38 bytes


void FUN_1402f6f80(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x98);
  if (*(code **)(param_1[2] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[2] + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001402f6fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}

