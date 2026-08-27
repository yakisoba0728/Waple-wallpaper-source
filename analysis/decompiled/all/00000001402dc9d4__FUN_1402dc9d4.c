// Function: FUN_1402dc9d4
// Addr: 1402dc9d4
// Size: 48 bytes


bool FUN_1402dc9d4(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_140516000,0x100,2,local_res8);
  return BVar1 != 0;
}

