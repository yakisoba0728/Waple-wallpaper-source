// Function: FUN_1402d2e60
// Addr: 1402d2e60
// Size: 146 bytes


undefined8 FUN_1402d2e60(uint param_1,undefined8 param_2)

{
  uint local_res8 [2];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 *local_30;
  longlong *local_28;
  undefined8 *local_20;
  uint *local_18;
  undefined8 *local_10;
  
  local_48 = 0;
  local_40 = 0;
  local_res8[0] = param_1;
  local_res10 = param_2;
  if (5 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  local_res20 = FUN_1402d9964();
  FUN_1402dc864();
  FUN_1402e5d9c();
  *(uint *)(local_res20 + 0x3a8) = *(uint *)(local_res20 + 0x3a8) | 0x10;
  local_38 = &local_res20;
  local_30 = &local_40;
  local_28 = &local_res20;
  local_20 = &local_48;
  local_18 = local_res8;
  local_10 = &local_res10;
  FUN_1402d244c(local_res18,local_res18,&local_30,&local_38);
  return local_48;
}

