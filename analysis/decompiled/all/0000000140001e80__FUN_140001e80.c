// Function: FUN_140001e80
// Addr: 140001e80
// Size: 118 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001e80(void)

{
  DAT_1404e8e08 = FUN_14028af20(0x20);
  *(longlong *)DAT_1404e8e08 = DAT_1404e8e08;
  *(longlong *)(DAT_1404e8e08 + 8) = DAT_1404e8e08;
  DAT_1404e8e18 = 0;
  _DAT_1404e8e20 = 0;
  uRam00000001404e8e28 = 0;
  DAT_1404e8e30 = 7;
  DAT_1404e8e38 = 8;
  DAT_1404e8e00 = 0x3f800000;
  FUN_14003e510(&DAT_1404e8e18,0x10,DAT_1404e8e08);
  FUN_14028b410(FUN_1404249b0);
  return;
}

