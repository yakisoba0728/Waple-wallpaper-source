// Function: FUN_140216a40
// Addr: 140216a40
// Size: 121 bytes


undefined8 * FUN_140216a40(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar1 = param_1;
  if (param_1 == param_2) {
    return param_2;
  }
  while ((puVar1 = puVar1 + 1, puVar3 = param_2, puVar1 != param_2 &&
         (cVar2 = (*param_3)(*puVar1,*param_1), puVar3 = puVar1, cVar2 == '\0'))) {
    param_1 = param_1 + 1;
  }
  return puVar3;
}

