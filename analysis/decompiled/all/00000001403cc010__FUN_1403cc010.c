// Function: FUN_1403cc010
// Addr: 1403cc010
// Size: 16 bytes


undefined4 * FUN_1403cc010(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  *param_2 = *param_1;
  *(undefined8 *)(param_2 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = uVar2;
  return param_2;
}

