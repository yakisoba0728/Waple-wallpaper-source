// Function: FUN_1402b2020
// Addr: 1402b2020
// Size: 80 bytes


undefined2 *
FUN_1402b2020(undefined8 param_1,undefined2 param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  while ((param_3 != param_4 &&
         (cVar1 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(param_1,param_2,*param_3),
         cVar1 == '\0'))) {
    param_3 = param_3 + 1;
  }
  return param_3;
}

