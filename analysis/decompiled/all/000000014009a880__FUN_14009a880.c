// Function: FUN_14009a880
// Addr: 14009a880
// Size: 405 bytes


undefined8 *
FUN_14009a880(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined8 param_5,
             int param_6,int param_7,int param_8,byte param_9)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  
  puVar4 = (undefined8 *)FUN_14028af20(0x50);
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  local_68 = 0;
  puVar4[2] = 0;
  puVar4[1] = puVar1;
  *puVar4 = &PTR_FUN_140486f38;
  puVar4[3] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  if (param_8 == 0) {
    *(undefined4 *)(puVar4 + 6) = 4;
  }
  else if (param_8 == 1) {
    *(undefined4 *)(puVar4 + 6) = 2;
  }
  else {
    *(undefined4 *)(puVar4 + 6) = 1;
  }
  iVar2 = param_6;
  if (param_6 < 1) {
    iVar2 = param_4;
  }
  *(int *)((longlong)puVar4 + 0x2c) = iVar2;
  local_78 = FUN_1400ea5b0(param_2);
  *(int *)(puVar4 + 5) = local_78;
  local_78 = local_78 * param_4;
  local_74 = (param_9 & 1) + 1;
  *(undefined4 *)((longlong)puVar4 + 0x24) = param_2;
  local_70 = 1;
  local_6c = (param_9 & 1) << 0x10;
  (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,&local_78);
  local_58 = 2;
  uVar3 = 0x2a;
  if (param_7 == 0) {
    uVar3 = 0x39;
  }
  *(undefined4 *)(puVar4 + 4) = uVar3;
  local_50 = 0;
  local_80 = 0;
  local_5c = ((param_9 & 2) != 0) + 1;
  local_60 = param_6 * 4;
  if (param_7 == 0) {
    local_60 = param_6 * 2;
  }
  local_54 = (param_9 & 2) << 0xf;
  local_88 = param_5;
  (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,&local_60,&local_88,puVar4 + 3);
  return puVar4;
}

