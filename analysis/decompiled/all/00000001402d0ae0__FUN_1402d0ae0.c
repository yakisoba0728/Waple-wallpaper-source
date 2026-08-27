// Function: FUN_1402d0ae0
// Addr: 1402d0ae0
// Size: 55 bytes


ulonglong FUN_1402d0ae0(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_1404dc040 & 0x3f;
  uVar2 = DAT_1404e4448 ^ DAT_1404dc040;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

