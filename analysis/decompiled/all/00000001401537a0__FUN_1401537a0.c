// Function: FUN_1401537a0
// Addr: 1401537a0
// Size: 43 bytes


undefined8 * FUN_1401537a0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &DAT_14048b820;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,0x18);
    return puVar1;
  }
  return param_1;
}

