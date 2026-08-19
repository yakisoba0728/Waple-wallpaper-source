// Function: FUN_1402b0210
// Addr: 1402b0210
// Size: 63 bytes


undefined8 * FUN_1402b0210(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = -1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(short *)(lVar1 + lVar2 * 2) != 0);
  FUN_140294e10(param_2);
  return param_2;
}

