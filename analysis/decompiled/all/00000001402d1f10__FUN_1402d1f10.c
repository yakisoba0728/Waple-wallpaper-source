// Function: FUN_1402d1f10
// Addr: 1402d1f10
// Size: 32 bytes


undefined8 FUN_1402d1f10(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_1404dc040 & 0x3f;
  return CONCAT71((int7)(DAT_1404dc040 >> 8),
                  (DAT_1404e45d0 ^ DAT_1404dc040) >> bVar1 != 0 ||
                  (DAT_1404e45d0 ^ DAT_1404dc040) << 0x40 - bVar1 != 0);
}

