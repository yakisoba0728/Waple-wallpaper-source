// Function: FUN_140015360
// Addr: 140015360
// Size: 30 bytes


undefined8 * FUN_140015360(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar2 = *param_3;
  uVar1 = param_3[1];
  param_1[1] = "system error";
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  *param_1 = &PTR_UNWIND_INFO_140015b39_UnwindCodes_17__UnwindOpCode_1404743e8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 7;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  pcVar3 = "unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    pcVar3 = (char *)param_1[1];
  }
  uVar2 = func_0x000140421ed0(pcVar3);
  func_0x000140017550(param_1 + 0xc,pcVar3,uVar2);
  return param_1;
}

