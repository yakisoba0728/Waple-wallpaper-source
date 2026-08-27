// Function: FUN_14003ad00
// Addr: 14003ad00
// Size: 137 bytes


ulonglong FUN_14003ad00(undefined8 *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong local_res8;
  int local_14;
  
  *param_2 = 0;
  *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
  puVar3 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  uVar2 = FUN_1402906f0(puVar3);
  local_res8 = uVar2 & 0xff;
  iVar1 = (int)(uVar2 >> 0x20);
  *param_2 = iVar1;
  param_2[1] = local_14;
  *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
  if (iVar1 == 0x91) {
    FUN_14003ab10(param_1,param_2,&local_res8);
  }
  uVar2 = 0xffffffffffffffff;
  if (*param_2 == 0) {
    uVar2 = local_res8;
  }
  return uVar2;
}

