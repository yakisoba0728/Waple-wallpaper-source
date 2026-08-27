// Function: FUN_1400ea6d0
// Addr: 1400ea6d0
// Size: 166 bytes


undefined8 * FUN_1400ea6d0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_140486f38;
  plVar1 = (longlong *)param_1[8];
  for (plVar2 = (longlong *)param_1[7]; plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x10))();
      *plVar2 = 0;
    }
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  FUN_14003df80(param_1 + 7);
  *param_1 = &PTR_FUN_140486f98;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x50);
  }
  return param_1;
}

