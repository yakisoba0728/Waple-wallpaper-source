// Function: FUN_1400011b0
// Addr: 1400011b0
// Size: 118 bytes


void FUN_1400011b0(void)

{
  DAT_1404e8be8 = FUN_14028af20(0x78);
  *(longlong *)DAT_1404e8be8 = DAT_1404e8be8;
  *(longlong *)(DAT_1404e8be8 + 8) = DAT_1404e8be8;
  DAT_1404e8bf8 = 0;
  DAT_1404e8c00 = 0;
  uRam00000001404e8c08 = 0;
  DAT_1404e8c10 = 7;
  DAT_1404e8c18 = 8;
  DAT_1404e8be0 = 0x3f800000;
  FUN_1400374c0(&DAT_1404e8bf8,0x10,DAT_1404e8be8);
  FUN_14028b410(FUN_140424590);
  return;
}

