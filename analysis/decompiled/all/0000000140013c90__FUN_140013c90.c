// Function: FUN_140013c90
// Addr: 140013c90
// Size: 19 bytes


undefined8 * FUN_140013c90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &DAT_14042aee8;
  if (*(int *)(param_1 + 4) < 1) {
    if (*(int *)(param_1 + 4) < 0) {
      func_0x00014028b040(param_1[3]);
    }
  }
  else {
    func_0x0001402bf8e0(param_1[3]);
  }
  func_0x0001402bf8e0(param_1[5]);
  *param_1 = &DAT_14042ac48;
  if ((param_2 & 1) != 0) {
    func_0x00014028b040(param_1,0x30);
  }
  return param_1;
}

