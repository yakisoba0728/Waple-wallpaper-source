// Function: FUN_1402dca0c
// Addr: 1402dca0c
// Size: 149 bytes


longlong FUN_1402dca0c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((DAT_1405160f0 == -1) ||
     (((DAT_1405160f0 == 0 &&
       (lVar1 = FUN_1402dbce0(4,"GetActiveWindow",&DAT_1404300c0,"GetActiveWindow"), lVar1 == 0)) ||
      (lVar1 = thunk_FUN_140420d40(), lVar1 == 0)))) {
    lVar1 = 0;
  }
  else if ((DAT_140516118 != -1) &&
          ((DAT_140516118 != 0 ||
           (lVar2 = FUN_1402dbce0(9,"GetLastActivePopup",&DAT_1404300f0,"GetLastActivePopup"),
           lVar2 != 0)))) {
    lVar1 = thunk_FUN_140420d40(lVar1);
    return lVar1;
  }
  return lVar1;
}

