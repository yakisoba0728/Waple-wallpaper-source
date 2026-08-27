// Function: FUN_140046530
// Addr: 140046530
// Size: 143 bytes


undefined8 FUN_140046530(longlong param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  longlong lVar3;
  
  uVar1 = FUN_140086de0(param_1 + 0x48,"general","");
  sVar2 = strlen(param_2);
  lVar3 = FUN_140087490(uVar1,param_2,param_2 + sVar2);
  if (lVar3 != 0) {
    sVar2 = strlen(param_2);
    uVar1 = FUN_140086de0(uVar1,param_2,param_2 + sVar2);
    FUN_140085520(param_3,uVar1);
    return 1;
  }
  return 0;
}

