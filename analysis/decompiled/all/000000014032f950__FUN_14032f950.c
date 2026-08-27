// Function: FUN_14032f950
// Addr: 14032f950
// Size: 194 bytes


int FUN_14032f950(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int local_res8 [8];
  
  param_1[6] = param_3;
  uVar2 = FUN_1402f80b0(param_3,8,0,param_2,0,local_res8);
  param_1[4] = uVar2;
  if (local_res8[0] == 0) {
    uVar2 = FUN_1402f80b0(param_3,4,0,param_2,0,local_res8);
    param_1[5] = uVar2;
    if (local_res8[0] == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_1 + 3) = 0xdeadbeef;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      puVar1 = PTR_LAB_1404412f0;
      param_1[7] = PTR_FUN_1404412e8;
      param_1[8] = puVar1;
      puVar1 = PTR_FUN_140441300;
      param_1[9] = PTR_FUN_1404412f8;
      param_1[10] = puVar1;
      return 0;
    }
  }
  FUN_1402f7f90(param_3,param_1[4]);
  param_1[4] = 0;
  return local_res8[0];
}

