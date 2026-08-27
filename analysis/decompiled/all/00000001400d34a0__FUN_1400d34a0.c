// Function: FUN_1400d34a0
// Addr: 1400d34a0
// Size: 91 bytes


bool FUN_1400d34a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  
  plVar1 = *(longlong **)(param_1 + 0x60);
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_38);
    return 1 < local_28._4_4_;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(lRam0000000000000000 + 0x50))(0,&local_38);
  }
  return 1 < local_28._4_4_;
}

