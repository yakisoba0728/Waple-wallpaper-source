// Function: FUN_140129440
// Addr: 140129440
// Size: 98 bytes


void FUN_140129440(undefined8 *param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow((HWND)param_1[0x2b]);
  if (BVar1 != 0) {
    SetWindowLongPtrW((HWND)param_1[0x2b],-0x15,0);
    DestroyWindow((HWND)param_1[0x2b]);
  }
  param_1[0x2b] = 0;
  FUN_14010b870(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014012949f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

