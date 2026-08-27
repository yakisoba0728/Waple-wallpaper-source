// Function: FUN_1401a4d00
// Addr: 1401a4d00
// Size: 88 bytes


void FUN_1401a4d00(longlong param_1,longlong param_2,char *param_3)

{
  size_t sVar1;
  
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    FUN_14000f880(*(int *)(param_2 + 4) + param_1,param_3,sVar1);
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
    (**(code **)(param_2 + 0x28))(param_1,param_2);
  }
  return;
}

