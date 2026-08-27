// Function: FUN_1402dc668
// Addr: 1402dc668
// Size: 80 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1402dc668(undefined4 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1405160c0 == (code *)0xffffffffffffffff) {
    return 0;
  }
  pcVar1 = DAT_1405160c0;
  if ((DAT_1405160c0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1402dbc10(0x18,"RoInitialize",&DAT_140430184,"RoInitialize"),
     pcVar1 == (code *)0x0)) {
    return 0;
  }
  uVar2 = (*pcVar1)(param_1);
  return uVar2;
}

