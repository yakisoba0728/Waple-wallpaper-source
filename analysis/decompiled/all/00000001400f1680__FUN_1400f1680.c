// Function: FUN_1400f1680
// Addr: 1400f1680
// Size: 43 bytes


undefined8 * FUN_1400f1680(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_140487448;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,8);
    return puVar1;
  }
  return param_1;
}

