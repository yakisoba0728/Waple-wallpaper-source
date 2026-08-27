// Function: FUN_1402dc3a0
// Addr: 1402dc3a0
// Size: 103 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402dc3a0(undefined8 param_1)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_140516088 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_140516088;
    if (DAT_140516088 == (code *)0x0) {
      pcVar1 = (code *)FUN_1402dbc10(0x11,"IsValidLocaleName",&DAT_1404300e0,"IsValidLocaleName");
      if (pcVar1 == (code *)0x0) goto LAB_1402dc3ea;
    }
    (*pcVar1)(param_1);
    return;
  }
LAB_1402dc3ea:
  Locale = FUN_1402dc584(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001402dc400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IsValidLocale(Locale,1);
  return;
}

