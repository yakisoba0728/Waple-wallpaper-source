// Function: FUN_140011b70
// Addr: 140011b70
// Size: 69 bytes


undefined8 * FUN_140011b70(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = FUN_1402d6aa0(uVar1);
  FUN_140016170(param_2,uVar1,uVar2);
  return param_2;
}

