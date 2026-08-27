// Function: FUN_140052f10
// Addr: 140052f10
// Size: 17 bytes


undefined4 * FUN_140052f10(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_1404df520;
  return param_1;
}

