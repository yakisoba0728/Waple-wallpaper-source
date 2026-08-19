// Function: FUN_1400d3a90
// Addr: 1400d3a90
// Size: 43 bytes


undefined8 * FUN_1400d3a90(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_140487000;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,8);
    return puVar1;
  }
  return param_1;
}

