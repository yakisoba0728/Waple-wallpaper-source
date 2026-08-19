// Function: FUN_1402926c0
// Addr: 1402926c0
// Size: 87 bytes


undefined8 * FUN_1402926c0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_140426f00;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1402bba50(param_2 + 8);
  *param_1 = &PTR_UNWIND_INFO_1400138cf_UnwindCodes_54__UnwindOpCode_14042abe0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = &PTR_UNWIND_INFO_1400138cf_UnwindCodes_54__UnwindOpCode_14042af48;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}

