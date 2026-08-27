// Function: FUN_14024f520
// Addr: 14024f520
// Size: 73 bytes


undefined4 * FUN_14024f520(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14041a9c0(*param_2);
  *param_1 = uVar1;
  uVar1 = FUN_14041a9c0(param_2[1]);
  param_1[1] = uVar1;
  uVar1 = FUN_14041a9c0(param_2[2]);
  param_1[2] = uVar1;
  return param_1;
}

