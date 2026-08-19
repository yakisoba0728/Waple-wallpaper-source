// Function: FUN_1402dc470
// Addr: 1402dc470
// Size: 69 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc470(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (DAT_140516158 != -1) {
    if (DAT_140516158 == 0) {
      lVar2 = FUN_1402dbce0(0x11,"IsValidLocaleName",&UNK_1404301b0,"IsValidLocaleName");
      if (lVar2 == 0) goto LAB_1402dc4ba;
    }
    thunk_FUN_140420d40(param_1);
    return;
  }
LAB_1402dc4ba:
  uVar1 = func_0x0001402dc654(param_1,0);
  (*_DAT_140426478)(uVar1,1);
  return;
}

