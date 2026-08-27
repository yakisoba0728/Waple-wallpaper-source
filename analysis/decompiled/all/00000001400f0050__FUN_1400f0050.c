// Function: FUN_1400f0050
// Addr: 1400f0050
// Size: 63 bytes


void FUN_1400f0050(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 8) + 0xe0))();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001400f0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd8))(plVar1,1,0);
  return;
}

