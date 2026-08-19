// Function: FUN_140055090
// Addr: 140055090
// Size: 141 bytes


void FUN_140055090(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_UNWIND_INFO_140054f79_UnwindCodes_1__UnwindOpCode_140477840;
  plVar1 = (longlong *)param_1[0x1f];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x18);
    param_1[0x1f] = 0;
  }
  plVar1 = (longlong *)param_1[0x17];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x10);
    param_1[0x17] = 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    FUN_140056dc0(param_1 + 1);
    *param_1 = &PTR_UNWIND_INFO_140053f43_UnwindCodes_4__UnwindOpCode_1404778c0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400151e0();
}

