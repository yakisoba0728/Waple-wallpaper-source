// Function: FUN_1403875b0
// Addr: 1403875b0
// Size: 115 bytes


undefined8 FUN_1403875b0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  short sVar3;
  
  cVar1 = FUN_1403c9880();
  if (cVar1 != '\0') {
    return 1;
  }
  if (param_2 < 0x100) {
    sVar3 = (short)param_2 + -0x1000;
    if (sVar3 != 0) {
      uVar2 = FUN_1403c9880(param_1,sVar3,param_3);
      return uVar2;
    }
  }
  return 0;
}

