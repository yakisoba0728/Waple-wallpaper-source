// Function: FUN_140124b50
// Addr: 140124b50
// Size: 190 bytes


undefined8 FUN_140124b50(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int local_res8;
  int local_resc;
  undefined1 local_res20 [8];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_res8,local_res20);
  local_18 = (float)*param_2 / (float)local_res8;
  local_14 = (float)param_2[1] / (float)local_resc;
  local_10 = (float)param_2[2] / (float)local_res8;
  local_c = (float)param_2[3] / (float)local_resc;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                    (*(longlong **)(param_1 + 0x10),&local_18,param_3);
  return uVar2;
}

