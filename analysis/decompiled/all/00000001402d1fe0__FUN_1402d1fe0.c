// Function: FUN_1402d1fe0
// Addr: 1402d1fe0
// Size: 32 bytes


undefined8 FUN_1402d1fe0(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_1404dc110 & 0x3f;
  return CONCAT71((int7)(DAT_1404dc110 >> 8),
                  (DAT_1404e46a0 ^ DAT_1404dc110) >> bVar1 != 0 ||
                  (DAT_1404e46a0 ^ DAT_1404dc110) << 0x40 - bVar1 != 0);
}

