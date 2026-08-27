// Function: FUN_1402d1f70
// Addr: 1402d1f70
// Size: 36 bytes


void FUN_1402d1f70(ulonglong param_1)

{
  byte bVar1;
  
  bVar1 = 0x40 - ((byte)DAT_1404dc040 & 0x3f) & 0x3f;
  DAT_1404e45d0 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_1404dc040;
  return;
}

