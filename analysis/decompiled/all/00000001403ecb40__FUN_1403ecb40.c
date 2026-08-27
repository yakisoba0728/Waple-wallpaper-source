// Function: FUN_1403ecb40
// Addr: 1403ecb40
// Size: 164 bytes


undefined1 FUN_1403ecb40(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar2 = FUN_1403ecbf0();
    return uVar2;
  }
  uVar1 = *param_2;
  if (uVar1 == 0xfffffffe) {
    *param_2 = 0xffffffff;
    return false;
  }
  local_res8[0] = uVar1;
  FUN_1403ecbf0(param_1,local_res8);
  if (uVar1 + 1 < local_res8[0]) {
    *param_2 = uVar1 + 1;
    return true;
  }
  local_res8[0] = uVar1;
  FUN_1403ed0e0(param_1,local_res18,local_res8);
  *param_2 = local_res8[0] + 1;
  return local_res8[0] + 1 != 0xffffffff;
}

