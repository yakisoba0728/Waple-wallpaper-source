// Function: FUN_1400cb360
// Addr: 1400cb360
// Size: 75 bytes


undefined8 * FUN_1400cb360(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_DAT_140486080;
  if ((*(char *)((longlong)param_1 + 0xc1) != '\0') && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
    FUN_1402922e0(param_1 + 4);
  }
  FUN_140292ec0(param_1 + 2);
  if ((param_2 & 1) != 0) {
    func_0x00014028b040(param_1,0xd0);
  }
  return param_1;
}

