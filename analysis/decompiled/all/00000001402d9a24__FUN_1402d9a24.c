// Function: FUN_1402d9a24
// Addr: 1402d9a24
// Size: 34 bytes


undefined4 FUN_1402d9a24(void)

{
  if (DAT_1404dc580 != 0xffffffff) {
    FlsFree(DAT_1404dc580);
    DAT_1404dc580 = 0xffffffff;
  }
  return 1;
}

