// Function: FUN_1402dc584
// Addr: 1402dc584
// Size: 98 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402dc584(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (DAT_1405160a0 == (code *)0xffffffffffffffff) {
LAB_1402dc5d3:
    FUN_1402e938c(param_1);
  }
  else {
    pcVar1 = DAT_1405160a0;
    if (DAT_1405160a0 == (code *)0x0) {
      pcVar1 = (code *)FUN_1402dbc10(0x14,"LocaleNameToLCID",&DAT_140430138,"LocaleNameToLCID");
      if (pcVar1 == (code *)0x0) goto LAB_1402dc5d3;
    }
    (*pcVar1)(param_1,param_2);
  }
  return;
}

