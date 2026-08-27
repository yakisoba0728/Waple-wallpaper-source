// Function: FUN_1400532a0
// Addr: 1400532a0
// Size: 136 bytes


undefined8 * FUN_1400532a0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_3) {
    puVar2 = (undefined8 *)FUN_140053110(param_1,param_3,local_res8,param_2,param_3);
    return puVar2;
  }
  param_1[2] = lVar1 + param_3;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  FUN_1404210f0((longlong)puVar2 + lVar1,param_2,param_3);
  *(undefined1 *)((longlong)puVar2 + lVar1 + param_3) = 0;
  return param_1;
}

