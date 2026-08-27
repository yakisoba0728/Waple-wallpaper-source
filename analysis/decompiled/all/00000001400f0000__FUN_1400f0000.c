// Function: FUN_1400f0000
// Addr: 1400f0000
// Size: 73 bytes


void FUN_1400f0000(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
  (**(code **)(*plVar1 + 0xd8))(plVar1,0,0);
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400f003c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 8) + 0xd8))();
    return;
  }
  return;
}

