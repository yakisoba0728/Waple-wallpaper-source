// Function: FUN_140177bf0
// Addr: 140177bf0
// Size: 20 bytes


void FUN_140177bf0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140177bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x60))();
    return;
  }
  return;
}

