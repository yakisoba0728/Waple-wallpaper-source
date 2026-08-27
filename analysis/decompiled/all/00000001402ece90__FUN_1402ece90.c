// Function: FUN_1402ece90
// Addr: 1402ece90
// Size: 162 bytes


undefined4
FUN_1402ece90(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == 1) {
    uVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return param_2;
    }
    uVar1 = 1;
    uVar3 = 0x21;
    uVar2 = 8;
  }
  FUN_1402ecb40(param_5,param_4,param_2,uVar1,uVar2,uVar3,param_1,0,1);
  return param_2;
}

