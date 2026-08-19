// Function: FUN_1402d0bb0
// Addr: 1402d0bb0
// Size: 55 bytes


ulonglong FUN_1402d0bb0(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1402d6370(0);
  bVar1 = (byte)DAT_1404dc110 & 0x3f;
  uVar2 = DAT_1404e4518 ^ DAT_1404dc110;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

