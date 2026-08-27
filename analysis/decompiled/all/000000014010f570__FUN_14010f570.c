// Function: FUN_14010f570
// Addr: 14010f570
// Size: 112 bytes


void FUN_14010f570(longlong param_1,byte param_2)

{
  BOOL BVar1;
  ULONG_PTR local_res8;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x1c8));
  if (BVar1 != 0) {
    local_res8 = 0;
    SendMessageTimeoutW(*(HWND *)(param_1 + 0x1c8),0x40c,(ulonglong)param_2,0,1,0,&local_res8);
    return;
  }
  *(byte *)(param_1 + 9) = param_2;
  return;
}

