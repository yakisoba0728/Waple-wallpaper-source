// Function: FUN_140015e70
// Addr: 140015e70
// Size: 17 bytes


undefined4 * FUN_140015e70(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_PTR_1404df530;
  return param_1;
}

