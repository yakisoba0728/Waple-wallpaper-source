// Function: FUN_140082fa0
// Addr: 140082fa0
// Size: 100 bytes


undefined8 FUN_140082fa0(HWND param_1,DWORD *param_2)

{
  BOOL BVar1;
  HWND pHVar2;
  DWORD local_res10 [6];
  
  GetWindowThreadProcessId(param_1,local_res10);
  if (local_res10[0] == *param_2) {
    pHVar2 = GetWindow(param_1,4);
    if (pHVar2 == (HWND)0x0) {
      BVar1 = IsWindowVisible(param_1);
      if (BVar1 != 0) {
        *(HWND *)(param_2 + 2) = param_1;
        return 0;
      }
    }
  }
  return 1;
}

