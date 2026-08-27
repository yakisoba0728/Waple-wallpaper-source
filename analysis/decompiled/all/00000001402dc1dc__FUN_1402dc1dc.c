// Function: FUN_1402dc1dc
// Addr: 1402dc1dc
// Size: 148 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402dc1dc(undefined8 param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_140516050 == (code *)0xffffffffffffffff) {
LAB_1402dc241:
    Locale = FUN_1402dc584(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    pcVar1 = DAT_140516050;
    if (DAT_140516050 == (code *)0x0) {
      pcVar1 = (code *)FUN_1402dbc10(10,"GetLocaleInfoEx",&DAT_140430040,"GetLocaleInfoEx");
      if (pcVar1 == (code *)0x0) goto LAB_1402dc241;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}

