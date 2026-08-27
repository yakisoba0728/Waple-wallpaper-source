// Function: FUN_140084ac0
// Addr: 140084ac0
// Size: 111 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140084ac0(void)

{
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e91b0) {
    FUN_14028b140(&DAT_1404e91b0);
    if (DAT_1404e91b0 == -1) {
      _DAT_1404e9190 = _DAT_1404e9190 & 0xfffffeff;
      FUN_14028b410(&LAB_140424740);
      _Init_thread_footer(&DAT_1404e91b0);
      return &DAT_1404e9188;
    }
  }
  return &DAT_1404e9188;
}

