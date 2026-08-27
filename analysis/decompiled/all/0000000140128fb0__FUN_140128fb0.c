// Function: FUN_140128fb0
// Addr: 140128fb0
// Size: 137 bytes


undefined8 * FUN_140128fb0(undefined8 *param_1,ulonglong param_2)

{
  BOOL BVar1;
  
  *param_1 = &DAT_14048a6f8;
  (**(code **)(*(longlong *)param_1[0x13] + 0x28))();
  BVar1 = IsWindow((HWND)param_1[0x2b]);
  if (BVar1 != 0) {
    KillTimer((HWND)param_1[0x2b],100);
  }
  thunk_FUN_14028af80(param_1[0x2f]);
  param_1[0x2f] = 0;
  FUN_1400fdc50(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x1a8);
  }
  return param_1;
}

