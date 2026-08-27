// Function: FUN_1401dc0b0
// Addr: 1401dc0b0
// Size: 110 bytes


undefined4 *
FUN_1401dc0b0(undefined4 *param_1,code *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (*param_2)(param_3[2],param_4[2]);
  uVar2 = (*param_2)(param_3[1],param_4[1]);
  uVar3 = (*param_2)(*param_3,*param_4);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  *param_1 = uVar3;
  return param_1;
}

