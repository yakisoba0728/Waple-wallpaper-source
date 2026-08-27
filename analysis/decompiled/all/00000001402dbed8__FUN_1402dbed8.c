// Function: FUN_1402dbed8
// Addr: 1402dbed8
// Size: 92 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1402dbed8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1405160e8 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_1405160e8;
  if ((DAT_1405160e8 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1402dbc10(0x1d,"AppPolicyGetWindowingModel",&DAT_14043023c,
                                     "AppPolicyGetWindowingModel"), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}

