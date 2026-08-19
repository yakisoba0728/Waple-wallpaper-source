// Function: FUN_1400360b0
// Addr: 1400360b0
// Size: 19 bytes


undefined8 * FUN_1400360b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = func_0x000140421ed0(uVar1);
  func_0x000140017550(param_2,uVar1,uVar2);
  return param_2;
}

