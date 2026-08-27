// Function: FUN_14010fc50
// Addr: 14010fc50
// Size: 168 bytes


ulonglong FUN_14010fc50(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4
                       )

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ULONG_PTR local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x1c8));
  uVar2 = CONCAT44(extraout_var,BVar1);
  if (BVar1 != 0) {
    local_30 = 0;
    local_38 = 0;
    local_res8[0] = 0;
    uVar2 = SendMessageTimeoutW(*(HWND *)(param_1 + 0x1c8),0x46b,0,(LPARAM)&local_38,1,0,local_res8)
    ;
    if (local_res8[0] == 1) {
      *param_4 = local_30;
      *param_2 = (undefined4)local_38;
      *param_3 = local_38._4_4_;
      return CONCAT71((uint7)(uint3)((ulonglong)local_38 >> 0x28),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

