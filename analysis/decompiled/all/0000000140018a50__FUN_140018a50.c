// Function: FUN_140018a50
// Addr: 140018a50
// Size: 109 bytes


undefined8 FUN_140018a50(undefined8 *param_1)

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
      puVar2 = (undefined8 *)FUN_14028f4c0(puVar4,puVar3,"http://",7), puVar2 != puVar3)) &&
     (puVar2 == puVar4)) {
    return 1;
  }
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (((7 < (ulonglong)param_1[2]) &&
      (puVar3 = (undefined8 *)(param_1[2] + (longlong)puVar4),
      puVar2 = (undefined8 *)FUN_14028f4c0(puVar4,puVar3,&UNK_1404745e8,8), puVar2 != puVar3)) &&
     (puVar2 == puVar4)) {
    return 1;
  }
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (((3 < (ulonglong)param_1[2]) &&
      (puVar3 = (undefined8 *)(param_1[2] + (longlong)puVar4),
      puVar2 = (undefined8 *)FUN_14028f4c0(puVar4,puVar3,&UNK_1404745f4,4), puVar2 != puVar3)) &&
     (puVar2 == puVar4)) {
    return 1;
  }
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (((6 < *puVar1) &&
      (puVar4 = (undefined8 *)(*puVar1 + (longlong)param_1),
      puVar3 = (undefined8 *)FUN_14028f4c0(param_1,puVar4,&UNK_140474600,7), puVar3 != puVar4)) &&
     (puVar3 == param_1)) {
    return 1;
  }
  return 0;
}

