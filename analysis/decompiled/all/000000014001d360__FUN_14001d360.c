// Function: FUN_14001d360
// Addr: 14001d360
// Size: 86 bytes


void FUN_14001d360(HWND param_1)

{
  KillTimer(param_1,0x6f);
  SetTimer(param_1,0x6f,100,(TIMERPROC)0x0);
  KillTimer(param_1,0x6c);
                    /* WARNING: Could not recover jumptable at 0x00014001d3af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTimer(param_1,0x6c,3000,(TIMERPROC)0x0);
  return;
}

