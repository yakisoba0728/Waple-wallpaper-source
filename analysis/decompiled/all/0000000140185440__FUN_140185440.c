// Function: FUN_140185440
// Addr: 140185440
// Size: 43 bytes


undefined8 * FUN_140185440(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_PTR_14048ec60;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,8);
    return puVar1;
  }
  return param_1;
}

