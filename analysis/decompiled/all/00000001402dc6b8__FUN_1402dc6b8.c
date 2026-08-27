// Function: FUN_1402dc6b8
// Addr: 1402dc6b8
// Size: 66 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402dc6b8(void)

{
  code *pcVar1;
  
  if (DAT_1405160c8 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_1405160c8;
    if ((DAT_1405160c8 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_1402dbc10(0x19,"RoUninitialize",&DAT_140430198,&DAT_14043019c),
       pcVar1 == (code *)0x0)) {
      return;
    }
    (*pcVar1)();
  }
  return;
}

