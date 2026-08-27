// Function: FUN_140053e40
// Addr: 140053e40
// Size: 259 bytes


undefined8 FUN_140053e40(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  char local_16;
  undefined2 local_15;
  char local_13 [11];
  
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    if (param_2 < 10) {
      local_15._1_1_ = (char)param_2 + '0';
      pcVar2 = (char *)&local_15;
      local_15._0_1_ = '-';
    }
    else {
      pcVar2 = local_13;
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + -2;
        uVar4 = param_2 / 100;
        *(undefined2 *)pcVar2 = *(undefined2 *)(&DAT_140474390 + (ulonglong)(param_2 % 100) * 2);
        param_2 = uVar4;
      } while (9 < uVar4);
      if (uVar4 != 0) {
        pcVar2 = pcVar3 + -3;
        *pcVar2 = (char)uVar4 + '0';
      }
      pcVar2 = pcVar2 + -1;
      *pcVar2 = '-';
    }
  }
  else if (param_2 < 10) {
    local_15._1_1_ = (char)param_2 + '0';
    pcVar2 = (char *)((longlong)&local_15 + 1);
  }
  else {
    pcVar2 = local_13;
    uVar5 = (ulonglong)param_2;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -2;
      uVar1 = uVar5 / 100;
      uVar4 = (uint)uVar1;
      *(undefined2 *)pcVar2 =
           *(undefined2 *)(&DAT_140474390 + (ulonglong)((int)uVar5 + uVar4 * -100) * 2);
      uVar5 = uVar1;
    } while (9 < uVar4);
    if (uVar4 != 0) {
      pcVar2 = pcVar3 + -3;
      *pcVar2 = (char)uVar1 + '0';
    }
  }
  FUN_140053d10(param_1,pcVar2,local_13);
  return param_1;
}

