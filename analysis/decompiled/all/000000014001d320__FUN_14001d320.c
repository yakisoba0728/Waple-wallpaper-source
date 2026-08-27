// Function: FUN_14001d320
// Addr: 14001d320
// Size: 57 bytes


void FUN_14001d320(HWND param_1,UINT param_2)

{
  KillTimer(param_1,0x6c);
                    /* WARNING: Could not recover jumptable at 0x00014001d352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTimer(param_1,0x6c,param_2,(TIMERPROC)0x0);
  return;
}

