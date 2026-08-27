// Function: FUN_140065540
// Addr: 140065540
// Size: 62 bytes


longlong * FUN_140065540(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x18))();
  }
  *param_1 = 0;
  DestroyWindow((HWND)param_1[1]);
  thunk_FUN_14028af80(param_1,0x18);
  return param_1;
}

