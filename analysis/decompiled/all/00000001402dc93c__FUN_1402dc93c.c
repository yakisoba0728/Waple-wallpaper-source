// Function: FUN_1402dc93c
// Addr: 1402dc93c
// Size: 149 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_1402dc93c(void)

{
  code *pcVar1;
  longlong lVar2;
  
  if ((DAT_140516020 == (code *)0xffffffffffffffff) ||
     (((pcVar1 = DAT_140516020, DAT_140516020 == (code *)0x0 &&
       (pcVar1 = (code *)FUN_1402dbc10(4,"GetActiveWindow",&DAT_14042fff0,"GetActiveWindow"),
       pcVar1 == (code *)0x0)) || (lVar2 = (*pcVar1)(), lVar2 == 0)))) {
    lVar2 = 0;
  }
  else if ((DAT_140516048 != (code *)0xffffffffffffffff) &&
          ((pcVar1 = DAT_140516048, DAT_140516048 != (code *)0x0 ||
           (pcVar1 = (code *)FUN_1402dbc10(9,"GetLastActivePopup",&DAT_140430020,
                                           "GetLastActivePopup"), pcVar1 != (code *)0x0)))) {
    lVar2 = (*pcVar1)(lVar2);
    return lVar2;
  }
  return lVar2;
}

