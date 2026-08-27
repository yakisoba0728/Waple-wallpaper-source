// Function: FUN_14001dce0
// Addr: 14001dce0
// Size: 71 bytes


void FUN_14001dce0(void)

{
  if ((DAT_1404df540 & 0x1000) == 0) {
    KillTimer(DAT_1404e5280,0x75);
                    /* WARNING: Could not recover jumptable at 0x00014001dd1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetTimer(DAT_1404e5280,0x75,5000,(TIMERPROC)0x0);
    return;
  }
  return;
}

