// Function: FUN_140015de0
// Addr: 140015de0
// Size: 1 bytes


undefined8 * FUN_140015de0(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14028f5c0(param_3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = func_0x000140421ed0(uVar1);
  func_0x000140017550(param_2,uVar1,uVar2);
  return param_2;
}

