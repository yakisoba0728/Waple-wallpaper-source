// Function: FUN_1402174d0
// Addr: 1402174d0
// Size: 234 bytes


undefined8 * FUN_1402174d0(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  if (param_1 != param_2) {
    for (puVar5 = param_1 + 1; puVar5 != param_2; puVar5 = puVar5 + 1) {
      local_res8 = *puVar5;
      cVar4 = (*param_3)(&local_res8,param_1);
      if (cVar4 == '\0') {
        cVar4 = (*param_3)(&local_res8,puVar5 + -1);
        puVar3 = puVar5 + -1;
        puVar2 = puVar5;
        while (puVar1 = puVar3, cVar4 != '\0') {
          *puVar2 = *puVar1;
          cVar4 = (*param_3)(&local_res8,puVar1 + -1);
          puVar3 = puVar1 + -1;
          puVar2 = puVar1;
        }
        *puVar2 = local_res8;
      }
      else {
        FUN_1404210f0(param_1 + 1,param_1,(longlong)puVar5 - (longlong)param_1);
        *param_1 = local_res8;
      }
    }
    return param_2;
  }
  return param_2;
}

