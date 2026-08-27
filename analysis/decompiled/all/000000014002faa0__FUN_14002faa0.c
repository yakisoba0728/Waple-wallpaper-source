// Function: FUN_14002faa0
// Addr: 14002faa0
// Size: 204 bytes


void FUN_14002faa0(undefined8 param_1,int param_2,HWND param_3,int param_4,int param_5,
                  undefined8 param_6,uint param_7)

{
  if ((param_3 == (HWND)0x0) ||
     ((((param_4 != 0 || (param_5 != 0)) && (param_2 != 0x8005)) || (DAT_1404e5280 == (HWND)0x0))))
  {
    return;
  }
  if ((param_2 == 0x8003) && (param_3 == DAT_1404e52a0)) {
    ShowWindow(DAT_1404e52a0,4);
  }
  if ((DAT_1404e8f08 <= param_7) && (param_7 - DAT_1404e8f08 < 0x96)) {
    KillTimer(DAT_1404e5280,0x6a);
                    /* WARNING: Could not recover jumptable at 0x00014002fb3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetTimer(DAT_1404e5280,0x6a,0x96,(TIMERPROC)0x0);
    return;
  }
  DAT_1404e8f08 = param_7;
                    /* WARNING: Could not recover jumptable at 0x00014002fb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostMessageW(DAT_1404e5280,0x113,0x68,0x1092);
  return;
}

