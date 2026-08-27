// Function: FUN_1400e1320
// Addr: 1400e1320
// Size: 161 bytes


undefined8 *
FUN_1400e1320(undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4,char *param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_5 == "\n") {
    uVar1 = thunk_FUN_14028cf70(param_2,param_3,0xd);
    *param_1 = uVar1;
    return param_1;
  }
  if (0xf < (longlong)param_3 - (longlong)param_2) {
    uVar1 = FUN_14028ed40(param_2,param_3,&DAT_140486ef0,param_5);
    *param_1 = uVar1;
    return param_1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    if (param_5 != "\r\n") {
      pcVar2 = "\r\n";
      do {
        if (*param_2 == *pcVar2) goto LAB_1400e13b5;
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 != param_5);
    }
  }
LAB_1400e13b5:
  *param_1 = param_2;
  return param_1;
}

