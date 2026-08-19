// Function: FUN_14010df10
// Addr: 14010df10
// Size: 46 bytes


void FUN_14010df10(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_140489888;
  param_1[0x2b] = &PTR_UNWIND_INFO_140489870;
  (**(code **)(*(longlong *)param_1[0x13] + 0x28))();
  FUN_1402d3ea0(param_1[0x36]);
  FUN_1402d3ea0(param_1[0x35]);
  FUN_1402d3ea0(param_1[0x34]);
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_1 + 0x94);
}

