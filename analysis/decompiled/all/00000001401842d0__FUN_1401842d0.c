// Function: FUN_1401842d0
// Addr: 1401842d0
// Size: 58 bytes


undefined8 * FUN_1401842d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_48 [72];
  
  puVar2 = (undefined8 *)FUN_14005ecb0(local_48,param_1,param_2);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  uVar1 = puVar2[5];
  param_1[4] = puVar2[4];
  param_1[5] = uVar1;
  uVar1 = puVar2[7];
  param_1[6] = puVar2[6];
  param_1[7] = uVar1;
  return param_1;
}

