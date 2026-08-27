// Function: FUN_1401276e0
// Addr: 1401276e0
// Size: 148 bytes


void FUN_1401276e0(undefined8 *param_1)

{
  BOOL BVar1;
  
  FUN_14010b870();
  if ((0 < DAT_1404e8c98) && (DAT_1404e8c98 = DAT_1404e8c98 + -1, DAT_1404e8c98 == 0)) {
    UnhookWindowsHookEx(DAT_1404e8df0);
    DAT_1404e8df0 = (HHOOK)0x0;
  }
  BVar1 = IsWindow((HWND)param_1[0x31]);
  if (BVar1 != 0) {
    SetWindowLongPtrW((HWND)param_1[0x31],-0x15,0);
    DestroyWindow((HWND)param_1[0x31]);
    param_1[0x31] = 0;
  }
  FUN_140127d00(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140127771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

