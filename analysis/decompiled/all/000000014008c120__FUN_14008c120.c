// Function: FUN_14008c120
// Addr: 14008c120
// Size: 43 bytes


undefined8 * FUN_14008c120(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_140485120;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,8);
    return puVar1;
  }
  return param_1;
}

