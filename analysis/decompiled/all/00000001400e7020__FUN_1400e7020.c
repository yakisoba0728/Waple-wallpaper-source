// Function: FUN_1400e7020
// Addr: 1400e7020
// Size: 73 bytes


ulonglong FUN_1400e7020(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_140293a90(param_2,param_3,param_4,param_5,param_1 + 0x10);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (ulonglong)(iVar1 != 0);
}

