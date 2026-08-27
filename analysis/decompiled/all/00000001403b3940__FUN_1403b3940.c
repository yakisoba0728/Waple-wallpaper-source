// Function: FUN_1403b3940
// Addr: 1403b3940
// Size: 50 bytes


void FUN_1403b3940(undefined8 param_1,ushort param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)param_2 + (param_2 & 0xffffff00);
  if (uVar1 == 0) {
    FUN_14036f9e0(&DAT_14045dd10,param_1);
    return;
  }
  FUN_14036f9e0((ulonglong)uVar1 + param_3,param_1);
  return;
}

