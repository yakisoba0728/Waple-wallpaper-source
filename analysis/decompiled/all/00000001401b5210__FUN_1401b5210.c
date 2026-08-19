// Function: FUN_1401b5210
// Addr: 1401b5210
// Size: 43 bytes


undefined8 * FUN_1401b5210(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &DAT_14042ac48;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,0x18);
    return puVar1;
  }
  return param_1;
}

