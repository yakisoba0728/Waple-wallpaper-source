// Function: FUN_1402f4fc0
// Addr: 1402f4fc0
// Size: 18 bytes


void FUN_1402f4fc0(longlong param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001402f4fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))();
    return;
  }
  return;
}

