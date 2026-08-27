// Function: FUN_14010fa70
// Addr: 14010fa70
// Size: 163 bytes


ulonglong FUN_14010fa70(longlong param_1,uint *param_2,int *param_3)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ULONG_PTR local_res8;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x1c8));
  uVar2 = CONCAT44(extraout_var,BVar1);
  if (BVar1 != 0) {
    local_res8 = 0;
    uVar2 = SendMessageTimeoutW(*(HWND *)(param_1 + 0x1c8),0x46a,0,0,1,0,&local_res8);
    if (local_res8 != 0) {
      *param_2 = (uint)local_res8 & 0xffff;
      uVar2 = (longlong)local_res8 >> 0x10 & 0xffff;
      *param_3 = (int)uVar2;
      if ((*param_2 != 0) && ((int)uVar2 != 0)) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

