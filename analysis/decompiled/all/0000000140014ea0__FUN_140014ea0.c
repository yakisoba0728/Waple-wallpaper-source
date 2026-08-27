// Function: FUN_140014ea0
// Addr: 140014ea0
// Size: 76 bytes


undefined2 FUN_140014ea0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 local_res8 [4];
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  local_res10[0] = param_2;
  iVar1 = FUN_1402911d0(local_res8,local_res10,1,local_res18,param_1 + 0x30);
  if (iVar1 < 0) {
    local_res8[0] = 0xffff;
  }
  return local_res8[0];
}

