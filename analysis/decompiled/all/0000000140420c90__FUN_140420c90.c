// Function: FUN_140420c90
// Addr: 140420c90
// Size: 160 bytes


undefined4 FUN_140420c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined8 in_R8;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 - 1U < 9) {
    switch(param_4) {
    case 1:
      uVar1 = 0;
      uVar3 = 0;
      uVar2 = 8;
      break;
    case 2:
      uVar2 = FUN_140420daa((ulonglong)(&switchD_140420cbb::switchdataD_140420ddc)[param_4 - 1U] +
                            0x1400000d0,0x1400000d0,in_R8,2,0x22,param_1,param_2,2);
      return uVar2;
    default:
      uVar2 = FUN_1402ecd70(param_3);
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
    case 8:
      goto switchD_140420cbb_caseD_8;
    case 9:
      uVar1 = 3;
      uVar3 = 0x22;
      uVar2 = 0x11;
    }
    FUN_1402ecc10(&DAT_140497e30,0x1d,param_3,uVar1,uVar2,uVar3,param_1,param_2,2);
  }
switchD_140420cbb_caseD_8:
  return param_3;
}

