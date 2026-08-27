// Function: FUN_1402dca04
// Addr: 1402dca04
// Size: 233 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_1402dca04(void)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_58;
  if ((DAT_140516058 != (code *)0xffffffffffffffff) &&
     (((pcVar2 = DAT_140516058, DAT_140516058 != (code *)0x0 ||
       (pcVar2 = (code *)FUN_1402dbc10(0xb,"GetProcessWindowStation",&DAT_140430058,
                                       "GetProcessWindowStation"), pcVar2 != (code *)0x0)) &&
      (DAT_140516078 != (code *)0xffffffffffffffff)))) {
    pcVar3 = DAT_140516078;
    if ((DAT_140516078 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_1402dbc10(0xf,"GetUserObjectInformationW",&DAT_1404300b8,
                                       "GetUserObjectInformationW"), pcVar3 == (code *)0x0)) {
      return 1;
    }
    lVar4 = (*pcVar2)();
    if (lVar4 != 0) {
      local_38 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = (*pcVar3)(lVar4,1,&local_28,0xc);
      if (iVar1 != 0) {
        return (byte)local_20 & 1;
      }
    }
    return 0;
  }
  return 1;
}

