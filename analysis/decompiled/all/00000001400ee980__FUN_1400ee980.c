// Function: FUN_1400ee980
// Addr: 1400ee980
// Size: 95 bytes


void FUN_1400ee980(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8);
  lVar2 = *plVar1;
  if ((param_2 & 0x40) == 0) {
    (**(code **)(lVar2 + 0x40))();
  }
  else {
    (**(code **)(lVar2 + 200))(plVar1,param_2 & 0xf,1,local_res8);
  }
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,0);
  }
  return;
}

