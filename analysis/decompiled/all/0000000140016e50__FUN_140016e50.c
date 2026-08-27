// Function: FUN_140016e50
// Addr: 140016e50
// Size: 140 bytes


undefined8 * FUN_140016e50(undefined8 *param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_2) {
    puVar2 = (undefined8 *)FUN_140016cc0(param_1,param_2,local_res8,param_2,param_3);
    return puVar2;
  }
  param_1[2] = lVar1 + param_2;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  FUN_1404217a0((longlong)puVar2 + lVar1,(int)param_3,param_2);
  *(undefined1 *)((longlong)puVar2 + lVar1 + param_2) = 0;
  return param_1;
}

