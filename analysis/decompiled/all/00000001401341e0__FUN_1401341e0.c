// Function: FUN_1401341e0
// Addr: 1401341e0
// Size: 99 bytes


void FUN_1401341e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  char cVar1;
  
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    FUN_140134250(param_2,param_1);
  }
  cVar1 = (*param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    FUN_140134250(param_3,param_2);
    cVar1 = (*param_4)(param_2,param_1);
    if (cVar1 != '\0') {
      FUN_140134250(param_2,param_1);
    }
  }
  return;
}

