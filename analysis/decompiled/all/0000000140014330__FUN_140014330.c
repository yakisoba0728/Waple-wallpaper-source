// Function: FUN_140014330
// Addr: 140014330
// Size: 58 bytes


undefined1 FUN_140014330(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 local_res8 [24];
  undefined8 local_res20;
  
  local_res20 = 0;
  iVar1 = FUN_140291bd0(local_res8,param_2,&local_res20,param_1 + 0x30);
  if (iVar1 != 1) {
    local_res8[0] = param_3;
  }
  return local_res8[0];
}

