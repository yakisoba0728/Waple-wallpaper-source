// Function: FUN_14009a780
// Addr: 14009a780
// Size: 256 bytes


undefined8 *
FUN_14009a780(longlong param_1,undefined4 param_2,longlong param_3,int param_4,int param_5,
             byte param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong local_58;
  longlong *local_50;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  longlong *local_38;
  
  puVar2 = (undefined8 *)FUN_14028af20(0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  local_50 = (longlong *)0x0;
  puVar2[2] = 0;
  puVar2[1] = uVar1;
  *puVar2 = &PTR_FUN_140486f38;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  if (param_5 == 0) {
    *(undefined4 *)(puVar2 + 6) = 4;
  }
  else if (param_5 == 1) {
    *(undefined4 *)(puVar2 + 6) = 2;
  }
  else {
    *(undefined4 *)(puVar2 + 6) = 1;
  }
  *(int *)((longlong)puVar2 + 0x2c) = param_4;
  local_48 = FUN_1400ea5b0(param_2);
  *(int *)(puVar2 + 5) = local_48;
  local_48 = local_48 * param_4;
  local_3c = (param_6 & 1) << 0x10;
  local_44 = (param_6 & 1) + 1;
  *(undefined4 *)((longlong)puVar2 + 0x24) = param_2;
  plVar3 = &local_58;
  if (param_3 == 0) {
    plVar3 = local_50;
  }
  local_40 = 1;
  local_58 = param_3;
  local_38 = local_50;
  (**(code **)(**(longlong **)puVar2[1] + 0x18))(*(longlong **)puVar2[1],&local_48,plVar3);
  return puVar2;
}

