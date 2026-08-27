// Function: FUN_1402babf0
// Addr: 1402babf0
// Size: 52 bytes


void FUN_1402babf0(longlong *param_1,undefined8 param_2,byte *param_3)

{
  longlong local_res8 [4];
  
  local_res8[0] = *param_1;
  if ((*param_3 & 1) != 0) {
    local_res8[0] = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_1402beb60(local_res8,param_2,param_3,0xffffffff);
  return;
}

