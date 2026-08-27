// Function: FUN_140001f80
// Addr: 140001f80
// Size: 118 bytes


void FUN_140001f80(void)

{
  DAT_1404e8e88 = FUN_14028af20(0x18);
  *(longlong *)DAT_1404e8e88 = DAT_1404e8e88;
  *(longlong *)(DAT_1404e8e88 + 8) = DAT_1404e8e88;
  DAT_1404e8e98 = 0;
  DAT_1404e8ea0 = 0;
  uRam00000001404e8ea8 = 0;
  DAT_1404e8eb0 = 7;
  DAT_1404e8eb8 = 8;
  DAT_1404e8e80 = 0x3f800000;
  FUN_14003e510(&DAT_1404e8e98,0x10,DAT_1404e8e88);
  FUN_14028b410(FUN_1404249f0);
  return;
}

