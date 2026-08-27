// Function: FUN_140001f00
// Addr: 140001f00
// Size: 118 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001f00(void)

{
  DAT_1404e8e48 = FUN_14028af20(0x20);
  *(longlong *)DAT_1404e8e48 = DAT_1404e8e48;
  *(longlong *)(DAT_1404e8e48 + 8) = DAT_1404e8e48;
  DAT_1404e8e58 = 0;
  _DAT_1404e8e60 = 0;
  uRam00000001404e8e68 = 0;
  DAT_1404e8e70 = 7;
  DAT_1404e8e78 = 8;
  DAT_1404e8e40 = 0x3f800000;
  FUN_14003e510(&DAT_1404e8e58,0x10,DAT_1404e8e48);
  FUN_14028b410(FUN_1404249d0);
  return;
}

