// Function: FUN_140015900
// Addr: 140015900
// Size: 13 bytes


undefined8 * FUN_140015900(undefined8 *param_1,ulonglong param_2,undefined2 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 uStackX_8;
  
  lVar2 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar2) < param_2) {
    puVar3 = (undefined8 *)FUN_140015740(param_1,param_2,uStackX_8,param_2,param_3);
    return puVar3;
  }
  lVar1 = lVar2 + param_2;
  param_1[2] = lVar1;
  puVar3 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  puVar4 = (undefined2 *)((longlong)puVar3 + lVar2 * 2);
  if (param_2 != 0) {
    for (; param_2 != 0; param_2 = param_2 - 1) {
      *puVar4 = param_3;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined2 *)((longlong)puVar3 + lVar1 * 2) = 0;
  return param_1;
}

