// Function: FUN_1400ea100
// Addr: 1400ea100
// Size: 132 bytes


undefined8 FUN_1400ea100(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_16;
  undefined2 local_15;
  char local_13 [11];
  
  if (param_2 < 10) {
    local_15._1_1_ = (char)param_2 + '0';
    pcVar5 = (char *)((longlong)&local_15 + 1);
  }
  else {
    uVar3 = (ulonglong)param_2;
    pcVar5 = local_13;
    do {
      pcVar4 = pcVar5;
      pcVar5 = pcVar4 + -2;
      uVar1 = uVar3 / 100;
      uVar2 = (uint)uVar1;
      *(undefined2 *)pcVar5 =
           *(undefined2 *)(&DAT_140474390 + (ulonglong)((int)uVar3 + uVar2 * -100) * 2);
      uVar3 = uVar1;
    } while (9 < uVar2);
    if (uVar2 != 0) {
      pcVar5 = pcVar4 + -3;
      *pcVar5 = (char)uVar1 + '0';
    }
  }
  FUN_140053d10(param_1,pcVar5,local_13);
  return param_1;
}

