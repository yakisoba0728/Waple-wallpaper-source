// Function: FUN_140038b70
// Addr: 140038b70
// Size: 190 bytes


undefined8 * FUN_140038b70(undefined8 *param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 local_res8;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  if (param_1[3] - uVar2 < param_3) {
    puVar3 = (undefined8 *)FUN_140038ce0(param_1,param_3,local_res8,param_2,param_3,param_4);
    return puVar3;
  }
  param_1[2] = uVar2 + param_3;
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  lVar1 = (longlong)puVar3 + param_2;
  FUN_1404210f0(lVar1 + param_3,lVar1,(uVar2 - param_2) + 1);
  FUN_1404217a0(lVar1,(int)param_4,param_3);
  return param_1;
}

