// Function: FUN_1400ef860
// Addr: 1400ef860
// Size: 81 bytes


undefined8 * FUN_1400ef860(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_PTR_1404870e8;
  if (param_1[0x2e] != 0) {
    piVar1 = (int *)(param_1[0x2e] + 0xd4);
    *piVar1 = *piVar1 + -1;
  }
  func_0x0001400ec130();
  if ((param_2 & 1) != 0) {
    puVar2 = (undefined8 *)func_0x00014028b040(param_1,0x178);
    return puVar2;
  }
  return param_1;
}

