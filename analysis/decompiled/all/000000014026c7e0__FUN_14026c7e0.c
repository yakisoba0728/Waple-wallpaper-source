// Function: FUN_14026c7e0
// Addr: 14026c7e0
// Size: 197 bytes


undefined8 * FUN_14026c7e0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_1404921f8;
  plVar1 = *(longlong **)(param_1[0x32] + 0x1830);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  FUN_140176f70(param_1[0x32] + 0x1708,param_1,0);
  FUN_14000d9e0(param_1 + 0x26);
  FUN_140179790(param_1 + 0x22);
  FUN_140017240(param_1 + 0x1b);
  FUN_14000d9e0(param_1 + 0x14);
  FUN_14015a700(param_1 + 0x12);
  FUN_14000d9e0(param_1 + 0xc);
  FUN_14015a780(param_1 + 10);
  FUN_1401a3b60(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x198);
  }
  return param_1;
}

