// Function: FUN_14032ad50
// Addr: 14032ad50
// Size: 78 bytes


undefined8 FUN_14032ad50(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14032adf0();
  if (lVar1 == 0) {
    return 6;
  }
  if (*(char *)(lVar1 + 8) != '\0') {
    *param_3 = 1;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar1 + 0x10);
    return 0;
  }
  *param_3 = 2;
  param_3[2] = *(undefined4 *)(lVar1 + 0x10);
  return 0;
}

