// Function: FUN_1401d76d0
// Addr: 1401d76d0
// Size: 136 bytes


void FUN_1401d76d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong local_40;
  undefined ***local_10;
  
  local_res10 = param_2;
  plVar1 = (longlong *)FUN_14019ec90(param_1 + 0x118,local_res8,&local_res10);
  if (*plVar1 == *(longlong *)(param_1 + 0x120)) {
    FUN_1401a0d70(param_1 + 0x118,local_58,&local_res10);
    local_48 = &PTR_LAB_140490218;
    local_10 = &local_48;
    local_40 = param_1;
    (**(code **)(*local_res10 + 0x30))(local_res10,&local_48);
  }
  return;
}

