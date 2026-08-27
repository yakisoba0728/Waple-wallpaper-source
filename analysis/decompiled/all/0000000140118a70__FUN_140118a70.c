// Function: FUN_140118a70
// Addr: 140118a70
// Size: 133 bytes


undefined8 * FUN_140118a70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140489bf8;
  if ((HWND)param_1[0x86] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[0x86]);
    param_1[0x86] = 0;
  }
  thunk_FUN_14028af80(param_1[0xa1]);
  if (*(int *)(param_1 + 0x89) == 0) {
    FUN_140083230(param_1 + 0x2b);
    FUN_1400fdc50(param_1);
    if ((param_2 & 1) != 0) {
      thunk_FUN_14028af80(param_1,0x518);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140015110();
}

