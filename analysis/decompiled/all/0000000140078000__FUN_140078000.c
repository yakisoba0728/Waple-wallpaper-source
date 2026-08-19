// Function: FUN_140078000
// Addr: 140078000
// Size: 18 bytes


undefined4 * FUN_140078000(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  return param_1;
}

