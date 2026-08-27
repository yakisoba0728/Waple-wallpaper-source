// Function: FUN_140018980
// Addr: 140018980
// Size: 299 bytes


undefined8 FUN_140018980(undefined8 *param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (((6 < (ulonglong)param_1[2]) &&
      (puVar3 = (undefined8 *)(param_1[2] + (longlong)puVar4),
      puVar2 = (undefined8 *)thunk_FUN_14028e750(puVar4,puVar3,"http://",7), puVar2 != puVar3)) &&
     (puVar2 == puVar4)) {
    return 1;
  }
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (((7 < (ulonglong)param_1[2]) &&
      (puVar3 = (undefined8 *)(param_1[2] + (longlong)puVar4),
      puVar2 = (undefined8 *)thunk_FUN_14028e750(puVar4,puVar3,"https://",8), puVar2 != puVar3)) &&
     (puVar2 == puVar4)) {
    return 1;
  }
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (((3 < (ulonglong)param_1[2]) &&
      (puVar3 = (undefined8 *)(param_1[2] + (longlong)puVar4),
      puVar2 = (undefined8 *)thunk_FUN_14028e750(puVar4,puVar3,&DAT_140474524,4), puVar2 != puVar3))
     && (puVar2 == puVar4)) {
    return 1;
  }
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (((6 < *puVar1) &&
      (puVar4 = (undefined8 *)(*puVar1 + (longlong)param_1),
      puVar3 = (undefined8 *)thunk_FUN_14028e750(param_1,puVar4,"edge://",7), puVar3 != puVar4)) &&
     (puVar3 == param_1)) {
    return 1;
  }
  return 0;
}

