// Function: FUN_14026c8b0
// Addr: 14026c8b0
// Size: 90 bytes


void FUN_14026c8b0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_1404922c8;
  plVar1 = *(longlong **)(param_1[0x32] + 0x1830);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  FUN_140177040(param_1[0x32] + 0x1708,param_1,0);
  func_0x00014000dab0(param_1 + 0x26);
  return;
}

