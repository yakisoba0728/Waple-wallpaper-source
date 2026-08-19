// Function: FUN_1402d5cb4
// Addr: 1402d5cb4
// Size: 47 bytes


undefined4 FUN_1402d5cb4(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_1402d9964();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  FUN_1402d9b18(lVar1,local_res8);
  return *(undefined4 *)(local_res8[0] + 8);
}

