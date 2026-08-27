// Function: FUN_1402d5b50
// Addr: 1402d5b50
// Size: 47 bytes


undefined4 FUN_1402d5b50(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_1402d9894();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined4 *)(local_res8[0] + 0xc);
}

