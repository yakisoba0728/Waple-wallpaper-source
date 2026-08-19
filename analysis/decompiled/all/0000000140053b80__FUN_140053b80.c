// Function: FUN_140053b80
// Addr: 140053b80
// Size: 53 bytes


void FUN_140053b80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  param_1[1] = "system error";
  *param_1 = &PTR_UNWIND_INFO_140015b39_UnwindCodes_17__UnwindOpCode_1404743e8;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_1400166d0(param_1 + 4,param_3);
}

