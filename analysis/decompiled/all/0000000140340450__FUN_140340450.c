// Function: FUN_140340450
// Addr: 140340450
// Size: 90 bytes


void FUN_140340450(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int local_res18;
  int local_res1c;
  
  local_res18 = FUN_1402f4b60(*param_3);
  local_res18 = local_res18 >> 0x10;
  local_res1c = FUN_1402f4b60(param_3[1]);
  local_res1c = local_res1c >> 0x10;
  FUN_14033dde0(param_1,param_2,1,&local_res18);
  return;
}

