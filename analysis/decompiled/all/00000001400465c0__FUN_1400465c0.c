// Function: FUN_1400465c0
// Addr: 1400465c0
// Size: 96 bytes


void FUN_1400465c0(longlong param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  
  uVar1 = FUN_140086de0(param_1 + 0x48,"general","");
  sVar2 = strlen(param_2);
  uVar1 = FUN_140086de0(uVar1,param_2,param_2 + sVar2);
  FUN_140085520(uVar1,param_3);
  return;
}

