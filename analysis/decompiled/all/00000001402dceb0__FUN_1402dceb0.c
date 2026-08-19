// Function: FUN_1402dceb0
// Addr: 1402dceb0
// Size: 72 bytes


ulonglong FUN_1402dceb0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1402d6370(*param_2);
  bVar1 = (byte)DAT_1404dc110 & 0x3f;
  uVar2 = DAT_1404e4e40 ^ DAT_1404dc110;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

