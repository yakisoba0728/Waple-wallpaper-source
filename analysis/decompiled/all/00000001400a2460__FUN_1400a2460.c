// Function: FUN_1400a2460
// Addr: 1400a2460
// Size: 54 bytes


ulonglong FUN_1400a2460(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong param_5,uint param_6)

{
  param_2 = param_2 / param_6;
  if (param_5 < param_2) {
    param_2 = param_5;
  }
  FUN_1404217a0(param_1,0,param_6 * param_2);
  return param_2;
}

