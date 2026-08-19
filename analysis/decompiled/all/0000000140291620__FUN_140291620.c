// Function: FUN_140291620
// Addr: 140291620
// Size: 51 bytes


void FUN_140291620(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    (*DAT_140426578)(&DAT_1404e4760);
    return;
  }
  if (iVar1 < 8) {
    FUN_140293b90(&DAT_1404e3c20 + (longlong)iVar1 * 0x28);
    return;
  }
  return;
}

