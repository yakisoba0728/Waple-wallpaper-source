// Function: FUN_140076f60
// Addr: 140076f60
// Size: 109 bytes


undefined8 * FUN_140076f60(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  sVar2 = strlen(param_3);
  puVar3 = (undefined8 *)FUN_1400532a0(param_2,param_3,sVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  uVar1 = puVar3[3];
  param_1[2] = puVar3[2];
  param_1[3] = uVar1;
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  return param_1;
}

