// Function: FUN_14001d110
// Addr: 14001d110
// Size: 68 bytes


void FUN_14001d110(void)

{
  if (((byte)DAT_1404e8df8 & 0x10) != 0) {
    KillTimer(DAT_1404e5280,0x7b);
                    /* WARNING: Could not recover jumptable at 0x00014001d148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetTimer(DAT_1404e5280,0x7b,3000,(TIMERPROC)0x0);
    return;
  }
  return;
}

