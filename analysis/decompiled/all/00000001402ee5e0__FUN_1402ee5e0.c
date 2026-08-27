// Function: FUN_1402ee5e0
// Addr: 1402ee5e0
// Size: 222 bytes


int FUN_1402ee5e0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(int *)(param_2 + 0x60) != 0x53564720) {
    return 0x12;
  }
  puVar2 = *(undefined8 **)(param_2 + 0xe8);
  if ((puVar2 == (undefined8 *)0x0) || (iVar1 = *(int *)(puVar2 + 1), iVar1 == 0)) {
    local_res8[0] = 0x25;
  }
  else {
    uVar7 = FUN_1402f7fa0(*(undefined8 *)*param_1,iVar1,local_res8);
    param_1[4] = uVar7;
    if (local_res8[0] == 0) {
      *(int *)(param_1 + 5) = iVar1;
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x18);
      uVar6 = *(undefined8 *)((longlong)puVar2 + 0x14);
      param_1[6] = *(undefined8 *)((longlong)puVar2 + 0xc);
      param_1[7] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar2 + 0x1c);
      uVar4 = *(undefined4 *)(puVar2 + 4);
      uVar5 = *(undefined4 *)((longlong)puVar2 + 0x24);
      *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(puVar2 + 3);
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
      *(undefined4 *)(param_1 + 9) = uVar5;
      *(undefined2 *)((longlong)param_1 + 0x4c) = *(undefined2 *)(puVar2 + 5);
      *(undefined2 *)((longlong)param_1 + 0x4e) = *(undefined2 *)((longlong)puVar2 + 0x2a);
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)((longlong)puVar2 + 0x2c);
      uVar3 = *(undefined4 *)((longlong)puVar2 + 0x34);
      uVar4 = *(undefined4 *)(puVar2 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar2 + 0x3c);
      *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(puVar2 + 6);
      *(undefined4 *)(param_1 + 0xb) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      *(undefined8 *)((longlong)param_1 + 100) = puVar2[8];
      FUN_1404210f0(uVar7,*puVar2,iVar1);
    }
  }
  return local_res8[0];
}

