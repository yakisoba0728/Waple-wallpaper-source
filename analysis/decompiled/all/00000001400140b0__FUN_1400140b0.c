// Function: FUN_1400140b0
// Addr: 1400140b0
// Size: 31 bytes


undefined8 * FUN_1400140b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &DAT_14042b6a8;
  if (*(int *)(param_1 + 4) != 0) {
    func_0x0001402bf8e0(param_1[3]);
  }
  func_0x0001402bf8e0(param_1[5]);
  *param_1 = &DAT_14042ac48;
  if ((param_2 & 1) != 0) {
    func_0x00014028b040(param_1,0x60);
  }
  return param_1;
}

