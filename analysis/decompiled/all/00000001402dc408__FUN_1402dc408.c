// Function: FUN_1402dc408
// Addr: 1402dc408
// Size: 135 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402dc408(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (DAT_140516098 == (code *)0xffffffffffffffff) {
LAB_1402dc46d:
    FUN_1402e92a4(param_1,param_2,param_3);
  }
  else {
    pcVar1 = DAT_140516098;
    if (DAT_140516098 == (code *)0x0) {
      pcVar1 = (code *)FUN_1402dbc10(0x13,"LCIDToLocaleName",&DAT_140430118,"LCIDToLocaleName");
      if (pcVar1 == (code *)0x0) goto LAB_1402dc46d;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}

