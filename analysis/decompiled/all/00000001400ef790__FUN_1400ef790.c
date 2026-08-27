// Function: FUN_1400ef790
// Addr: 1400ef790
// Size: 81 bytes


undefined8 * FUN_1400ef790(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_140487018;
  if (param_1[0x2e] != 0) {
    piVar1 = (int *)(param_1[0x2e] + 0xd4);
    *piVar1 = *piVar1 + -1;
  }
  FUN_1400ec060();
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x178);
  }
  return param_1;
}

