// Function: FUN_1400fe8b0
// Addr: 1400fe8b0
// Size: 188 bytes


void FUN_1400fe8b0(undefined8 *param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow((HWND)param_1[0x2d]);
  if (BVar1 != 0) {
    KillTimer((HWND)param_1[0x2d],100);
    KillTimer((HWND)param_1[0x2d],0x65);
    KillTimer((HWND)param_1[0x2d],0x69);
    KillTimer((HWND)param_1[0x2d],0x66);
    KillTimer((HWND)param_1[0x2d],0x67);
    SetWindowLongPtrW((HWND)param_1[0x2d],-0x15,0);
    DestroyWindow((HWND)param_1[0x2d]);
  }
  param_1[0x2d] = 0;
  FUN_14010b870(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001400fe969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

