// Function: FUN_14040c820
// Addr: 14040c820
// Size: 135 bytes


ulonglong FUN_14040c820(undefined8 param_1,ulonglong param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (int)param_2 - (int)param_1;
  uVar3 = (ulonglong)uVar2;
  if (param_4 <= uVar2) {
    for (uVar3 = FUN_1402bbb40(param_1,param_3); (uVar3 != 0 && (uVar3 < param_2));
        uVar3 = FUN_1402bbb40(uVar3 + param_4,param_3)) {
      cVar1 = *(char *)(uVar3 + param_4);
      if ((0x19 < (byte)(cVar1 + 0x9fU)) &&
         ((0x19 < (byte)(cVar1 + 0xbfU) && (9 < (byte)(cVar1 - 0x30U))))) {
        return 1;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

