// Function: FUN_1402ee7c0
// Addr: 1402ee7c0
// Size: 194 bytes


int FUN_1402ee7c0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(int *)(param_1 + 2) != 0x53564720) {
    return 0x12;
  }
  if (*(int *)(param_1 + 5) == 0) {
    return 0x25;
  }
  uVar6 = *(undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x2c);
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  uVar5 = param_1[7];
  *(undefined8 *)(param_2 + 0x30) = param_1[6];
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x44);
  uVar4 = *(undefined4 *)(param_1 + 9);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  *(undefined4 *)(param_2 + 0x48) = uVar4;
  *(undefined2 *)(param_2 + 0x4c) = *(undefined2 *)((longlong)param_1 + 0x4c);
  *(undefined2 *)(param_2 + 0x4e) = *(undefined2 *)((longlong)param_1 + 0x4e);
  *(undefined2 *)(param_2 + 0x50) = *(undefined2 *)(param_1 + 10);
  uVar2 = *(undefined4 *)(param_1 + 0xb);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x5c);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x54);
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  *(undefined4 *)(param_2 + 0x5c) = uVar3;
  *(undefined4 *)(param_2 + 0x60) = uVar4;
  *(undefined8 *)(param_2 + 100) = *(undefined8 *)((longlong)param_1 + 100);
  uVar6 = FUN_1402f8070(uVar6,uVar1,local_res8);
  *(undefined8 *)(param_2 + 0x20) = uVar6;
  if (local_res8[0] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar6,param_1[4],*(undefined4 *)(param_2 + 0x28));
  }
  return local_res8[0];
}

