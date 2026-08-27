// Function: FUN_140015b40
// Addr: 140015b40
// Size: 32 bytes


undefined8 * FUN_140015b40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  param_1[1] = "system error";
  *param_1 = std::_System_error::vftable;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}

