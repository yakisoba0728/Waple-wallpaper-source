// Function: FUN_140013b20
// Addr: 140013b20
// Size: 17 bytes


undefined4 * FUN_140013b20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_1404df510;
  return param_1;
}

