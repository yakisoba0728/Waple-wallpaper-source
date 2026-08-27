// Function: FUN_1400eb440
// Addr: 1400eb440
// Size: 299 bytes


undefined8 *
FUN_1400eb440(undefined8 *param_1,char *param_2,undefined8 param_3,undefined4 param_4,uint param_5,
             undefined4 param_6,undefined8 param_7,undefined8 *param_8)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 auStack_50 [2];
  
  FUN_14015eb90(param_1,param_7);
  *param_1 = &PTR_FUN_140487088;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  param_1[0x2d] = 0;
  *(uint *)((longlong)param_1 + 0x1c) = param_5;
  param_1[0x27] = param_8;
  sVar1 = strlen(param_2);
  FUN_14000f880(param_1 + 0xf,param_2,sVar1);
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 3;
  uVar2 = FUN_140099980(param_8[3],param_5,1);
  param_1[0x2b] = uVar2;
  *(undefined4 *)(param_1 + 0x1a) = param_6;
  local_74 = (param_5 & 0x2000000 | 0x4000000) >> 0x18;
  local_6c = param_6;
  local_70 = 0;
  local_58 = 0;
  auStack_50[0] = 0;
  local_78 = param_4;
  local_60 = param_3;
  if ((param_5 & 0x30000000) == 0) {
    (**(code **)(*(longlong *)*param_8 + 0x38))((longlong *)*param_8,param_3,&local_78,auStack_50);
  }
  FUN_1400ef8d0(param_1 + 0x28,&local_60);
  return param_1;
}

