// Function: FUN_14001df90
// Addr: 14001df90
// Size: 76 bytes


void FUN_14001df90(void)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(DAT_1404e5280);
  if (BVar1 != 0) {
    KillTimer(DAT_1404e5280,0x73);
                    /* WARNING: Could not recover jumptable at 0x00014001dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetTimer(DAT_1404e5280,0x73,60000,(TIMERPROC)0x0);
    return;
  }
  return;
}

