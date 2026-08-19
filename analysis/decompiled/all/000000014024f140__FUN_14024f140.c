// Function: FUN_14024f140
// Addr: 14024f140
// Size: 12 bytes


undefined8 * FUN_14024f140(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *param_1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = uVar1;
  return param_1;
}

