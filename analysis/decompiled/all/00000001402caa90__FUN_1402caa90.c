// Function: FUN_1402caa90
// Addr: 1402caa90
// Size: 46 bytes


undefined8 FUN_1402caa90(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_1402d9964();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  FUN_1402d9b18(lVar1,local_res8);
  return *(undefined8 *)(local_res8[0] + 0xf8);
}

