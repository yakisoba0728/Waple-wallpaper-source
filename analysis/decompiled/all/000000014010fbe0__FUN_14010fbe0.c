// Function: FUN_14010fbe0
// Addr: 14010fbe0
// Size: 97 bytes


void FUN_14010fbe0(longlong param_1,ulonglong param_2)

{
  BOOL BVar1;
  ULONG_PTR local_res8;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x1c8));
  if (BVar1 != 0) {
    local_res8 = 0;
    SendMessageTimeoutW(*(HWND *)(param_1 + 0x1c8),0x469,param_2 & 0xff,0,1,0,&local_res8);
  }
  return;
}

