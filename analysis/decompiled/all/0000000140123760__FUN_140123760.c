// Function: FUN_140123760
// Addr: 140123760
// Size: 303 bytes


undefined8 * FUN_140123760(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14048a2e0;
  plVar1 = (longlong *)param_1[0x14];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0,0,0);
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
    param_1[0x11] = 0;
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
    param_1[0x12] = 0;
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
    param_1[0x14] = 0;
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    param_1[0x13] = 0;
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
    param_1[0x17] = 0;
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
    param_1[0x15] = 0;
  }
  puVar2 = (undefined8 *)param_1[0x16];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  CoUninitialize();
  *param_1 = &PTR_FUN_140489e48;
  FUN_140016770(param_1 + 8);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xd0);
  }
  return param_1;
}

