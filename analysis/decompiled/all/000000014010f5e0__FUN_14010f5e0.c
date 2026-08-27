// Function: FUN_14010f5e0
// Addr: 14010f5e0
// Size: 118 bytes


void FUN_14010f5e0(longlong param_1,LPARAM param_2)

{
  BOOL BVar1;
  ULONG_PTR local_res8;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x1c8));
  if (BVar1 != 0) {
    local_res8 = 0;
    SendMessageTimeoutW(*(HWND *)(param_1 + 0x1c8),0x40e,0,param_2,1,0,&local_res8);
    return;
  }
  FUN_14010b900(param_1,param_2);
  return;
}

