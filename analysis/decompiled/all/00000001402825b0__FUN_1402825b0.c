// Function: FUN_1402825b0
// Addr: 1402825b0
// Size: 85 bytes


undefined8 * FUN_1402825b0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if ((longlong *)*param_1 == (longlong *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
    }
    *param_3 = uVar1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

