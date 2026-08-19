// Function: FUN_140084b90
// Addr: 140084b90
// Size: 1 bytes


undefined8 FUN_140084b90(void)

{
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < iRam00000001404e9280) {
    FUN_14028b210(0x1404e9280);
    if (iRam00000001404e9280 == -1) {
      uRam00000001404e9260 = uRam00000001404e9260 & 0xfffffeff;
      FUN_14028b4e0(0x140424810);
      FUN_14028b1a0(0x1404e9280);
      return 0x1404e9258;
    }
  }
  return 0x1404e9258;
}

