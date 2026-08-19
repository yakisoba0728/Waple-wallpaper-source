// Function: FUN_14013bab0
// Addr: 14013bab0
// Size: 54 bytes


undefined8 * FUN_14013bab0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_UNWIND_INFO_14013cf27_UnwindCodes_18__UnwindOpCode_14048b070;
  param_1[1] = &PTR_DAT_14048b1f8;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,0x38);
    return puVar1;
  }
  return param_1;
}

