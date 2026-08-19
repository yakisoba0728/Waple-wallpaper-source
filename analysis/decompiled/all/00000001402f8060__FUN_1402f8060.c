// Function: FUN_1402f8060
// Addr: 1402f8060
// Size: 10 bytes


void FUN_1402f8060(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402f8065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}

