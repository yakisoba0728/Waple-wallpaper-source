// Function: FUN_140015e20
// Addr: 140015e20
// Size: 11 bytes


undefined4 * FUN_140015e20(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}

