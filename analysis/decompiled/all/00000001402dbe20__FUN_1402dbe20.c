// Function: FUN_1402dbe20
// Addr: 1402dbe20
// Size: 92 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1402dbe20(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1405160e0 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_1405160e0;
  if ((DAT_1405160e0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1402dbc10(0x1c,"AppPolicyGetShowDeveloperDiagnostic",&DAT_140430210,
                                     &DAT_140430214), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}

