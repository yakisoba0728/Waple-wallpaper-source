// Function: FUN_1401041d0
// Addr: 1401041d0
// Size: 75 bytes


undefined8
FUN_1401041d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_4 = (undefined8 *)*param_4;
  uVar3 = *param_3;
  uVar1 = *param_2;
  uVar2 = FUN_14028af20(0xeb0);
  uVar3 = FUN_14011eea0(uVar2,uVar1,uVar3,1);
  *param_4 = uVar3;
  return 0;
}

