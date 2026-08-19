// Function: FUN_140066440
// Addr: 140066440
// Size: 148 bytes


void FUN_140066440(longlong param_1,undefined8 *param_2)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_140030eb0(&DAT_1404e53f8,local_res8,param_2);
  if (local_res8[0] == DAT_1404e5400) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(&DAT_1404e6448,"selectedwallpapers","");
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  func_0x000140421ed0(param_2);
  return;
}

