// Function: FUN_1402bc010
// Addr: 1402bc010
// Size: 38 bytes


undefined1 FUN_1402bc010(void)

{
  if (DAT_1404dc380 != 0xffffffff) {
    FlsFree(DAT_1404dc380);
    DAT_1404dc380 = 0xffffffff;
  }
  return 1;
}

