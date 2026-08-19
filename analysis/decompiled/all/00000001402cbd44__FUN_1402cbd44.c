// Function: FUN_1402cbd44
// Addr: 1402cbd44
// Size: 28 bytes


undefined4 FUN_1402cbd44(char param_1)

{
  char local_res8 [8];
  undefined1 auStackX_10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  char *pcStack_18;
  undefined4 *puStack_10;
  
  local_res20[0] = 0;
  puStack_20 = local_res20;
  local_res18[0] = 0;
  pcStack_18 = local_res8;
  puStack_10 = local_res18;
  local_28 = 8;
  uStack_24 = 8;
  local_res8[0] = param_1;
  func_0x0001402cbc20(auStackX_10,&uStack_24,&puStack_20,&local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}

