// Function: FUN_1402dc328
// Addr: 1402dc328
// Size: 112 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402dc328(undefined8 param_1,undefined4 param_2)

{
  LCID LVar1;
  code *pcVar2;
  
  if (DAT_140516070 == (code *)0xffffffffffffffff) {
LAB_1402dc377:
    LVar1 = GetUserDefaultLCID();
    FUN_1402dc408(LVar1,param_1,param_2,0);
  }
  else {
    pcVar2 = DAT_140516070;
    if (DAT_140516070 == (code *)0x0) {
      pcVar2 = (code *)FUN_1402dbc10(0xe,"GetUserDefaultLocaleName",&DAT_140430090,
                                     "GetUserDefaultLocaleName");
      if (pcVar2 == (code *)0x0) goto LAB_1402dc377;
    }
    (*pcVar2)(param_1,param_2);
  }
  return;
}

