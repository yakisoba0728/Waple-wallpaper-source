// Function: FUN_14034f470
// Addr: 14034f470
// Size: 76 bytes


int FUN_14034f470(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int local_res8 [2];
  
  puVar1 = (undefined8 *)FUN_1402f7e90(param_1,8,local_res8);
  if (local_res8[0] == 0) {
    *puVar1 = param_1;
    *param_2 = puVar1;
    return 0;
  }
  *param_2 = puVar1;
  return local_res8[0];
}

