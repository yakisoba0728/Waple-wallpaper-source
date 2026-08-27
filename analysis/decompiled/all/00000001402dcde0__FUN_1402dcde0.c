// Function: FUN_1402dcde0
// Addr: 1402dcde0
// Size: 72 bytes


ulonglong FUN_1402dcde0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_1404dc040 & 0x3f;
  uVar2 = DAT_1404e4d70 ^ DAT_1404dc040;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

