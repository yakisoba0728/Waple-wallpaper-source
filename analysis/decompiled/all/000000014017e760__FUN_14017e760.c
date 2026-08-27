// Function: FUN_14017e760
// Addr: 14017e760
// Size: 39 bytes


void FUN_14017e760(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  *(longlong *)(param_1 + 0x1b8) = lVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x00014017e780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1518) + 0xb0))
            (*(longlong **)(param_1 + 0x1518),*(undefined1 *)(lVar1 + -2));
  return;
}

