// Function: __security_check_cookie
// Addr: 1402ed220
// Size: 30 bytes


/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_1404dc040) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_1402ed010(_StackCookie);
  return;
}

