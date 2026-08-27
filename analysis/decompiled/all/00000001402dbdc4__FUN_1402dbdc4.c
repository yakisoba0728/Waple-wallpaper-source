// Function: FUN_1402dbdc4
// Addr: 1402dbdc4
// Size: 92 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1402dbdc4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1405160d0 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_1405160d0;
  if ((DAT_1405160d0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1402dbc10(0x1a,"AppPolicyGetProcessTerminationMethod",&DAT_1404301b0,
                                     &DAT_1404301b4), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}

