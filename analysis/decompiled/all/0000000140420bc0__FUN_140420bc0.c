// Function: FUN_140420bc0
// Addr: 140420bc0
// Size: 330 bytes


undefined4
FUN_140420bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(param_4) {
  case 1:
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 8;
    break;
  case 2:
    uVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
    break;
  case 3:
  case 4:
  case 5:
    uVar2 = FUN_1402ecca0(param_3);
    return uVar2;
  case 6:
    uVar1 = 1;
    uVar3 = 0x21;
    uVar2 = 8;
    break;
  case 7:
    uVar1 = 4;
    uVar3 = 0x22;
    uVar2 = 0x12;
    break;
  default:
    goto switchD_140420beb_caseD_8;
  case 9:
    uVar1 = 3;
    uVar3 = 0x22;
    uVar2 = 0x11;
  }
  FUN_1402ecb40(&DAT_140497d60,0x1d,param_3,uVar1,uVar2,uVar3,param_1,param_2,2);
switchD_140420beb_caseD_8:
  return param_3;
}

