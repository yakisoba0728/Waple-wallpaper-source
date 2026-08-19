// Function: FUN_1403bc900
// Addr: 1403bc900
// Size: 15 bytes


longlong FUN_1403bc900(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    LOCK();
    lVar1 = *param_1;
    if (lVar2 == lVar1) {
      *param_1 = 0;
    }
    UNLOCK();
    if (lVar2 == lVar1) {
      if ((*(int *)(lVar2 + 0x24) != 0) || (*(int *)(lVar2 + 4) != 0)) {
        *(undefined4 *)(lVar2 + 0x24) = 0;
        *(undefined4 *)(lVar2 + 0x14) = 0;
        *(undefined4 *)(lVar2 + 4) = 0;
      }
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1402dd8b0(1,0x30);
}

