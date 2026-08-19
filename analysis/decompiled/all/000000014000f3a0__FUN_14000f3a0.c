// Function: FUN_14000f3a0
// Addr: 14000f3a0
// Size: 62 bytes


undefined8 * FUN_14000f3a0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &DAT_14042af60;
  FUN_14028c500();
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,0x60);
    return puVar1;
  }
  return param_1;
}

