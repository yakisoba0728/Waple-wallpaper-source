// Function: FUN_1402dc5e8
// Addr: 1402dc5e8
// Size: 127 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402dc5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (DAT_1405160b8 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_1405160b8;
    if (DAT_1405160b8 == (code *)0x0) {
      pcVar1 = (code *)FUN_1402dbc10(0x17,"MessageBoxW",&DAT_140430170,"MessageBoxW");
      if (pcVar1 == (code *)0x0) goto LAB_1402dc662;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
    return;
  }
LAB_1402dc662:
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

