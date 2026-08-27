// Function: FUN_140098bb0
// Addr: 140098bb0
// Size: 66 bytes


undefined8 * FUN_140098bb0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_3[7];
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
  return param_2;
}

