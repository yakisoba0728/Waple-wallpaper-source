// Function: FUN_140293010
// Addr: 140293010
// Size: 71 bytes


undefined8 * FUN_140293010(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1402bba20(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x18);
  }
  return param_1;
}

