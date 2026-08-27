// Function: FUN_1402dc114
// Addr: 1402dc114
// Size: 197 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402dc114(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,
                  LPWSTR param_5,int param_6,undefined8 param_7)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_140516028 == (code *)0xffffffffffffffff) {
LAB_1402dc198:
    Locale = FUN_1402dc584(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_140516028;
    if (DAT_140516028 == (code *)0x0) {
      pcVar1 = (code *)FUN_1402dbc10(5,"GetDateFormatEx",&DAT_140430008,"GetDateFormatEx");
      if (pcVar1 == (code *)0x0) goto LAB_1402dc198;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

