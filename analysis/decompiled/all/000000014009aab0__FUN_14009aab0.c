// Function: FUN_14009aab0
// Addr: 14009aab0
// Size: 456 bytes


undefined8 *
FUN_14009aab0(longlong param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5,
             undefined8 param_6,uint param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_54;
  
  puVar3 = (undefined8 *)FUN_14028af20(0x170);
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  FUN_14015eb90(puVar3,*(undefined8 *)(param_1 + 8));
  puVar3[0x27] = puVar1;
  *puVar3 = &PTR_FUN_140487088;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2d] = 0;
  sVar4 = strlen(param_2);
  FUN_14000f880(puVar3 + 0xf,param_2,sVar4);
  *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 2;
  *(uint *)((longlong)puVar3 + 0x1c) = param_7;
  *(undefined4 *)(puVar3 + 3) = param_3;
  *(undefined4 *)(puVar3 + 6) = param_5;
  *(undefined4 *)((longlong)puVar3 + 0x24) = param_5;
  *(int *)((longlong)puVar3 + 0x2c) = param_4;
  *(int *)(puVar3 + 4) = param_4;
  uVar2 = FUN_1400d2a20(param_3);
  *(undefined4 *)(puVar3 + 0x2c) = uVar2;
  uVar5 = FUN_140099980(puVar1[3],param_7,1);
  uVar2 = *(undefined4 *)(puVar3 + 0x2c);
  puVar3[0x2b] = uVar5;
  local_b0 = FUN_1400eb090(uVar2);
  local_64 = 1;
  local_54 = 0;
  local_5c = 1;
  local_58 = 8;
  local_6c = 1;
  uVar6 = 0;
  if ((param_7 & 0x30000000) != 0) {
    local_5c = 2;
    if ((param_7 >> 0x1d & 1) != 0) {
      uVar6 = 0x10000;
    }
    local_54 = (ulonglong)uVar6;
  }
  local_b0 = local_b0 * param_4;
  local_70 = 1;
  local_74 = param_5;
  local_ac = 0;
  local_b8 = param_6;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_78 = param_4;
  local_68 = uVar2;
  (**(code **)(*(longlong *)*puVar1 + 0x28))((longlong *)*puVar1,&local_78,&local_b8,&local_a8);
  local_90 = *(undefined4 *)(puVar3 + 0x2c);
  local_8c = 4;
  local_84 = 1;
  (**(code **)(*(longlong *)*puVar1 + 0x38))((longlong *)*puVar1,local_a8,&local_90,&local_98);
  FUN_1400ef8d0(puVar3 + 0x28,&local_a8);
  return puVar3;
}

