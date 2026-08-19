// Function: FUN_1400fdf80
// Addr: 1400fdf80
// Size: 298 bytes


void FUN_1400fdf80(undefined8 *param_1)

{
  FUN_14010a1b0();
  *(undefined8 *)((longlong)param_1 + 0x17c) = 8;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x31) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  param_1[0x32] = 0x3f000000;
  *param_1 = &PTR_UNWIND_INFO_1400fe29a_UnwindCodes_1__OffsetInProlog_140488a40;
  param_1[0x2b] = &PTR_UNWIND_INFO_14010489b_SizeOfProlog_140488ae0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0xf;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0xf;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  func_0x00014028aff0(0x18);
  return;
}

