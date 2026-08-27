// Function: FUN_14001e4f0
// Addr: 14001e4f0
// Size: 54 bytes


void FUN_14001e4f0(void)

{
  KillTimer(DAT_1404e5280,0x74);
                    /* WARNING: Could not recover jumptable at 0x00014001e51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTimer(DAT_1404e5280,0x74,3000,(TIMERPROC)0x0);
  return;
}

