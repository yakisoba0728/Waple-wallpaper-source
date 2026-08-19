// Function: _set_new_handler
// Addr: 1402d0bf0
// Size: 89 bytes


/* Library Function - Single Match
    _set_new_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  FUN_1402d6370(0);
  bVar2 = (byte)DAT_1404dc110 & 0x3f;
  uVar3 = DAT_1404dc110 ^ DAT_1404e4518;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_1404e4518 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_1404dc110;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}

