// Function: FUN_14003adf0
// Addr: 14003adf0
// Size: 278 bytes


int FUN_14003adf0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined *local_58;
  undefined8 local_50;
  undefined1 local_48 [40];
  
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  lVar2 = FUN_1402d6aa0(puVar4);
  if ((lVar2 == 0) || (lVar2 != param_1[2])) {
    return 2;
  }
  FUN_140016600(local_48,param_1);
  local_50 = 1;
  local_58 = &DAT_140475590;
  FUN_14003b8e0(param_1,&local_58);
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  iVar1 = FUN_14028fe10(param_1,param_3,param_4);
  if (iVar1 != 0) {
    if (iVar1 == 5) {
      if ((param_2 & 2) != 0) {
        FUN_140016770(local_48);
        return 0x12;
      }
    }
    else if ((iVar1 == 2) && (puVar3 = (uint *)FUN_14003b970(&local_58,local_48,3), 1 < *puVar3)) {
      iVar1 = 0x12;
    }
    FUN_140016770(local_48);
    return iVar1;
  }
  iVar1 = FUN_14003ad90(*param_3,param_4);
  FUN_140016770(local_48);
  return iVar1;
}

