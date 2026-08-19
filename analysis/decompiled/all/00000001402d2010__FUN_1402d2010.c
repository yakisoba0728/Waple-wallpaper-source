// Function: FUN_1402d2010
// Addr: 1402d2010
// Size: 42 bytes


/* WARNING: Switch with 1 destination removed at 0x000140420e50 */

undefined8 FUN_1402d2010(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 in_R9;
  uint unaff_XMM6_Da;
  undefined4 uStack0000000000000028;
  ulonglong uStack0000000000000050;
  
  bVar2 = (byte)DAT_1404dc110 & 0x3f;
  if ((DAT_1404e46a0 ^ DAT_1404dc110) >> bVar2 != 0 ||
      (DAT_1404e46a0 ^ DAT_1404dc110) << 0x40 - bVar2 != 0) {
    uStack0000000000000028 = 0x21;
    uStack0000000000000050 = (ulonglong)unaff_XMM6_Da;
    uVar1 = FUN_1402ecc10(&DAT_140497e30,0x1d,uStack0000000000000050,in_R9,8);
    return uVar1;
  }
  return 0;
}

