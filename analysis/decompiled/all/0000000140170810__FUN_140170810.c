// Function: FUN_140170810
// Addr: 140170810
// Size: 43 bytes


undefined8 * FUN_140170810(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_UNWIND_INFO_1400fde23_UnwindCodes_28__UnwindOpCode_140488af8;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,8);
    return puVar1;
  }
  return param_1;
}

