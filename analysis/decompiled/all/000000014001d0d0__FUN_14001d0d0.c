// Function: FUN_14001d0d0
// Addr: 14001d0d0
// Size: 54 bytes


void FUN_14001d0d0(void)

{
  KillTimer(DAT_1404e5280,0x7b);
                    /* WARNING: Could not recover jumptable at 0x00014001d0ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTimer(DAT_1404e5280,0x7b,3000,(TIMERPROC)0x0);
  return;
}

