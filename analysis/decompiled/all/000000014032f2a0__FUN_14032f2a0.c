// Function: FUN_14032f2a0
// Addr: 14032f2a0
// Size: 102 bytes


int FUN_14032f2a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int local_38 [6];
  
  puVar1 = (undefined8 *)FUN_1402f7e90(param_2,0x20,local_38);
  if (local_38[0] != 0) {
    return local_38[0];
  }
  puVar1[1] = param_3;
  *puVar1 = param_3;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = 2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  return 0;
}

