// Function: FUN_140018b80
// Addr: 140018b80
// Size: 19 bytes


undefined8 * FUN_140018b80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1402d6b70();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_140016240(param_1,param_2,uVar1);
  return param_1;
}

