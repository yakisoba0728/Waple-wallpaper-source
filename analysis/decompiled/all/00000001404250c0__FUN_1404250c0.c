// Function: FUN_1404250c0
// Addr: 1404250c0
// Size: 24 bytes


void FUN_1404250c0(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  *(undefined **)(lVar1 + 0x2c0) = &UNK_14048f3b0;
  FUN_1401b8bf0(lVar1 + 0x300);
                    /* WARNING: Subroutine does not return */
  FUN_140017310(lVar1 + 0x2e0);
}

