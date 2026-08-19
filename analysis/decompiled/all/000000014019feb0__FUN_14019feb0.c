// Function: FUN_14019feb0
// Addr: 14019feb0
// Size: 6 bytes


undefined8 * FUN_14019feb0(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  
  if (param_1 == param_2) {
    return param_2;
  }
  puVar4 = param_1 + 1;
  while( true ) {
    if (puVar4 == param_2) {
      return param_2;
    }
    uVar1 = *puVar4;
    cVar3 = (*param_3)(uVar1,*param_1);
    if (cVar3 != '\0') break;
    cVar3 = (*param_3)(uVar1,puVar4[-1]);
    puVar2 = puVar4;
    while (cVar3 != '\0') {
      *puVar2 = puVar2[-1];
      cVar3 = (*param_3)(uVar1,puVar2[-2]);
      puVar2 = puVar2 + -1;
    }
    *puVar2 = uVar1;
    puVar4 = puVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(param_1 + 1,param_1,(longlong)puVar4 - (longlong)param_1);
}

