// Function: FUN_1400d32f0
// Addr: 1400d32f0
// Size: 25 bytes


void FUN_1400d32f0(undefined8 *param_1)

{
  *param_1 = &PTR_UNWIND_INFO_1400d3219_UnwindCodes_1__UnwindOpCode_140486838;
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
    param_1[10] = 0;
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
    param_1[9] = 0;
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
    param_1[0xd] = 0;
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
    param_1[0xc] = 0;
  }
  (**(code **)(**(longlong **)(param_1[1] + 0x1518) + 0x78))
            (*(longlong **)(param_1[1] + 0x1518),param_1);
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_1 + 0xe);
}

