// Function: FUN_140098f70
// Addr: 140098f70
// Size: 108 bytes


void FUN_140098f70(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  param_1[2] = 0;
  *param_1 = &PTR_UNWIND_INFO_140098fdf_SizeOfProlog_140485c60;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  func_0x00014028aff0(0x20);
  return;
}

