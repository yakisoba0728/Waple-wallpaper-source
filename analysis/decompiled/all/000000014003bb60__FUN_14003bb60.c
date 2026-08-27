// Function: FUN_14003bb60
// Addr: 14003bb60
// Size: 56 bytes


bool FUN_14003bb60(HWND param_1)

{
  HRESULT HVar1;
  int local_res10 [6];
  
  HVar1 = DwmGetWindowAttribute(param_1,0xe,local_res10,4);
  if (HVar1 < 0) {
    return false;
  }
  return local_res10[0] != 0;
}

