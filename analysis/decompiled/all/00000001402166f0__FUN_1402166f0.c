// Function: FUN_1402166f0
// Addr: 1402166f0
// Size: 45 bytes


undefined8 * FUN_1402166f0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  puVar2 = (undefined8 *)FUN_140215450(&local_18,param_3);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}

