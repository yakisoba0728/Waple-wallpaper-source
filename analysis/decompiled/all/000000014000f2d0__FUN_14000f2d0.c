// Function: FUN_14000f2d0
// Addr: 14000f2d0
// Size: 62 bytes


undefined8 * FUN_14000f2d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::ios_base::vftable;
  FUN_14028c430();
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x60);
  }
  return param_1;
}

