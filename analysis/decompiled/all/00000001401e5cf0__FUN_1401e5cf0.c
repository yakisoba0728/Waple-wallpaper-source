// Function: FUN_1401e5cf0
// Addr: 1401e5cf0
// Size: 55 bytes


void FUN_1401e5cf0(longlong param_1)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0;
  FUN_14017e180(param_1 + 0x1b0,local_res8);
                    /* WARNING: Could not recover jumptable at 0x0001401e5d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1518) + 0xb0))(*(longlong **)(param_1 + 0x1518),0);
  return;
}

