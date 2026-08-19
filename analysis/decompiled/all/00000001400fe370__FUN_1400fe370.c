// Function: FUN_1400fe370
// Addr: 1400fe370
// Size: 32 bytes


void FUN_1400fe370(undefined8 *param_1)

{
  *param_1 = &PTR_UNWIND_INFO_1400fe29a_UnwindCodes_1__OffsetInProlog_140488a40;
  param_1[0x2b] = &PTR_UNWIND_INFO_14010489b_SizeOfProlog_140488ae0;
  if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2c] + 0x20))();
    param_1[0x2c] = 0;
  }
  func_0x000140103920(param_1 + 0x60);
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_1 + 0x5c);
}

