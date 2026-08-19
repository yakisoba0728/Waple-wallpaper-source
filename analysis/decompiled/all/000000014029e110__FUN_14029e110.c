// Function: FUN_14029e110
// Addr: 14029e110
// Size: 25 bytes


undefined8 * FUN_14029e110(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &DAT_14042b9c0;
  func_0x0001402bf8e0(param_1[2]);
  func_0x0001402bf8e0(param_1[4]);
  func_0x0001402bf8e0(param_1[5]);
  func_0x0001402bf8e0(param_1[6]);
  *param_1 = &DAT_14042ac48;
  if ((param_2 & 1) != 0) {
    func_0x00014028b040(param_1,0x78);
  }
  return param_1;
}

