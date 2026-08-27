// Function: FUN_1402ee8f0
// Addr: 1402ee8f0
// Size: 160 bytes


int FUN_1402ee8f0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  puVar2 = (undefined8 *)FUN_1402f7e90(*(undefined8 *)*param_1,0x48,local_res8);
  if (local_res8[0] == 0) {
    *puVar2 = param_1[4];
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 5);
    uVar1 = param_1[7];
    *(undefined8 *)((longlong)puVar2 + 0xc) = param_1[6];
    *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x44);
    puVar2[3] = *(undefined8 *)((longlong)param_1 + 0x3c);
    puVar2[4] = uVar1;
    *(undefined2 *)(puVar2 + 5) = *(undefined2 *)((longlong)param_1 + 0x4c);
    *(undefined2 *)((longlong)puVar2 + 0x2a) = *(undefined2 *)((longlong)param_1 + 0x4e);
    *(undefined2 *)((longlong)puVar2 + 0x2c) = *(undefined2 *)(param_1 + 10);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x5c);
    puVar2[6] = *(undefined8 *)((longlong)param_1 + 0x54);
    puVar2[7] = uVar1;
    puVar2[8] = *(undefined8 *)((longlong)param_1 + 100);
    *(undefined4 *)(param_2 + 0x60) = 0x53564720;
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)((longlong)param_1 + 0x2c);
    *(undefined8 **)(param_2 + 0xe8) = puVar2;
  }
  return local_res8[0];
}

