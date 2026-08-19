// Function: FUN_140053030
// Addr: 140053030
// Size: 32 bytes


undefined8 * FUN_140053030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  param_1[1] = "system error";
  *param_1 = &PTR_UNWIND_INFO_1400138cf_UnwindCodes_54__UnwindOpCode_14042abf8;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}

