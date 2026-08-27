// Function: FUN_1403874d0
// Addr: 1403874d0
// Size: 108 bytes


undefined2 FUN_1403874d0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  
  cVar1 = FUN_1403c9880();
  if (cVar1 != '\0') {
    return 1;
  }
  sVar2 = FUN_14039b800(param_2);
  if (sVar2 != 0) {
    uVar3 = FUN_1403c9880(param_1,sVar2,param_3);
    return uVar3;
  }
  return 0;
}

