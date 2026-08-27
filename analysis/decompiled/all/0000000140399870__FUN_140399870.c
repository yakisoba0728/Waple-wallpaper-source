// Function: FUN_140399870
// Addr: 140399870
// Size: 66 bytes


undefined8 * FUN_140399870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = GeometrySink::vftable;
  FUN_140397060(param_1 + 2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x50);
  }
  return param_1;
}

