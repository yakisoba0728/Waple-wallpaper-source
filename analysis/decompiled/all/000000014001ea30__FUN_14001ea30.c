// Function: FUN_14001ea30
// Addr: 14001ea30
// Size: 126 bytes


void FUN_14001ea30(undefined8 *param_1)

{
  *param_1 = &PTR_UNWIND_INFO_14001e959_UnwindCodes_1__UnwindOpCode_1404755e0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x28))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  func_0x0001400318b0(param_1 + 0x17);
  func_0x0001400318b0(param_1 + 0x14);
  func_0x0001400318b0(param_1 + 0x11);
  func_0x0001400318b0(param_1 + 0xe);
  func_0x000140031960(param_1 + 0xb);
  func_0x00014000dab0(param_1 + 5);
  return;
}

