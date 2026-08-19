// Function: FUN_140289d40
// Addr: 140289d40
// Size: 43 bytes


undefined8 * FUN_140289d40(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_140492528;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,0x30);
    return puVar1;
  }
  return param_1;
}

