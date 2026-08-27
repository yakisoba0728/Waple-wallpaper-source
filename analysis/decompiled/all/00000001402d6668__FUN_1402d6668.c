// Function: FUN_1402d6668
// Addr: 1402d6668
// Size: 47 bytes


undefined8 FUN_1402d6668(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];
  
  lVar1 = FUN_1402d9894();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *local_res8[0];
}

