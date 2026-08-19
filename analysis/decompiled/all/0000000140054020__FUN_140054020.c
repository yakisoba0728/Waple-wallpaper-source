// Function: FUN_140054020
// Addr: 140054020
// Size: 43 bytes


undefined8 * FUN_140054020(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_UNWIND_INFO_140053f43_UnwindCodes_4__UnwindOpCode_1404778c0;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,8);
    return puVar1;
  }
  return param_1;
}

