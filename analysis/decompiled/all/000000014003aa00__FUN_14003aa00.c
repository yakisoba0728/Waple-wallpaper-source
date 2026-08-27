// Function: FUN_14003aa00
// Addr: 14003aa00
// Size: 51 bytes


ULONG_PTR FUN_14003aa00(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  ULONG_PTR local_18 [3];
  
  local_18[0] = 0;
  SendMessageTimeoutW(param_1,param_2,param_3,param_4,1,0,local_18);
  return local_18[0];
}

