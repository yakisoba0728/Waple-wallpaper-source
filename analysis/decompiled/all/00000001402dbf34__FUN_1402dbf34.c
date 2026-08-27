// Function: FUN_1402dbf34
// Addr: 1402dbf34
// Size: 74 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1402dbf34(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_140516000 == (code *)0xffffffffffffffff) {
    return 1;
  }
  pcVar1 = DAT_140516000;
  if ((DAT_140516000 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1402dbc10(0,"AreFileApisANSI",&DAT_14042ff88,&DAT_14042ff8c),
     pcVar1 == (code *)0x0)) {
    return 1;
  }
  uVar2 = (*pcVar1)();
  return uVar2;
}

