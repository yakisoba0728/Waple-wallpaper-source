// Function: FUN_1402bbf90
// Addr: 1402bbf90
// Size: 1 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1402bbf90(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_1404dc450 != -1) {
    uVar1 = (*DAT_1404266a8)();
    lVar3 = (*_UNK_140426520)(DAT_1404dc450);
    if (lVar3 != -1) {
      if (lVar3 != 0) {
        (*DAT_1404266a0)(uVar1);
        return lVar3;
      }
      iVar2 = (*_UNK_140426518)(DAT_1404dc450,0xffffffffffffffff);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1402dd8b0(1,0x80);
      }
    }
    (*DAT_1404266a0)(uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c98b4();
}

