// Function: FUN_1403250e0
// Addr: 1403250e0
// Size: 129 bytes


int FUN_1403250e0(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (param_3[0xc] == 0) {
    uVar2 = param_2 - (int)param_1;
    uVar1 = FUN_1402f7fa0(*param_3,uVar2 + 1,local_res8);
    param_3[0xc] = uVar1;
    if (local_res8[0] == 0) {
      FUN_1404210f0(uVar1,param_1,uVar2);
      *(undefined1 *)((ulonglong)uVar2 + param_3[0xc]) = 0;
      return local_res8[0];
    }
  }
  else {
    local_res8[0] = 0;
  }
  return local_res8[0];
}

