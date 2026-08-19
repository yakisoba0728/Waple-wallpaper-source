// Function: FUN_140124770
// Addr: 140124770
// Size: 103 bytes


void FUN_140124770(undefined8 *param_1)

{
  *param_1 = &PTR_UNWIND_INFO_140124651_UnwindCodes_37__UnwindOpCode_14048a270;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_1 + 7);
}

