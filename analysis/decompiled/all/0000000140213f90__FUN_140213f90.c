// Function: FUN_140213f90
// Addr: 140213f90
// Size: 181 bytes


undefined8 * FUN_140213f90(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_140491128;
  if (param_1[0x1f] != param_1[0x20]) {
    param_1[0x20] = param_1[0x1f];
  }
  plVar1 = *(longlong **)(param_1[0x1c] + 0x128);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  FUN_14000d9e0(param_1 + 0x1f);
  FUN_14000d9e0(param_1 + 0x17);
  FUN_14015a700(param_1 + 0x15);
  FUN_14000d9e0(param_1 + 0xf);
  FUN_14015a780(param_1 + 0xd);
  FUN_1401a3b60(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x110);
  }
  return param_1;
}

