// Function: FUN_1402afc60
// Addr: 1402afc60
// Size: 2 bytes


undefined8 * FUN_1402afc60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = -1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  func_0x000140017550(param_2);
  return param_2;
}

