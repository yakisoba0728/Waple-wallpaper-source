// Function: FUN_14039a060
// Addr: 14039a060
// Size: 33 bytes


undefined8 FUN_14039a060(longlong param_1,uint param_2,undefined8 *param_3,uint *param_4)

{
  if ((param_2 != 0) && (param_2 <= *(uint *)(param_1 + 0x14))) {
    *param_3 = *(undefined8 *)(param_1 + 0x18);
    *param_4 = param_2;
    return 0;
  }
  *param_3 = 0;
  *param_4 = 0;
  return 0;
}

