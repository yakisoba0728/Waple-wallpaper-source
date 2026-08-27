// Function: FUN_14009b730
// Addr: 14009b730
// Size: 80 bytes


void FUN_14009b730(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x130),0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
                    /* WARNING: Could not recover jumptable at 0x00014009b77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,2,1,param_1 + 0x130);
  return;
}

