// Function: FUN_1402ca9c0
// Addr: 1402ca9c0
// Size: 51 bytes


undefined8 FUN_1402ca9c0(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_1402d9894();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined8 *)(local_res8[0] + 0xf8);
}

