// Function: FUN_1402930e0
// Addr: 1402930e0
// Size: 71 bytes


undefined8 * FUN_1402930e0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_140426f00;
  func_0x0001402bbaf0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,0x18);
    return puVar1;
  }
  return param_1;
}

