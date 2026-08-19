// Function: FUN_1400c93f0
// Addr: 1400c93f0
// Size: 23 bytes


undefined4 * FUN_1400c93f0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  if (param_1 != param_2) {
    plVar1 = *(longlong **)(param_1 + 0x12);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 4));
      *(undefined8 *)(param_1 + 0x12) = 0;
    }
    FUN_140037900(param_1 + 4,param_2 + 4);
    plVar1 = *(longlong **)(param_1 + 0x22);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x14));
      *(undefined8 *)(param_1 + 0x22) = 0;
    }
    FUN_140037900(param_1 + 0x14,param_2 + 0x14);
  }
  return param_1;
}

